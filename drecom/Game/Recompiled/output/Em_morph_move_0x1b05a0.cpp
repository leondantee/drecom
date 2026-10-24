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

// Function: Em_morph_move
// Address: 0x1b05a0 - 0x1b0890
void Em_morph_move_0x1b05a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_morph_move_0x1b05a0");
#endif

    switch (ctx->pc) {
        case 0x1b0834u: goto label_1b0834;
        case 0x1b0874u: goto label_1b0874;
        default: break;
    }

    ctx->pc = 0x1b05a0u;

    // 0x1b05a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b05a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1b05a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b05a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b05a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b05ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b05acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b05b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b05b4: 0xa7a50038  sh          $a1, 0x38($sp)
    ctx->pc = 0x1b05b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b05b8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1b05b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b05bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b05bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b05c0: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1b05c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b05c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1b05c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b05c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b05cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b05d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b05d4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1b05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1b05d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b05dc: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x1b05dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b05e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b05e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b05e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b05e8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B05E8u;
    {
        const bool branch_taken_0x1b05e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05e8) {
            ctx->pc = 0x1B06ACu;
            goto label_1b06ac;
        }
    }
    ctx->pc = 0x1B05F0u;
    // 0x1b05f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b05f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b05f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b05f8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B05F8u;
    {
        const bool branch_taken_0x1b05f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05f8) {
            ctx->pc = 0x1B0654u;
            goto label_1b0654;
        }
    }
    ctx->pc = 0x1B0600u;
    // 0x1b0600: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b0600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0604: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0608: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b0608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b060c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0610: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0618: 0x0  nop
    ctx->pc = 0x1b0618u;
    // NOP
    // 0x1b061c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b061cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0620: 0x0  nop
    ctx->pc = 0x1b0620u;
    // NOP
    // 0x1b0624: 0x45000067  bc1f        . + 4 + (0x67 << 2)
    ctx->pc = 0x1B0624u;
    {
        const bool branch_taken_0x1b0624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0624) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B062Cu;
    // 0x1b062c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b062cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0634: 0x0  nop
    ctx->pc = 0x1b0634u;
    // NOP
    // 0x1b0638: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b063c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b0640: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1b0640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1b0644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b0644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b0648: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b0648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b064c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1B064Cu;
    {
        const bool branch_taken_0x1b064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b064c) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B0654u;
label_1b0654:
    // 0x1b0654: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0658: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b065c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b065cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0660: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0664: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0668: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b066c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0670: 0x0  nop
    ctx->pc = 0x1b0670u;
    // NOP
    // 0x1b0674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0678: 0x0  nop
    ctx->pc = 0x1b0678u;
    // NOP
    // 0x1b067c: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1B067Cu;
    {
        const bool branch_taken_0x1b067c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b067c) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B0684u;
    // 0x1b0684: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b068c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0690: 0x0  nop
    ctx->pc = 0x1b0690u;
    // NOP
    // 0x1b0694: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0698: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b069c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b06a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b06a4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1B06A4u;
    {
        const bool branch_taken_0x1b06a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06a4) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B06ACu;
label_1b06ac:
    // 0x1b06ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b06acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b06b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b06b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B06B4u;
    {
        const bool branch_taken_0x1b06b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06b4) {
            ctx->pc = 0x1B0748u;
            goto label_1b0748;
        }
    }
    ctx->pc = 0x1B06BCu;
    // 0x1b06bc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b06bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b06c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b06c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b06c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b06c8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b06c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b06cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b06d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b06d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B06D4u;
    {
        const bool branch_taken_0x1b06d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06d4) {
            ctx->pc = 0x1B0714u;
            goto label_1b0714;
        }
    }
    ctx->pc = 0x1B06DCu;
    // 0x1b06dc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b06e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b06e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b06e4: 0x0  nop
    ctx->pc = 0x1b06e4u;
    // NOP
    // 0x1b06e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b06e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b06ec: 0x0  nop
    ctx->pc = 0x1b06ecu;
    // NOP
    // 0x1b06f0: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x1B06F0u;
    {
        const bool branch_taken_0x1b06f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b06f0) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B06F8u;
    // 0x1b06f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b06fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b06fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0700: 0x0  nop
    ctx->pc = 0x1b0700u;
    // NOP
    // 0x1b0704: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0708: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b070c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1B070Cu;
    {
        const bool branch_taken_0x1b070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b070c) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B0714u;
