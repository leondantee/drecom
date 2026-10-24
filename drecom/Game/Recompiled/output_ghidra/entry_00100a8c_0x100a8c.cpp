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

// Function: entry_00100a8c
// Address: 0x100a8c - 0x100aa0
void entry_00100a8c_0x100a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a8c_0x100a8c");
#endif

    ctx->pc = 0x100a8cu;

    // 0x100a8c: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x100a8cu;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x100a90: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x100a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x100a94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100A94u;
    {
        const bool branch_taken_0x100a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A94u;
        // 0x100a98: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a94) {
            ctx->pc = 0x100ABCu;
            return;
        }
    }
    ctx->pc = 0x100A9Cu;
    // 0x100a9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x100a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100aa0u;
}
