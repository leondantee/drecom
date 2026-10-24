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

// Function: entry_002fc468
// Address: 0x2fc468 - 0x2fc4a4
void entry_002fc468_0x2fc468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc468_0x2fc468");
#endif

    ctx->pc = 0x2fc468u;

    // 0x2fc468: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc46c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fc46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fc470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc474: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FC474u;
    {
        const bool branch_taken_0x2fc474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fc474) {
            ctx->pc = 0x2FC54Cu;
            return;
        }
    }
    ctx->pc = 0x2FC47Cu;
    // 0x2fc47c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fc47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc480: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FC480u;
    {
        const bool branch_taken_0x2fc480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fc480) {
            ctx->pc = 0x2FC518u;
            return;
        }
    }
    ctx->pc = 0x2FC488u;
    // 0x2fc488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fc488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc48c: 0x10850015  beq         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FC48Cu;
    {
        const bool branch_taken_0x2fc48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fc48c) {
            ctx->pc = 0x2FC4E4u;
            return;
        }
    }
    ctx->pc = 0x2FC494u;
    // 0x2fc494: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC494u;
    {
        const bool branch_taken_0x2fc494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc494) {
            ctx->pc = 0x2FC4A4u;
            return;
        }
    }
    ctx->pc = 0x2FC49Cu;
    // 0x2fc49c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2FC49Cu;
    {
        const bool branch_taken_0x2fc49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc49c) {
            ctx->pc = 0x2FC578u;
            return;
        }
    }
    ctx->pc = 0x2FC4A4u;
}
