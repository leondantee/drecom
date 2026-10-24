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

// Function: entry_001363bc
// Address: 0x1363bc - 0x1363c8
void entry_001363bc_0x1363bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363bc_0x1363bc");
#endif

    ctx->pc = 0x1363bcu;

    // 0x1363bc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1363bcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1363c0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1363C0u;
    {
        const bool branch_taken_0x1363c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363c0) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x1363C8u;
}
