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

// Function: entry_00118104
// Address: 0x118104 - 0x118120
void entry_00118104_0x118104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118104_0x118104");
#endif

    ctx->pc = 0x118104u;

    // 0x118104: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x118104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x118108: 0x8fc34d58  lw          $v1, 0x4D58($fp)
    ctx->pc = 0x118108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 19800)));
    // 0x11810c: 0xdca24d48  ld          $v0, 0x4D48($a1)
    ctx->pc = 0x11810cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x384D48u));
    // 0x118110: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x118110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x118114: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x118114u;
    {
        const bool branch_taken_0x118114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118114u;
        // 0x118118: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118114) {
            ctx->pc = 0x118120u;
            return;
        }
    }
    ctx->pc = 0x11811Cu;
    // 0x11811c: 0xfca34d48  sd          $v1, 0x4D48($a1)
    ctx->pc = 0x11811cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 19784), GPR_U64(ctx, 3));
    ctx->pc = 0x118120u;
}
