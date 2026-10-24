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

// Function: Hermite
// Address: 0x262e80 - 0x2633f8
void Hermite_0x262e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hermite_0x262e80");
#endif

    switch (ctx->pc) {
        case 0x262ea8u: goto label_262ea8;
        case 0x263014u: goto label_263014;
        case 0x26335cu: goto label_26335c;
        case 0x263398u: goto label_263398;
        default: break;
    }

    ctx->pc = 0x262e80u;

    // 0x262e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262e84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x262e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x262e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x262e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262e8c: 0x0  nop
    ctx->pc = 0x262e8cu;
    // NOP
    // 0x262e90: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x262e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x262e94: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x262e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x262e98: 0x8c8e000c  lw          $t6, 0xC($a0)
    ctx->pc = 0x262e98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x262e9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x262e9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x262ea0: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x262EA0u;
    {
        const bool branch_taken_0x262ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262ea0) {
            ctx->pc = 0x2633E0u;
            goto label_2633e0;
        }
    }
    ctx->pc = 0x262EA8u;
label_262ea8:
    // 0x262ea8: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x262ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x262eac: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x262eacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262eb0: 0x25cc0002  addiu       $t4, $t6, 0x2
    ctx->pc = 0x262eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x262eb4: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262eb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262ebc: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x262ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x262ec0: 0x246d0002  addiu       $t5, $v1, 0x2
    ctx->pc = 0x262ec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x262ec4: 0x25a80003  addiu       $t0, $t5, 0x3
    ctx->pc = 0x262ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x262ec8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x262ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x262ecc: 0x1036824  and         $t5, $t0, $v1
    ctx->pc = 0x262eccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x262ed0: 0x3148ffff  andi        $t0, $t2, 0xFFFF
    ctx->pc = 0x262ed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262ed4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x262ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262ed8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262ee0: 0x1a37021  addu        $t6, $t5, $v1
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x262ee4: 0x3149ffff  andi        $t1, $t2, 0xFFFF
    ctx->pc = 0x262ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262ee8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x262ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262eec: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x262eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262ef0: 0x0  nop
    ctx->pc = 0x262ef0u;
    // NOP
    // 0x262ef4: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x262EF4u;
    {
        const bool branch_taken_0x262ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262ef4) {
            ctx->pc = 0x262FF8u;
            goto label_262ff8;
        }
    }
    ctx->pc = 0x262EFCu;
    // 0x262efc: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262f00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262f04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262f08: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x262f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x262f0c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x262f0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262f10: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x262F10u;
    {
        const bool branch_taken_0x262f10 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x262f10) {
            ctx->pc = 0x262F2Cu;
            goto label_262f2c;
        }
    }
    ctx->pc = 0x262F18u;
    // 0x262f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x262f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f1c: 0x0  nop
    ctx->pc = 0x262f1cu;
    // NOP
    // 0x262f20: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x262f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x262f24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262F24u;
    {
        const bool branch_taken_0x262f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f24) {
            ctx->pc = 0x262F48u;
            goto label_262f48;
        }
    }
    ctx->pc = 0x262F2Cu;
label_262f2c:
    // 0x262f2c: 0x34042  srl         $t0, $v1, 1
    ctx->pc = 0x262f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x262f30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x262f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x262f34: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x262f34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x262f38: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262f38u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f3c: 0x0  nop
    ctx->pc = 0x262f3cu;
    // NOP
    // 0x262f40: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x262f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x262f44: 0x460b5ac0  add.s       $f11, $f11, $f11
    ctx->pc = 0x262f44u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
