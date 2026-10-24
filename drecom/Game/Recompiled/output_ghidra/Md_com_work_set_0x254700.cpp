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

// Function: Md_com_work_set
// Address: 0x254700 - 0x2548a0
void Md_com_work_set_0x254700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_com_work_set_0x254700");
#endif

    switch (ctx->pc) {
        case 0x254728u: goto label_254728;
        case 0x254834u: goto label_254834;
        default: break;
    }

    ctx->pc = 0x254700u;

    // 0x254700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254704: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x254704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x254708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25470c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254710: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x254710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x254714: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x254714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x254718: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25471c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x25471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x254720: 0xc09528c  jal         func_254A30
    ctx->pc = 0x254720u;
    SET_GPR_U32(ctx, 31, 0x254728u);
    ctx->pc = 0x254A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A30u, 0x254720u, 0x254728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254728u;
label_254728:
    // 0x254728: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25472c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x25472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x254730: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x254730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254734: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x254734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254738: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x254738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25473c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254740: 0xac430344  sw          $v1, 0x344($v0)
    ctx->pc = 0x254740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 836), GPR_U32(ctx, 3));
    // 0x254744: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x254744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254748: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x254748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25474c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254750: 0xac43034c  sw          $v1, 0x34C($v0)
    ctx->pc = 0x254750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 844), GPR_U32(ctx, 3));
    // 0x254754: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x254754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x254758: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x254758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25475c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254760: 0xac430330  sw          $v1, 0x330($v0)
    ctx->pc = 0x254760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 3));
    // 0x254764: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x254764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x254768: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x254768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25476c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254770: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254774: 0xa4430050  sh          $v1, 0x50($v0)
    ctx->pc = 0x254774u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x254778: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25477c: 0xac400354  sw          $zero, 0x354($v0)
    ctx->pc = 0x25477cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 0));
    // 0x254780: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254784: 0xac400204  sw          $zero, 0x204($v0)
    ctx->pc = 0x254784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 516), GPR_U32(ctx, 0));
    // 0x254788: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25478c: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x25478cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x254790: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254794: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x254794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
    // 0x254798: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25479c: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x25479cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    // 0x2547a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2547a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2547a4: 0xa0401218  sb          $zero, 0x1218($v0)
    ctx->pc = 0x2547a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4632), (uint8_t)GPR_U32(ctx, 0));
    // 0x2547a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2547a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2547ac: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2547acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2547b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2547b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2547b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2547b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2547b8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2547b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2547bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2547bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2547c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2547c4: 0xac430130  sw          $v1, 0x130($v0)
    ctx->pc = 0x2547c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
    // 0x2547c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2547cc: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x2547ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2547d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2547d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2547d4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2547d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2547d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2547d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2547dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2547dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2547e0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2547e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2547e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2547e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2547e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2547e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2547ec: 0xac4302d0  sw          $v1, 0x2D0($v0)
    ctx->pc = 0x2547ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 3));
    // 0x2547f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2547f4: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x2547f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2547f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2547f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2547fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254800: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x254800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25480c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25480cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254818: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x254818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x25481c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x25481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254820: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254824: 0xac4302d4  sw          $v1, 0x2D4($v0)
    ctx->pc = 0x254824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 724), GPR_U32(ctx, 3));
    // 0x254828: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x254828u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25482c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25482Cu;
    {
        const bool branch_taken_0x25482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25482c) {
            ctx->pc = 0x254850u;
            goto label_254850;
        }
    }
    ctx->pc = 0x254834u;
label_254834:
    // 0x254834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254838: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25483c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25483cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x254840: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x254844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254848: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x254848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25484c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_254850:
    // 0x254850: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254854: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x254854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254858: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25485c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x25485cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254860: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x254860u;
    {
        const bool branch_taken_0x254860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254860) {
            ctx->pc = 0x254834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254834;
        }
    }
    ctx->pc = 0x254868u;
    // 0x254868: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25486c: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x25486cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254870: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254874: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x254874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25487c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254880: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x254880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x254884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254888: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x254888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25488c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25488cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254894: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254898: 0x3e00008  jr          $ra
    ctx->pc = 0x254898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548A0u;
}