label_1b0714:
    // 0x1b0714: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b071c: 0x0  nop
    ctx->pc = 0x1b071cu;
    // NOP
    // 0x1b0720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b0720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0724: 0x0  nop
    ctx->pc = 0x1b0724u;
    // NOP
    // 0x1b0728: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1B0728u;
    {
        const bool branch_taken_0x1b0728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0728) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B0730u;
    // 0x1b0730: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0734: 0x0  nop
    ctx->pc = 0x1b0734u;
    // NOP
    // 0x1b0738: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b073c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b073cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0740: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B0740u;
    {
        const bool branch_taken_0x1b0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0740) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B0748u;
label_1b0748:
    // 0x1b0748: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b0748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b074c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0754: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0758: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b075c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b0760: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B0760u;
    {
        const bool branch_taken_0x1b0760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0760) {
            ctx->pc = 0x1B07A0u;
            goto label_1b07a0;
        }
    }
    ctx->pc = 0x1B0768u;
    // 0x1b0768: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b076c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0774: 0x0  nop
    ctx->pc = 0x1b0774u;
    // NOP
    // 0x1b0778: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b077c: 0x0  nop
    ctx->pc = 0x1b077cu;
    // NOP
    // 0x1b0780: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0780u;
    {
        const bool branch_taken_0x1b0780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0780) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B0788u;
    // 0x1b0788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b078c: 0x0  nop
    ctx->pc = 0x1b078cu;
    // NOP
    // 0x1b0790: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0794: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0798: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B0798u;
    {
        const bool branch_taken_0x1b0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0798) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B07A0u;
label_1b07a0:
    // 0x1b07a0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07a4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b07a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b07a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b07ac: 0x0  nop
    ctx->pc = 0x1b07acu;
    // NOP
    // 0x1b07b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B07B0u;
    {
        const bool branch_taken_0x1b07b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b07b0) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B07B8u;
    // 0x1b07b8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b07bc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b07bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b07c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b07c4:
    // 0x1b07c4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b07c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b07c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b07cc: 0x0  nop
    ctx->pc = 0x1b07ccu;
    // NOP
    // 0x1b07d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b07d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b07d4: 0x0  nop
    ctx->pc = 0x1b07d4u;
    // NOP
    // 0x1b07d8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B07D8u;
    {
        const bool branch_taken_0x1b07d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b07d8) {
            ctx->pc = 0x1B083Cu;
            goto label_1b083c;
        }
    }
    ctx->pc = 0x1B07E0u;
    // 0x1b07e0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07e4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1b07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1b07e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b07e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b07ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b07ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b07f0: 0x0  nop
    ctx->pc = 0x1b07f0u;
    // NOP
    // 0x1b07f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b07f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b07f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b07f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b07fc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0804: 0x0  nop
    ctx->pc = 0x1b0804u;
    // NOP
    // 0x1b0808: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b080c: 0x0  nop
    ctx->pc = 0x1b080cu;
    // NOP
    // 0x1b0810: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0810u;
    {
        const bool branch_taken_0x1b0810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0810) {
            ctx->pc = 0x1B0824u;
            goto label_1b0824;
        }
    }
    ctx->pc = 0x1B0818u;
    // 0x1b0818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b081c: 0x0  nop
    ctx->pc = 0x1b081cu;
    // NOP
    // 0x1b0820: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1b0824:
    // 0x1b0824: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0828: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1b0828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b082c: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1B082Cu;
    SET_GPR_U32(ctx, 31, 0x1B0834u);
    ctx->pc = 0x1B0C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0C40u, 0x1B082Cu, 0x1B0834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0834u;
label_1b0834:
    // 0x1b0834: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B0834u;
    {
        const bool branch_taken_0x1b0834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0834) {
            ctx->pc = 0x1B0874u;
            goto label_1b0874;
        }
    }
    ctx->pc = 0x1B083Cu;
label_1b083c:
    // 0x1b083c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0840: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x1b0840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0844: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0848: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b084c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0850: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x1b0850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1b0854: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0858: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b085c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0860: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1b0860u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0864: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1b0864u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0868: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x1b0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b086c: 0xc06c2a4  jal         func_1B0A90
    ctx->pc = 0x1B086Cu;
    SET_GPR_U32(ctx, 31, 0x1B0874u);
    ctx->pc = 0x1B0A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0A90u, 0x1B086Cu, 0x1B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0874u;
label_1b0874:
    // 0x1b0874: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x1b0874u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0878: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1b0878u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b087c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b087cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0884: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b0884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b0888: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0890u;
}
