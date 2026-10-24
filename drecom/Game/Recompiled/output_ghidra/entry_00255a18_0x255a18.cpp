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

// Function: entry_00255a18
// Address: 0x255a18 - 0x255a24
void entry_00255a18_0x255a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255a18_0x255a18");
#endif

    ctx->pc = 0x255a18u;

    // 0x255a18: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x255a18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x255a1c: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x255A1Cu;
    {
        const bool branch_taken_0x255a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a1c) {
            ctx->pc = 0x256328u;
            return;
        }
    }
    ctx->pc = 0x255A24u;
}
