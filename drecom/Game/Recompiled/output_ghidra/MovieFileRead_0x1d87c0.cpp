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

// Function: MovieFileRead
// Address: 0x1d87c0 - 0x1d89a0
void MovieFileRead_0x1d87c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovieFileRead_0x1d87c0");
#endif

    switch (ctx->pc) {
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88c4u: goto label_1d88c4;
        case 0x1d88d8u: goto label_1d88d8;
        default: break;
    }

    ctx->pc = 0x1d87c0u;

    // 0x1d87c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d87c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d87c4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x1d87c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1d87c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d87c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d87cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d87ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d87d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d87d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d87d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d87d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d87d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d87d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d87dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d87dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d87e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d87e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d87e8: 0x2470c100  addiu       $s0, $v1, -0x3F00
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1d87ec: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC3A8u));
    // 0x1d87f0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d87f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d87f4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D87F4u;
    {
        const bool branch_taken_0x1d87f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87f4) {
            ctx->pc = 0x1D8868u;
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D87FCu;
    // 0x1d87fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d87fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8800: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x1d8800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1d8804: 0xc0d71a4  jal         func_35C690
    ctx->pc = 0x1D8804u;
    SET_GPR_U32(ctx, 31, 0x1D880Cu);
    ctx->pc = 0x35C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C690u, 0x1D8804u, 0x1D880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D880Cu;
label_1d880c:
    // 0x1d880c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1d880cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8810: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1d8810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1d8814: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1d8814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d8818: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8818u;
    {
        const bool branch_taken_0x1d8818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8818) {
            ctx->pc = 0x1D8868u;
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D8820u;
    // 0x1d8820: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1d8820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d8824: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1d8828: 0xc0764c8  jal         func_1D9320
    ctx->pc = 0x1D8828u;
    SET_GPR_U32(ctx, 31, 0x1D8830u);
    ctx->pc = 0x1D9320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9320u, 0x1D8828u, 0x1D8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8830u;
label_1d8830:
    // 0x1d8830: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d8830u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8834: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d8834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8838: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1d8838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d883c: 0xc0d71bc  jal         func_35C6F0
    ctx->pc = 0x1D883Cu;
    SET_GPR_U32(ctx, 31, 0x1D8844u);
    ctx->pc = 0x35C6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C6F0u, 0x1D883Cu, 0x1D8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8848: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1d8848u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d884c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d884cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d8850: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8854: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8854u;
    {
        const bool branch_taken_0x1d8854 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d8854) {
            ctx->pc = 0x1D8868u;
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D885Cu;
    // 0x1d885c: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1d8860: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1d8860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1d8864: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x1d8864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
label_1d8868:
    // 0x1d8868: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1d886c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8870u;
    {
        const bool branch_taken_0x1d8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8870) {
            ctx->pc = 0x1D8880u;
            goto label_1d8880;
        }
    }
    ctx->pc = 0x1D8878u;
    // 0x1d8878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d887c: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1d887cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_1d8880:
    // 0x1d8880: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1d8880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1d8884: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8884u;
    {
        const bool branch_taken_0x1d8884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8884) {
            ctx->pc = 0x1D88D8u;
            goto label_1d88d8;
        }
    }
    ctx->pc = 0x1D888Cu;
    // 0x1d888c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d888cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8890: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1d8894: 0xc0d71ec  jal         func_35C7B0
    ctx->pc = 0x1D8894u;
    SET_GPR_U32(ctx, 31, 0x1D889Cu);
    ctx->pc = 0x35C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C7B0u, 0x1D8894u, 0x1D889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D889Cu;
label_1d889c:
    // 0x1d889c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1d889cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d88a0: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1D88A0u;
    {
        const bool branch_taken_0x1d88a0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1d88a0) {
            ctx->pc = 0x1D88D8u;
            goto label_1d88d8;
        }
    }
    ctx->pc = 0x1D88A8u;
    // 0x1d88a8: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1d88ac: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x1d88acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1d88b0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1d88b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1d88b4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d88b8: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x1d88bc: 0xc0424f4  jal         func_1093D0
    ctx->pc = 0x1D88BCu;
    SET_GPR_U32(ctx, 31, 0x1D88C4u);
    ctx->pc = 0x1093D0u;
    {
        ctx->pc = 0x1D88C4u;
        ps2_stubs::sceMpegDemuxPssRing(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D88C4u) { return; }
    ctx->pc = 0x1D88C4u;
label_1d88c4:
    // 0x1d88c4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d88c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d88c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d88c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d88cc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1d88ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d88d0: 0xc0d720c  jal         func_35C830
    ctx->pc = 0x1D88D0u;
    SET_GPR_U32(ctx, 31, 0x1D88D8u);
    ctx->pc = 0x35C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C830u, 0x1D88D0u, 0x1D88D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88D8u;
label_1d88d8:
    // 0x1d88d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d88dc: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1d88dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1d88e0: 0x860302b0  lh          $v1, 0x2B0($s0)
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1d88e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d88e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d88e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d88e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d88ec: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D88ECu;
    {
        const bool branch_taken_0x1d88ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d88ec) {
            ctx->pc = 0x1D8974u;
            goto label_1d8974;
        }
    }
    ctx->pc = 0x1D88F4u;
    // 0x1d88f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d88f8: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1d88f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1d88fc: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x1d8900: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8904: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d8904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d8908: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d890c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8910: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d8914: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d8918: 0x274082b  sltu        $at, $s3, $s4
    ctx->pc = 0x1d8918u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1d891c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D891Cu;
    {
        const bool branch_taken_0x1d891c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d891c) {
            ctx->pc = 0x1D8944u;
            goto label_1d8944;
        }
    }
    ctx->pc = 0x1D8924u;
    // 0x1d8924: 0x293a823  subu        $s5, $s4, $s3
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1d8928: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d892c: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1d892cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d8930: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8930u;
    {
        const bool branch_taken_0x1d8930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8930) {
            ctx->pc = 0x1D8974u;
            goto label_1d8974;
        }
    }
    ctx->pc = 0x1D8938u;
    // 0x1d8938: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1d8938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1d893c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D893Cu;
    {
        const bool branch_taken_0x1d893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d893c) {
            ctx->pc = 0x1D8974u;
            goto label_1d8974;
        }
    }
    ctx->pc = 0x1D8944u;
label_1d8944:
    // 0x1d8944: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8948: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1d894c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d8950: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1d8950u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d8954: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8954u;
    {
        const bool branch_taken_0x1d8954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8954) {
            ctx->pc = 0x1D8974u;
            goto label_1d8974;
        }
    }
    ctx->pc = 0x1D895Cu;
    // 0x1d895c: 0x26c38000  addiu       $v1, $s6, -0x8000
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934528));
    // 0x1d8960: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1d8964: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x1d8964u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d8968: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8968u;
    {
        const bool branch_taken_0x1d8968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8968) {
            ctx->pc = 0x1D8974u;
            goto label_1d8974;
        }
    }
    ctx->pc = 0x1D8970u;
    // 0x1d8970: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1d8970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_1d8974:
    // 0x1d8974: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1d8974u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d897c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d897cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d8984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d898c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d898cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8994: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d8998: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89A0u;
}
