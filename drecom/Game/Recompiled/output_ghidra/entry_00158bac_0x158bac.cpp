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

// Function: entry_00158bac
// Address: 0x158bac - 0x158bb8
void entry_00158bac_0x158bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158bac_0x158bac");
#endif

    ctx->pc = 0x158bacu;

    // 0x158bac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158bb0: 0x8c31f840  lw          $s1, -0x7C0($at)
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158bb4: 0x0  nop
    ctx->pc = 0x158bb4u;
    // NOP
    ctx->pc = 0x158bb8u;
}
