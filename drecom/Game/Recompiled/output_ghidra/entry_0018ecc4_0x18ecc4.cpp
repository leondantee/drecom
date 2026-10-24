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

// Function: entry_0018ecc4
// Address: 0x18ecc4 - 0x18ecf0
void entry_0018ecc4_0x18ecc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ecc4_0x18ecc4");
#endif

    ctx->pc = 0x18ecc4u;

    // 0x18ecc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecc8: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x18eccc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x18ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18ecd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ECD0u;
    {
        const bool branch_taken_0x18ecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ecd0) {
            ctx->pc = 0x18ECF0u;
            return;
        }
    }
    ctx->pc = 0x18ECD8u;
    // 0x18ecd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecdc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x18ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x18ece0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ece4: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x18ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x18ece8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18ECE8u;
    {
        const bool branch_taken_0x18ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ece8) {
            ctx->pc = 0x18ED08u;
            return;
        }
    }
    ctx->pc = 0x18ECF0u;
}
