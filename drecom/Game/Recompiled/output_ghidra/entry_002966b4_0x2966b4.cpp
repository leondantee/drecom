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

// Function: entry_002966b4
// Address: 0x2966b4 - 0x2966d4
void entry_002966b4_0x2966b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002966b4_0x2966b4");
#endif

    ctx->pc = 0x2966b4u;

    // 0x2966b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2966b8: 0x8c636998  lw          $v1, 0x6998($v1)
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27032)));
    // 0x2966bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2966BCu;
    {
        const bool branch_taken_0x2966bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966bc) {
            ctx->pc = 0x2966D4u;
            return;
        }
    }
    ctx->pc = 0x2966C4u;
    // 0x2966c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2966c8: 0x8c63699c  lw          $v1, 0x699C($v1)
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27036)));
    // 0x2966cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2966CCu;
    {
        const bool branch_taken_0x2966cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2966cc) {
            ctx->pc = 0x2966E0u;
            return;
        }
    }
    ctx->pc = 0x2966D4u;
}
