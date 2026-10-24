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

// Function: get_eff2d_work
// Address: 0x18bbc0 - 0x18bc44
void get_eff2d_work_0x18bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_eff2d_work_0x18bbc0");
#endif

    ctx->pc = 0x18bbc0u;

    // 0x18bbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18bbc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bbd0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18bbd0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18bbd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18bbd8: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18bbdc: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x18bbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x53A674u));
    // 0x18bbe0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BBE0u;
    {
        const bool branch_taken_0x18bbe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bbe0) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BBE8u;
    // 0x18bbe8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18bbec: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18bbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18bbf0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BBF0u;
    {
        const bool branch_taken_0x18bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbf0) {
            ctx->pc = 0x18BC2Cu;
            goto label_18bc2c;
        }
    }
    ctx->pc = 0x18BBF8u;
label_18bbf8:
    // 0x18bbf8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18bbfc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18bc00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC00u;
    {
        const bool branch_taken_0x18bc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bc00) {
            ctx->pc = 0x18BC18u;
            goto label_18bc18;
        }
    }
    ctx->pc = 0x18BC08u;
    // 0x18bc08: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x18bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x18bc0c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x18bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x18bc10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BC10u;
    {
        const bool branch_taken_0x18bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bc10) {
            ctx->pc = 0x18BC28u;
            goto label_18bc28;
        }
    }
    ctx->pc = 0x18BC18u;
label_18bc18:
    // 0x18bc18: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x18bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18bc1c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x18bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x18bc20: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18bc24: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_18bc28:
    // 0x18bc28: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x18bc28u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18bc2c:
    // 0x18bc2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bc2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bc38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18bc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BC44u;
}
