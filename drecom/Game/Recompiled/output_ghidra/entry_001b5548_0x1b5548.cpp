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

// Function: entry_001b5548
// Address: 0x1b5548 - 0x1b5564
void entry_001b5548_0x1b5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5548_0x1b5548");
#endif

    ctx->pc = 0x1b5548u;

    // 0x1b5548: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1b554c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5550: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5550u;
    {
        const bool branch_taken_0x1b5550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5550) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B5558u;
    // 0x1b5558: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5558u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b555c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B555Cu;
    {
        const bool branch_taken_0x1b555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b555c) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B5564u;
}
