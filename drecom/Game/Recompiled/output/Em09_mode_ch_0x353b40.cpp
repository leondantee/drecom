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

// Function: Em09_mode_ch
// Address: 0x353b40 - 0x353bc4
void Em09_mode_ch_0x353b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_mode_ch_0x353b40");
#endif

    ctx->pc = 0x353b40u;

    // 0x353b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x353b44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x353b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x353b48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353b50: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x353b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x353b54: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x353b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x353b58: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x353B58u;
    {
        const bool branch_taken_0x353b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b58) {
            ctx->pc = 0x353BA0u;
            goto label_353ba0;
        }
    }
    ctx->pc = 0x353B60u;
    // 0x353b60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x353b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353b64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x353b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x353b6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b70: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x353b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x353b74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x353b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x353b7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x353b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x353b84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x353b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x353b8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x353b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353b90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353b94: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x353b94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x353b98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x353B98u;
    {
        const bool branch_taken_0x353b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b98) {
            ctx->pc = 0x353BB8u;
            goto label_353bb8;
        }
    }
    ctx->pc = 0x353BA0u;
label_353ba0:
    // 0x353ba0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353ba4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353ba8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x353ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x353bac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x353bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x353bb0: 0x14600001  bnez        $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x353BB0u;
    {
        const bool branch_taken_0x353bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353bb0) {
            ctx->pc = 0x353BB8u;
            goto label_353bb8;
        }
    }
    ctx->pc = 0x353BB8u;
label_353bb8:
    // 0x353bb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x353bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x353bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x353BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353BC4u;
}
