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

// Function: ectrl14_move10
// Address: 0x2fdb00 - 0x2fdb50
void ectrl14_move10_0x2fdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl14_move10_0x2fdb00");
#endif

    ctx->pc = 0x2fdb00u;

    // 0x2fdb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdb04: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fdb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2fdb08: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fdb0c: 0x24639110  addiu       $v1, $v1, -0x6EF0
    ctx->pc = 0x2fdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938896));
    // 0x2fdb10: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x2fdb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2fdb14: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fdb14u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399110u));
    // 0x2fdb18: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fdb18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fdb1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2fdb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fdb20: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fdb24: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2fdb24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fdb28: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDB28u;
    {
        const bool branch_taken_0x2fdb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb28) {
            ctx->pc = 0x2FDB44u;
            goto label_2fdb44;
        }
    }
    ctx->pc = 0x2FDB30u;
    // 0x2fdb30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2fdb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fdb34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fdb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fdb38: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2fdb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fdb3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2fdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fdb40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fdb40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2fdb44:
    // 0x2fdb44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fdb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fdb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB50u;
}
