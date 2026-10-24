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

// Function: maketable
// Address: 0x2909a0 - 0x290da0
void maketable_0x2909a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("maketable_0x2909a0");
#endif

    switch (ctx->pc) {
        case 0x2909f4u: goto label_2909f4;
        case 0x290b10u: goto label_290b10;
        case 0x290b50u: goto label_290b50;
        case 0x290b90u: goto label_290b90;
        case 0x290bacu: goto label_290bac;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bccu: goto label_290bcc;
        case 0x290bd8u: goto label_290bd8;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c5cu: goto label_290c5c;
        case 0x290c6cu: goto label_290c6c;
        case 0x290c78u: goto label_290c78;
        case 0x290d14u: goto label_290d14;
        default: break;
    }

    ctx->pc = 0x2909a0u;

    // 0x2909a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2909a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2909a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2909a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2909a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2909a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2909ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2909acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2909b0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2909b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2909b4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2909b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2909b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2909b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2909bc: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x2909bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x2909c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2909c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2909c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2909c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2909c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2909c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2909cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2909ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2909d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2909d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2909d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2909d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2909d8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2909d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2909dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2909dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2909e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2909e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2909e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2909e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2909e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2909e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2909ec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2909ECu;
    {
        const bool branch_taken_0x2909ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909ec) {
            ctx->pc = 0x290A90u;
            goto label_290a90;
        }
    }
    ctx->pc = 0x2909F4u;
label_2909f4:
    // 0x2909f4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2909f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2909f8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2909f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2909fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290a00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a04: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290a08: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x290a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290a10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290a18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x290a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290a1c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a20: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290a24: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290a28: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a2c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290a30: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a34: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x290a34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290a38: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x290a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290a3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290a44: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x290a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290a4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290a54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290a58: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x290a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290a5c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290a60: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290a64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290a6c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x290a6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290a70: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a74: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x290a74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290a78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290a7c: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x290a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x290a80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290a84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290a88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a8c: 0x0  nop
    ctx->pc = 0x290a8cu;
    // NOP
