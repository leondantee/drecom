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

// Function: entry_00217870
// Address: 0x217870 - 0x21787c
void entry_00217870_0x217870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217870_0x217870");
#endif

    ctx->pc = 0x217870u;

    // 0x217870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217874: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x217874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217878: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x217878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x21787cu;
}