label_262f48:
    // 0x262f48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x262f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x262f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x262f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f50: 0x0  nop
    ctx->pc = 0x262f50u;
    // NOP
    // 0x262f54: 0x460b0300  add.s       $f12, $f0, $f11
    ctx->pc = 0x262f54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x262f58: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262f5c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x262f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262f60: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x262f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262f64: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262f6c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x262f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x262f70: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x262f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x262f74: 0xc5ae0000  lwc1        $f14, 0x0($t5)
    ctx->pc = 0x262f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x262f78: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262f7c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x262f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262f80: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x262f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262f84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262f8c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x262f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x262f90: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x262f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x262f94: 0xc5b00004  lwc1        $f16, 0x4($t5)
    ctx->pc = 0x262f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x262f98: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x262f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x262f9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262fa0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x262fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x262fa4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x262FA4u;
    {
        const bool branch_taken_0x262fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fa4) {
            ctx->pc = 0x262FB0u;
            goto label_262fb0;
        }
    }
    ctx->pc = 0x262FACu;
    // 0x262fac: 0x460d7380  add.s       $f14, $f14, $f13
    ctx->pc = 0x262facu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
label_262fb0:
    // 0x262fb0: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x262fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x262fb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262fb8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x262fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x262fbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x262FBCu;
    {
        const bool branch_taken_0x262fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fbc) {
            ctx->pc = 0x262FD8u;
            goto label_262fd8;
        }
    }
    ctx->pc = 0x262FC4u;
    // 0x262fc4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x262fc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x262fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x262fcc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x262fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262fd0: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x262fd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x262fd4: 0x0  nop
    ctx->pc = 0x262fd4u;
    // NOP
label_262fd8:
    // 0x262fd8: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262fdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262fe0: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x262fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262fe4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x262fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x262fe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x262fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x262fec: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x262fecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x262ff0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x262ff0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x262ff4: 0x0  nop
    ctx->pc = 0x262ff4u;
    // NOP
label_262ff8:
    // 0x262ff8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x262ff8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x262ffc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x262ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x263000: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x263000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263004: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x263004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263008: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26300c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x26300Cu;
    {
        const bool branch_taken_0x26300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26300c) {
            ctx->pc = 0x2632C8u;
            goto label_2632c8;
        }
    }
    ctx->pc = 0x263014u;
label_263014:
    // 0x263014: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x263014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263018: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x26301c: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x26301cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x263020: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263020u;
    {
        const bool branch_taken_0x263020 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x263020) {
            ctx->pc = 0x26303Cu;
            goto label_26303c;
        }
    }
    ctx->pc = 0x263028u;
    // 0x263028: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x263028u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26302c: 0x0  nop
    ctx->pc = 0x26302cu;
    // NOP
    // 0x263030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263034u;
    {
        const bool branch_taken_0x263034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263034) {
            ctx->pc = 0x263058u;
            goto label_263058;
        }
    }
    ctx->pc = 0x26303Cu;
label_26303c:
    // 0x26303c: 0x87842  srl         $t7, $t0, 1
    ctx->pc = 0x26303cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x263040: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x263040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x263044: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x263044u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x263048: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x263048u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26304c: 0x0  nop
    ctx->pc = 0x26304cu;
    // NOP
    // 0x263050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263054: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x263054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_263058:
    // 0x263058: 0x46005032  c.eq.s      $f10, $f0
    ctx->pc = 0x263058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26305c: 0x0  nop
    ctx->pc = 0x26305cu;
    // NOP
    // 0x263060: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x263060u;
    {
        const bool branch_taken_0x263060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263060) {
            ctx->pc = 0x26309Cu;
            goto label_26309c;
        }
    }
    ctx->pc = 0x263068u;
    // 0x263068: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x263068u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26306c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x26306cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x263070: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x263070u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x263074: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x263074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x263078: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x263078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26307c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x26307cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263080: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x263080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x263084: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x263084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263088: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x263088u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x26308c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263090: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x263090u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263094: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x263094u;
    {
        const bool branch_taken_0x263094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263094) {
            ctx->pc = 0x2632D0u;
            goto label_2632d0;
        }
    }
    ctx->pc = 0x26309Cu;
