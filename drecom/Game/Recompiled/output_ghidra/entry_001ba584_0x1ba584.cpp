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

// Function: entry_001ba584
// Address: 0x1ba584 - 0x1ba5ac
void entry_001ba584_0x1ba584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba584_0x1ba584");
#endif

    ctx->pc = 0x1ba584u;

    // 0x1ba584: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba588: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1ba588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ba58c: 0x108001b1  beqz        $a0, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x1BA58Cu;
    {
        const bool branch_taken_0x1ba58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba58c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA594u;
    // 0x1ba594: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba598: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x1ba598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1ba59c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1ba59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ba5a0: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x1ba5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ba5a4: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1BA5A4u;
    {
        const bool branch_taken_0x1ba5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5a4) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA5ACu;
}
