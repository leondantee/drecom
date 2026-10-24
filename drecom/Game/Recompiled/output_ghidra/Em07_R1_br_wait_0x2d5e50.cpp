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

// Function: Em07_R1_br_wait
// Address: 0x2d5e50 - 0x2d5ee4
void Em07_R1_br_wait_0x2d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_br_wait_0x2d5e50");
#endif

    ctx->pc = 0x2d5e50u;

    // 0x2d5e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5e54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d5e58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5e5c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d5e60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5e64: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d5e68: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d5e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d5e6c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D5E6Cu;
    {
        const bool branch_taken_0x2d5e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e6c) {
            ctx->pc = 0x2D5ED8u;
            goto label_2d5ed8;
        }
    }
    ctx->pc = 0x2D5E74u;
    // 0x2d5e74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5e78: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d5e7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d5e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5e80: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d5e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d5e84: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d5e88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d5e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d5e8c: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d5e90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5e94: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d5e98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d5e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5e9c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d5ea0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d5ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d5ea4: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d5ea8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5eac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5eb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5eb4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d5eb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5ebc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5ec0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5ec4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5ec8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5ecc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5ed0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5ed4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d5ed8:
    // 0x2d5ed8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5EE4u;
}
