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

// Function: entry_00217cf0
// Address: 0x217cf0 - 0x217d0c
void entry_00217cf0_0x217cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217cf0_0x217cf0");
#endif

    ctx->pc = 0x217cf0u;

label_217cf0:
    // 0x217cf0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x217cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x217cf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x217cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x217cf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x217cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x217cfc: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x217cfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217d00: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x217d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217d04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217D04u;
    {
        const bool branch_taken_0x217d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d04) {
            ctx->pc = 0x217CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217cf0;
        }
    }
    ctx->pc = 0x217D0Cu;
}
