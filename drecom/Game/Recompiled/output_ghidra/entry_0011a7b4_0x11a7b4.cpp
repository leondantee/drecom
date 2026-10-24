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

// Function: entry_0011a7b4
// Address: 0x11a7b4 - 0x11a7c4
void entry_0011a7b4_0x11a7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a7b4_0x11a7b4");
#endif

    ctx->pc = 0x11a7b4u;

    // 0x11a7b4: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x11a7b8: 0x1012  mflo        $v0
    ctx->pc = 0x11a7b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11a7bc: 0x1000fd93  b           . + 4 + (-0x26D << 2)
    ctx->pc = 0x11A7BCu;
    {
        const bool branch_taken_0x11a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7BCu;
        // 0x11a7c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7bc) {
            ctx->pc = 0x119E0Cu;
            return;
        }
    }
    ctx->pc = 0x11A7C4u;
}
