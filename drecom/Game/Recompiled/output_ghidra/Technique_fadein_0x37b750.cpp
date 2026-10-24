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

// Function: Technique_fadein
// Address: 0x37b750 - 0x37bc2c
void Technique_fadein_0x37b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_fadein_0x37b750");
#endif

    switch (ctx->pc) {
        case 0x37b7d8u: goto label_37b7d8;
        case 0x37b844u: goto label_37b844;
        case 0x37b86cu: goto label_37b86c;
        case 0x37b980u: goto label_37b980;
        case 0x37bb3cu: goto label_37bb3c;
        case 0x37bb70u: goto label_37bb70;
        case 0x37bb9cu: goto label_37bb9c;
        case 0x37bbccu: goto label_37bbcc;
        case 0x37bbf4u: goto label_37bbf4;
        default: break;
    }

    ctx->pc = 0x37b750u;

    // 0x37b750: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x37b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x37b754: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x37b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x37b758: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x37b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37b75c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37b760: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37b764: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37b768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37b76c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37b770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37b774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b77c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x37b780: 0x24716150  addiu       $s1, $v1, 0x6150
    ctx->pc = 0x37b780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x37b784: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37b784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37b788: 0x24740bc0  addiu       $s4, $v1, 0xBC0
    ctx->pc = 0x37b788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3008));
    // 0x37b78c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37b790: 0x24720bf0  addiu       $s2, $v1, 0xBF0
    ctx->pc = 0x37b790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
    // 0x37b794: 0x8e265dd0  lw          $a2, 0x5DD0($s1)
    ctx->pc = 0x37b794u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x62BF20u));
    // 0x37b798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b79c: 0x10c30051  beq         $a2, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x37B79Cu;
    {
        const bool branch_taken_0x37b79c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x37b79c) {
            ctx->pc = 0x37B8E4u;
            goto label_37b8e4;
        }
    }
    ctx->pc = 0x37B7A4u;
    // 0x37b7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b7a8: 0x10c3002e  beq         $a2, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x37B7A8u;
    {
        const bool branch_taken_0x37b7a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x37b7a8) {
            ctx->pc = 0x37B864u;
            goto label_37b864;
        }
    }
    ctx->pc = 0x37B7B0u;
    // 0x37b7b0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B7B0u;
    {
        const bool branch_taken_0x37b7b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7b0) {
            ctx->pc = 0x37B7C0u;
            goto label_37b7c0;
        }
    }
    ctx->pc = 0x37B7B8u;
    // 0x37b7b8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x37B7B8u;
    {
        const bool branch_taken_0x37b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7b8) {
            ctx->pc = 0x37B950u;
            goto label_37b950;
        }
    }
    ctx->pc = 0x37B7C0u;
label_37b7c0:
    // 0x37b7c0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b7c4: 0xac200bb0  sw          $zero, 0xBB0($at)
    ctx->pc = 0x37b7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0BB0u, _value); } while (0);
    // 0x37b7c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37b7c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b7cc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x37b7ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b7d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B7D0u;
    {
        const bool branch_taken_0x37b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7d0) {
            ctx->pc = 0x37B7F8u;
            goto label_37b7f8;
        }
    }
    ctx->pc = 0x37B7D8u;
label_37b7d8:
    // 0x37b7d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37b7dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b7e0: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37b7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b7e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b7ec: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b7ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b7f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37b7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37b7f4: 0x0  nop
    ctx->pc = 0x37b7f4u;
    // NOP
label_37b7f8:
    // 0x37b7f8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b7fc: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b800: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x37b800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b804: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37B804u;
    {
        const bool branch_taken_0x37b804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b804) {
            ctx->pc = 0x37B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b7d8;
        }
    }
    ctx->pc = 0x37B80Cu;
    // 0x37b80c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b810: 0x8c220588  lw          $v0, 0x588($at)
    ctx->pc = 0x37b810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b814: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b818: 0x26370520  addiu       $s7, $s1, 0x520
    ctx->pc = 0x37b818u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x37b81c: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x37b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x37b820: 0x344200a5  ori         $v0, $v0, 0xA5
    ctx->pc = 0x37b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)165);
    // 0x37b824: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x37b824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x37b828: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x37b828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x37b82c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x37b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x37b830: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x37b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x37b834: 0x34455800  ori         $a1, $v0, 0x5800
    ctx->pc = 0x37b834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22528);
    // 0x37b838: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x37b838u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b83c: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x37B83Cu;
    SET_GPR_U32(ctx, 31, 0x37B844u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x37B83Cu, 0x37B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B844u;
label_37b844:
    // 0x37b844: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x37b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x37b848: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37b848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37b84c: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x37b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x37b850: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b858: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b85c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x37B85Cu;
    {
        const bool branch_taken_0x37b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b85c) {
            ctx->pc = 0x37B950u;
            goto label_37b950;
        }
    }
    ctx->pc = 0x37B864u;
