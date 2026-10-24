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

// Function: entry_00296c34
// Address: 0x296c34 - 0x296c4c
void entry_00296c34_0x296c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296c34_0x296c34");
#endif

    ctx->pc = 0x296c34u;

    // 0x296c34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c38: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296c3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c40: 0xac6469b0  sw          $a0, 0x69B0($v1)
    ctx->pc = 0x296c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27056), GPR_U32(ctx, 4));
    // 0x296c44: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x296C44u;
    {
        const bool branch_taken_0x296c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c44) {
            ctx->pc = 0x296D98u;
            return;
        }
    }
    ctx->pc = 0x296C4Cu;
}
