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

// Function: entry_0012f010
// Address: 0x12f010 - 0x12f034
void entry_0012f010_0x12f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f010_0x12f010");
#endif

    ctx->pc = 0x12f010u;

    // 0x12f010: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f014: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12f018: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x12f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x12f01c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F020u;
    {
        const bool branch_taken_0x12f020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f020) {
            ctx->pc = 0x12F034u;
            return;
        }
    }
    ctx->pc = 0x12F028u;
    // 0x12f028: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12f02c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f030: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x12f030u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12f034u;
}
