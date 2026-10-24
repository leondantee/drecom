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

// Function: entry_002937d8
// Address: 0x2937d8 - 0x293958
void entry_002937d8_0x2937d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002937d8_0x2937d8");
#endif

    switch (ctx->pc) {
        case 0x293890u: goto label_293890;
        case 0x2938c0u: goto label_2938c0;
        default: break;
    }

    ctx->pc = 0x2937d8u;

    // 0x2937d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2937d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2937dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2937dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2937e0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2937e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2937e4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2937e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2937e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2937e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2937ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2937ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2937f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2937f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2937f4: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2937f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x2937f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2937f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2937fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2937fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x293800: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x293800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x293804: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x293804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x293808: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x293808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x29380c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29380cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x293810: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x293810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x293814: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x293814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x293818: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x293818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29381c: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x29381cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x293820: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x293820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x293824: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293828: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x293828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29382c: 0xc2b023  subu        $s6, $a2, $v0
    ctx->pc = 0x29382cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x293830: 0x8ee60004  lw          $a2, 0x4($s7)
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x293834: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x293834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x293838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29383c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29383cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x293840: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x293840u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x293844: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x293844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x293848: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x293848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x29384c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x293850: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x293850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x293854: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x293854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x293858: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x293858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x29385c: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x29385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x293860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293864: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x293864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x293868: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x293868u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29386c: 0x0  nop
    ctx->pc = 0x29386cu;
    // NOP
    // 0x293870: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293874: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x293874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x293878: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x293878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x29387c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29387cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293880: 0x0  nop
    ctx->pc = 0x293880u;
    // NOP
    // 0x293884: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x293884u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293888: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293888u;
    SET_GPR_U32(ctx, 31, 0x293890u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293888u, 0x293890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293890u;
label_293890:
    // 0x293890: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x293890u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293894: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x293894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x293898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29389c: 0x0  nop
    ctx->pc = 0x29389cu;
    // NOP
    // 0x2938a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2938a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2938a4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2938a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2938a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2938a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2938ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2938acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2938b0: 0x0  nop
    ctx->pc = 0x2938b0u;
    // NOP
    // 0x2938b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2938b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2938b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2938B8u;
    SET_GPR_U32(ctx, 31, 0x2938C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2938B8u, 0x2938C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938C0u;
label_2938c0:
    // 0x2938c0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2938c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2938c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2938c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2938c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2938c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2938cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2938ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2938d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2938d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2938d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2938d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2938d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2938dc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x2938dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2938e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2938e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2938e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2938e8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2938e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2938ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2938f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2938f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2938f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2938f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2938f8: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2938f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2938fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2938fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x293900: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x293904: 0x8e435dc0  lw          $v1, 0x5DC0($s2)
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x293908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29390c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x29390Cu;
    {
        const bool branch_taken_0x29390c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29390c) {
            ctx->pc = 0x293990u;
            return;
        }
    }
    ctx->pc = 0x293914u;
    // 0x293914: 0x8e435dc4  lw          $v1, 0x5DC4($s2)
    ctx->pc = 0x293914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
    // 0x293918: 0x1663000f  bne         $s3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x293918u;
    {
        const bool branch_taken_0x293918 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x293918) {
            ctx->pc = 0x293958u;
            return;
        }
    }
    ctx->pc = 0x293920u;
    // 0x293920: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x293920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x293924: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x293924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293928: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x293928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x29392c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x29392cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x293930: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x293930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x293934: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x293934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x293938: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29393c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x29393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x293940: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x293940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x293944: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x293944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x293948: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x293948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29394c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29394cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x293950: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x293950u;
    {
        const bool branch_taken_0x293950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293950) {
            ctx->pc = 0x293AC8u;
            return;
        }
    }
    ctx->pc = 0x293958u;
}
