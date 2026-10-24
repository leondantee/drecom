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

// Function: get_next_onoff
// Address: 0x16e830 - 0x16e90c
void get_next_onoff_0x16e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_next_onoff_0x16e830");
#endif

    switch (ctx->pc) {
        case 0x16e848u: goto label_16e848;
        case 0x16e870u: goto label_16e870;
        default: break;
    }

    ctx->pc = 0x16e830u;

label_16e830:
    // 0x16e830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e834: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x16e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x16e838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e83c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x16e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x16e840: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x16e844: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x16e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_16e848:
    // 0x16e848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e84c: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16e84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16e850: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E850u;
    {
        const bool branch_taken_0x16e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e850) {
            ctx->pc = 0x16E878u;
            goto label_16e878;
        }
    }
    ctx->pc = 0x16E858u;
    // 0x16e858: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e85c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16e860: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e864: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x16e864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e868: 0xc05ba0c  jal         func_16E830
    ctx->pc = 0x16E868u;
    SET_GPR_U32(ctx, 31, 0x16E870u);
    ctx->pc = 0x16E830u;
    goto label_16e830;
    ctx->pc = 0x16E870u;
label_16e870:
    // 0x16e870: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16E870u;
    {
        const bool branch_taken_0x16e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e870) {
            ctx->pc = 0x16E8C8u;
            goto label_16e8c8;
        }
    }
    ctx->pc = 0x16E878u;
label_16e878:
    // 0x16e878: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e87c: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x16e87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16e880: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16e884: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16e884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16e888: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e88c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16E88Cu;
    {
        const bool branch_taken_0x16e88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e88c) {
            ctx->pc = 0x16E8C8u;
            goto label_16e8c8;
        }
    }
    ctx->pc = 0x16E894u;
    // 0x16e894: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e898: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E898u;
    {
        const bool branch_taken_0x16e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e898) {
            ctx->pc = 0x16E8B8u;
            goto label_16e8b8;
        }
    }
    ctx->pc = 0x16E8A0u;
    // 0x16e8a0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e8a4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x16e8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x16e8a8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x16e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x16e8ac: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16e8b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16E8B0u;
    {
        const bool branch_taken_0x16e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8b0) {
            ctx->pc = 0x16E8C8u;
            goto label_16e8c8;
        }
    }
    ctx->pc = 0x16E8B8u;
label_16e8b8:
    // 0x16e8b8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e8bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16e8c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e8c4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_16e8c8:
    // 0x16e8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e8cc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x16e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16e8d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16E8D0u;
    {
        const bool branch_taken_0x16e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8d0) {
            ctx->pc = 0x16E8F4u;
            goto label_16e8f4;
        }
    }
    ctx->pc = 0x16E8D8u;
    // 0x16e8d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e8dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e8e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16e8e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e8e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x16e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x16e8ec: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x16E8ECu;
    {
        const bool branch_taken_0x16e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8ec) {
            ctx->pc = 0x16E848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e848;
        }
    }
    ctx->pc = 0x16E8F4u;
label_16e8f4:
    // 0x16e8f4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16e8f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16e8f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x16e8f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e900: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16e904: 0x3e00008  jr          $ra
    ctx->pc = 0x16E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E90Cu;
}
