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

// Function: Pad_act_all_stop
// Address: 0x1a1720 - 0x1a176c
void Pad_act_all_stop_0x1a1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_act_all_stop_0x1a1720");
#endif

    switch (ctx->pc) {
        case 0x1a1740u: goto label_1a1740;
        default: break;
    }

    ctx->pc = 0x1a1720u;

    // 0x1a1720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a172c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a1730: 0x24702540  addiu       $s0, $v1, 0x2540
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9536));
    // 0x1a1734: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a1738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1738u;
    {
        const bool branch_taken_0x1a1738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1738) {
            ctx->pc = 0x1A1748u;
            goto label_1a1748;
        }
    }
    ctx->pc = 0x1A1740u;
label_1a1740:
    // 0x1a1740: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a1740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1744: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a1744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a1748:
    // 0x1a1748: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x1a1748u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a174c: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1750: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A1750u;
    {
        const bool branch_taken_0x1a1750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1750) {
            ctx->pc = 0x1A1740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1740;
        }
    }
    ctx->pc = 0x1A1758u;
    // 0x1a1758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a175c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a175cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1764: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A176Cu;
}
