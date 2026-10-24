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

// Function: entry_001797bc
// Address: 0x1797bc - 0x1797c8
void entry_001797bc_0x1797bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001797bc_0x1797bc");
#endif

    ctx->pc = 0x1797bcu;

    // 0x1797bc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1797bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1797c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1797C0u;
    {
        const bool branch_taken_0x1797c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1797c0) {
            ctx->pc = 0x1797D0u;
            return;
        }
    }
    ctx->pc = 0x1797C8u;
}
