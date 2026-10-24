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

// Function: entry_00136d90
// Address: 0x136d90 - 0x136d9c
void entry_00136d90_0x136d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d90_0x136d90");
#endif

    ctx->pc = 0x136d90u;

    // 0x136d90: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x136d90u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136d94: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x136D94u;
    {
        const bool branch_taken_0x136d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d94) {
            ctx->pc = 0x137420u;
            return;
        }
    }
    ctx->pc = 0x136D9Cu;
}
