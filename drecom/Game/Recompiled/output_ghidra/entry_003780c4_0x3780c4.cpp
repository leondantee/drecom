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

// Function: entry_003780c4
// Address: 0x3780c4 - 0x3780e4
void entry_003780c4_0x3780c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003780c4_0x3780c4");
#endif

    ctx->pc = 0x3780c4u;

    // 0x3780c4: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x3780c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3780c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3780C8u;
    {
        const bool branch_taken_0x3780c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780c8) {
            ctx->pc = 0x3780E4u;
            return;
        }
    }
    ctx->pc = 0x3780D0u;
    // 0x3780d0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x3780d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3780d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3780d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3780d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3780d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3780dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3780dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3780e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3780e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x3780e4u;
}
