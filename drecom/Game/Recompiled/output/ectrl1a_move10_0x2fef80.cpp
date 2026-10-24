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

// Function: ectrl1a_move10
// Address: 0x2fef80 - 0x2fefe4
void ectrl1a_move10_0x2fef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1a_move10_0x2fef80");
#endif

    ctx->pc = 0x2fef80u;

    // 0x2fef80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fef84: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2fef84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2fef88: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fef8c: 0x246391e0  addiu       $v1, $v1, -0x6E20
    ctx->pc = 0x2fef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939104));
    // 0x2fef90: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x2fef90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2fef94: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fef94u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3991E0u));
    // 0x2fef98: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fef98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fef9c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fefa0: 0x246391f0  addiu       $v1, $v1, -0x6E10
    ctx->pc = 0x2fefa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939120));
    // 0x2fefa4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fefa8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fefa8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3991F0u));
    // 0x2fefac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fefacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fefb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fefb4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fefb8: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2fefb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fefbc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEFBCu;
    {
        const bool branch_taken_0x2fefbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fefbc) {
            ctx->pc = 0x2FEFD8u;
            goto label_2fefd8;
        }
    }
    ctx->pc = 0x2FEFC4u;
    // 0x2fefc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fefc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fefcc: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2fefccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fefd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fefd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fefd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fefd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2fefd8:
    // 0x2fefd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2fefd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fefdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEFE4u;
}
