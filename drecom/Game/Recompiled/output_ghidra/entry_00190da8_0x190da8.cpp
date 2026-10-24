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

// Function: entry_00190da8
// Address: 0x190da8 - 0x190db4
void entry_00190da8_0x190da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190da8_0x190da8");
#endif

    ctx->pc = 0x190da8u;

    // 0x190da8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190da8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190dac: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x190DACu;
    {
        const bool branch_taken_0x190dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190dac) {
            ctx->pc = 0x1910D8u;
            return;
        }
    }
    ctx->pc = 0x190DB4u;
}
