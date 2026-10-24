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

// Function: entry_0018f054
// Address: 0x18f054 - 0x18f080
void entry_0018f054_0x18f054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f054_0x18f054");
#endif

    ctx->pc = 0x18f054u;

    // 0x18f054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f058: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x18f058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x18f05c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x18f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18f060: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F060u;
    {
        const bool branch_taken_0x18f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f060) {
            ctx->pc = 0x18F080u;
            return;
        }
    }
    ctx->pc = 0x18F068u;
    // 0x18f068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f06c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x18f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x18f070: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f074: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x18f074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x18f078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F078u;
    {
        const bool branch_taken_0x18f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f078) {
            ctx->pc = 0x18F098u;
            return;
        }
    }
    ctx->pc = 0x18F080u;
}
