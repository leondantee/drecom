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

// Function: Check_footing
// Address: 0x15fc40 - 0x16049c
void Check_footing_0x15fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_footing_0x15fc40");
#endif

    switch (ctx->pc) {
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcf8u: goto label_15fcf8;
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fef0u: goto label_15fef0;
        case 0x15ff34u: goto label_15ff34;
        case 0x160004u: goto label_160004;
        case 0x160048u: goto label_160048;
        case 0x1600d4u: goto label_1600d4;
        case 0x16019cu: goto label_16019c;
        case 0x16024cu: goto label_16024c;
        case 0x16027cu: goto label_16027c;
        case 0x1602e0u: goto label_1602e0;
        case 0x160338u: goto label_160338;
        case 0x160368u: goto label_160368;
        case 0x1603d0u: goto label_1603d0;
        case 0x16042cu: goto label_16042c;
        case 0x16045cu: goto label_16045c;
        default: break;
    }

    ctx->pc = 0x15fc40u;

    // 0x15fc40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15fc44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x15fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x15fc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fc50: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x15fc54: 0xe7ac0088  swc1        $f12, 0x88($sp)
    ctx->pc = 0x15fc54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x15fc58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fc58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fc5c: 0x0  nop
    ctx->pc = 0x15fc5cu;
    // NOP
    // 0x15fc60: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15fc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15fc64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fc68: 0x0  nop
    ctx->pc = 0x15fc68u;
    // NOP
    // 0x15fc6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fc70: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15fc74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15fc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fc78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15fc7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fc80: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fc84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15fc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15fc88: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15fc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15fc8c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fc90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fc94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fc98: 0x0  nop
    ctx->pc = 0x15fc98u;
    // NOP
    // 0x15fc9c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fca0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fca4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fca8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fcac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FCACu;
    SET_GPR_U32(ctx, 31, 0x15FCB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FCB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FCB4u) { return; }
    ctx->pc = 0x15FCB4u;
label_15fcb4:
    // 0x15fcb4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fcb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15fcb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fcbc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fcc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15fcc4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x15fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fcc8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x15fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x15fccc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fcd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fcd4: 0x0  nop
    ctx->pc = 0x15fcd4u;
    // NOP
    // 0x15fcd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15fcd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15fcdc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fce0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fce4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fce8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fcec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15fcecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fcf0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FCF0u;
    SET_GPR_U32(ctx, 31, 0x15FCF8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FCF0u, 0x15FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCF8u;
label_15fcf8:
    // 0x15fcf8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15fcf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15fcfc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FCFCu;
    {
        const bool branch_taken_0x15fcfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fcfc) {
            ctx->pc = 0x15FD18u;
            goto label_15fd18;
        }
    }
    ctx->pc = 0x15FD04u;
    // 0x15fd04: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fd08: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd10: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x15FD10u;
    {
        const bool branch_taken_0x15fd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd10) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FD18u;
label_15fd18:
    // 0x15fd18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fd1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15fd20: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FD20u;
    {
        const bool branch_taken_0x15fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fd20) {
            ctx->pc = 0x15FD4Cu;
            goto label_15fd4c;
        }
    }
    ctx->pc = 0x15FD28u;
    // 0x15fd28: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fd2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15fd30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FD30u;
    {
        const bool branch_taken_0x15fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fd30) {
            ctx->pc = 0x15FD4Cu;
            goto label_15fd4c;
        }
    }
    ctx->pc = 0x15FD38u;
    // 0x15fd38: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fd3c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd44: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x15FD44u;
    {
        const bool branch_taken_0x15fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd44) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FD4Cu;
label_15fd4c:
    // 0x15fd4c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fd50: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15fd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15fd54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FD54u;
    {
        const bool branch_taken_0x15fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd54) {
            ctx->pc = 0x15FD70u;
            goto label_15fd70;
        }
    }
    ctx->pc = 0x15FD5Cu;
    // 0x15fd5c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fd60: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd68: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x15FD68u;
    {
        const bool branch_taken_0x15fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd68) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FD70u;
