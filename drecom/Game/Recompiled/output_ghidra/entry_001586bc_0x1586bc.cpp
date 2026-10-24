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

// Function: entry_001586bc
// Address: 0x1586bc - 0x1586c8
void entry_001586bc_0x1586bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001586bc_0x1586bc");
#endif

    ctx->pc = 0x1586bcu;

    // 0x1586bc: 0x8c23f848  lw          $v1, -0x7B8($at)
    ctx->pc = 0x1586bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965320)));
    // 0x1586c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1586C0u;
    {
        const bool branch_taken_0x1586c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586c0) {
            ctx->pc = 0x1586D0u;
            return;
        }
    }
    ctx->pc = 0x1586C8u;
}
