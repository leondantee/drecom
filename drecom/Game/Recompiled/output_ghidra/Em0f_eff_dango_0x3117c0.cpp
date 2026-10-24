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

// Function: Em0f_eff_dango
// Address: 0x3117c0 - 0x311c04
void Em0f_eff_dango_0x3117c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_eff_dango_0x3117c0");
#endif

    switch (ctx->pc) {
        case 0x311908u: goto label_311908;
        case 0x311a90u: goto label_311a90;
        case 0x311b00u: goto label_311b00;
        case 0x311b74u: goto label_311b74;
        case 0x311be8u: goto label_311be8;
        default: break;
    }

    ctx->pc = 0x3117c0u;

    // 0x3117c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3117c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3117c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3117c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3117c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3117c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3117cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3117ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3117d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3117d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3117d4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x3117d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x3117d8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x3117d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x3117dc: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x3117dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x3117e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3117e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3117e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3117e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3117e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3117e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3117ec: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x3117ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x3117f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3117f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3117f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3117f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3117f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3117fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3117fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311800: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311804: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x311804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311808: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x311808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31180c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x31180cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311814: 0x0  nop
    ctx->pc = 0x311814u;
    // NOP
    // 0x311818: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x311818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31181c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x31181cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x311820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x311824: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x311824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x311828: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x311828u;
    {
        const bool branch_taken_0x311828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x311828) {
            ctx->pc = 0x311BE8u;
            goto label_311be8;
        }
    }
    ctx->pc = 0x311830u;
    // 0x311830: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x311830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x311834: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x311834u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x311838: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311838u;
    {
        const bool branch_taken_0x311838 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x311838) {
            ctx->pc = 0x311854u;
            goto label_311854;
        }
    }
    ctx->pc = 0x311840u;
    // 0x311840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311844: 0x0  nop
    ctx->pc = 0x311844u;
    // NOP
    // 0x311848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x311848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31184c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31184Cu;
    {
        const bool branch_taken_0x31184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31184c) {
            ctx->pc = 0x311870u;
            goto label_311870;
        }
    }
    ctx->pc = 0x311854u;
label_311854:
    // 0x311854: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x311854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x311858: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x311858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31185c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x311860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311864: 0x0  nop
    ctx->pc = 0x311864u;
    // NOP
    // 0x311868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x311868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31186c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31186cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_311870:
    // 0x311870: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x311870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x311874: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x311878: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x311878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31187c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31187Cu;
    {
        const bool branch_taken_0x31187c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31187c) {
            ctx->pc = 0x311898u;
            goto label_311898;
        }
    }
    ctx->pc = 0x311884u;
    // 0x311884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311888: 0x0  nop
    ctx->pc = 0x311888u;
    // NOP
    // 0x31188c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x311890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311890u;
    {
        const bool branch_taken_0x311890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311890) {
            ctx->pc = 0x3118B4u;
            goto label_3118b4;
        }
    }
    ctx->pc = 0x311898u;
label_311898:
    // 0x311898: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x311898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31189c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3118a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3118a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3118a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3118a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3118a8: 0x0  nop
    ctx->pc = 0x3118a8u;
    // NOP
    // 0x3118ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3118acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3118b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3118b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3118b4:
    // 0x3118b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3118b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3118b8: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x3118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3118bc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3118c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3118C0u;
    {
        const bool branch_taken_0x3118c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3118c0) {
            ctx->pc = 0x3118DCu;
            goto label_3118dc;
        }
    }
    ctx->pc = 0x3118C8u;
    // 0x3118c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3118c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3118cc: 0x0  nop
    ctx->pc = 0x3118ccu;
    // NOP
    // 0x3118d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3118d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3118d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3118D4u;
    {
        const bool branch_taken_0x3118d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3118d4) {
            ctx->pc = 0x3118F8u;
            goto label_3118f8;
        }
    }
    ctx->pc = 0x3118DCu;
label_3118dc:
    // 0x3118dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3118dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3118e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3118e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3118e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3118e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3118e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3118e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3118ec: 0x0  nop
    ctx->pc = 0x3118ecu;
    // NOP
    // 0x3118f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3118f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3118f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3118f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3118f8:
    // 0x3118f8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3118f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3118fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3118fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x311900u;
    {
        const bool branch_taken_0x311900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311900) {
            ctx->pc = 0x311958u;
            goto label_311958;
        }
    }
    ctx->pc = 0x311908u;
