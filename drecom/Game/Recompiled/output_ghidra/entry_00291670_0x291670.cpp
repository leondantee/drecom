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

// Function: entry_00291670
// Address: 0x291670 - 0x291684
void entry_00291670_0x291670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291670_0x291670");
#endif

    ctx->pc = 0x291670u;

    // 0x291670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291678: 0xac222a58  sw          $v0, 0x2A58($at)
    ctx->pc = 0x291678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A58u, _value); } while (0);
    // 0x29167c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29167Cu;
    {
        const bool branch_taken_0x29167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29167c) {
            ctx->pc = 0x291690u;
            return;
        }
    }
    ctx->pc = 0x291684u;
}
