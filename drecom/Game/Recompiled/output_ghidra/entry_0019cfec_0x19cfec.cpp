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

// Function: entry_0019cfec
// Address: 0x19cfec - 0x19d000
void entry_0019cfec_0x19cfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cfec_0x19cfec");
#endif

    ctx->pc = 0x19cfecu;

    // 0x19cfec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19cff0: 0x2450d390  addiu       $s0, $v0, -0x2C70
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x19cff4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19cff4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19cff8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19CFF8u;
    {
        const bool branch_taken_0x19cff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cff8) {
            ctx->pc = 0x19D098u;
            return;
        }
    }
    ctx->pc = 0x19D000u;
}
