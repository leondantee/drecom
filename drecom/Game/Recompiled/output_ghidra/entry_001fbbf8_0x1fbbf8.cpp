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

// Function: entry_001fbbf8
// Address: 0x1fbbf8 - 0x1fbc30
void entry_001fbbf8_0x1fbbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbbf8_0x1fbbf8");
#endif

    ctx->pc = 0x1fbbf8u;

    // 0x1fbbf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbbfc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fbbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fbc00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fbc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbc04: 0x203202b  sltu        $a0, $s0, $v1
    ctx->pc = 0x1fbc04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fbc08: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1FBC08u;
    {
        const bool branch_taken_0x1fbc08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc08) {
            ctx->pc = 0x1FBB48u;
            return;
        }
    }
    ctx->pc = 0x1FBC10u;
    // 0x1fbc10: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1fbc10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbc14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbc14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbc18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbc18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbc1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbc24: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fbc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fbc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC30u;
}
