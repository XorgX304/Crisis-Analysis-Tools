/*
 *   ___ ___               .__
 *  /   |   \_____    _____|  |__
 * /    ~    \__  \  /  ___/  |  \
 * \    Y    // __ \_\___ \|   Y  \
 *  \___|_  /(____  /____  >___|  /
 *        \/      \/     \/     \/
 *   _________            ___.          .__
 *  /   _____/__.__. _____\_ |__   ____ |  |   ______
 *  \_____  <   |  |/     \| __ \ /  _ \|  |  /  ___/
 *  /        \___  |  Y Y  \ \_\ (  <_> )  |__\___ \
 * /_______  / ____|__|_|  /___  /\____/|____/____  >
 *         \/\/          \/    \/                 \/
 *
 * (c) 2012, 2013, 2014 fG! - reverser@put.as - http://reverse.put.as
 *
 * -> You are free to use this code as long as you keep the original copyright <-
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * structures.h
 *
 */

#ifndef hash_symbols_logging_h
#define hash_symbols_logging_h

#if DEBUG == 0
#define DEBUG_MSG(fmt, ...) do {} while (0)
#else
#define DEBUG_MSG(fmt, ...) printf("[DEBUG] " fmt " (%s, %d)\n", ## __VA_ARGS__, __func__, __LINE__)
#endif

#define ERROR_MSG(fmt, ...) fprintf(stderr, "[ERROR] " fmt " (%s, %d)\n", ## __VA_ARGS__, __func__, __LINE__)

#endif
