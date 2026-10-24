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

// Function: Em09_dm_ck
// Address: 0x340ee0 - 0x341c04
void Em09_dm_ck_0x340ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_dm_ck_0x340ee0");
#endif

    switch (ctx->pc) {
        case 0x340f50u: goto label_340f50;
        case 0x340fa8u: goto label_340fa8;
        case 0x341030u: goto label_341030;
        case 0x34103cu: goto label_34103c;
        case 0x341070u: goto label_341070;
        case 0x34107cu: goto label_34107c;
        case 0x3410b0u: goto label_3410b0;
        case 0x3410bcu: goto label_3410bc;
        case 0x3410f0u: goto label_3410f0;
        case 0x3411f4u: goto label_3411f4;
        case 0x341200u: goto label_341200;
        case 0x341234u: goto label_341234;
        case 0x341244u: goto label_341244;
        case 0x341274u: goto label_341274;
        case 0x341280u: goto label_341280;
        case 0x3412b4u: goto label_3412b4;
        case 0x3412c0u: goto label_3412c0;
        case 0x341314u: goto label_341314;
        case 0x34132cu: goto label_34132c;
        case 0x341380u: goto label_341380;
        case 0x34138cu: goto label_34138c;
        case 0x3413b0u: goto label_3413b0;
        case 0x3413f4u: goto label_3413f4;
        case 0x341400u: goto label_341400;
        case 0x341424u: goto label_341424;
        case 0x341468u: goto label_341468;
        case 0x341490u: goto label_341490;
        case 0x341624u: goto label_341624;
        case 0x341638u: goto label_341638;
        case 0x341688u: goto label_341688;
        case 0x341764u: goto label_341764;
        case 0x341774u: goto label_341774;
        case 0x3417a4u: goto label_3417a4;
        case 0x3417b4u: goto label_3417b4;
        case 0x3417e4u: goto label_3417e4;
        case 0x3417f4u: goto label_3417f4;
        case 0x3418a4u: goto label_3418a4;
        case 0x3418b0u: goto label_3418b0;
        case 0x3418e0u: goto label_3418e0;
        case 0x3418ecu: goto label_3418ec;
        case 0x341948u: goto label_341948;
        case 0x3419dcu: goto label_3419dc;
        case 0x341a44u: goto label_341a44;
        case 0x341b14u: goto label_341b14;
        default: break;
    }

    ctx->pc = 0x340ee0u;

    // 0x340ee0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x340ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x340ee4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x340ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x340ee8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x340ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x340eec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x340eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x340ef0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340ef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340efc: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x340efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x340f00: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340f00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340f04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x340f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f08: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x340f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x340f0c: 0x10600334  beqz        $v1, . + 4 + (0x334 << 2)
    ctx->pc = 0x340F0Cu;
    {
        const bool branch_taken_0x340f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340f0c) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x340F14u;
    // 0x340f14: 0x8fb10128  lw          $s1, 0x128($sp)
    ctx->pc = 0x340f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f18: 0xa22011ee  sb          $zero, 0x11EE($s1)
    ctx->pc = 0x340f18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340f1c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f20: 0x8c541210  lw          $s4, 0x1210($v0)
    ctx->pc = 0x340f20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x340f24: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f28: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x340f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x340f2c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f30: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x340f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x340f34: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x340f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f38: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x340f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340f3c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f40: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x340f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340f44: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x340f44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x340f48: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x340F48u;
    SET_GPR_U32(ctx, 31, 0x340F50u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x340F48u, 0x340F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340F50u;
label_340f50:
    // 0x340f50: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x340f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x340f54: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x340f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340f58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340f5c: 0x0  nop
    ctx->pc = 0x340f5cu;
    // NOP
    // 0x340f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x340f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340f64: 0x0  nop
    ctx->pc = 0x340f64u;
    // NOP
    // 0x340f68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x340F68u;
    {
        const bool branch_taken_0x340f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340f68) {
            ctx->pc = 0x340F84u;
            goto label_340f84;
        }
    }
    ctx->pc = 0x340F70u;
    // 0x340f70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x340f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x340f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x340f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340f78: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x340f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340f7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x340f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x340f80: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x340f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_340f84:
    // 0x340f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340f88: 0x0  nop
    ctx->pc = 0x340f88u;
    // NOP
    // 0x340f8c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x340f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x340f90: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340f94: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x340f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x340f98: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x340f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x340f9c: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x340f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x340fa0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x340FA0u;
    SET_GPR_U32(ctx, 31, 0x340FA8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x340FA0u, 0x340FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340FA8u;
label_340fa8:
    // 0x340fa8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x340fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x340fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340fb0: 0x0  nop
    ctx->pc = 0x340fb0u;
    // NOP
    // 0x340fb4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x340fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x340fb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x340fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x340fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x340fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340fc0: 0x0  nop
    ctx->pc = 0x340fc0u;
    // NOP
    // 0x340fc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x340fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x340fc8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340fcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x340fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x340fd0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x340fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x340fd4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x340fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x340fd8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x340FD8u;
    {
        const bool branch_taken_0x340fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340fd8) {
            ctx->pc = 0x3410C4u;
            goto label_3410c4;
        }
    }
    ctx->pc = 0x340FE0u;
    // 0x340fe0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340fe4: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x340fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340fe8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x340fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x340fec: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340ff0: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x340ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340ff4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x340ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x340ff8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x340ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x340ffc: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x340ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341000: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x341000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x341004: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x341004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x341008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34100c: 0x0  nop
    ctx->pc = 0x34100cu;
    // NOP
    // 0x341010: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x341010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x341014: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x341014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341018: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341018u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34101c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34101cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341020: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x341020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x341024: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341024u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341028: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x341028u;
    SET_GPR_U32(ctx, 31, 0x341030u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x341028u, 0x341030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341030u;
label_341030:
    // 0x341030: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341034: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x341034u;
    SET_GPR_U32(ctx, 31, 0x34103Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x341034u, 0x34103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34103Cu;
label_34103c:
    // 0x34103c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x34103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341040: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x341040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x341044: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341044u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341048: 0x0  nop
    ctx->pc = 0x341048u;
    // NOP
    // 0x34104c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34104cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341050: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x341050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x341054: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x341054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341058: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34105c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34105cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341060: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x341060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x341064: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341064u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341068: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x341068u;
    SET_GPR_U32(ctx, 31, 0x341070u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x341068u, 0x341070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341070u;
label_341070:
    // 0x341070: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341074: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x341074u;
    SET_GPR_U32(ctx, 31, 0x34107Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x341074u, 0x34107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34107Cu;
label_34107c:
    // 0x34107c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x34107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341080: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x341080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x341084: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341088: 0x0  nop
    ctx->pc = 0x341088u;
    // NOP
    // 0x34108c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34108cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341090: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x341090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x341094: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x341094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341098: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34109c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34109cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3410a0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3410a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3410a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3410a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3410a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3410A8u;
    SET_GPR_U32(ctx, 31, 0x3410B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3410A8u, 0x3410B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410B0u;
label_3410b0:
    // 0x3410b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3410b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3410b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3410B4u;
    SET_GPR_U32(ctx, 31, 0x3410BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3410B4u, 0x3410BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410BCu;
label_3410bc:
    // 0x3410bc: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x3410BCu;
    {
        const bool branch_taken_0x3410bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3410bc) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x3410C4u;
label_3410c4:
    // 0x3410c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3410c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3410cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3410ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3410d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3410d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3410d4: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x3410D4u;
    {
        const bool branch_taken_0x3410d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3410d4) {
            ctx->pc = 0x34152Cu;
            goto label_34152c;
        }
    }
    ctx->pc = 0x3410DCu;
    // 0x3410dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3410dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3410e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3410e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3410e4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x3410e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x3410e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3410E8u;
    SET_GPR_U32(ctx, 31, 0x3410F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3410E8u, 0x3410F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410F0u;
label_3410f0:
    // 0x3410f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3410f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3410f4: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x3410f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3410f8: 0x2482001e  addiu       $v0, $a0, 0x1E
    ctx->pc = 0x3410f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
    // 0x3410fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3410fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x341100: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x341100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x341104: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341108: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34110c: 0xa443006a  sh          $v1, 0x6A($v0)
    ctx->pc = 0x34110cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x341110: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341114: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x341114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x341118: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x341118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34111c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x34111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x341120: 0x10a2006a  beq         $a1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x341120u;
    {
        const bool branch_taken_0x341120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341120) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341128u;
    // 0x341128: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x341128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x34112c: 0x10a30067  beq         $a1, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x34112Cu;
    {
        const bool branch_taken_0x34112c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34112c) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341134u;
    // 0x341134: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x341134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x341138: 0x10a20064  beq         $a1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x341138u;
    {
        const bool branch_taken_0x341138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341138) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341140u;
    // 0x341140: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x341140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x341144: 0x10a20061  beq         $a1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x341144u;
    {
        const bool branch_taken_0x341144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341144) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x34114Cu;
    // 0x34114c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x341150: 0x10a2005e  beq         $a1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x341150u;
    {
        const bool branch_taken_0x341150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341150) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341158u;
    // 0x341158: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x341158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34115c: 0x10a2005b  beq         $a1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x34115Cu;
    {
        const bool branch_taken_0x34115c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x34115c) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341164u;
    // 0x341164: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x341164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x341168: 0x10a20058  beq         $a1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x341168u;
    {
        const bool branch_taken_0x341168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341168) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341170u;
    // 0x341170: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x341170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x341174: 0x10a40055  beq         $a1, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x341174u;
    {
        const bool branch_taken_0x341174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x341174) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x34117Cu;
    // 0x34117c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x34117cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x341180: 0x10a60052  beq         $a1, $a2, . + 4 + (0x52 << 2)
    ctx->pc = 0x341180u;
    {
        const bool branch_taken_0x341180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x341180) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341188u;
    // 0x341188: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x34118c: 0x10a2004f  beq         $a1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x34118Cu;
    {
        const bool branch_taken_0x34118c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x34118c) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x341194u;
    // 0x341194: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x341194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x341198: 0x10a2004c  beq         $a1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x341198u;
    {
        const bool branch_taken_0x341198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x341198) {
            ctx->pc = 0x3412CCu;
            goto label_3412cc;
        }
    }
    ctx->pc = 0x3411A0u;
    // 0x3411a0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3411A0u;
    {
        const bool branch_taken_0x3411a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3411a0) {
            ctx->pc = 0x3411A8u;
            goto label_3411a8;
        }
    }
    ctx->pc = 0x3411A8u;
label_3411a8:
    // 0x3411a8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3411ac: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x3411acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411b0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3411b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3411b4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3411b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3411b8: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x3411b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411bc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3411bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3411c0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3411c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3411c4: 0xc4c01208  lwc1        $f0, 0x1208($a2)
    ctx->pc = 0x3411c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3411c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3411c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3411cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3411d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3411d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3411d4: 0x0  nop
    ctx->pc = 0x3411d4u;
    // NOP
    // 0x3411d8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3411d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3411dc: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3411dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3411e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3411e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3411e4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3411e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3411e8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3411e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3411ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3411ECu;
    SET_GPR_U32(ctx, 31, 0x3411F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3411ECu, 0x3411F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411F4u;
label_3411f4:
    // 0x3411f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3411f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3411f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3411F8u;
    SET_GPR_U32(ctx, 31, 0x341200u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3411F8u, 0x341200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341200u;
label_341200:
    // 0x341200: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341200u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341204: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x341204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341208: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x341208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x34120c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34120cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341210: 0x0  nop
    ctx->pc = 0x341210u;
    // NOP
    // 0x341214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341218: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x341218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34121c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341220: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341224: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x341224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x341228: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341228u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34122c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34122Cu;
    SET_GPR_U32(ctx, 31, 0x341234u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34122Cu, 0x341234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341234u;
label_341234:
    // 0x341234: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341234u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341238: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x341238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34123c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x34123Cu;
    SET_GPR_U32(ctx, 31, 0x341244u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x34123Cu, 0x341244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341244u;
label_341244:
    // 0x341244: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x341244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341248: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x341248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x34124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341250: 0x0  nop
    ctx->pc = 0x341250u;
    // NOP
    // 0x341254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341258: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x341258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34125c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34125cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341260: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341264: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x341264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x341268: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341268u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34126c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34126Cu;
    SET_GPR_U32(ctx, 31, 0x341274u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34126Cu, 0x341274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341274u;
label_341274:
    // 0x341274: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x341274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341278: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x341278u;
    SET_GPR_U32(ctx, 31, 0x341280u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x341278u, 0x341280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341280u;
label_341280:
    // 0x341280: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341280u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341284: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x341284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341288: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x341288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34128c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34128cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341290: 0x0  nop
    ctx->pc = 0x341290u;
    // NOP
    // 0x341294: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341298: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x341298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34129c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3412a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3412a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3412a4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3412a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3412a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3412a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3412ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3412ACu;
    SET_GPR_U32(ctx, 31, 0x3412B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3412ACu, 0x3412B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412B4u;
label_3412b4:
    // 0x3412b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3412b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3412b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3412B8u;
    SET_GPR_U32(ctx, 31, 0x3412C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3412B8u, 0x3412C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412C0u;
label_3412c0:
    // 0x3412c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3412c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3412c4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3412C4u;
    {
        const bool branch_taken_0x3412c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3412c4) {
            ctx->pc = 0x341524u;
            goto label_341524;
        }
    }
    ctx->pc = 0x3412CCu;
label_3412cc:
    // 0x3412cc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3412ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3412d0: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x3412d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412d4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3412d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3412d8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3412d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3412dc: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x3412dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412e0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x3412e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3412e4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3412e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3412e8: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x3412e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412ec: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x3412ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3412f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3412f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3412f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3412f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3412f8: 0x0  nop
    ctx->pc = 0x3412f8u;
    // NOP
    // 0x3412fc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3412fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x341300: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341304: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x341304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341308: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x341308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34130c: 0xc040c44  jal         func_103110
    ctx->pc = 0x34130Cu;
    SET_GPR_U32(ctx, 31, 0x341314u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x341314u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341314u) { return; }
    ctx->pc = 0x341314u;
label_341314:
    // 0x341314: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341314u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341318: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x341318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34131c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x34131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341320: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x341320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x341324: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341324u;
    SET_GPR_U32(ctx, 31, 0x34132Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x34132Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34132Cu) { return; }
    ctx->pc = 0x34132Cu;
label_34132c:
    // 0x34132c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34132cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341330: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x341330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x341334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341338: 0x0  nop
    ctx->pc = 0x341338u;
    // NOP
    // 0x34133c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x34133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x341340: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x341344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x341348: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x341348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x34134c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341350: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x341350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x341354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x341354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x341358: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x341358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34135c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x341360: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x341360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x341364: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341368: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x341368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34136c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x34136cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341370: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x341370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x341374: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x341374u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341378: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x341378u;
    SET_GPR_U32(ctx, 31, 0x341380u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x341378u, 0x341380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341380u;
label_341380:
    // 0x341380: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341380u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341384: 0xc067648  jal         func_19D920
    ctx->pc = 0x341384u;
    SET_GPR_U32(ctx, 31, 0x34138Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x341384u, 0x34138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34138Cu;
label_34138c:
    // 0x34138c: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x341390: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x341390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x341394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341398: 0x0  nop
    ctx->pc = 0x341398u;
    // NOP
    // 0x34139c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34139cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3413a0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3413a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3413a4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3413a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3413a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3413A8u;
    SET_GPR_U32(ctx, 31, 0x3413B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3413A8u, 0x3413B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413B0u;
label_3413b0:
    // 0x3413b0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3413b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3413b4: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3413b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3413b8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x3413b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3413bc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3413bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3413c0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3413c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3413c4: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3413c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x3413c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3413c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3413cc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3413ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3413d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3413d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3413d4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x3413d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3413d8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3413d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3413dc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3413dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3413e0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3413e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3413e4: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x3413e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3413e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3413e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3413ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3413ECu;
    SET_GPR_U32(ctx, 31, 0x3413F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3413ECu, 0x3413F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413F4u;
label_3413f4:
    // 0x3413f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3413f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3413f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3413F8u;
    SET_GPR_U32(ctx, 31, 0x341400u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3413F8u, 0x341400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341400u;
label_341400:
    // 0x341400: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x341400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x341404: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x341404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x341408: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x341408u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34140c: 0x0  nop
    ctx->pc = 0x34140cu;
    // NOP
    // 0x341410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x341410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x341414: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x341414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341418: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x341418u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34141c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34141Cu;
    SET_GPR_U32(ctx, 31, 0x341424u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34141Cu, 0x341424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341424u;
label_341424:
    // 0x341424: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x341424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x341428: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34142c: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x34142cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x341430: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x341430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x341434: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x341434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x341438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x34143c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x341440: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x341440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x341444: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x341444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x341448: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x341448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34144c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341450: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x341450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x341454: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x341454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341458: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x341458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34145c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34145cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341460: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x341460u;
    SET_GPR_U32(ctx, 31, 0x341468u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x341460u, 0x341468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341468u;
label_341468:
    // 0x341468: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341468u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34146c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341470: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341474: 0xa0600078  sb          $zero, 0x78($v1)
    ctx->pc = 0x341474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x341478: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34147c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341480: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x341480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x341484: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x341484u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x341488: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x341488u;
    SET_GPR_U32(ctx, 31, 0x341490u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x341488u, 0x341490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341490u;
label_341490:
    // 0x341490: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341494: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x341494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x341498: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x341498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34149c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34149cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3414a0: 0x4610020  bgez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3414A0u;
    {
        const bool branch_taken_0x3414a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3414a0) {
            ctx->pc = 0x341524u;
            goto label_341524;
        }
    }
    ctx->pc = 0x3414A8u;
    // 0x3414a8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3414acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3414b0: 0xa06000b8  sb          $zero, 0xB8($v1)
    ctx->pc = 0x3414b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x3414b4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414b8: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x3414b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    // 0x3414bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3414c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3414c4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3414c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3414c8: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x3414c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3414cc: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x3414ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x3414d0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414d4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3414d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3414d8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3414d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3414dc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3414dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3414e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3414e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3414e4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3414e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3414e8: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3414e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414ec: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x3414ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3414f0: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x3414f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3414f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3414f8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3414fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341500: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x341500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x341504: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x341504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x341508: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34150c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x341510: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x341510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x341514: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x341514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x341518: 0x2464a280  addiu       $a0, $v1, -0x5D80
    ctx->pc = 0x341518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x34151c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341520: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x341520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
label_341524:
    // 0x341524: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x341524u;
    {
        const bool branch_taken_0x341524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341524) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x34152Cu;
label_34152c:
    // 0x34152c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341530: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x341530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x341534: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x341534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x341538: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x341538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x34153c: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x34153Cu;
    {
        const bool branch_taken_0x34153c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34153c) {
            ctx->pc = 0x341834u;
            goto label_341834;
        }
    }
    ctx->pc = 0x341544u;
    // 0x341544: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341548: 0x946211f6  lhu         $v0, 0x11F6($v1)
    ctx->pc = 0x341548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x34154c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x34154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x341550: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x341550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x341554: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x341554u;
    {
        const bool branch_taken_0x341554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341554) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x34155Cu;
    // 0x34155c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x34155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x341560: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x341560u;
    {
        const bool branch_taken_0x341560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341560) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x341568u;
    // 0x341568: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x341568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34156c: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x34156Cu;
    {
        const bool branch_taken_0x34156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34156c) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x341574u;
    // 0x341574: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x341574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x341578: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x341578u;
    {
        const bool branch_taken_0x341578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341578) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x341580u;
    // 0x341580: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x341580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x341584: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x341584u;
    {
        const bool branch_taken_0x341584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341584) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x34158Cu;
    // 0x34158c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x34158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x341590: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x341590u;
    {
        const bool branch_taken_0x341590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341590) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x341598u;
    // 0x341598: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x341598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34159c: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x34159Cu;
    {
        const bool branch_taken_0x34159c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34159c) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x3415A4u;
    // 0x3415a4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3415a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3415a8: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3415A8u;
    {
        const bool branch_taken_0x3415a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415a8) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x3415B0u;
    // 0x3415b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3415b4: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3415B4u;
    {
        const bool branch_taken_0x3415b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415b4) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x3415BCu;
    // 0x3415bc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3415bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3415c0: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3415C0u;
    {
        const bool branch_taken_0x3415c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415c0) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x3415C8u;
    // 0x3415c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3415c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3415cc: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3415CCu;
    {
        const bool branch_taken_0x3415cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415cc) {
            ctx->pc = 0x341718u;
            goto label_341718;
        }
    }
    ctx->pc = 0x3415D4u;
    // 0x3415d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3415D4u;
    {
        const bool branch_taken_0x3415d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3415d4) {
            ctx->pc = 0x3415DCu;
            goto label_3415dc;
        }
    }
    ctx->pc = 0x3415DCu;
label_3415dc:
    // 0x3415dc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3415dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3415e0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x3415e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415e4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3415e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3415e8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3415e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3415ec: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x3415ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415f0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x3415f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3415f4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3415f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3415f8: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x3415f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415fc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x3415fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x341600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341608: 0x0  nop
    ctx->pc = 0x341608u;
    // NOP
    // 0x34160c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x341610: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341614: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x341614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341618: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x341618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x34161c: 0xc040c44  jal         func_103110
    ctx->pc = 0x34161Cu;
    SET_GPR_U32(ctx, 31, 0x341624u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x341624u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341624u) { return; }
    ctx->pc = 0x341624u;
label_341624:
    // 0x341624: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x341624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x341628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34162c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x34162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341630: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341630u;
    SET_GPR_U32(ctx, 31, 0x341638u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x341638u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341638u) { return; }
    ctx->pc = 0x341638u;
label_341638:
    // 0x341638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34163c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34163cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341640: 0x0  nop
    ctx->pc = 0x341640u;
    // NOP
    // 0x341644: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x341644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x341648: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34164c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34164cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x341650: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x341650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x341654: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x341654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x341658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x34165c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x341660: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x341660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x341664: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x341664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x341668: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x341668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34166c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341670: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341674: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x341674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341678: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x341678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x34167c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34167cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341680: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x341680u;
    SET_GPR_U32(ctx, 31, 0x341688u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x341680u, 0x341688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341688u;
label_341688:
    // 0x341688: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34168c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x34168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x341690: 0x24520360  addiu       $s2, $v0, 0x360
    ctx->pc = 0x341690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x341694: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x341694u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x341698: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x341698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x34169c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x34169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3416a0: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3416a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x3416a4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3416a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416a8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3416a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3416ac: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x3416acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x3416b0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3416b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416b4: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x3416b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416b8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3416b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3416bc: 0x8fb40128  lw          $s4, 0x128($sp)
    ctx->pc = 0x3416bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416c0: 0xc6801204  lwc1        $f0, 0x1204($s4)
    ctx->pc = 0x3416c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416c4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x3416c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x3416c8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3416c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416cc: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x3416ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416d0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3416d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3416d4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3416d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416d8: 0x946211f6  lhu         $v0, 0x11F6($v1)
    ctx->pc = 0x3416d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x3416dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3416dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3416e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3416e4: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x3416e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x3416e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3416e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3416ec: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3416ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3416f0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x3416f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3416f4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3416f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416f8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x3416f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3416fc: 0x8462006a  lh          $v0, 0x6A($v1)
    ctx->pc = 0x3416fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x341700: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x341700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x341704: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x341704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x341708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34170c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34170cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341710: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x341710u;
    {
        const bool branch_taken_0x341710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341710) {
            ctx->pc = 0x341834u;
            goto label_341834;
        }
    }
    ctx->pc = 0x341718u;
label_341718:
    // 0x341718: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34171c: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x34171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341720: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x341720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x341724: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341728: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x341728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34172c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x34172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x341730: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341734: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x341734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341738: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x341738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34173c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341744: 0x0  nop
    ctx->pc = 0x341744u;
    // NOP
    // 0x341748: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x341748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x34174c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341750: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341754: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x341754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x341758: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341758u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34175c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34175Cu;
    SET_GPR_U32(ctx, 31, 0x341764u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34175Cu, 0x341764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341764u;
label_341764:
    // 0x341764: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x341764u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341768: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34176c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x34176Cu;
    SET_GPR_U32(ctx, 31, 0x341774u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x34176Cu, 0x341774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341774u;
label_341774:
    // 0x341774: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x341774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341778: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x341778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x34177c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34177cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341780: 0x0  nop
    ctx->pc = 0x341780u;
    // NOP
    // 0x341784: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341788: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x341788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34178c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341794: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x341794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x341798: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341798u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34179c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34179Cu;
    SET_GPR_U32(ctx, 31, 0x3417A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34179Cu, 0x3417A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417A4u;
label_3417a4:
    // 0x3417a4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3417a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3417a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3417a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3417ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3417ACu;
    SET_GPR_U32(ctx, 31, 0x3417B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3417ACu, 0x3417B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417B4u;
label_3417b4:
    // 0x3417b4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x3417b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3417b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3417b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3417bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3417bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3417c0: 0x0  nop
    ctx->pc = 0x3417c0u;
    // NOP
    // 0x3417c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3417c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3417c8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3417c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3417cc: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3417ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3417d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3417d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3417d4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3417d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3417d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3417d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3417dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3417DCu;
    SET_GPR_U32(ctx, 31, 0x3417E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3417DCu, 0x3417E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417E4u;
label_3417e4:
    // 0x3417e4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3417e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3417e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3417e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3417ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3417ECu;
    SET_GPR_U32(ctx, 31, 0x3417F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3417ECu, 0x3417F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417F4u;
label_3417f4:
    // 0x3417f4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3417f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3417f8: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x3417f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x3417fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3417fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x341800: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x341800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x341804: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x341804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x341808: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x341808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34180c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x34180cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341814: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x341814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x341818: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x341818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34181c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34181cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341820: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341824: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x341824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x341828: 0x8462006a  lh          $v0, 0x6A($v1)
    ctx->pc = 0x341828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x34182c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x34182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x341830: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x341830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
label_341834:
    // 0x341834: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341838: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34183c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x34183cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x341840: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x341840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x341844: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x341844u;
    {
        const bool branch_taken_0x341844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341844) {
            ctx->pc = 0x341924u;
            goto label_341924;
        }
    }
    ctx->pc = 0x34184Cu;
    // 0x34184c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x341850: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341854: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x341854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x341858: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34185c: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x34185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341860: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x341860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x341864: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341868: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x341868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34186c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x34186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x341870: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341874: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x341874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341878: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x341878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x34187c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341884: 0x0  nop
    ctx->pc = 0x341884u;
    // NOP
    // 0x341888: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x341888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x34188c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341890: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341894: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x341894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x341898: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341898u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34189c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34189Cu;
    SET_GPR_U32(ctx, 31, 0x3418A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34189Cu, 0x3418A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418A4u;
label_3418a4:
    // 0x3418a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3418a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3418a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3418A8u;
    SET_GPR_U32(ctx, 31, 0x3418B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3418A8u, 0x3418B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418B0u;
label_3418b0:
    // 0x3418b0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3418b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3418b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3418b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3418b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3418b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3418bc: 0x0  nop
    ctx->pc = 0x3418bcu;
    // NOP
    // 0x3418c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3418c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3418c4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x3418c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3418c8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3418c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3418cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3418ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3418d0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3418d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3418d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3418d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3418d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3418D8u;
    SET_GPR_U32(ctx, 31, 0x3418E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3418D8u, 0x3418E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418E0u;
label_3418e0:
    // 0x3418e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3418e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3418e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3418E4u;
    SET_GPR_U32(ctx, 31, 0x3418ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3418E4u, 0x3418ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3418ECu;
label_3418ec:
    // 0x3418ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3418ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3418f0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3418f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3418f4: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x3418f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x3418f8: 0x8483006a  lh          $v1, 0x6A($a0)
    ctx->pc = 0x3418f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3418fc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3418fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x341900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x341904: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x341904u;
    {
        const bool branch_taken_0x341904 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x341904) {
            ctx->pc = 0x34191Cu;
            goto label_34191c;
        }
    }
    ctx->pc = 0x34190Cu;
    // 0x34190c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341910: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x341910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341914: 0x24c31330  addiu       $v1, $a2, 0x1330
    ctx->pc = 0x341914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x341918: 0xa464006a  sh          $a0, 0x6A($v1)
    ctx->pc = 0x341918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 4));
label_34191c:
    // 0x34191c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x34191Cu;
    {
        const bool branch_taken_0x34191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34191c) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x341924u;
label_341924:
    // 0x341924: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34192c: 0x8444006a  lh          $a0, 0x6A($v0)
    ctx->pc = 0x34192cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x341930: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x341930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341934: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x341934u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x341938: 0x4c10022  bgez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x341938u;
    {
        const bool branch_taken_0x341938 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x341938) {
            ctx->pc = 0x3419C4u;
            goto label_3419c4;
        }
    }
    ctx->pc = 0x341940u;
    // 0x341940: 0xc067694  jal         func_19DA50
    ctx->pc = 0x341940u;
    SET_GPR_U32(ctx, 31, 0x341948u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x341940u, 0x341948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341948u;
label_341948:
    // 0x341948: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x341948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34194c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x34194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x341950: 0x2464001e  addiu       $a0, $v1, 0x1E
    ctx->pc = 0x341950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x341954: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x341954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341958: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x341958u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x34195c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341960: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x341960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x341964: 0xa466006a  sh          $a2, 0x6A($v1)
    ctx->pc = 0x341964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 6));
    // 0x341968: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34196c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341970: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x341970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x341974: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x341974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x341978: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x341978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34197c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341980: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x341980u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x341984: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x341984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x341988: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x341988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x34198c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341990: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341994: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x341994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x341998: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x341998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34199c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34199cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419a0: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x3419a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3419a4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3419a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3419ac: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3419b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3419b4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3419b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3419bc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3419BCu;
    {
        const bool branch_taken_0x3419bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3419bc) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x3419C4u;
label_3419c4:
    // 0x3419c4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419c8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x3419c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3419cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3419ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3419d0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3419d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3419d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3419D4u;
    SET_GPR_U32(ctx, 31, 0x3419DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3419D4u, 0x3419DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3419DCu;
label_3419dc:
    // 0x3419dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3419dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3419e0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3419e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3419e4: 0x1200007e  beqz        $s0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3419E4u;
    {
        const bool branch_taken_0x3419e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3419e4) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x3419ECu;
    // 0x3419ec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419f0: 0x946511f6  lhu         $a1, 0x11F6($v1)
    ctx->pc = 0x3419f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x3419f4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x3419f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3419f8: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x3419f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x3419fc: 0x24e3a3c0  addiu       $v1, $a3, -0x5C40
    ctx->pc = 0x3419fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943680));
    // 0x341a00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x341a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x341a04: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x341a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341a08: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x341a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x341a0c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x341a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a10: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x341a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x341a14: 0x8483006c  lh          $v1, 0x6C($a0)
    ctx->pc = 0x341a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x341a18: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x341a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x341a1c: 0xa483006c  sh          $v1, 0x6C($a0)
    ctx->pc = 0x341a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x341a20: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341a28: 0x8464006c  lh          $a0, 0x6C($v1)
    ctx->pc = 0x341a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x341a2c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x341a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341a30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x341a30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x341a34: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341A34u;
    {
        const bool branch_taken_0x341a34 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x341a34) {
            ctx->pc = 0x341A6Cu;
            goto label_341a6c;
        }
    }
    ctx->pc = 0x341A3Cu;
    // 0x341a3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x341A3Cu;
    SET_GPR_U32(ctx, 31, 0x341A44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x341A3Cu, 0x341A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A44u;
label_341a44:
    // 0x341a44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x341a44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341a48: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x341a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x341a4c: 0x30c70007  andi        $a3, $a2, 0x7
    ctx->pc = 0x341a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x341a50: 0x24e3000f  addiu       $v1, $a3, 0xF
    ctx->pc = 0x341a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x341a54: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x341a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341a58: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x341a58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341a5c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341a64: 0xa464006c  sh          $a0, 0x6C($v1)
    ctx->pc = 0x341a64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 4));
    // 0x341a68: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x341a68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_341a6c:
    // 0x341a6c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341a74: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x341a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x341a78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x341a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x341a7c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x341A7Cu;
    {
        const bool branch_taken_0x341a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341a7c) {
            ctx->pc = 0x341AC8u;
            goto label_341ac8;
        }
    }
    ctx->pc = 0x341A84u;
    // 0x341a84: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x341a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x341a88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341A88u;
    {
        const bool branch_taken_0x341a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341a88) {
            ctx->pc = 0x341AC0u;
            goto label_341ac0;
        }
    }
    ctx->pc = 0x341A90u;
    // 0x341a90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x341a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341a94: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341a98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x341a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x341a9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x341a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341aa0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x341aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341aa4: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x341aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x341aa8: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x341aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341aac: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x341aacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341ab0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341ab4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x341ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341ab8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341abc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_341ac0:
    // 0x341ac0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x341AC0u;
    {
        const bool branch_taken_0x341ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341ac0) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x341AC8u;
label_341ac8:
    // 0x341ac8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341acc: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x341accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x341ad0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x341ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341ad4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x341ad4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341ad8: 0x480003f  bltz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x341AD8u;
    {
        const bool branch_taken_0x341ad8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x341ad8) {
            ctx->pc = 0x341BD8u;
            goto label_341bd8;
        }
    }
    ctx->pc = 0x341AE0u;
    // 0x341ae0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x341ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341ae4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341ae8: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x341ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x341aec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341af0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x341af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x341af4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341af8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x341af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341afc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x341b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b04: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x341b0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x341B0Cu;
    SET_GPR_U32(ctx, 31, 0x341B14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x341B0Cu, 0x341B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B14u;
label_341b14:
    // 0x341b14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341b14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341b18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x341b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x341b1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x341b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341b20: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x341B20u;
    {
        const bool branch_taken_0x341b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b20) {
            ctx->pc = 0x341B6Cu;
            goto label_341b6c;
        }
    }
    ctx->pc = 0x341B28u;
    // 0x341b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341b2c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b30: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x341b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x341b34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x341b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x341b38: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x341b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x341b40: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x341b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b44: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x341b44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b48: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b4c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x341b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b50: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x341b58: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b5c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x341b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341b60: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x341b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x341b64: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x341b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x341b68: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x341b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_341b6c:
    // 0x341b6c: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x341b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x341b70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341B70u;
    {
        const bool branch_taken_0x341b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b70) {
            ctx->pc = 0x341BA8u;
            goto label_341ba8;
        }
    }
    ctx->pc = 0x341B78u;
    // 0x341b78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341b7c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x341b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b80: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x341b80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x341b84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341b88: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x341b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x341b90: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x341b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b98: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b9c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x341b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341ba0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341ba4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_341ba8:
    // 0x341ba8: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x341ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341bac: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x341bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x341bb0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x341bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x341bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341bb8: 0x0  nop
    ctx->pc = 0x341bb8u;
    // NOP
    // 0x341bbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x341bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x341bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341bc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x341BC4u;
    {
        const bool branch_taken_0x341bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x341bc4) {
            ctx->pc = 0x341BD0u;
            goto label_341bd0;
        }
    }
    ctx->pc = 0x341BCCu;
    // 0x341bcc: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x341bccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_341bd0:
    // 0x341bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x341BD0u;
    {
        const bool branch_taken_0x341bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341bd0) {
            ctx->pc = 0x341BE0u;
            goto label_341be0;
        }
    }
    ctx->pc = 0x341BD8u;
label_341bd8:
    // 0x341bd8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341bdc: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x341bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
label_341be0:
    // 0x341be0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x341be0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x341be4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x341be4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x341be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x341be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x341becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341bf8: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x341bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x341bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x341BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C04u;
}
