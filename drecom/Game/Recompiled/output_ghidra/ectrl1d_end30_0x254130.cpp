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

// Function: ectrl1d_end30
// Address: 0x254130 - 0x254184
void ectrl1d_end30_0x254130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1d_end30_0x254130");
#endif

    ctx->pc = 0x254130u;

    // 0x254130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254138: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x254138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25413c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x254140: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x254140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254144: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x254144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x254148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x254148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25414c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25414cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x254150: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x254150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x254154: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x254154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x254158: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x254158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x25415c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x25415cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x254160: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254160u;
    {
        const bool branch_taken_0x254160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x254160) {
            ctx->pc = 0x254174u;
            goto label_254174;
        }
    }
    ctx->pc = 0x254168u;
    // 0x254168: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x254168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x25416c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x25416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x254170: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x254170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
label_254174:
    // 0x254174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25417c: 0x3e00008  jr          $ra
    ctx->pc = 0x25417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254184u;
}
