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

// Function: entry_00179910
// Address: 0x179910 - 0x17991c
void entry_00179910_0x179910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179910_0x179910");
#endif

    ctx->pc = 0x179910u;

    // 0x179910: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x179914u;
    {
        const bool branch_taken_0x179914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179914) {
            ctx->pc = 0x179938u;
            return;
        }
    }
    ctx->pc = 0x17991Cu;
}
