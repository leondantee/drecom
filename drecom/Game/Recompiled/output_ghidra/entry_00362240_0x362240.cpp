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

// Function: entry_00362240
// Address: 0x362240 - 0x362250
void entry_00362240_0x362240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362240_0x362240");
#endif

    ctx->pc = 0x362240u;

    // 0x362240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362244: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x362244u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x362248: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x362248u;
    {
        const bool branch_taken_0x362248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362248) {
            ctx->pc = 0x3621F4u;
            return;
        }
    }
    ctx->pc = 0x362250u;
}
