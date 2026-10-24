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

// Function: entry_0037ac98
// Address: 0x37ac98 - 0x37aca4
void entry_0037ac98_0x37ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ac98_0x37ac98");
#endif

    ctx->pc = 0x37ac98u;

    // 0x37ac98: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37ac98u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37ac9c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x37AC9Cu;
    {
        const bool branch_taken_0x37ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac9c) {
            ctx->pc = 0x37AF48u;
            return;
        }
    }
    ctx->pc = 0x37ACA4u;
}