label_37b864:
    // 0x37b864: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x37B864u;
    SET_GPR_U32(ctx, 31, 0x37B86Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x37B864u, 0x37B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B86Cu;
label_37b86c:
    // 0x37b86c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x37B86Cu;
    {
        const bool branch_taken_0x37b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b86c) {
            ctx->pc = 0x37B950u;
            goto label_37b950;
        }
    }
    ctx->pc = 0x37B874u;
    // 0x37b874: 0x8e26685c  lw          $a2, 0x685C($s1)
    ctx->pc = 0x37b874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x37b878: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x37b87c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b880: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x37b880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x37b884: 0x8e236870  lw          $v1, 0x6870($s1)
    ctx->pc = 0x37b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x37b888: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x37b888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x37b88c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B88Cu;
    {
        const bool branch_taken_0x37b88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b88c) {
            ctx->pc = 0x37B8A4u;
            goto label_37b8a4;
        }
    }
    ctx->pc = 0x37B894u;
    // 0x37b894: 0x8e266870  lw          $a2, 0x6870($s1)
    ctx->pc = 0x37b894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x37b898: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x37b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x37b89c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b8a0: 0xae236870  sw          $v1, 0x6870($s1)
    ctx->pc = 0x37b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 3));
label_37b8a4:
    // 0x37b8a4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8a8: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b8ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37b8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37b8b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37B8B0u;
    {
        const bool branch_taken_0x37b8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b8b0) {
            ctx->pc = 0x37B8D0u;
            goto label_37b8d0;
        }
    }
    ctx->pc = 0x37B8B8u;
    // 0x37b8b8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8bc: 0x8c2605a0  lw          $a2, 0x5A0($at)
    ctx->pc = 0x37b8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b8c0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x37b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x37b8c4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b8c8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8cc: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37b8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
label_37b8d0:
    // 0x37b8d0: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b8d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b8d8: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b8dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37B8DCu;
    {
        const bool branch_taken_0x37b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b8dc) {
            ctx->pc = 0x37B950u;
            goto label_37b950;
        }
    }
    ctx->pc = 0x37B8E4u;
label_37b8e4:
    // 0x37b8e4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8e8: 0x8c230bb0  lw          $v1, 0xBB0($at)
    ctx->pc = 0x37b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37b8ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b8f0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8f4: 0xac230bb0  sw          $v1, 0xBB0($at)
    ctx->pc = 0x37b8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0BB0u, _value); } while (0);
    // 0x37b8f8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8fc: 0x8c230bb0  lw          $v1, 0xBB0($at)
    ctx->pc = 0x37b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37b900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b904: 0x0  nop
    ctx->pc = 0x37b904u;
    // NOP
    // 0x37b908: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37b908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37b90c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x37b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x37b910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b914: 0x0  nop
    ctx->pc = 0x37b914u;
    // NOP
    // 0x37b918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37b918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b91c: 0x0  nop
    ctx->pc = 0x37b91cu;
    // NOP
    // 0x37b920: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x37B920u;
    {
        const bool branch_taken_0x37b920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37b920) {
            ctx->pc = 0x37B950u;
            goto label_37b950;
        }
    }
    ctx->pc = 0x37B928u;
    // 0x37b928: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x37b928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x37b92c: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x37b930: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b934: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37b934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b938: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b93c: 0xac230590  sw          $v1, 0x590($at)
    ctx->pc = 0x37b93cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0590u, _value); } while (0);
    // 0x37b940: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b944: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37b944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b948: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b94c: 0xac230598  sw          $v1, 0x598($at)
    ctx->pc = 0x37b94cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0598u, _value); } while (0);
label_37b950:
    // 0x37b950: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x37b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x37b954: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x37b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37b958: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x37B958u;
    {
        const bool branch_taken_0x37b958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b958) {
            ctx->pc = 0x37BBF8u;
            goto label_37bbf8;
        }
    }
    ctx->pc = 0x37B960u;
    // 0x37b960: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b964: 0x8c220bb0  lw          $v0, 0xBB0($at)
    ctx->pc = 0x37b964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37b968: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x37B968u;
    {
        const bool branch_taken_0x37b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b968) {
            ctx->pc = 0x37BB00u;
            goto label_37bb00;
        }
    }
    ctx->pc = 0x37B970u;
    // 0x37b970: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37b970u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b974: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x37b974u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37b978: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37B978u;
    {
        const bool branch_taken_0x37b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b978) {
            ctx->pc = 0x37B9A0u;
            goto label_37b9a0;
        }
    }
    ctx->pc = 0x37B980u;
label_37b980:
    // 0x37b980: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37b980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37b984: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b988: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37b98c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b994: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37b99c: 0x0  nop
    ctx->pc = 0x37b99cu;
    // NOP
