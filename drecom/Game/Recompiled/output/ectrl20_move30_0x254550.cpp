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

// Function: ectrl20_move30
// Address: 0x254550 - 0x25459c
void ectrl20_move30_0x254550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl20_move30_0x254550");
#endif

    ctx->pc = 0x254550u;

    // 0x254550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254554: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x254554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x254558: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x254558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25455c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x25455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x254560: 0x2c630019  sltiu       $v1, $v1, 0x19
    ctx->pc = 0x254560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x254564: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x254564u;
    {
        const bool branch_taken_0x254564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254564) {
            ctx->pc = 0x254580u;
            goto label_254580;
        }
    }
    ctx->pc = 0x25456Cu;
    // 0x25456c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254570: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x254570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254574: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x254574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x254578: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x254578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25457c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x25457cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_254580:
    // 0x254580: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x254580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254584: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x254584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x254588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25458c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x25458cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x254590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x254590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x254594: 0x3e00008  jr          $ra
    ctx->pc = 0x254594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25459Cu;
}