label_15fd70:
    // 0x15fd70: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd74: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15fd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15fd78: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15fd7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15fd80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15fd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15fd84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd88: 0x0  nop
    ctx->pc = 0x15fd88u;
    // NOP
    // 0x15fd8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fd90: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15fd94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15fd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fd98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15fd9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fda0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fda4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15fda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15fda8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15fda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15fdac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15fdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fdb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdb8: 0x0  nop
    ctx->pc = 0x15fdb8u;
    // NOP
    // 0x15fdbc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fdc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fdc4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fdc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fdcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FDCCu;
    SET_GPR_U32(ctx, 31, 0x15FDD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FDD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FDD4u) { return; }
    ctx->pc = 0x15FDD4u;
label_15fdd4:
    // 0x15fdd4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fdd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15fdd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fddc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fde0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15fde4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x15fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fde8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x15fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x15fdec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdf4: 0x0  nop
    ctx->pc = 0x15fdf4u;
    // NOP
    // 0x15fdf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15fdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15fdfc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fe00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fe04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fe08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fe0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15fe0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fe10: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FE10u;
    SET_GPR_U32(ctx, 31, 0x15FE18u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FE10u, 0x15FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE18u;
label_15fe18:
    // 0x15fe18: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15fe18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15fe1c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE1Cu;
    {
        const bool branch_taken_0x15fe1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe1c) {
            ctx->pc = 0x15FE38u;
            goto label_15fe38;
        }
    }
    ctx->pc = 0x15FE24u;
    // 0x15fe24: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fe28: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fe2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe30: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x15FE30u;
    {
        const bool branch_taken_0x15fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe30) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FE38u;
label_15fe38:
    // 0x15fe38: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fe3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15fe40: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FE40u;
    {
        const bool branch_taken_0x15fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe40) {
            ctx->pc = 0x15FE6Cu;
            goto label_15fe6c;
        }
    }
    ctx->pc = 0x15FE48u;
    // 0x15fe48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fe4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15fe50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE50u;
    {
        const bool branch_taken_0x15fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe50) {
            ctx->pc = 0x15FE6Cu;
            goto label_15fe6c;
        }
    }
    ctx->pc = 0x15FE58u;
    // 0x15fe58: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fe5c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fe60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe64: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x15FE64u;
    {
        const bool branch_taken_0x15fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe64) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FE6Cu;
label_15fe6c:
    // 0x15fe6c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fe70: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15fe74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE74u;
    {
        const bool branch_taken_0x15fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe74) {
            ctx->pc = 0x15FE90u;
            goto label_15fe90;
        }
    }
    ctx->pc = 0x15FE7Cu;
    // 0x15fe7c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fe80: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fe84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe88: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x15FE88u;
    {
        const bool branch_taken_0x15fe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe88) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FE90u;
label_15fe90:
    // 0x15fe90: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fe94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fe98: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fe9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15fe9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15fea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fea4: 0x0  nop
    ctx->pc = 0x15fea4u;
    // NOP
    // 0x15fea8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15feac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15feb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15feb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15feb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15feb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15feb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15febc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15fec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15fec4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15fec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15fec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15feccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fed4: 0x0  nop
    ctx->pc = 0x15fed4u;
    // NOP
    // 0x15fed8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15fed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fedc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fee0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fee4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fee8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FEE8u;
    SET_GPR_U32(ctx, 31, 0x15FEF0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FEF0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FEF0u) { return; }
    ctx->pc = 0x15FEF0u;
label_15fef0:
    // 0x15fef0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fef4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15fef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fef8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fefc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15ff00: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x15ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ff04: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x15ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x15ff08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15ff0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff10: 0x0  nop
    ctx->pc = 0x15ff10u;
    // NOP
    // 0x15ff14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15ff14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ff18: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ff18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ff1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ff20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ff24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ff28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15ff28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ff2c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FF2Cu;
    SET_GPR_U32(ctx, 31, 0x15FF34u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FF2Cu, 0x15FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF34u;
label_15ff34:
    // 0x15ff34: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15ff34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15ff38: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF38u;
    {
        const bool branch_taken_0x15ff38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff38) {
            ctx->pc = 0x15FF54u;
            goto label_15ff54;
        }
    }
    ctx->pc = 0x15FF40u;
    // 0x15ff40: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15ff44: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15ff48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff4c: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FF54u;