label_311908:
    // 0x311908: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x311908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31190c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311910: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x311910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x311914: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x311914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x311918: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x311918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x31191c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311920: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x311920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311924: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311928: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31192c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31192cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x311934: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x311934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311938: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x311938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31193c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x311940: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x311940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311944: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x311944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311948: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31194c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31194cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311950: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x311950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x311954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_311958:
    // 0x311958: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x311958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31195c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31195Cu;
    {
        const bool branch_taken_0x31195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31195c) {
            ctx->pc = 0x311908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311908;
        }
    }
    ctx->pc = 0x311964u;
    // 0x311964: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x311964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311968: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x311968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31196c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31196cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311970: 0x0  nop
    ctx->pc = 0x311970u;
    // NOP
    // 0x311974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311978: 0x0  nop
    ctx->pc = 0x311978u;
    // NOP
    // 0x31197c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31197c) {
            ctx->pc = 0x311994u;
            goto label_311994;
        }
    }
    ctx->pc = 0x311984u;
    // 0x311984: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x311984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x311988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31198c: 0x0  nop
    ctx->pc = 0x31198cu;
    // NOP
    // 0x311990: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x311990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_311994:
    // 0x311994: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x311994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311998: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31199c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31199cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119a0: 0x0  nop
    ctx->pc = 0x3119a0u;
    // NOP
    // 0x3119a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3119a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3119a8: 0x0  nop
    ctx->pc = 0x3119a8u;
    // NOP
    // 0x3119ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3119ACu;
    {
        const bool branch_taken_0x3119ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3119ac) {
            ctx->pc = 0x3119C4u;
            goto label_3119c4;
        }
    }
    ctx->pc = 0x3119B4u;
    // 0x3119b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3119b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3119b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119bc: 0x0  nop
    ctx->pc = 0x3119bcu;
    // NOP
    // 0x3119c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3119c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3119c4:
    // 0x3119c4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x3119c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3119c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3119c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3119cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119d0: 0x0  nop
    ctx->pc = 0x3119d0u;
    // NOP
    // 0x3119d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3119d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3119d8: 0x0  nop
    ctx->pc = 0x3119d8u;
    // NOP
    // 0x3119dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3119DCu;
    {
        const bool branch_taken_0x3119dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3119dc) {
            ctx->pc = 0x3119F4u;
            goto label_3119f4;
        }
    }
    ctx->pc = 0x3119E4u;
    // 0x3119e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3119e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3119e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3119ec: 0x0  nop
    ctx->pc = 0x3119ecu;
    // NOP
    // 0x3119f0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3119f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3119f4:
    // 0x3119f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3119f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3119f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3119f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3119fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a00: 0x0  nop
    ctx->pc = 0x311a00u;
    // NOP
    // 0x311a04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311a08: 0x0  nop
    ctx->pc = 0x311a08u;
    // NOP
    // 0x311a0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311A0Cu;
    {
        const bool branch_taken_0x311a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311a0c) {
            ctx->pc = 0x311A24u;
            goto label_311a24;
        }
    }
    ctx->pc = 0x311A14u;
    // 0x311a14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a1c: 0x0  nop
    ctx->pc = 0x311a1cu;
    // NOP
    // 0x311a20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x311a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_311a24:
    // 0x311a24: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x311a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311a28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a30: 0x0  nop
    ctx->pc = 0x311a30u;
    // NOP
    // 0x311a34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311a38: 0x0  nop
    ctx->pc = 0x311a38u;
    // NOP
    // 0x311a3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311A3Cu;
    {
        const bool branch_taken_0x311a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311a3c) {
            ctx->pc = 0x311A54u;
            goto label_311a54;
        }
    }
    ctx->pc = 0x311A44u;
    // 0x311a44: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a4c: 0x0  nop
    ctx->pc = 0x311a4cu;
    // NOP
    // 0x311a50: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x311a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_311a54:
    // 0x311a54: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x311a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311a58: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a60: 0x0  nop
    ctx->pc = 0x311a60u;
    // NOP
    // 0x311a64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311a68: 0x0  nop
    ctx->pc = 0x311a68u;
    // NOP
    // 0x311a6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311A6Cu;
    {
        const bool branch_taken_0x311a6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311a6c) {
            ctx->pc = 0x311A84u;
            goto label_311a84;
        }
    }
    ctx->pc = 0x311A74u;
    // 0x311a74: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a7c: 0x0  nop
    ctx->pc = 0x311a7cu;
    // NOP
    // 0x311a80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x311a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_311a84:
    // 0x311a84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x311a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311a88: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x311A88u;
    SET_GPR_U32(ctx, 31, 0x311A90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x311A88u, 0x311A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A90u;
label_311a90:
    // 0x311a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a94: 0x0  nop
    ctx->pc = 0x311a94u;
    // NOP
    // 0x311a98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x311a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311a9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311aa0: 0x0  nop
    ctx->pc = 0x311aa0u;
    // NOP
    // 0x311aa4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x311aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311aa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311aac: 0x0  nop
    ctx->pc = 0x311aacu;
    // NOP
    // 0x311ab0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311abc: 0x0  nop
    ctx->pc = 0x311abcu;
    // NOP
    // 0x311ac0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x311ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x311ac4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x311ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311ac8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x311ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x311acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311ad0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311ad4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x311ad4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311ad8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x311ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311adc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x311adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311ae0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x311ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311ae4: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x311ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x311ae8: 0xc7ae0064  lwc1        $f14, 0x64($sp)
    ctx->pc = 0x311ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311aec: 0xc7af0068  lwc1        $f15, 0x68($sp)
    ctx->pc = 0x311aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x311af0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x311af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311af4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x311af4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311af8: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x311AF8u;
    SET_GPR_U32(ctx, 31, 0x311B00u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x311AF8u, 0x311B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B00u;
label_311b00:
    // 0x311b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b04: 0x0  nop
    ctx->pc = 0x311b04u;
    // NOP
    // 0x311b08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x311b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311b0c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x311b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x311b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b14: 0x0  nop
    ctx->pc = 0x311b14u;
    // NOP
    // 0x311b18: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x311b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b20: 0x0  nop
    ctx->pc = 0x311b20u;
    // NOP
    // 0x311b24: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311b28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b30: 0x0  nop
    ctx->pc = 0x311b30u;
    // NOP
    // 0x311b34: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x311b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x311b38: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x311b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311b3c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x311b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x311b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311b44: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311b48: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x311b48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311b4c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x311b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311b50: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311b54: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x311b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311b58: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x311b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x311b5c: 0xc7ae0064  lwc1        $f14, 0x64($sp)
    ctx->pc = 0x311b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311b60: 0xc7af0068  lwc1        $f15, 0x68($sp)
    ctx->pc = 0x311b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x311b64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x311b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311b68: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x311b68u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311b6c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x311B6Cu;
    SET_GPR_U32(ctx, 31, 0x311B74u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x311B6Cu, 0x311B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B74u;
label_311b74:
    // 0x311b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b78: 0x0  nop
    ctx->pc = 0x311b78u;
    // NOP
    // 0x311b7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x311b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x311b80: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x311b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x311b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b88: 0x0  nop
    ctx->pc = 0x311b88u;
    // NOP
    // 0x311b8c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x311b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x311b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b94: 0x0  nop
    ctx->pc = 0x311b94u;
    // NOP
    // 0x311b98: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x311b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x311b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311ba4: 0x0  nop
    ctx->pc = 0x311ba4u;
    // NOP
    // 0x311ba8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x311ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x311bac: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x311bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311bb0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x311bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x311bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311bb8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311bbc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x311bbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311bc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x311bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x311bc4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x311bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311bc8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x311bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311bcc: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x311bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x311bd0: 0xc7ae0064  lwc1        $f14, 0x64($sp)
    ctx->pc = 0x311bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x311bd4: 0xc7af0068  lwc1        $f15, 0x68($sp)
    ctx->pc = 0x311bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x311bd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x311bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311bdc: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x311bdcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311be0: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x311BE0u;
    SET_GPR_U32(ctx, 31, 0x311BE8u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x311BE0u, 0x311BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BE8u;
label_311be8:
    // 0x311be8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x311be8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311bf8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x311bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x311bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x311BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C04u;
}
