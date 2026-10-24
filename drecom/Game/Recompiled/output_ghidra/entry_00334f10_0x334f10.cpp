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

// Function: entry_00334f10
// Address: 0x334f10 - 0x334f28
void entry_00334f10_0x334f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334f10_0x334f10");
#endif

    ctx->pc = 0x334f10u;

    // 0x334f10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x334f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x334f14: 0x2442c09c  addiu       $v0, $v0, -0x3F64
    ctx->pc = 0x334f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951068));
    // 0x334f18: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f1c: 0xac223338  sw          $v0, 0x3338($at)
    ctx->pc = 0x334f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893338u, _value); } while (0);
    // 0x334f20: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x334F20u;
    {
        const bool branch_taken_0x334f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f20) {
            ctx->pc = 0x335020u;
            return;
        }
    }
    ctx->pc = 0x334F28u;
}
