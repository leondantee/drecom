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

// Function: entry_00375e2c
// Address: 0x375e2c - 0x375f1c
void entry_00375e2c_0x375e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375e2c_0x375e2c");
#endif

    switch (ctx->pc) {
        case 0x375e3cu: goto label_375e3c;
        case 0x375e84u: goto label_375e84;
        case 0x375ea8u: goto label_375ea8;
        case 0x375eb4u: goto label_375eb4;
        case 0x375ef8u: goto label_375ef8;
        case 0x375f00u: goto label_375f00;
        default: break;
    }

    ctx->pc = 0x375e2cu;

    // 0x375e2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375e34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375E34u;
    SET_GPR_U32(ctx, 31, 0x375E3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375E34u, 0x375E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E3Cu;
label_375e3c:
    // 0x375e3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e40: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x375e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375e44: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x375e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x375e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e4c: 0x0  nop
    ctx->pc = 0x375e4cu;
    // NOP
    // 0x375e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375e54: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x375e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x375e58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e5c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375e68: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x375e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x375e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x375e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e74: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375e78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e7c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375E7Cu;
    SET_GPR_U32(ctx, 31, 0x375E84u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375E7Cu, 0x375E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E84u;
label_375e84:
    // 0x375e84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x375e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x375e8c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x375e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375e90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e94: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375e98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375e9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375ea0: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375EA0u;
    SET_GPR_U32(ctx, 31, 0x375EA8u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375EA0u, 0x375EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EA8u;
label_375ea8:
    // 0x375ea8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375eac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x375EACu;
    SET_GPR_U32(ctx, 31, 0x375EB4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x375EACu, 0x375EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EB4u;
label_375eb4:
    // 0x375eb4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375eb8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x375eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x375ebc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x375ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x375ec0: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x375ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x375ec4: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x375EC4u;
    {
        const bool branch_taken_0x375ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x375ec4) {
            ctx->pc = 0x375F1Cu;
            return;
        }
    }
    ctx->pc = 0x375ECCu;
    // 0x375ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375ed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ed4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375ed8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375edc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ee0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375ee4: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x375ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x375ee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375eec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375ef0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375EF0u;
    SET_GPR_U32(ctx, 31, 0x375EF8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375EF0u, 0x375EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EF8u;
label_375ef8:
    // 0x375ef8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375EF8u;
    SET_GPR_U32(ctx, 31, 0x375F00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375EF8u, 0x375F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F00u;
label_375f00:
    // 0x375f00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x375f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x375f04: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x375f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x375f08: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x375f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x375f0c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x375f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375f10: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x375f10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x375f14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375f18: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x375f18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x375f1cu;
}
