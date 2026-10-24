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

// Function: entry_001b5518
// Address: 0x1b5518 - 0x1b5534
void entry_001b5518_0x1b5518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5518_0x1b5518");
#endif

    ctx->pc = 0x1b5518u;

    // 0x1b5518: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1b551c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5520: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5520u;
    {
        const bool branch_taken_0x1b5520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5520) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B5528u;
    // 0x1b5528: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5528u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b552c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B552Cu;
    {
        const bool branch_taken_0x1b552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b552c) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B5534u;
}
