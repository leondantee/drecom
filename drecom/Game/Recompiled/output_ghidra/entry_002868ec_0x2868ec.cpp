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

// Function: entry_002868ec
// Address: 0x2868ec - 0x2868f8
void entry_002868ec_0x2868ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002868ec_0x2868ec");
#endif

    ctx->pc = 0x2868ecu;

    // 0x2868ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2868ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2868f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2868F0u;
    {
        const bool branch_taken_0x2868f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2868f0) {
            ctx->pc = 0x286948u;
            return;
        }
    }
    ctx->pc = 0x2868F8u;
}
