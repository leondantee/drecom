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

// Function: entry_00292af8
// Address: 0x292af8 - 0x292b04
void entry_00292af8_0x292af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292af8_0x292af8");
#endif

    ctx->pc = 0x292af8u;

    // 0x292af8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x292af8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292AFCu;
    {
        const bool branch_taken_0x292afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292afc) {
            ctx->pc = 0x292B20u;
            return;
        }
    }
    ctx->pc = 0x292B04u;
}
