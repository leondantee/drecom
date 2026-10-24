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

// Function: default
// Address: 0x331278 - 0x331284
void ps2_default_0x331278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x331278");
#endif

    ctx->pc = 0x331278u;

    // 0x331278: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x331278u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33127c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x33127Cu;
    {
        const bool branch_taken_0x33127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33127c) {
            ctx->pc = 0x331610u;
            return;
        }
    }
    ctx->pc = 0x331284u;
}
