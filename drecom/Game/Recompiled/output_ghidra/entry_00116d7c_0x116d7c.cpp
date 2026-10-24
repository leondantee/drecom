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

// Function: entry_00116d7c
// Address: 0x116d7c - 0x116da4
void entry_00116d7c_0x116d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d7c_0x116d7c");
#endif

    switch (ctx->pc) {
        case 0x116d88u: goto label_116d88;
        default: break;
    }

    ctx->pc = 0x116d7cu;

    // 0x116d7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116d80: 0xc0456c2  jal         func_115B08
    ctx->pc = 0x116D80u;
    SET_GPR_U32(ctx, 31, 0x116D88u);
    ctx->pc = 0x116D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D80u;
    // 0x116d84: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B08u, 0x116D80u, 0x116D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D88u;
label_116d88:
    // 0x116d88: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x116d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x116d8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x116d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116d90: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x116d90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x116d94: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x116d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116d98: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x116D98u;
    {
        const bool branch_taken_0x116d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D98u;
        // 0x116d9c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d98) {
            ctx->pc = 0x116D60u;
            return;
        }
    }
    ctx->pc = 0x116DA0u;
    // 0x116da0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x116da4u;
}
