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

// Function: entry_0011d070
// Address: 0x11d070 - 0x11d080
void entry_0011d070_0x11d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d070_0x11d070");
#endif

    ctx->pc = 0x11d070u;

    // 0x11d070: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x11d070u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11d074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11d078: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d078u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d07c: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x11d07cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->pc = 0x11d080u;
}
