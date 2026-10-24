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

// Function: entry_00109350
// Address: 0x109350 - 0x109364
void entry_00109350_0x109350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109350_0x109350");
#endif

    ctx->pc = 0x109350u;

    // 0x109350: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x109350u;
    {
        const bool branch_taken_0x109350 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x109354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109350u;
        // 0x109354: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109350) {
            ctx->pc = 0x109364u;
            return;
        }
    }
    ctx->pc = 0x109358u;
    // 0x109358: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x109358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x10935c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10935Cu;
    {
        const bool branch_taken_0x10935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10935Cu;
        // 0x109360: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10935c) {
            ctx->pc = 0x109368u;
            return;
        }
    }
    ctx->pc = 0x109364u;
}