label_290a90:
    // 0x290a90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290a94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290a98: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x290a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x290a9c: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x290A9Cu;
    {
        const bool branch_taken_0x290a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290a9c) {
            ctx->pc = 0x2909F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2909f4;
        }
    }
    ctx->pc = 0x290AA4u;
    // 0x290aa4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290aa8: 0xc4212a08  lwc1        $f1, 0x2A08($at)
    ctx->pc = 0x290aa8u;
    { uint32_t bits = FAST_READ32(0x622A08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290aac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290ab0: 0xc4202a04  lwc1        $f0, 0x2A04($at)
    ctx->pc = 0x290ab0u;
    { uint32_t bits = FAST_READ32(0x622A04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ab4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x290ab4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290abc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290ac0: 0xc42129b0  lwc1        $f1, 0x29B0($at)
    ctx->pc = 0x290ac0u;
    { uint32_t bits = FAST_READ32(0x6229B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ac4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290acc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x290accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x290ad0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290ad4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x290ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x290ad8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x290ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290adc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x290adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x290ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290ae4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ae8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290ae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290aec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x290af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290af4: 0x0  nop
    ctx->pc = 0x290af4u;
    // NOP
    // 0x290af8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290afc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290b00: 0xe4202a04  swc1        $f0, 0x2A04($at)
    ctx->pc = 0x290b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A04u, _value); } while (0); }
    // 0x290b04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x290b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b08: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x290B08u;
    {
        const bool branch_taken_0x290b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b08) {
            ctx->pc = 0x290C98u;
            goto label_290c98;
        }
    }
    ctx->pc = 0x290B10u;
label_290b10:
    // 0x290b10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290b14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b18: 0x244229b0  addiu       $v0, $v0, 0x29B0
    ctx->pc = 0x290b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
    // 0x290b1c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x290b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290b24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b28: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x290b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x290b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b30: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x290b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b38: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x290b38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290b3c: 0x0  nop
    ctx->pc = 0x290b3cu;
    // NOP
    // 0x290b40: 0x0  nop
    ctx->pc = 0x290b40u;
    // NOP
    // 0x290b44: 0x0  nop
    ctx->pc = 0x290b44u;
    // NOP
    // 0x290b48: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290B48u;
    SET_GPR_U32(ctx, 31, 0x290B50u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290B48u, 0x290B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B50u;
label_290b50:
    // 0x290b50: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x290b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x290b54: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x290b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x290b58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290b5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b60: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x290b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x290b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b6c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290b70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290b74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b78: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x290b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x290b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b84: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x290b84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290b88: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290B88u;
    SET_GPR_U32(ctx, 31, 0x290B90u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290B88u, 0x290B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B90u;
label_290b90:
    // 0x290b90: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x290b90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290b94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290b98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290ba0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x290ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ba4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290BA4u;
    SET_GPR_U32(ctx, 31, 0x290BACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290BA4u, 0x290BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BACu;
label_290bac:
    // 0x290bac: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x290bacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290bb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290bb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290bb4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x290BB4u;
    SET_GPR_U32(ctx, 31, 0x290BBCu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x290BB4u, 0x290BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BBCu;
label_290bbc:
    // 0x290bbc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x290bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x290bc0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290bc4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x290BC4u;
    SET_GPR_U32(ctx, 31, 0x290BCCu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x290BC4u, 0x290BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BCCu;
label_290bcc:
    // 0x290bcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290bd0: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x290BD0u;
    SET_GPR_U32(ctx, 31, 0x290BD8u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x290BD0u, 0x290BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BD8u;
label_290bd8:
    // 0x290bd8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290bdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290be0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290be8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x290be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x290bec: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x290becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x290bf0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290bf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x290bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290bfc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x290c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290c0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290c10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290c14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x290c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x290c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290c1c: 0x0  nop
    ctx->pc = 0x290c1cu;
    // NOP
    // 0x290c20: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x290c20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290c24: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290C24u;
    SET_GPR_U32(ctx, 31, 0x290C2Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290C24u, 0x290C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C2Cu;
label_290c2c:
    // 0x290c2c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x290c2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c30: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290c34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290c38: 0x244229b0  addiu       $v0, $v0, 0x29B0
    ctx->pc = 0x290c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
    // 0x290c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290c40: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x290c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290c44: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290C44u;
    SET_GPR_U32(ctx, 31, 0x290C4Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290C44u, 0x290C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C4Cu;
label_290c4c:
    // 0x290c4c: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x290c4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290c50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c54: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x290C54u;
    SET_GPR_U32(ctx, 31, 0x290C5Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x290C54u, 0x290C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C5Cu;
label_290c5c:
    // 0x290c5c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x290c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x290c60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290c60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c64: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x290C64u;
    SET_GPR_U32(ctx, 31, 0x290C6Cu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x290C64u, 0x290C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C6Cu;
label_290c6c:
    // 0x290c6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c70: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x290C70u;
    SET_GPR_U32(ctx, 31, 0x290C78u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x290C70u, 0x290C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C78u;
label_290c78:
    // 0x290c78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290c7c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x290c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290c80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290c84: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x290c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x290c88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290c8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290c90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290c94: 0x0  nop
    ctx->pc = 0x290c94u;
    // NOP
label_290c98:
    // 0x290c98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290c9c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x290c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290ca0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x290ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x290ca4: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x290CA4u;
    {
        const bool branch_taken_0x290ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290ca4) {
            ctx->pc = 0x290B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290b10;
        }
    }
    ctx->pc = 0x290CACu;
    // 0x290cac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290cb0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x290cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290cb4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290cb8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290cbc: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290cc0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x290cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290cc4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290cc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290ccc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290cd0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290cd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290cd8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x290cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290cdc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ce0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290ce4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290ce8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290cec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290cf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290cf8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290cfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x290cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290d00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290d04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290d08: 0x2470fffe  addiu       $s0, $v1, -0x2
    ctx->pc = 0x290d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x290d0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x290D0Cu;
    {
        const bool branch_taken_0x290d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d0c) {
            ctx->pc = 0x290D80u;
            goto label_290d80;
        }
    }
    ctx->pc = 0x290D14u;
label_290d14:
    // 0x290d14: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290d18: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x290d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290d1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290d20: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d24: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290d2c: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x290d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
    // 0x290d30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d34: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x290d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290d38: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x290d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290d40: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290d48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d50: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x290d50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290d54: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d58: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290d5c: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x290d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x290d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290d68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x290d68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290d6c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x290d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x290d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x290d78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290d7c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x290d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_290d80:
    // 0x290d80: 0x1e00ffe4  bgtz        $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x290D80u;
    {
        const bool branch_taken_0x290d80 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x290d80) {
            ctx->pc = 0x290D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290d14;
        }
    }
    ctx->pc = 0x290D88u;
    // 0x290d88: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x290d88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290d94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x290d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290d98: 0x3e00008  jr          $ra
    ctx->pc = 0x290D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290DA0u;
}
