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

// Function: entry_0018f010
// Address: 0x18f010 - 0x18f040
void entry_0018f010_0x18f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f010_0x18f010");
#endif

    ctx->pc = 0x18f010u;

    // 0x18f010: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f014: 0x8c4300e8  lw          $v1, 0xE8($v0)
    ctx->pc = 0x18f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f018: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f01c: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18f020: 0xac4300e8  sw          $v1, 0xE8($v0)
    ctx->pc = 0x18f020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 3));
    // 0x18f024: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F024u;
    {
        const bool branch_taken_0x18f024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f024) {
            ctx->pc = 0x18F040u;
            return;
        }
    }
    ctx->pc = 0x18F02Cu;
    // 0x18f02c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f030: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18f034: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x18f034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x18f038: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F038u;
    {
        const bool branch_taken_0x18f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f038) {
            ctx->pc = 0x18F054u;
            return;
        }
    }
    ctx->pc = 0x18F040u;
}
