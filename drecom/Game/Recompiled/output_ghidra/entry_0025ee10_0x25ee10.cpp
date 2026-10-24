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

// Function: entry_0025ee10
// Address: 0x25ee10 - 0x25ee4c
void entry_0025ee10_0x25ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ee10_0x25ee10");
#endif

    ctx->pc = 0x25ee10u;

    // 0x25ee10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25ee10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25ee14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ee18: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25ee18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25ee1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ee1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25ee20: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x25ee20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25ee24: 0x1460ff44  bnez        $v1, . + 4 + (-0xBC << 2)
    ctx->pc = 0x25EE24u;
    {
        const bool branch_taken_0x25ee24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ee24) {
            ctx->pc = 0x25EB38u;
            return;
        }
    }
    ctx->pc = 0x25EE2Cu;
    // 0x25ee2c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x25ee2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ee30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25ee30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ee34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25ee34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ee38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ee38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ee3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ee3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ee40: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25ee44: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE4Cu;
}
