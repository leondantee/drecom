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

// Function: entry_001819f8
// Address: 0x1819f8 - 0x181a18
void entry_001819f8_0x1819f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001819f8_0x1819f8");
#endif

    ctx->pc = 0x1819f8u;

    // 0x1819f8: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1819fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1819fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a00: 0xac24f218  sw          $a0, -0xDE8($at)
    ctx->pc = 0x181a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a0c: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181a10: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x181A10u;
    {
        const bool branch_taken_0x181a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a10) {
            ctx->pc = 0x181FA0u;
            return;
        }
    }
    ctx->pc = 0x181A18u;
}
