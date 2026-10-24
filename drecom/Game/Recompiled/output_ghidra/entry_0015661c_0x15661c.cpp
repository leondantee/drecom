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

// Function: entry_0015661c
// Address: 0x15661c - 0x15662c
void entry_0015661c_0x15661c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015661c_0x15661c");
#endif

    ctx->pc = 0x15661cu;

    // 0x15661c: 0x267000dc  addiu       $s0, $s3, 0xDC
    ctx->pc = 0x15661cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x156620: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x156620u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x156624: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x156624u;
    {
        const bool branch_taken_0x156624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156624) {
            ctx->pc = 0x156F10u;
            return;
        }
    }
    ctx->pc = 0x15662Cu;
}
