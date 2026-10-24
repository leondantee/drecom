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

// Function: entry_002caf08
// Address: 0x2caf08 - 0x2cb05c
void entry_002caf08_0x2caf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002caf08_0x2caf08");
#endif

    switch (ctx->pc) {
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf98u: goto label_2caf98;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cb054u: goto label_2cb054;
        default: break;
    }

    ctx->pc = 0x2caf08u;

    // 0x2caf08: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2caf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2caf0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2caf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2caf10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2caf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2caf14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf1c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2caf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2caf20: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2caf24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2caf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2caf28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2caf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2caf2c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CAF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF34u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CAF2Cu, 0x2CAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF34u;
label_2caf34:
    // 0x2caf34: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2caf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2caf38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf3c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2caf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caf40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2caf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf44: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2caf44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2caf48: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CAF48u;
    SET_GPR_U32(ctx, 31, 0x2CAF50u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CAF48u, 0x2CAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF50u;
label_2caf50:
    // 0x2caf50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2caf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2caf58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2caf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2caf60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CAF60u;
    SET_GPR_U32(ctx, 31, 0x2CAF68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CAF60u, 0x2CAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF68u;
label_2caf68:
    // 0x2caf68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf74: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2caf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2caf78: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2caf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2caf7c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2caf80: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CAF80u;
    SET_GPR_U32(ctx, 31, 0x2CAF88u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CAF80u, 0x2CAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF88u;
label_2caf88:
    // 0x2caf88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2caf8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2caf90: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CAF90u;
    SET_GPR_U32(ctx, 31, 0x2CAF98u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CAF90u, 0x2CAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF98u;
label_2caf98:
    // 0x2caf98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf9c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CAF9Cu;
    SET_GPR_U32(ctx, 31, 0x2CAFA4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CAF9Cu, 0x2CAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFA4u;
label_2cafa4:
    // 0x2cafa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafa8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cafac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cafacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cafb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cafb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cafb4: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cafb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cafb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafbc: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cafbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cafc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafc4: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cafc8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cafc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cafcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cafccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cafd0: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cafd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafd8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cafd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cafdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafe0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cafe4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cafe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafec: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caff0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2caff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2caff4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2caff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2caff8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caffc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2caffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb000: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb004: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb00c: 0x0  nop
    ctx->pc = 0x2cb00cu;
    // NOP
    // 0x2cb010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb014: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb01c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb020: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2CB020u;
    {
        const bool branch_taken_0x2cb020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb020) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB028u;
    // 0x2cb028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb02c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb030: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb034: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb03c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb040: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2cb040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cb044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb048: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb04c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB04Cu;
    SET_GPR_U32(ctx, 31, 0x2CB054u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB04Cu, 0x2CB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB054u;
label_2cb054:
    // 0x2cb054: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2CB054u;
    {
        const bool branch_taken_0x2cb054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb054) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB05Cu;
}
