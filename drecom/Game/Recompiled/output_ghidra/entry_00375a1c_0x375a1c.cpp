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

// Function: entry_00375a1c
// Address: 0x375a1c - 0x375a6c
void entry_00375a1c_0x375a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375a1c_0x375a1c");
#endif

    switch (ctx->pc) {
        case 0x375a48u: goto label_375a48;
        case 0x375a50u: goto label_375a50;
        default: break;
    }

    ctx->pc = 0x375a1cu;

    // 0x375a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375a20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a24: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375a24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375a34: 0x3406b403  ori         $a2, $zero, 0xB403
    ctx->pc = 0x375a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46083);
    // 0x375a38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375a3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375a40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375A40u;
    SET_GPR_U32(ctx, 31, 0x375A48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375A40u, 0x375A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A48u;
label_375a48:
    // 0x375a48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375A48u;
    SET_GPR_U32(ctx, 31, 0x375A50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375A48u, 0x375A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A50u;
label_375a50:
    // 0x375a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x375a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x375a54: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x375a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x375a58: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x375a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x375a5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x375a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x375a60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x375a60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x375a64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375a68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x375a68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x375a6cu;
}
