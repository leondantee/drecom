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

// Function: entry_00155794
// Address: 0x155794 - 0x1557c0
void entry_00155794_0x155794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155794_0x155794");
#endif

    ctx->pc = 0x155794u;

    // 0x155794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155798: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15579c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15579Cu;
    {
        const bool branch_taken_0x15579c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15579c) {
            ctx->pc = 0x1557C0u;
            return;
        }
    }
    ctx->pc = 0x1557A4u;
    // 0x1557a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1557a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1557a8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1557A8u;
    {
        const bool branch_taken_0x1557a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1557a8) {
            ctx->pc = 0x1557E0u;
            return;
        }
    }
    ctx->pc = 0x1557B0u;
    // 0x1557b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1557B0u;
    {
        const bool branch_taken_0x1557b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557b0) {
            ctx->pc = 0x1557E0u;
            return;
        }
    }
    ctx->pc = 0x1557B8u;
    // 0x1557b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x1557E0u;
            return;
        }
    }
    ctx->pc = 0x1557C0u;
}
