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

// Function: entry_0010f580
// Address: 0x10f580 - 0x10f588
void entry_0010f580_0x10f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f580_0x10f580");
#endif

    ctx->pc = 0x10f580u;

    // 0x10f580: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10f584: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x10f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->pc = 0x10f588u;
}
