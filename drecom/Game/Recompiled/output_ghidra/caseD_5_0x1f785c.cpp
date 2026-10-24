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

// Function: caseD_5
// Address: 0x1f785c - 0x1f7874
void caseD_5_0x1f785c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1f785c");
#endif

    ctx->pc = 0x1f785cu;

    // 0x1f785c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7860: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f7864: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1f7864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1f7868: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f7868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f786c: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F7874u;
}
