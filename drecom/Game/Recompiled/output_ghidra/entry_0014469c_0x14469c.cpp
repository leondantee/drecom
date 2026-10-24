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

// Function: entry_0014469c
// Address: 0x14469c - 0x1446b4
void entry_0014469c_0x14469c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014469c_0x14469c");
#endif

    ctx->pc = 0x14469cu;

    // 0x14469c: 0xae001374  sw          $zero, 0x1374($s0)
    ctx->pc = 0x14469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4980), GPR_U32(ctx, 0));
    // 0x1446a0: 0xae001378  sw          $zero, 0x1378($s0)
    ctx->pc = 0x1446a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4984), GPR_U32(ctx, 0));
    // 0x1446a4: 0xae00137c  sw          $zero, 0x137C($s0)
    ctx->pc = 0x1446a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4988), GPR_U32(ctx, 0));
    // 0x1446a8: 0xae001380  sw          $zero, 0x1380($s0)
    ctx->pc = 0x1446a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 0));
    // 0x1446ac: 0xae001384  sw          $zero, 0x1384($s0)
    ctx->pc = 0x1446acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 0));
    // 0x1446b0: 0xae001388  sw          $zero, 0x1388($s0)
    ctx->pc = 0x1446b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 0));
    ctx->pc = 0x1446b4u;
}
