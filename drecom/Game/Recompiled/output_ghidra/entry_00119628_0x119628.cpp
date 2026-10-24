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

// Function: entry_00119628
// Address: 0x119628 - 0x119644
void entry_00119628_0x119628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119628_0x119628");
#endif

    ctx->pc = 0x119628u;

label_119628:
    // 0x119628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11962c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x119630: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x119630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x119634: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x119634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x119638: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x119638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11963c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11963Cu;
    {
        const bool branch_taken_0x11963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11963c) {
            ctx->pc = 0x119628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119628;
        }
    }
    ctx->pc = 0x119644u;
}
