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

// Function: entry_0018fc2c
// Address: 0x18fc2c - 0x18fc3c
void entry_0018fc2c_0x18fc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc2c_0x18fc2c");
#endif

    ctx->pc = 0x18fc2cu;

    // 0x18fc2c: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x18fc30: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x18fc30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fc34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FC34u;
    {
        const bool branch_taken_0x18fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc34) {
            ctx->pc = 0x18FC6Cu;
            return;
        }
    }
    ctx->pc = 0x18FC3Cu;
}
