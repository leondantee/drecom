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

// Function: entry_00378024
// Address: 0x378024 - 0x378044
void entry_00378024_0x378024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378024_0x378024");
#endif

    ctx->pc = 0x378024u;

    // 0x378024: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x378024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x378028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378028u;
    {
        const bool branch_taken_0x378028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378028) {
            ctx->pc = 0x378044u;
            return;
        }
    }
    ctx->pc = 0x378030u;
    // 0x378030: 0x2605010c  addiu       $a1, $s0, 0x10C
    ctx->pc = 0x378030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x378034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x378034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x378038: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x378038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37803c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378040: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x378040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x378044u;
}
