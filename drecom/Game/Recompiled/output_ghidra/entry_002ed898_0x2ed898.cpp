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

// Function: entry_002ed898
// Address: 0x2ed898 - 0x2ed8a8
void entry_002ed898_0x2ed898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed898_0x2ed898");
#endif

    ctx->pc = 0x2ed898u;

    // 0x2ed898: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x2ed898u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ed89c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ed89cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed8a0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2ED8A0u;
    {
        const bool branch_taken_0x2ed8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8a0) {
            ctx->pc = 0x2EDAC0u;
            return;
        }
    }
    ctx->pc = 0x2ED8A8u;
}
