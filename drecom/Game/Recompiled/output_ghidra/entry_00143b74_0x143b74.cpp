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

// Function: entry_00143b74
// Address: 0x143b74 - 0x143be4
void entry_00143b74_0x143b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143b74_0x143b74");
#endif

    switch (ctx->pc) {
        case 0x143bacu: goto label_143bac;
        case 0x143bc0u: goto label_143bc0;
        default: break;
    }

    ctx->pc = 0x143b74u;

    // 0x143b74: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x143b74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x143b78: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x143b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143b7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x143b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x143b80: 0xae021344  sw          $v0, 0x1344($s0)
    ctx->pc = 0x143b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4932), GPR_U32(ctx, 2));
    // 0x143b84: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x143b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143b88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x143b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x143b8c: 0xae02136c  sw          $v0, 0x136C($s0)
    ctx->pc = 0x143b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4972), GPR_U32(ctx, 2));
    // 0x143b90: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x143b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143b94: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x143b98: 0xae021370  sw          $v0, 0x1370($s0)
    ctx->pc = 0x143b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4976), GPR_U32(ctx, 2));
    // 0x143b9c: 0x8e041370  lw          $a0, 0x1370($s0)
    ctx->pc = 0x143b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x143ba0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143ba4: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x143BA4u;
    SET_GPR_U32(ctx, 31, 0x143BACu);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x143BA4u, 0x143BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BACu;
label_143bac:
    // 0x143bac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x143bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x143bb0: 0x8e05136c  lw          $a1, 0x136C($s0)
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4972)));
    // 0x143bb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x143bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143bb8: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x143BB8u;
    SET_GPR_U32(ctx, 31, 0x143BC0u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x143BB8u, 0x143BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BC0u;
label_143bc0:
    // 0x143bc0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x143bc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143bc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143bd8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x143BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143BE4u;
}
