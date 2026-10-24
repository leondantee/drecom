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

// Function: entry_001dc60c
// Address: 0x1dc60c - 0x1dc678
void entry_001dc60c_0x1dc60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc60c_0x1dc60c");
#endif

    ctx->pc = 0x1dc60cu;

    // 0x1dc60c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc610: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc614: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1dc614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1dc618: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc61c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc624: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1dc628: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc62c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1dc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1dc630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc634: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc638: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1dc638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1dc63c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc640: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc648: 0x8c640138  lw          $a0, 0x138($v1)
    ctx->pc = 0x1dc648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1dc64c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc650: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x1dc650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
    // 0x1dc654: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1dc654u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc658: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc65c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc66c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dc670: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC678u;
}
