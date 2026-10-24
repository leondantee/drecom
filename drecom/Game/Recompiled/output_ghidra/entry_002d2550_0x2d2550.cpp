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

// Function: entry_002d2550
// Address: 0x2d2550 - 0x2d2570
void entry_002d2550_0x2d2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2550_0x2d2550");
#endif

    ctx->pc = 0x2d2550u;

    // 0x2d2550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2554: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2558: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d255c: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x2d255cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x2d2560: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2564: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2568: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2568u;
    SET_GPR_U32(ctx, 31, 0x2D2570u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2568u, 0x2D2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2570u;
}