label_26309c:
    // 0x26309c: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x26309cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2630a0: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x2630a4: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x2630a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2630a8: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2630A8u;
    {
        const bool branch_taken_0x2630a8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2630a8) {
            ctx->pc = 0x2630C4u;
            goto label_2630c4;
        }
    }
    ctx->pc = 0x2630B0u;
    // 0x2630b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2630b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2630b4: 0x0  nop
    ctx->pc = 0x2630b4u;
    // NOP
    // 0x2630b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2630b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2630bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2630BCu;
    {
        const bool branch_taken_0x2630bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2630bc) {
            ctx->pc = 0x2630E0u;
            goto label_2630e0;
        }
    }
    ctx->pc = 0x2630C4u;
label_2630c4:
    // 0x2630c4: 0x87842  srl         $t7, $t0, 1
    ctx->pc = 0x2630c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2630c8: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x2630c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2630cc: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x2630ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x2630d0: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x2630d0u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2630d4: 0x0  nop
    ctx->pc = 0x2630d4u;
    // NOP
    // 0x2630d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2630d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2630dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2630dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2630e0:
    // 0x2630e0: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x2630e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2630e4: 0x0  nop
    ctx->pc = 0x2630e4u;
    // NOP
    // 0x2630e8: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x2630E8u;
    {
        const bool branch_taken_0x2630e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2630e8) {
            ctx->pc = 0x263274u;
            goto label_263274;
        }
    }
    ctx->pc = 0x2630F0u;
    // 0x2630f0: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x2630f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2630f4: 0x314fffff  andi        $t7, $t2, 0xFFFF
    ctx->pc = 0x2630f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2630f8: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2630f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x2630fc: 0x1e8082a  slt         $at, $t7, $t0
    ctx->pc = 0x2630fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x263100: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x263100u;
    {
        const bool branch_taken_0x263100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x263100) {
            ctx->pc = 0x263138u;
            goto label_263138;
        }
    }
    ctx->pc = 0x263108u;
    // 0x263108: 0x3148ffff  andi        $t0, $t2, 0xFFFF
    ctx->pc = 0x263108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x26310c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x26310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x263110: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x263110u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x263114: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x263114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x263118: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x263118u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x26311c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x26311cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x263120: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x263120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263124: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x263124u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x263128: 0x3119ffff  andi        $t9, $t0, 0xFFFF
    ctx->pc = 0x263128u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x26312c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26312cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x263130: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263130u;
    {
        const bool branch_taken_0x263130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263130) {
            ctx->pc = 0x263148u;
            goto label_263148;
        }
    }
    ctx->pc = 0x263138u;
label_263138:
    // 0x263138: 0x87840  sll         $t7, $t0, 1
    ctx->pc = 0x263138u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x26313c: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x26313cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x263140: 0x95ef0000  lhu         $t7, 0x0($t7)
    ctx->pc = 0x263140u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x263144: 0x31f9ffff  andi        $t9, $t7, 0xFFFF
    ctx->pc = 0x263144u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
label_263148:
    // 0x263148: 0x7200006  bltz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x263148u;
    {
        const bool branch_taken_0x263148 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x263148) {
            ctx->pc = 0x263164u;
            goto label_263164;
        }
    }
    ctx->pc = 0x263150u;
    // 0x263150: 0x44990000  mtc1        $t9, $f0
    ctx->pc = 0x263150u;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263154: 0x0  nop
    ctx->pc = 0x263154u;
    // NOP
    // 0x263158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26315c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26315Cu;
    {
        const bool branch_taken_0x26315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26315c) {
            ctx->pc = 0x263180u;
            goto label_263180;
        }
    }
    ctx->pc = 0x263164u;
