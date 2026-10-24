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

// Function: entry_0017f2d4
// Address: 0x17f2d4 - 0x17f2f4
void entry_0017f2d4_0x17f2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f2d4_0x17f2d4");
#endif

    ctx->pc = 0x17f2d4u;

    // 0x17f2d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f2d8: 0x12630017  beq         $s3, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F2D8u;
    {
        const bool branch_taken_0x17f2d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f2d8) {
            ctx->pc = 0x17F338u;
            return;
        }
    }
    ctx->pc = 0x17F2E0u;
    // 0x17f2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f2e4: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F2E4u;
    {
        const bool branch_taken_0x17f2e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f2e4) {
            ctx->pc = 0x17F2F4u;
            return;
        }
    }
    ctx->pc = 0x17F2ECu;
    // 0x17f2ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17F2ECu;
    {
        const bool branch_taken_0x17f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2ec) {
            ctx->pc = 0x17F378u;
            return;
        }
    }
    ctx->pc = 0x17F2F4u;
}
