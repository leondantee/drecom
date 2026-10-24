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

// Function: entry_00217d18
// Address: 0x217d18 - 0x217d34
void entry_00217d18_0x217d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217d18_0x217d18");
#endif

    ctx->pc = 0x217d18u;

label_217d18:
    // 0x217d18: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x217d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x217d1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x217d20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x217d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x217d24: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x217d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217d28: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x217d28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217D2Cu;
    {
        const bool branch_taken_0x217d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d2c) {
            ctx->pc = 0x217D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217d18;
        }
    }
    ctx->pc = 0x217D34u;
}
