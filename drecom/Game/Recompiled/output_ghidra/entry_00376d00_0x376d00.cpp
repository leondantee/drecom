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

// Function: entry_00376d00
// Address: 0x376d00 - 0x376d2c
void entry_00376d00_0x376d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376d00_0x376d00");
#endif

    ctx->pc = 0x376d00u;

    // 0x376d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x376d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376d0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x376d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376d18: 0x24060805  addiu       $a2, $zero, 0x805
    ctx->pc = 0x376d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x376d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376D24u;
    SET_GPR_U32(ctx, 31, 0x376D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376D24u, 0x376D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D2Cu;
}
