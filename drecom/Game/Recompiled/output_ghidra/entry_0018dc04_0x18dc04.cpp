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

// Function: entry_0018dc04
// Address: 0x18dc04 - 0x18dc24
void entry_0018dc04_0x18dc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dc04_0x18dc04");
#endif

    ctx->pc = 0x18dc04u;

    // 0x18dc04: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x18dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x18dc08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC08u;
    {
        const bool branch_taken_0x18dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dc08) {
            ctx->pc = 0x18DC24u;
            return;
        }
    }
    ctx->pc = 0x18DC10u;
    // 0x18dc10: 0xae70006c  sw          $s0, 0x6C($s3)
    ctx->pc = 0x18dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
    // 0x18dc14: 0xae700068  sw          $s0, 0x68($s3)
    ctx->pc = 0x18dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 16));
    // 0x18dc18: 0xae000b20  sw          $zero, 0xB20($s0)
    ctx->pc = 0x18dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 0));
    // 0x18dc1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC1Cu;
    {
        const bool branch_taken_0x18dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc1c) {
            ctx->pc = 0x18DC38u;
            return;
        }
    }
    ctx->pc = 0x18DC24u;
}
