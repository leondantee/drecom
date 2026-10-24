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

// Function: Em10_R1_br_evt_walk
// Address: 0x12acf0 - 0x12ad64
void Em10_R1_br_evt_walk_0x12acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_evt_walk_0x12acf0");
#endif

    ctx->pc = 0x12acf0u;

    // 0x12acf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12acf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12acf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12acfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad00: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12ad00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12ad04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12ad0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x12ad10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12ad14: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12AD14u;
    {
        const bool branch_taken_0x12ad14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ad14) {
            ctx->pc = 0x12AD54u;
            goto label_12ad54;
        }
    }
    ctx->pc = 0x12AD1Cu;
    // 0x12ad1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ad20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ad24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ad28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ad2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ad30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ad34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ad38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ad3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ad40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ad44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ad48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12ad4c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AD4Cu;
    {
        const bool branch_taken_0x12ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ad4c) {
            ctx->pc = 0x12AD54u;
            goto label_12ad54;
        }
    }
    ctx->pc = 0x12AD54u;
label_12ad54:
    // 0x12ad54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ad54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ad58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12AD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AD64u;
}
