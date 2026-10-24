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

// Function: entry_00338590
// Address: 0x338590 - 0x3385b0
void entry_00338590_0x338590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338590_0x338590");
#endif

    ctx->pc = 0x338590u;

    // 0x338590: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x338590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338598: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x338598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33859c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x33859Cu;
    {
        const bool branch_taken_0x33859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33859c) {
            ctx->pc = 0x33856Cu;
            return;
        }
    }
    ctx->pc = 0x3385A4u;
    // 0x3385a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3385a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3385a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3385A8u;
    {
        const bool branch_taken_0x3385a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3385a8) {
            ctx->pc = 0x3385E0u;
            return;
        }
    }
    ctx->pc = 0x3385B0u;
}
