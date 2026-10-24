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

// Function: entry_00375bb0
// Address: 0x375bb0 - 0x375c58
void entry_00375bb0_0x375bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375bb0_0x375bb0");
#endif

    switch (ctx->pc) {
        case 0x375bc0u: goto label_375bc0;
        case 0x375c08u: goto label_375c08;
        case 0x375c2cu: goto label_375c2c;
        case 0x375c38u: goto label_375c38;
        default: break;
    }

    ctx->pc = 0x375bb0u;

    // 0x375bb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375BB8u;
    SET_GPR_U32(ctx, 31, 0x375BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375BB8u, 0x375BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BC0u;
label_375bc0:
    // 0x375bc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bc4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x375bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375bc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x375bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x375bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375bd0: 0x0  nop
    ctx->pc = 0x375bd0u;
    // NOP
    // 0x375bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375bd8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x375bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x375bdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375be0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x375be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375be4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375be8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375bec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x375becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x375bf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x375bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375bf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375bf8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375bfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375C00u;
    SET_GPR_U32(ctx, 31, 0x375C08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375C00u, 0x375C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C08u;
label_375c08:
    // 0x375c08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375c10: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x375c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375c14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c18: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375c1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375c24: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375C24u;
    SET_GPR_U32(ctx, 31, 0x375C2Cu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375C24u, 0x375C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C2Cu;
label_375c2c:
    // 0x375c2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c30: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x375C30u;
    SET_GPR_U32(ctx, 31, 0x375C38u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x375C30u, 0x375C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375C38u;
label_375c38:
    // 0x375c38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c3c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x375c40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x375C40u;
    {
        const bool branch_taken_0x375c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375c40) {
            ctx->pc = 0x375C58u;
            return;
        }
    }
    ctx->pc = 0x375C48u;
    // 0x375c48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375c4c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x375c4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x375c50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x375c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x375c54: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x375c54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x375c58u;
}
