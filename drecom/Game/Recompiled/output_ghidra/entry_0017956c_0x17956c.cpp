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

// Function: entry_0017956c
// Address: 0x17956c - 0x179578
void entry_0017956c_0x17956c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017956c_0x17956c");
#endif

    ctx->pc = 0x17956cu;

    // 0x17956c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x179570: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x179570u;
    {
        const bool branch_taken_0x179570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179570) {
            ctx->pc = 0x1797D0u;
            return;
        }
    }
    ctx->pc = 0x179578u;
}
