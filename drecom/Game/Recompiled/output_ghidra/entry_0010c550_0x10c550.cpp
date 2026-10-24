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

// Function: entry_0010c550
// Address: 0x10c550 - 0x10c57c
void entry_0010c550_0x10c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c550_0x10c550");
#endif

    ctx->pc = 0x10c550u;

    // 0x10c550: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c55c: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c560: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c564: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c568: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c56c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C56Cu;
    {
        const bool branch_taken_0x10c56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C56Cu;
        // 0x10c570: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c56c) {
            ctx->pc = 0x10C57Cu;
            return;
        }
    }
    ctx->pc = 0x10C574u;
    // 0x10c574: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10C574u;
    {
        const bool branch_taken_0x10c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C574u;
        // 0x10c578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c574) {
            ctx->pc = 0x10C58Cu;
            return;
        }
    }
    ctx->pc = 0x10C57Cu;
}
