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

// Function: entry_0034cca8
// Address: 0x34cca8 - 0x34ccb4
void entry_0034cca8_0x34cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034cca8_0x34cca8");
#endif

    ctx->pc = 0x34cca8u;

    // 0x34cca8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ccac: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x34CCACu;
    {
        const bool branch_taken_0x34ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ccac) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34CCB4u;
}
