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

// Function: entry_0025f9b8
// Address: 0x25f9b8 - 0x25f9f0
void entry_0025f9b8_0x25f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f9b8_0x25f9b8");
#endif

    ctx->pc = 0x25f9b8u;

    // 0x25f9b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f9bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f9c0: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f9c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f9c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f9c8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f9c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f9cc: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x25F9CCu;
    {
        const bool branch_taken_0x25f9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f9cc) {
            ctx->pc = 0x25F81Cu;
            return;
        }
    }
    ctx->pc = 0x25F9D4u;
    // 0x25f9d4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x25f9d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f9e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x25f9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25f9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F9F0u;
}
