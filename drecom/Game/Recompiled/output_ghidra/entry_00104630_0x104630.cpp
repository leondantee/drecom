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

// Function: entry_00104630
// Address: 0x104630 - 0x104638
void entry_00104630_0x104630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104630_0x104630");
#endif

    ctx->pc = 0x104630u;

    // 0x104630: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104634: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x104634u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C10u));
    ctx->pc = 0x104638u;
}
