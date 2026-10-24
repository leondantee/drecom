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

// Function: entry_00179c68
// Address: 0x179c68 - 0x179c74
void entry_00179c68_0x179c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179c68_0x179c68");
#endif

    ctx->pc = 0x179c68u;

    // 0x179c68: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179C6Cu;
    {
        const bool branch_taken_0x179c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c6c) {
            ctx->pc = 0x179C78u;
            return;
        }
    }
    ctx->pc = 0x179C74u;
}
