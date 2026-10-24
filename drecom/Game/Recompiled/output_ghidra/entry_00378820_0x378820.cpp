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

// Function: entry_00378820
// Address: 0x378820 - 0x3788b4
void entry_00378820_0x378820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378820_0x378820");
#endif

    switch (ctx->pc) {
        case 0x378898u: goto label_378898;
        default: break;
    }

    ctx->pc = 0x378820u;

    // 0x378820: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x378820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x378824: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x378824u;
    {
        const bool branch_taken_0x378824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378824) {
            ctx->pc = 0x378760u;
            return;
        }
    }
    ctx->pc = 0x37882Cu;
    // 0x37882c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378830: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x378830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x378834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x378838: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x378838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x37883c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378840: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x378840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x378844: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x378844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x378848: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x378848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x37884c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378850: 0x944210a4  lhu         $v0, 0x10A4($v0)
    ctx->pc = 0x378850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
    // 0x378854: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x378854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x378858: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x378858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x37885c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37885cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378860: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x378860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x378864: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x378864u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x378868: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x378868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x37886c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x378870: 0x3c020704  lui         $v0, 0x704
    ctx->pc = 0x378870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1796 << 16));
    // 0x378874: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x378874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x378878: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x378878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37887c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37887cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x378880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x378880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x378884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x378888: 0x24452b88  addiu       $a1, $v0, 0x2B88
    ctx->pc = 0x378888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11144));
    // 0x37888c: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x37888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x378890: 0xc059b14  jal         func_166C50
    ctx->pc = 0x378890u;
    SET_GPR_U32(ctx, 31, 0x378898u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x378890u, 0x378898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378898u;
label_378898:
    // 0x378898: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x378898u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37889c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37889cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3788a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3788a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3788a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3788a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3788a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3788a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3788ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3788ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3788ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3788B4u;
}
