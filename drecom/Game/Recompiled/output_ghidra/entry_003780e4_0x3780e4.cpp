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

// Function: entry_003780e4
// Address: 0x3780e4 - 0x378104
void entry_003780e4_0x3780e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003780e4_0x3780e4");
#endif

    ctx->pc = 0x3780e4u;

    // 0x3780e4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3780e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3780e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3780E8u;
    {
        const bool branch_taken_0x3780e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780e8) {
            ctx->pc = 0x378104u;
            return;
        }
    }
    ctx->pc = 0x3780F0u;
    // 0x3780f0: 0x26050124  addiu       $a1, $s0, 0x124
    ctx->pc = 0x3780f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x3780f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3780f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3780f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3780f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3780fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3780fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378100: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x378104u;
}
