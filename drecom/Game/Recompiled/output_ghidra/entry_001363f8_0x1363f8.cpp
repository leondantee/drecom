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

// Function: entry_001363f8
// Address: 0x1363f8 - 0x136404
void entry_001363f8_0x1363f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363f8_0x1363f8");
#endif

    ctx->pc = 0x1363f8u;

    // 0x1363f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1363f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1363fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1363FCu;
    {
        const bool branch_taken_0x1363fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363fc) {
            ctx->pc = 0x136468u;
            return;
        }
    }
    ctx->pc = 0x136404u;
}
