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

// Function: entry_0017dbc0
// Address: 0x17dbc0 - 0x17dbdc
void entry_0017dbc0_0x17dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dbc0_0x17dbc0");
#endif

    ctx->pc = 0x17dbc0u;

    // 0x17dbc0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dbc4: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x17dbc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17dbc8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17DBC8u;
    {
        const bool branch_taken_0x17dbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dbc8) {
            ctx->pc = 0x17DB64u;
            return;
        }
    }
    ctx->pc = 0x17DBD0u;
    // 0x17dbd0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17dbd0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17dbd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DBD4u;
    {
        const bool branch_taken_0x17dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbd4) {
            ctx->pc = 0x17DC18u;
            return;
        }
    }
    ctx->pc = 0x17DBDCu;
}