label_263164:
    // 0x263164: 0x19c042  srl         $t8, $t9, 1
    ctx->pc = 0x263164u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 25), 1));
    // 0x263168: 0x332f0001  andi        $t7, $t9, 0x1
    ctx->pc = 0x263168u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x26316c: 0x30fc025  or          $t8, $t8, $t7
    ctx->pc = 0x26316cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
    // 0x263170: 0x44980000  mtc1        $t8, $f0
    ctx->pc = 0x263170u;
    { uint32_t bits = GPR_U32(ctx, 24); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263174: 0x0  nop
    ctx->pc = 0x263174u;
    // NOP
    // 0x263178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26317c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26317cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_263180:
    // 0x263180: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x263180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263184: 0x0  nop
    ctx->pc = 0x263184u;
    // NOP
    // 0x263188: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x263188u;
    {
        const bool branch_taken_0x263188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263188) {
            ctx->pc = 0x263274u;
            goto label_263274;
        }
    }
    ctx->pc = 0x263190u;
    // 0x263190: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x263190u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263194: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x263194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x263198: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x263198u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26319c: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26319Cu;
    {
        const bool branch_taken_0x26319c = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x26319c) {
            ctx->pc = 0x2631B8u;
            goto label_2631b8;
        }
    }
    ctx->pc = 0x2631A4u;
    // 0x2631a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2631a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2631a8: 0x0  nop
    ctx->pc = 0x2631a8u;
    // NOP
    // 0x2631ac: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x2631acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x2631b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2631B0u;
    {
        const bool branch_taken_0x2631b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2631b0) {
            ctx->pc = 0x2631D4u;
            goto label_2631d4;
        }
    }
    ctx->pc = 0x2631B8u;
label_2631b8:
    // 0x2631b8: 0x95042  srl         $t2, $t1, 1
    ctx->pc = 0x2631b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2631bc: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x2631bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2631c0: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x2631c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2631c4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2631c4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2631c8: 0x0  nop
    ctx->pc = 0x2631c8u;
    // NOP
    // 0x2631cc: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x2631ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x2631d0: 0x460b5ac0  add.s       $f11, $f11, $f11
    ctx->pc = 0x2631d0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
label_2631d4:
    // 0x2631d4: 0x7200006  bltz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x2631D4u;
    {
        const bool branch_taken_0x2631d4 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x2631d4) {
            ctx->pc = 0x2631F0u;
            goto label_2631f0;
        }
    }
    ctx->pc = 0x2631DCu;
    // 0x2631dc: 0x44990000  mtc1        $t9, $f0
    ctx->pc = 0x2631dcu;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2631e0: 0x0  nop
    ctx->pc = 0x2631e0u;
    // NOP
    // 0x2631e4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2631e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2631e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2631E8u;
    {
        const bool branch_taken_0x2631e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2631e8) {
            ctx->pc = 0x26320Cu;
            goto label_26320c;
        }
    }
    ctx->pc = 0x2631F0u;
label_2631f0:
    // 0x2631f0: 0x195042  srl         $t2, $t9, 1
    ctx->pc = 0x2631f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 25), 1));
    // 0x2631f4: 0x33290001  andi        $t1, $t9, 0x1
    ctx->pc = 0x2631f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x2631f8: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x2631f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2631fc: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2631fcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263200: 0x0  nop
    ctx->pc = 0x263200u;
    // NOP
    // 0x263204: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x263204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x263208: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x263208u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_26320c:
    // 0x26320c: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x26320cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263210: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x263210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x263214: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x263214u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x263218: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x263218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x26321c: 0xc52d0000  lwc1        $f13, 0x0($t1)
    ctx->pc = 0x26321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x263220: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x263220u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x263224: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x263224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x263228: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x263228u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x26322c: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x26322cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x263230: 0xc52e0000  lwc1        $f14, 0x0($t1)
    ctx->pc = 0x263230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x263234: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x263234u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263238: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x263238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x26323c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x26323cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x263240: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x263240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x263244: 0xc52f0008  lwc1        $f15, 0x8($t1)
    ctx->pc = 0x263244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x263248: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x263248u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x26324c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x26324cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x263250: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x263250u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x263254: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x263254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x263258: 0xc5100004  lwc1        $f16, 0x4($t0)
    ctx->pc = 0x263258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x26325c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x26325cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263260: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x263260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x263264: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263268: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x263268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x26326c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26326Cu;
    {
        const bool branch_taken_0x26326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26326c) {
            ctx->pc = 0x2632D0u;
            goto label_2632d0;
        }
    }
    ctx->pc = 0x263274u;
