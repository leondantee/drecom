#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011da84
// Address: 0x11da84 - 0x11da88
void entry_0011da84_0x11da84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da84_0x11da84");
#endif

    ctx->pc = 0x11da84u;

    // 0x11da84: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x11da84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    ctx->pc = 0x11da88u;
}
