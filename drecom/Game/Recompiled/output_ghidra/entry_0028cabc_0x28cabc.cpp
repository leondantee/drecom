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

// Function: entry_0028cabc
// Address: 0x28cabc - 0x28cad8
void entry_0028cabc_0x28cabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cabc_0x28cabc");
#endif

    ctx->pc = 0x28cabcu;

    // 0x28cabc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cac0: 0x8c2420f0  lw          $a0, 0x20F0($at)
    ctx->pc = 0x28cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cac4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x28cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28cac8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cacc: 0xac2620f0  sw          $a2, 0x20F0($at)
    ctx->pc = 0x28caccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6220F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F0u, _value); } while (0);
    // 0x28cad0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28CAD0u;
    {
        const bool branch_taken_0x28cad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cad0) {
            ctx->pc = 0x28CBACu;
            return;
        }
    }
    ctx->pc = 0x28CAD8u;
}
