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

// Function: entry_0010dc88
// Address: 0x10dc88 - 0x10dc90
void entry_0010dc88_0x10dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc88_0x10dc88");
#endif

    ctx->pc = 0x10dc88u;

    // 0x10dc88: 0x8c4345f8  lw          $v1, 0x45F8($v0)
    ctx->pc = 0x10dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17912)));
    // 0x10dc8c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DC8Cu;
    {
        const bool branch_taken_0x10dc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10dc8c) {
            ctx->pc = 0x10DCA8u;
            return;
        }
    }
    ctx->pc = 0x10DC94u;
}
