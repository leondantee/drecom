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

// Function: entry_0032b7d4
// Address: 0x32b7d4 - 0x32b7e4
void entry_0032b7d4_0x32b7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b7d4_0x32b7d4");
#endif

    ctx->pc = 0x32b7d4u;

    // 0x32b7d4: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x32b7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b7d8: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x32b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
    // 0x32b7dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B7DCu;
    {
        const bool branch_taken_0x32b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7dc) {
            ctx->pc = 0x32B800u;
            return;
        }
    }
    ctx->pc = 0x32B7E4u;
}