label_15ff54:
    // 0x15ff54: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15ff58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15ff5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FF5Cu;
    {
        const bool branch_taken_0x15ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff5c) {
            ctx->pc = 0x15FF88u;
            goto label_15ff88;
        }
    }
    ctx->pc = 0x15FF64u;
    // 0x15ff64: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15ff68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15ff6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF6Cu;
    {
        const bool branch_taken_0x15ff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff6c) {
            ctx->pc = 0x15FF88u;
            goto label_15ff88;
        }
    }
    ctx->pc = 0x15FF74u;
    // 0x15ff74: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15ff78: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15ff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15ff7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff80: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x15FF80u;
    {
        const bool branch_taken_0x15ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff80) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FF88u;
label_15ff88:
    // 0x15ff88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15ff8c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15ff90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF90u;
    {
        const bool branch_taken_0x15ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff90) {
            ctx->pc = 0x15FFACu;
            goto label_15ffac;
        }
    }
    ctx->pc = 0x15FF98u;
    // 0x15ff98: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15ff9c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15ffa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ffa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffa4: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x15FFA4u;
    {
        const bool branch_taken_0x15ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffa4) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x15FFACu;
label_15ffac:
    // 0x15ffac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ffb0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15ffb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15ffb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ffb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffb8: 0x0  nop
    ctx->pc = 0x15ffb8u;
    // NOP
    // 0x15ffbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15ffc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ffc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffc4: 0x0  nop
    ctx->pc = 0x15ffc4u;
    // NOP
    // 0x15ffc8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ffc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ffcc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15ffd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ffd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ffd4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ffd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15ffd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ffdc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15ffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ffe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ffe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffe8: 0x0  nop
    ctx->pc = 0x15ffe8u;
    // NOP
    // 0x15ffec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15ffecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fff0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fff4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fff8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fffc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FFFCu;
    SET_GPR_U32(ctx, 31, 0x160004u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x160004u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x160004u) { return; }
    ctx->pc = 0x160004u;
label_160004:
    // 0x160004: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x160004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160008: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x160008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16000c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x16000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160010: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x160010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x160014: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x160014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160018: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x16001c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x16001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x160020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160024: 0x0  nop
    ctx->pc = 0x160024u;
    // NOP
    // 0x160028: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16002c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x16002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160030: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160034: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160038: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16003c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x16003cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160040: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160040u;
    SET_GPR_U32(ctx, 31, 0x160048u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160040u, 0x160048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160048u;
label_160048:
    // 0x160048: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x160048u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16004c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16004Cu;
    {
        const bool branch_taken_0x16004c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16004c) {
            ctx->pc = 0x160068u;
            goto label_160068;
        }
    }
    ctx->pc = 0x160054u;
    // 0x160054: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160058: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16005c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16005cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160060: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x160060u;
    {
        const bool branch_taken_0x160060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160060) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x160068u;
label_160068:
    // 0x160068: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16006c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160070: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160070u;
    {
        const bool branch_taken_0x160070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160070) {
            ctx->pc = 0x16009Cu;
            goto label_16009c;
        }
    }
    ctx->pc = 0x160078u;
    // 0x160078: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16007c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x160080: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160080u;
    {
        const bool branch_taken_0x160080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160080) {
            ctx->pc = 0x16009Cu;
            goto label_16009c;
        }
    }
    ctx->pc = 0x160088u;
    // 0x160088: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16008c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160094: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x160094u;
    {
        const bool branch_taken_0x160094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160094) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x16009Cu;
label_16009c:
    // 0x16009c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1600a0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1600a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1600a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1600A4u;
    {
        const bool branch_taken_0x1600a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600a4) {
            ctx->pc = 0x1600C0u;
            goto label_1600c0;
        }
    }
    ctx->pc = 0x1600ACu;
    // 0x1600ac: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1600b0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1600b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1600b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1600b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1600b8: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1600B8u;
    {
        const bool branch_taken_0x1600b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600b8) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x1600C0u;
label_1600c0:
    // 0x1600c0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1600c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1600c4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1600c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1600c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1600cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1600CCu;
    {
        const bool branch_taken_0x1600cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600cc) {
            ctx->pc = 0x160180u;
            goto label_160180;
        }
    }
    ctx->pc = 0x1600D4u;
