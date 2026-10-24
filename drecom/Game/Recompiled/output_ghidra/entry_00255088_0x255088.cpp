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

// Function: entry_00255088
// Address: 0x255088 - 0x255094
void entry_00255088_0x255088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255088_0x255088");
#endif

    ctx->pc = 0x255088u;

    // 0x255088: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x255088u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25508c: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x25508Cu;
    {
        const bool branch_taken_0x25508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25508c) {
            ctx->pc = 0x255968u;
            return;
        }
    }
    ctx->pc = 0x255094u;
}
