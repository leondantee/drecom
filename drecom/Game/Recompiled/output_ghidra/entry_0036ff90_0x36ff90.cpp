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

// Function: entry_0036ff90
// Address: 0x36ff90 - 0x36ffd8
void entry_0036ff90_0x36ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ff90_0x36ff90");
#endif

    switch (ctx->pc) {
        case 0x36ff98u: goto label_36ff98;
        default: break;
    }

    ctx->pc = 0x36ff90u;

    // 0x36ff90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x36FF90u;
    SET_GPR_U32(ctx, 31, 0x36FF98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x36FF90u, 0x36FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF98u;
label_36ff98:
    // 0x36ff98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36ff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ff9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x36ff9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x36ffa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36FFA0u;
    {
        const bool branch_taken_0x36ffa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ffa0) {
            ctx->pc = 0x36FFD8u;
            return;
        }
    }
    ctx->pc = 0x36FFA8u;
    // 0x36ffa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ffac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36ffb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ffb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ffb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffbc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36ffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ffc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffc4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36ffc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ffc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffcc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36ffccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ffd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ffd4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36ffd8u;
}
