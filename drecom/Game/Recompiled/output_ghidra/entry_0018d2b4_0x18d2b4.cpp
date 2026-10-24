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

// Function: entry_0018d2b4
// Address: 0x18d2b4 - 0x18d2d4
void entry_0018d2b4_0x18d2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2b4_0x18d2b4");
#endif

    ctx->pc = 0x18d2b4u;

    // 0x18d2b4: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x18d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x18d2b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D2B8u;
    {
        const bool branch_taken_0x18d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2b8) {
            ctx->pc = 0x18D2D4u;
            return;
        }
    }
    ctx->pc = 0x18D2C0u;
    // 0x18d2c0: 0xae50006c  sw          $s0, 0x6C($s2)
    ctx->pc = 0x18d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
    // 0x18d2c4: 0xae500068  sw          $s0, 0x68($s2)
    ctx->pc = 0x18d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 16));
    // 0x18d2c8: 0xae000b20  sw          $zero, 0xB20($s0)
    ctx->pc = 0x18d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 0));
    // 0x18d2cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D2CCu;
    {
        const bool branch_taken_0x18d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2cc) {
            ctx->pc = 0x18D2E8u;
            return;
        }
    }
    ctx->pc = 0x18D2D4u;
}
