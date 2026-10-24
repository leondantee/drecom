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

// Function: entry_002145b8
// Address: 0x2145b8 - 0x2145d0
void entry_002145b8_0x2145b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002145b8_0x2145b8");
#endif

    ctx->pc = 0x2145b8u;

    // 0x2145b8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2145bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2145bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145c0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2145c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2145c4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2145c8: 0x1482014b  bne         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x2145C8u;
    {
        const bool branch_taken_0x2145c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2145CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145C8u;
        // 0x2145cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145c8) {
            ctx->pc = 0x214AF8u;
            return;
        }
    }
    ctx->pc = 0x2145D0u;
}
