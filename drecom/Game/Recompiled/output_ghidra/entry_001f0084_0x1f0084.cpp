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

// Function: entry_001f0084
// Address: 0x1f0084 - 0x1f00b8
void entry_001f0084_0x1f0084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0084_0x1f0084");
#endif

    ctx->pc = 0x1f0084u;

    // 0x1f0084: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0088: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1f0088u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f008c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1f008cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f0090: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0094: 0x10830172  beq         $a0, $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x1F0094u;
    {
        const bool branch_taken_0x1f0094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f0094) {
            ctx->pc = 0x1F0660u;
            return;
        }
    }
    ctx->pc = 0x1F009Cu;
    // 0x1f009c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00a0: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F00A0u;
    {
        const bool branch_taken_0x1f00a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f00a0) {
            ctx->pc = 0x1F0248u;
            return;
        }
    }
    ctx->pc = 0x1F00A8u;
    // 0x1f00a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F00A8u;
    {
        const bool branch_taken_0x1f00a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00a8) {
            ctx->pc = 0x1F00B8u;
            return;
        }
    }
    ctx->pc = 0x1F00B0u;
    // 0x1f00b0: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x1F00B0u;
    {
        const bool branch_taken_0x1f00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00b0) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F00B8u;
}
