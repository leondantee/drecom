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

// Function: entry_0010274c
// Address: 0x10274c - 0x102768
void entry_0010274c_0x10274c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010274c_0x10274c");
#endif

    ctx->pc = 0x10274cu;

    // 0x10274c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102750: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x102750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x102754: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x102754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x102758: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x102758u;
    {
        const bool branch_taken_0x102758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102758u;
        // 0x10275c: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102758) {
            ctx->pc = 0x1027C0u;
            return;
        }
    }
    ctx->pc = 0x102760u;
    // 0x102760: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x102760u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x102764: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x102768u;
}
