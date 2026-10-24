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

// Function: entry_0017991c
// Address: 0x17991c - 0x179930
void entry_0017991c_0x17991c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017991c_0x17991c");
#endif

    ctx->pc = 0x17991cu;

    // 0x17991c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x17991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179924: 0x49043  sra         $s2, $a0, 1
    ctx->pc = 0x179924u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 1));
    // 0x179928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x179928u;
    {
        const bool branch_taken_0x179928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179928) {
            ctx->pc = 0x179938u;
            return;
        }
    }
    ctx->pc = 0x179930u;
}
