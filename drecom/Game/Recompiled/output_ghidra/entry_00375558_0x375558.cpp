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

// Function: entry_00375558
// Address: 0x375558 - 0x3755f8
void entry_00375558_0x375558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375558_0x375558");
#endif

    switch (ctx->pc) {
        case 0x375568u: goto label_375568;
        case 0x375574u: goto label_375574;
        case 0x375584u: goto label_375584;
        case 0x375590u: goto label_375590;
        case 0x3755d4u: goto label_3755d4;
        case 0x3755dcu: goto label_3755dc;
        default: break;
    }

    ctx->pc = 0x375558u;

    // 0x375558: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37555c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37555cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375560: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375560u;
    SET_GPR_U32(ctx, 31, 0x375568u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375560u, 0x375568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375568u;
label_375568:
    // 0x375568: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37556c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x37556Cu;
    SET_GPR_U32(ctx, 31, 0x375574u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x37556Cu, 0x375574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375574u;
label_375574:
    // 0x375574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375578: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37557c: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x37557Cu;
    SET_GPR_U32(ctx, 31, 0x375584u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x37557Cu, 0x375584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375584u;
label_375584:
    // 0x375584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375588: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x375588u;
    SET_GPR_U32(ctx, 31, 0x375590u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x375588u, 0x375590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375590u;
label_375590:
    // 0x375590: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375594: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x375594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x375598: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x375598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37559c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x37559cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3755a0: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3755A0u;
    {
        const bool branch_taken_0x3755a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3755a0) {
            ctx->pc = 0x3755F8u;
            return;
        }
    }
    ctx->pc = 0x3755A8u;
    // 0x3755a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3755a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3755ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3755acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755b0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3755b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3755b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3755b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3755b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3755bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3755c0: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x3755c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x3755c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3755c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3755c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3755c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3755cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3755CCu;
    SET_GPR_U32(ctx, 31, 0x3755D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3755CCu, 0x3755D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755D4u;
label_3755d4:
    // 0x3755d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3755D4u;
    SET_GPR_U32(ctx, 31, 0x3755DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3755D4u, 0x3755DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755DCu;
label_3755dc:
    // 0x3755dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3755dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3755e0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3755e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3755e4: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3755e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3755e8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3755e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3755ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3755ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3755f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755f4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3755f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3755f8u;
}
