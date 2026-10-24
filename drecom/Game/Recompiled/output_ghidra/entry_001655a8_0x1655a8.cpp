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

// Function: entry_001655a8
// Address: 0x1655a8 - 0x1655c8
void entry_001655a8_0x1655a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001655a8_0x1655a8");
#endif

    ctx->pc = 0x1655a8u;

    // 0x1655a8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1655ac: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1655acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1655b0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1655b4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1655b8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1655B8u;
    {
        const bool branch_taken_0x1655b8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1655b8) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x1655C0u;
    // 0x1655c0: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x1655c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x1655c4: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1655c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    ctx->pc = 0x1655c8u;
}
