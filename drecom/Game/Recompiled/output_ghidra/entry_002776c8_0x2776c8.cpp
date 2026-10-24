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

// Function: entry_002776c8
// Address: 0x2776c8 - 0x2776dc
void entry_002776c8_0x2776c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002776c8_0x2776c8");
#endif

    ctx->pc = 0x2776c8u;

    // 0x2776c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2776c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2776cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2776d0: 0xac231a20  sw          $v1, 0x1A20($at)
    ctx->pc = 0x2776d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    // 0x2776d4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2776D4u;
    {
        const bool branch_taken_0x2776d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2776d4) {
            ctx->pc = 0x277848u;
            return;
        }
    }
    ctx->pc = 0x2776DCu;
}
