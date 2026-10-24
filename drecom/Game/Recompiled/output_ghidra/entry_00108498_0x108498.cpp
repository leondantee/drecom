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

// Function: entry_00108498
// Address: 0x108498 - 0x1084a8
void entry_00108498_0x108498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108498_0x108498");
#endif

    ctx->pc = 0x108498u;

    // 0x108498: 0x13200050  beqz        $t9, . + 4 + (0x50 << 2)
    ctx->pc = 0x108498u;
    {
        const bool branch_taken_0x108498 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x10849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108498u;
        // 0x10849c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108498) {
            ctx->pc = 0x1085DCu;
            return;
        }
    }
    ctx->pc = 0x1084A0u;
    // 0x1084a0: 0x8d87000c  lw          $a3, 0xC($t4)
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1084a4: 0x0  nop
    ctx->pc = 0x1084a4u;
    // NOP
    ctx->pc = 0x1084a8u;
}
