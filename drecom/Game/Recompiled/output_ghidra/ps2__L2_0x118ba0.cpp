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

// Function: $L2
// Address: 0x118ba0 - 0x118bc0
void ps2__L2_0x118ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x118ba0");
#endif

    ctx->pc = 0x118ba0u;

    // 0x118ba0: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x118ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x118ba4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x118BA4u;
    {
        const bool branch_taken_0x118ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118ba4) {
            ctx->pc = 0x118BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118BA4u;
            // 0x118ba8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118C1Cu;
            return;
        }
    }
    ctx->pc = 0x118BACu;
    // 0x118bac: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x118bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x118bb0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x118bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x118bb4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x118BB4u;
    {
        const bool branch_taken_0x118bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118bb4) {
            ctx->pc = 0x118BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118BB4u;
            // 0x118bb8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118C1Cu;
            return;
        }
    }
    ctx->pc = 0x118BBCu;
    // 0x118bbc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x118bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118bc0u;
}
