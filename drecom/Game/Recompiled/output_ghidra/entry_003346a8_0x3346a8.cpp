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

// Function: entry_003346a8
// Address: 0x3346a8 - 0x3346c0
void entry_003346a8_0x3346a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003346a8_0x3346a8");
#endif

    ctx->pc = 0x3346a8u;

    // 0x3346a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3346a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3346ac: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x3346acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3346b0: 0x1460fee5  bnez        $v1, . + 4 + (-0x11B << 2)
    ctx->pc = 0x3346B0u;
    {
        const bool branch_taken_0x3346b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3346b0) {
            ctx->pc = 0x334248u;
            return;
        }
    }
    ctx->pc = 0x3346B8u;
    // 0x3346b8: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x3346B8u;
    {
        const bool branch_taken_0x3346b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346b8) {
            ctx->pc = 0x33499Cu;
            return;
        }
    }
    ctx->pc = 0x3346C0u;
}
