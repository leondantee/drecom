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

// Function: entry_0011d7ac
// Address: 0x11d7ac - 0x11d7bc
void entry_0011d7ac_0x11d7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d7ac_0x11d7ac");
#endif

    ctx->pc = 0x11d7acu;

    // 0x11d7ac: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11d7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11d7b0: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x11d7b0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11d7b4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D7B4u;
    {
        const bool branch_taken_0x11d7b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7b4) {
            ctx->pc = 0x11D7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7B4u;
            // 0x11d7b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7BCu;
            return;
        }
    }
    ctx->pc = 0x11D7BCu;
}
