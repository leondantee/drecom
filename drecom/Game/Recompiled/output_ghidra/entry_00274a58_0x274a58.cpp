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

// Function: entry_00274a58
// Address: 0x274a58 - 0x274a70
void entry_00274a58_0x274a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274a58_0x274a58");
#endif

    ctx->pc = 0x274a58u;

    // 0x274a58: 0x215202a  slt         $a0, $s0, $s5
    ctx->pc = 0x274a58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x274a5c: 0x1480fdf2  bnez        $a0, . + 4 + (-0x20E << 2)
    ctx->pc = 0x274A5Cu;
    {
        const bool branch_taken_0x274a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x274a5c) {
            ctx->pc = 0x274228u;
            return;
        }
    }
    ctx->pc = 0x274A64u;
    // 0x274a64: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x274a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x274a68: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x274a68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x274a6c: 0x0  nop
    ctx->pc = 0x274a6cu;
    // NOP
    ctx->pc = 0x274a70u;
}
