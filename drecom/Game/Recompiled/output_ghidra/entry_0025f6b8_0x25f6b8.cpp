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

// Function: entry_0025f6b8
// Address: 0x25f6b8 - 0x25f6f4
void entry_0025f6b8_0x25f6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f6b8_0x25f6b8");
#endif

    ctx->pc = 0x25f6b8u;

    // 0x25f6b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f6bc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f6c0: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f6c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f6c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f6c8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f6c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f6cc: 0x1460ff30  bnez        $v1, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x25F6CCu;
    {
        const bool branch_taken_0x25f6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f6cc) {
            ctx->pc = 0x25F390u;
            return;
        }
    }
    ctx->pc = 0x25F6D4u;
    // 0x25f6d4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x25f6d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f6e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25f6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25f6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25F6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F6F4u;
}