label_263274:
    // 0x263274: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x263274u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x263278: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x263278u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x26327c: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x26327cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x263280: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263280u;
    {
        const bool branch_taken_0x263280 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x263280) {
            ctx->pc = 0x2632A4u;
            goto label_2632a4;
        }
    }
    ctx->pc = 0x263288u;
    // 0x263288: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26328c: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26328Cu;
    {
        const bool branch_taken_0x26328c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26328c) {
            ctx->pc = 0x2632C0u;
            goto label_2632c0;
        }
    }
    ctx->pc = 0x263294u;
    // 0x263294: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x263294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x263298: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26329c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26329Cu;
    {
        const bool branch_taken_0x26329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26329c) {
            ctx->pc = 0x2632C0u;
            goto label_2632c0;
        }
    }
    ctx->pc = 0x2632A4u;
label_2632a4:
    // 0x2632a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2632a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2632a8: 0x3148ffff  andi        $t0, $t2, 0xFFFF
    ctx->pc = 0x2632a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2632ac: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2632acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2632b0: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x2632b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2632b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2632B4u;
    {
        const bool branch_taken_0x2632b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2632b4) {
            ctx->pc = 0x2632C0u;
            goto label_2632c0;
        }
    }
    ctx->pc = 0x2632BCu;
    // 0x2632bc: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2632bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2632c0:
    // 0x2632c0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2632c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2632c4: 0x0  nop
    ctx->pc = 0x2632c4u;
    // NOP
label_2632c8:
    // 0x2632c8: 0x1520ff52  bnez        $t1, . + 4 + (-0xAE << 2)
    ctx->pc = 0x2632C8u;
    {
        const bool branch_taken_0x2632c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632c8) {
            ctx->pc = 0x263014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263014;
        }
    }
    ctx->pc = 0x2632D0u;
label_2632d0:
    // 0x2632d0: 0x1560001b  bnez        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2632D0u;
    {
        const bool branch_taken_0x2632d0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632d0) {
            ctx->pc = 0x263340u;
            goto label_263340;
        }
    }
    ctx->pc = 0x2632D8u;
    // 0x2632d8: 0x460b5001  sub.s       $f0, $f10, $f11
    ctx->pc = 0x2632d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[11]);
    // 0x2632dc: 0x460b6041  sub.s       $f1, $f12, $f11
    ctx->pc = 0x2632dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x2632e0: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2632e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2632e4: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x2632e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x2632e8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2632e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2632ec: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2632ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2632f0: 0x46011942  mul.s       $f5, $f3, $f1
    ctx->pc = 0x2632f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2632f4: 0x46001982  mul.s       $f6, $f3, $f0
    ctx->pc = 0x2632f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2632f8: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x2632f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2632fc: 0x460131c2  mul.s       $f7, $f6, $f1
    ctx->pc = 0x2632fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x263300: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x263300u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x263304: 0x46021a02  mul.s       $f8, $f3, $f2
    ctx->pc = 0x263304u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x263308: 0x46084240  add.s       $f9, $f8, $f8
    ctx->pc = 0x263308u;
    ctx->f[9] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x26330c: 0x46084a00  add.s       $f8, $f9, $f8
    ctx->pc = 0x26330cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x263310: 0x46083a41  sub.s       $f9, $f7, $f8
    ctx->pc = 0x263310u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x263314: 0x46044a40  add.s       $f9, $f9, $f4
    ctx->pc = 0x263314u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x263318: 0x46074041  sub.s       $f1, $f8, $f7
    ctx->pc = 0x263318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x26331c: 0x46053081  sub.s       $f2, $f6, $f5
    ctx->pc = 0x26331cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x263320: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x263320u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x263324: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x263324u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263328: 0x460530c1  sub.s       $f3, $f6, $f5
    ctx->pc = 0x263328u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x26332c: 0x4609681a  mula.s      $f13, $f9
    ctx->pc = 0x26332cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[9]));
    // 0x263330: 0x4601701e  madda.s     $f14, $f1
    ctx->pc = 0x263330u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[14], ctx->f[1])));
    // 0x263334: 0x4602781e  madda.s     $f15, $f2
    ctx->pc = 0x263334u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[15], ctx->f[2])));
    // 0x263338: 0x4603805c  madd.s      $f1, $f16, $f3
    ctx->pc = 0x263338u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[16], ctx->f[3]));
    // 0x26333c: 0x0  nop
    ctx->pc = 0x26333cu;
    // NOP