label_1600d4:
    // 0x1600d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1600d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1600dc: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1600dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1600e0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1600e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1600e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1600e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1600e8: 0x0  nop
    ctx->pc = 0x1600e8u;
    // NOP
    // 0x1600ec: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1600ECu;
    {
        const bool branch_taken_0x1600ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1600ec) {
            ctx->pc = 0x160138u;
            goto label_160138;
        }
    }
    ctx->pc = 0x1600F4u;
    // 0x1600f4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1600f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1600f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1600f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1600fc: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1600fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160100: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x160100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x160104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160108: 0x0  nop
    ctx->pc = 0x160108u;
    // NOP
    // 0x16010c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x16010cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x160110: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160114: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x160114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160118: 0x0  nop
    ctx->pc = 0x160118u;
    // NOP
    // 0x16011c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x16011Cu;
    {
        const bool branch_taken_0x16011c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16011c) {
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x160124u;
    // 0x160124: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160128: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16012c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16012cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160130: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x160130u;
    {
        const bool branch_taken_0x160130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160130) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x160138u;
label_160138:
    // 0x160138: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x160138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16013c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x160140: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x160140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160144: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x160148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16014c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x16014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160150: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160154: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x160154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160158: 0x0  nop
    ctx->pc = 0x160158u;
    // NOP
    // 0x16015c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16015Cu;
    {
        const bool branch_taken_0x16015c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16015c) {
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x160164u;
    // 0x160164: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160168: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16016c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160170: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x160170u;
    {
        const bool branch_taken_0x160170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160170) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x160178u;
label_160178:
    // 0x160178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16017c: 0x0  nop
    ctx->pc = 0x16017cu;
    // NOP
label_160180:
    // 0x160180: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x160180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x160184: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x160184u;
    {
        const bool branch_taken_0x160184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160184) {
            ctx->pc = 0x1600D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1600d4;
        }
    }
    ctx->pc = 0x16018Cu;
    // 0x16018c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160190: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x160194: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x160194u;
    SET_GPR_U32(ctx, 31, 0x16019Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x160194u, 0x16019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16019Cu;
label_16019c:
    // 0x16019c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x16019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1601a0: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1601a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1601a4: 0x3c0243e7  lui         $v0, 0x43E7
    ctx->pc = 0x1601a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17383 << 16));
    // 0x1601a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1601a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1601ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1601acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1601b0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1601b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1601b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1601b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1601b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1601b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1601bc: 0x0  nop
    ctx->pc = 0x1601bcu;
    // NOP
    // 0x1601c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1601C0u;
    {
        const bool branch_taken_0x1601c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1601c0) {
            ctx->pc = 0x1601DCu;
            goto label_1601dc;
        }
    }
    ctx->pc = 0x1601C8u;
    // 0x1601c8: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1601cc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1601ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1601d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1601d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601d4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1601D4u;
    {
        const bool branch_taken_0x1601d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601d4) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x1601DCu;
label_1601dc:
    // 0x1601dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1601e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1601e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1601e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1601e8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1601ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1601ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1601f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1601f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601f4: 0x0  nop
    ctx->pc = 0x1601f4u;
    // NOP
    // 0x1601f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1601f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1601fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1601fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160200: 0x0  nop
    ctx->pc = 0x160200u;
    // NOP
    // 0x160204: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160208: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x16020c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16020cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160210: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x160210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x160214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160218: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x160218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16021c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160220: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x160220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160224: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x160224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x160228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16022c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160230: 0x0  nop
    ctx->pc = 0x160230u;
    // NOP
    // 0x160234: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160238: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16023c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160240: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160244: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x160244u;
    SET_GPR_U32(ctx, 31, 0x16024Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16024Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16024Cu) { return; }
    ctx->pc = 0x16024Cu;
label_16024c:
    // 0x16024c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x160250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160254: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16025c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x16025cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160260: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x160260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160264: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160268: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16026c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16026cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160270: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x160270u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160274: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160274u;
    SET_GPR_U32(ctx, 31, 0x16027Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160274u, 0x16027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16027Cu;
label_16027c:
    // 0x16027c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x16027cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x160280: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160280u;
    {
        const bool branch_taken_0x160280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160280) {
            ctx->pc = 0x16029Cu;
            goto label_16029c;
        }
    }
    ctx->pc = 0x160288u;
    // 0x160288: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16028c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160294: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x160294u;
    {
        const bool branch_taken_0x160294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160294) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x16029Cu;
