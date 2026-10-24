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

// Function: Efm_parts_env_al_set0
// Address: 0x1de850 - 0x1de964
void Efm_parts_env_al_set0_0x1de850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_parts_env_al_set0_0x1de850");
#endif

    switch (ctx->pc) {
        case 0x1de900u: goto label_1de900;
        case 0x1de950u: goto label_1de950;
        default: break;
    }

    ctx->pc = 0x1de850u;

    // 0x1de850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de854: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1de854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1de858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de85c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1de860: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x1de860u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x1de864: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1de864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1de868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1de868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de86c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1de86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1de870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de878: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x1de878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1de87c: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1de87cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de880: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de884: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1de884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1de888: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DE888u;
    {
        const bool branch_taken_0x1de888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de888) {
            ctx->pc = 0x1DE908u;
            goto label_1de908;
        }
    }
    ctx->pc = 0x1DE890u;
    // 0x1de890: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1de890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de894: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de898: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1de898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1de89c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1de89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1de8a0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE8A0u;
    {
        const bool branch_taken_0x1de8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de8a0) {
            ctx->pc = 0x1DE8BCu;
            goto label_1de8bc;
        }
    }
    ctx->pc = 0x1DE8A8u;
    // 0x1de8a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1de8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1de8ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE8ACu;
    {
        const bool branch_taken_0x1de8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de8ac) {
            ctx->pc = 0x1DE8BCu;
            goto label_1de8bc;
        }
    }
    ctx->pc = 0x1DE8B4u;
    // 0x1de8b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE8B4u;
    {
        const bool branch_taken_0x1de8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de8b4) {
            ctx->pc = 0x1DE8D0u;
            goto label_1de8d0;
        }
    }
    ctx->pc = 0x1DE8BCu;
label_1de8bc:
    // 0x1de8bc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1de8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1de8c0: 0x3442180f  ori         $v0, $v0, 0x180F
    ctx->pc = 0x1de8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x1de8c4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1de8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1de8c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE8C8u;
    {
        const bool branch_taken_0x1de8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de8c8) {
            ctx->pc = 0x1DE8DCu;
            goto label_1de8dc;
        }
    }
    ctx->pc = 0x1DE8D0u;
label_1de8d0:
    // 0x1de8d0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1de8d4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x1de8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1de8d8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1de8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_1de8dc:
    // 0x1de8dc: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1de8dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de8e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1de8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de8e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1de8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1de8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1de8ec: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1de8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de8f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1de8f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1de8f4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1de8f8: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x1DE8F8u;
    SET_GPR_U32(ctx, 31, 0x1DE900u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x1DE8F8u, 0x1DE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE900u;
label_1de900:
    // 0x1de900: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE900u;
    {
        const bool branch_taken_0x1de900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de900) {
            ctx->pc = 0x1DE950u;
            goto label_1de950;
        }
    }
    ctx->pc = 0x1DE908u;
label_1de908:
    // 0x1de908: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1de908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de90c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de910: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1de910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1de914: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de918: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE918u;
    {
        const bool branch_taken_0x1de918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de918) {
            ctx->pc = 0x1DE934u;
            goto label_1de934;
        }
    }
    ctx->pc = 0x1DE920u;
    // 0x1de920: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1de920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1de924: 0x3442080b  ori         $v0, $v0, 0x80B
    ctx->pc = 0x1de924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x1de928: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1de928u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1de92c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE92Cu;
    {
        const bool branch_taken_0x1de92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de92c) {
            ctx->pc = 0x1DE940u;
            goto label_1de940;
        }
    }
    ctx->pc = 0x1DE934u;
label_1de934:
    // 0x1de934: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1de934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1de938: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x1de938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1de93c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1de93cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_1de940:
    // 0x1de940: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1de944: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1de944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de948: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x1DE948u;
    SET_GPR_U32(ctx, 31, 0x1DE950u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x1DE948u, 0x1DE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE950u;
label_1de950:
    // 0x1de950: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1de950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de958: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE964u;
}
