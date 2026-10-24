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

// Function: entry_00201338
// Address: 0x201338 - 0x201358
void entry_00201338_0x201338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201338_0x201338");
#endif

    ctx->pc = 0x201338u;

    // 0x201338: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20133c: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201340: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x201340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201344: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x201344u;
    {
        const bool branch_taken_0x201344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201344) {
            ctx->pc = 0x201358u;
            return;
        }
    }
    ctx->pc = 0x20134Cu;
    // 0x20134c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201350: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201354: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x201354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    ctx->pc = 0x201358u;
}