label_16029c:
    // 0x16029c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1602a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1602a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1602a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602a8: 0x0  nop
    ctx->pc = 0x1602a8u;
    // NOP
    // 0x1602ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1602acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1602b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1602b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602b4: 0x0  nop
    ctx->pc = 0x1602b4u;
    // NOP
    // 0x1602b8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1602b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1602bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1602c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1602c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602c4: 0x0  nop
    ctx->pc = 0x1602c4u;
    // NOP
    // 0x1602c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1602c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1602cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1602d0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1602d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1602d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1602d8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1602D8u;
    SET_GPR_U32(ctx, 31, 0x1602E0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1602E0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1602E0u) { return; }
    ctx->pc = 0x1602E0u;
label_1602e0:
    // 0x1602e0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1602e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1602e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1602e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1602e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1602ec: 0x0  nop
    ctx->pc = 0x1602ecu;
    // NOP
    // 0x1602f0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1602f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1602f4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1602f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1602f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1602f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1602fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x160300: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160304: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x160304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160308: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x160308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16030c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16030cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160310: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x160310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x160314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x160318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16031c: 0x0  nop
    ctx->pc = 0x16031cu;
    // NOP
    // 0x160320: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160328: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x160328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16032c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160330: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x160330u;
    SET_GPR_U32(ctx, 31, 0x160338u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x160338u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x160338u) { return; }
    ctx->pc = 0x160338u;
label_160338:
    // 0x160338: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x160338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x16033c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160340: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160344: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160348: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x16034c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x16034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160350: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160354: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160358: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16035c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x16035cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160360: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160360u;
    SET_GPR_U32(ctx, 31, 0x160368u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160360u, 0x160368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160368u;
label_160368:
    // 0x160368: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x160368u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16036c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16036Cu;
    {
        const bool branch_taken_0x16036c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16036c) {
            ctx->pc = 0x160388u;
            goto label_160388;
        }
    }
    ctx->pc = 0x160374u;
    // 0x160374: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160378: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16037c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16037cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160380: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x160380u;
    {
        const bool branch_taken_0x160380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160380) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x160388u;
label_160388:
    // 0x160388: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x160388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16038c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16038cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x160390: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x160390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x160394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160398: 0x0  nop
    ctx->pc = 0x160398u;
    // NOP
    // 0x16039c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x16039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1603a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1603a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603a4: 0x0  nop
    ctx->pc = 0x1603a4u;
    // NOP
    // 0x1603a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1603a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1603ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1603b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1603b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603b4: 0x0  nop
    ctx->pc = 0x1603b4u;
    // NOP
    // 0x1603b8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1603b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1603bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1603c0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1603c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1603c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1603C8u;
    SET_GPR_U32(ctx, 31, 0x1603D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1603D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1603D0u) { return; }
    ctx->pc = 0x1603D0u;
label_1603d0:
    // 0x1603d0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1603d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1603d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1603d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1603d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1603d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1603dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1603dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603e0: 0x0  nop
    ctx->pc = 0x1603e0u;
    // NOP
    // 0x1603e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1603e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1603e8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1603ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1603ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1603f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1603f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1603f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1603f8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1603f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1603fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1603fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160400: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x160400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160404: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x160404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x160408: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16040c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16040cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160410: 0x0  nop
    ctx->pc = 0x160410u;
    // NOP
    // 0x160414: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160418: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16041c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160420: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160424: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x160424u;
    SET_GPR_U32(ctx, 31, 0x16042Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16042Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16042Cu) { return; }
    ctx->pc = 0x16042Cu;
label_16042c:
    // 0x16042c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x16042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x160430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160434: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x160434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16043c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x16043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160440: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x160440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160444: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160448: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16044c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160450: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x160450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160454: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160454u;
    SET_GPR_U32(ctx, 31, 0x16045Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160454u, 0x16045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16045Cu;
label_16045c:
    // 0x16045c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x16045cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x160460: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160460u;
    {
        const bool branch_taken_0x160460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160460) {
            ctx->pc = 0x16047Cu;
            goto label_16047c;
        }
    }
    ctx->pc = 0x160468u;
    // 0x160468: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16046c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x160470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160474u;
    {
        const bool branch_taken_0x160474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160474) {
            ctx->pc = 0x160484u;
            goto label_160484;
        }
    }
    ctx->pc = 0x16047Cu;
label_16047c:
    // 0x16047c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x16047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160480: 0x0  nop
    ctx->pc = 0x160480u;
    // NOP
label_160484:
    // 0x160484: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x160484u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16048c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16048cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160490: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x160494: 0x3e00008  jr          $ra
    ctx->pc = 0x160494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16049Cu;
}
