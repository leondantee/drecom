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

// Function: entry_00201358
// Address: 0x201358 - 0x201378
void entry_00201358_0x201358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201358_0x201358");
#endif

    ctx->pc = 0x201358u;

    // 0x201358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20135c: 0x2e010004  sltiu       $at, $s0, 0x4
    ctx->pc = 0x20135cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x201360: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x201360u;
    {
        const bool branch_taken_0x201360 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201360) {
            ctx->pc = 0x201378u;
            return;
        }
    }
    ctx->pc = 0x201368u;
    // 0x201368: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20136c: 0xac209fb0  sw          $zero, -0x6050($at)
    ctx->pc = 0x20136cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x201370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201370u;
    {
        const bool branch_taken_0x201370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201370) {
            ctx->pc = 0x2013B0u;
            return;
        }
    }
    ctx->pc = 0x201378u;
}