label_263340:
    // 0x263340: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x263340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x263344: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263348: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x263348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26334c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26334Cu;
    {
        const bool branch_taken_0x26334c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26334c) {
            ctx->pc = 0x2633D0u;
            goto label_2633d0;
        }
    }
    ctx->pc = 0x263354u;
    // 0x263354: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263354u;
    {
        const bool branch_taken_0x263354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263354) {
            ctx->pc = 0x263370u;
            goto label_263370;
        }
    }
    ctx->pc = 0x26335Cu;
label_26335c:
    // 0x26335c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x26335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x263360: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263368: 0x0  nop
    ctx->pc = 0x263368u;
    // NOP
    // 0x26336c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26336cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263370:
    // 0x263370: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x263370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x263374: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26337c: 0x0  nop
    ctx->pc = 0x26337cu;
    // NOP
    // 0x263380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x263380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263384: 0x0  nop
    ctx->pc = 0x263384u;
    // NOP
    // 0x263388: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x263388u;
    {
        const bool branch_taken_0x263388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263388) {
            ctx->pc = 0x26335Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26335c;
        }
    }
    ctx->pc = 0x263390u;
    // 0x263390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x263390u;
    {
        const bool branch_taken_0x263390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263390) {
            ctx->pc = 0x2633B0u;
            goto label_2633b0;
        }
    }
    ctx->pc = 0x263398u;
label_263398:
    // 0x263398: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x263398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x26339c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x26339cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2633a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2633a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2633a4: 0x0  nop
    ctx->pc = 0x2633a4u;
    // NOP
    // 0x2633a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2633a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2633ac: 0x0  nop
    ctx->pc = 0x2633acu;
    // NOP
label_2633b0:
    // 0x2633b0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x2633b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x2633b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2633b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2633b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2633b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2633bc: 0x0  nop
    ctx->pc = 0x2633bcu;
    // NOP
    // 0x2633c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2633c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2633c4: 0x0  nop
    ctx->pc = 0x2633c4u;
    // NOP
    // 0x2633c8: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
    ctx->pc = 0x2633C8u;
    {
        const bool branch_taken_0x2633c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2633c8) {
            ctx->pc = 0x263398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263398;
        }
    }
    ctx->pc = 0x2633D0u;
label_2633d0:
    // 0x2633d0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2633d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2633d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2633d8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2633d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2633dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2633dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2633e0:
    // 0x2633e0: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x2633e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2633e4: 0x1460feb0  bnez        $v1, . + 4 + (-0x150 << 2)
    ctx->pc = 0x2633E4u;
    {
        const bool branch_taken_0x2633e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2633e4) {
            ctx->pc = 0x262EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262ea8;
        }
    }
    ctx->pc = 0x2633ECu;
    // 0x2633ec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2633ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2633f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2633F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2633F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2633F8u;
}
