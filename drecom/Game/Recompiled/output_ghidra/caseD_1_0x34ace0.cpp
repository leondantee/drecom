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

// Function: caseD_1
// Address: 0x34ace0 - 0x34ae34
void caseD_1_0x34ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x34ace0");
#endif

    switch (ctx->pc) {
        case 0x34acf0u: goto label_34acf0;
        case 0x34acfcu: goto label_34acfc;
        case 0x34ad0cu: goto label_34ad0c;
        case 0x34ad18u: goto label_34ad18;
        case 0x34ad54u: goto label_34ad54;
        case 0x34ad78u: goto label_34ad78;
        case 0x34adc8u: goto label_34adc8;
        case 0x34ade4u: goto label_34ade4;
        case 0x34ae14u: goto label_34ae14;
        default: break;
    }

    ctx->pc = 0x34ace0u;

    // 0x34ace0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ace4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ace4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ace8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34ACE8u;
    SET_GPR_U32(ctx, 31, 0x34ACF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34ACE8u, 0x34ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACF0u;
label_34acf0:
    // 0x34acf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acf4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34ACF4u;
    SET_GPR_U32(ctx, 31, 0x34ACFCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34ACF4u, 0x34ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACFCu;
label_34acfc:
    // 0x34acfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ad00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ad04: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AD04u;
    SET_GPR_U32(ctx, 31, 0x34AD0Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AD04u, 0x34AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD0Cu;
label_34ad0c:
    // 0x34ad0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AD10u;
    SET_GPR_U32(ctx, 31, 0x34AD18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AD10u, 0x34AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD18u;
label_34ad18:
    // 0x34ad18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad1c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34ad1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34ad20: 0x1060018a  beqz        $v1, . + 4 + (0x18A << 2)
    ctx->pc = 0x34AD20u;
    {
        const bool branch_taken_0x34ad20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ad20) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34AD28u;
    // 0x34ad28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ad2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad30: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ad30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ad34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ad40: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x34ad40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x34ad44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ad44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ad48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ad48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ad4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AD4Cu;
    SET_GPR_U32(ctx, 31, 0x34AD54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AD4Cu, 0x34AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD54u;
label_34ad54:
    // 0x34ad54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x34ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x34ad60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34ad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34ad64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ad64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ad68: 0x0  nop
    ctx->pc = 0x34ad68u;
    // NOP
    // 0x34ad6c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x34ad6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ad70: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34AD70u;
    SET_GPR_U32(ctx, 31, 0x34AD78u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34AD70u, 0x34AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD78u;
label_34ad78:
    // 0x34ad78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad7c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34ad80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ad88: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad90: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ad94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34ad94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ad98: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34ad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34ad9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ada0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ada4: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x34ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x34ada8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x34ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x34adac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34adacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34adb0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34adb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34adb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34adbc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34adc0: 0xc05c848  jal         func_172120
    ctx->pc = 0x34ADC0u;
    SET_GPR_U32(ctx, 31, 0x34ADC8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34ADC0u, 0x34ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADC8u;
label_34adc8:
    // 0x34adc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34adc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34adcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34add0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34add4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34add8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34add8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34addc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34ADDCu;
    SET_GPR_U32(ctx, 31, 0x34ADE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34ADDCu, 0x34ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADE4u;
label_34ade4:
    // 0x34ade4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ade8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x34ade8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x34adec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34adf0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x34adf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x34adf4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34ADF4u;
    {
        const bool branch_taken_0x34adf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34adf4) {
            ctx->pc = 0x34AE34u;
            return;
        }
    }
    ctx->pc = 0x34ADFCu;
    // 0x34adfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34ae00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae04: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ae04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ae08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AE0Cu;
    SET_GPR_U32(ctx, 31, 0x34AE14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AE0Cu, 0x34AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE14u;
label_34ae14:
    // 0x34ae14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ae20: 0x2406140f  addiu       $a2, $zero, 0x140F
    ctx->pc = 0x34ae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5135));
    // 0x34ae24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ae28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ae28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ae2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AE2Cu;
    SET_GPR_U32(ctx, 31, 0x34AE34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AE2Cu, 0x34AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE34u;
}
