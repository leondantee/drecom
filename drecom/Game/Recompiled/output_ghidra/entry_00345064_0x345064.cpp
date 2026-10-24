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

// Function: entry_00345064
// Address: 0x345064 - 0x3450ac
void entry_00345064_0x345064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345064_0x345064");
#endif

    switch (ctx->pc) {
        case 0x345090u: goto label_345090;
        default: break;
    }

    ctx->pc = 0x345064u;

    // 0x345064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345068: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34506c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34506cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x345070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345074: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345078: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x345078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34507c: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x34507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x345080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345088: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345088u;
    SET_GPR_U32(ctx, 31, 0x345090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345088u, 0x345090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345090u;
label_345090:
    // 0x345090: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345094: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345098: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34509c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3450a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3450a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3450a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3450a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3450a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3450a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x3450acu;
}
