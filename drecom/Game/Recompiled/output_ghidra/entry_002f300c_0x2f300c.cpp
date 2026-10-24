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

// Function: entry_002f300c
// Address: 0x2f300c - 0x2f3028
void entry_002f300c_0x2f300c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f300c_0x2f300c");
#endif

    ctx->pc = 0x2f300cu;

    // 0x2f300c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f300cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3010: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f3010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f3014: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3014u;
    {
        const bool branch_taken_0x2f3014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3014) {
            ctx->pc = 0x2F3028u;
            return;
        }
    }
    ctx->pc = 0x2F301Cu;
    // 0x2f301c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f301cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3020u;
    {
        const bool branch_taken_0x2f3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3020) {
            ctx->pc = 0x2F3030u;
            return;
        }
    }
    ctx->pc = 0x2F3028u;
}