label_37b9a0:
    // 0x37b9a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b9a4: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37b9a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x37b9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b9ac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37B9ACu;
    {
        const bool branch_taken_0x37b9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b9ac) {
            ctx->pc = 0x37B980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b980;
        }
    }
    ctx->pc = 0x37B9B4u;
    // 0x37b9b4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b9b8: 0x8c220588  lw          $v0, 0x588($at)
    ctx->pc = 0x37b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37b9bc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b9c0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x37b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37b9c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x37b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37b9c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b9cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b9d0: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x37b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x37b9d4: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x37b9d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b9d8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x37b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x37b9dc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x37b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x37b9e0: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x37b9e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b9e4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x37b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x37b9e8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x37b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37b9ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x37b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b9f0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x37b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x37b9f4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37b9f8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x37b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x37b9fc: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37ba00: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x37ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x37ba04: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37ba08: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x37ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x37ba0c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37ba10: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x37ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37ba14: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37ba18: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x37ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37ba1c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x37ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x37ba20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37ba24: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x37ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x37ba28: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37ba2c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37ba30: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x37ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x37ba34: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x37ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x37ba38: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37ba3c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37ba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37ba40: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x37ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x37ba44: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37ba48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37ba4c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37ba50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37ba50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ba54: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x37ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x37ba58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37ba5c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37ba60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ba64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37ba68: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x37ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x37ba6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37ba70: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37ba70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37ba74: 0x2682001c  addiu       $v0, $s4, 0x1C
    ctx->pc = 0x37ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x37ba78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37ba7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x37ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37ba80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37ba84: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37ba88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ba8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x37ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37ba90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37ba94: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37ba98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ba9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37baa0: 0x26820024  addiu       $v0, $s4, 0x24
    ctx->pc = 0x37baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x37baa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37baa8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37baa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37baac: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x37baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x37bab0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bab4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x37bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x37bab8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37babc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x37babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37bac0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bac4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bacc: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x37baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x37bad0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bad4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x37bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x37bad8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37badc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x37badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x37bae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bae4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37baec: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x37baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x37baf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37baf4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37baf8: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x37baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x37bafc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x37bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_37bb00:
    // 0x37bb00: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bb04: 0x8c220bb0  lw          $v0, 0xBB0($at)
    ctx->pc = 0x37bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0BB0u));
    // 0x37bb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37bb0c: 0x0  nop
    ctx->pc = 0x37bb0cu;
    // NOP
    // 0x37bb10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37bb10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37bb14: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37bb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37bb1c: 0x0  nop
    ctx->pc = 0x37bb1cu;
    // NOP
    // 0x37bb20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x37bb20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37bb24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x37bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37bb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37bb2c: 0x0  nop
    ctx->pc = 0x37bb2cu;
    // NOP
    // 0x37bb30: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x37bb30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37bb34: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x37BB34u;
    SET_GPR_U32(ctx, 31, 0x37BB3Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x37BB34u, 0x37BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB3Cu;
label_37bb3c:
    // 0x37bb3c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x37bb3cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37bb40: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37bb44: 0x161200  sll         $v0, $s6, 8
    ctx->pc = 0x37bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x37bb48: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x37bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x37bb4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bb50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bb54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bb58: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x37bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x37bb5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bb60: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bb64: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x37bb64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x37bb68: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BB68u;
    SET_GPR_U32(ctx, 31, 0x37BB70u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BB68u, 0x37BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB70u;
label_37bb70:
    // 0x37bb70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bb74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bb78: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bb7c: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x37bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x37bb80: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bb84: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37bb88: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37bb8c: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bb90: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bb90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bb94: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BB94u;
    SET_GPR_U32(ctx, 31, 0x37BB9Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BB94u, 0x37BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB9Cu;
label_37bb9c:
    // 0x37bb9c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37bb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37bba0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bba4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bba8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bbac: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37bbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37bbb0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bbb4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x37bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37bbb8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37bbbc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bbc0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bbc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bbc4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BBC4u;
    SET_GPR_U32(ctx, 31, 0x37BBCCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BBC4u, 0x37BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBCCu;
label_37bbcc:
    // 0x37bbcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37bbccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37bbd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bbd4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bbd8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bbdc: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37bbe0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bbe4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bbe8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bbec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BBECu;
    SET_GPR_U32(ctx, 31, 0x37BBF4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BBECu, 0x37BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBF4u;
label_37bbf4:
    // 0x37bbf4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37bbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_37bbf8:
    // 0x37bbf8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x37bbf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37bbfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37bbfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37bc00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37bc00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37bc04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37bc04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37bc08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37bc08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37bc0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37bc0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bc10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37bc10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bc14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37bc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37bc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37bc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bc20: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x37bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37bc24: 0x3e00008  jr          $ra
    ctx->pc = 0x37BC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BC2Cu;
}
