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

// Function: entry_002165c0
// Address: 0x2165c0 - 0x2165e0
void entry_002165c0_0x2165c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002165c0_0x2165c0");
#endif

    ctx->pc = 0x2165c0u;

    // 0x2165c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2165c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165c4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2165c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2165c8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2165c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2165cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2165CCu;
    {
        const bool branch_taken_0x2165cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165CCu;
        // 0x2165d0: 0xa2430008  sb          $v1, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165cc) {
            ctx->pc = 0x21660Cu;
            return;
        }
    }
    ctx->pc = 0x2165D4u;
    // 0x2165d4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2165d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2165d8: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2165d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2165dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2165dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x2165e0u;
}
