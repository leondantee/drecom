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

// Function: entry_00187c88
// Address: 0x187c88 - 0x187ca0
void entry_00187c88_0x187c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c88_0x187c88");
#endif

    ctx->pc = 0x187c88u;

    // 0x187c88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x187c8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x187c90: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187C90u;
    {
        const bool branch_taken_0x187c90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x187c90) {
            ctx->pc = 0x187CA0u;
            return;
        }
    }
    ctx->pc = 0x187C98u;
    // 0x187c98: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x187c98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x187c9c: 0x0  nop
    ctx->pc = 0x187c9cu;
    // NOP
    ctx->pc = 0x187ca0u;
}
