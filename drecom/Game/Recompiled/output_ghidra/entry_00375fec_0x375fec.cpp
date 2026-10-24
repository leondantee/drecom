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

// Function: entry_00375fec
// Address: 0x375fec - 0x37603c
void entry_00375fec_0x375fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375fec_0x375fec");
#endif

    switch (ctx->pc) {
        case 0x376018u: goto label_376018;
        case 0x376020u: goto label_376020;
        default: break;
    }

    ctx->pc = 0x375fecu;

    // 0x375fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375ff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ff4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375ff8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ffc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376000: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376004: 0x3406b403  ori         $a2, $zero, 0xB403
    ctx->pc = 0x376004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46083);
    // 0x376008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37600c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37600cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376010: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376010u;
    SET_GPR_U32(ctx, 31, 0x376018u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376010u, 0x376018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376018u;
label_376018:
    // 0x376018: 0xc067694  jal         func_19DA50
    ctx->pc = 0x376018u;
    SET_GPR_U32(ctx, 31, 0x376020u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x376018u, 0x376020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376020u;
label_376020:
    // 0x376020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376024: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x376024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x376028: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x376028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x37602c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x376030: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x376030u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x376034: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376038: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x376038u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x37603cu;
}
