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

// Function: entry_001db940
// Address: 0x1db940 - 0x1db958
void entry_001db940_0x1db940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db940_0x1db940");
#endif

    ctx->pc = 0x1db940u;

    // 0x1db940: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1db940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db944: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1db948: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB948u;
    {
        const bool branch_taken_0x1db948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db948) {
            ctx->pc = 0x1DB958u;
            return;
        }
    }
    ctx->pc = 0x1DB950u;
    // 0x1db950: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1db950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1db954: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1db954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x1db958u;
}
