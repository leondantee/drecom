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

// Function: entry_002171f0
// Address: 0x2171f0 - 0x217210
void entry_002171f0_0x2171f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002171f0_0x2171f0");
#endif

    ctx->pc = 0x2171f0u;

    // 0x2171f0: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x2171f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2171f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2171f8: 0x8e42ab00  lw          $v0, -0x5500($s2)
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB00u));
    // 0x2171fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2171fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x217200: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x217200u;
    {
        const bool branch_taken_0x217200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x217204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217200u;
        // 0x217204: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217200) {
            ctx->pc = 0x2172CCu;
            return;
        }
    }
    ctx->pc = 0x217208u;
    // 0x217208: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x21720c: 0x2630cec0  addiu       $s0, $s1, -0x3140
    ctx->pc = 0x21720cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954688));
    ctx->pc = 0x217210u;
}
