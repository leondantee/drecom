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

// Function: entry_002013f0
// Address: 0x2013f0 - 0x201410
void entry_002013f0_0x2013f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013f0_0x2013f0");
#endif

    ctx->pc = 0x2013f0u;

    // 0x2013f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2013f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2013f4: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x2013f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x2013f8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2013F8u;
    {
        const bool branch_taken_0x2013f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2013f8) {
            ctx->pc = 0x201410u;
            return;
        }
    }
    ctx->pc = 0x201400u;
    // 0x201400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201404: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201408: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x201408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x20140c: 0x0  nop
    ctx->pc = 0x20140cu;
    // NOP
    ctx->pc = 0x201410u;
}
