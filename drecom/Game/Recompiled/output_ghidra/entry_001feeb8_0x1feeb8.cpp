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

// Function: entry_001feeb8
// Address: 0x1feeb8 - 0x1feefc
void entry_001feeb8_0x1feeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feeb8_0x1feeb8");
#endif

    ctx->pc = 0x1feeb8u;

    // 0x1feeb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1feeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feebc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1feebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1feec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1feec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1feec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1feec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1feec8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1feec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1feecc: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FEECCu;
    {
        const bool branch_taken_0x1feecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feecc) {
            ctx->pc = 0x1FEE54u;
            return;
        }
    }
    ctx->pc = 0x1FEED4u;
    // 0x1feed4: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1feed4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1feed8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1feed8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1feedc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1feedcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1feee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1feee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1feee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1feee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feeec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feeecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feef0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1feef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1feef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEEFCu;
}
