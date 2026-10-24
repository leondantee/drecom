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

// Function: entry_0020044c
// Address: 0x20044c - 0x200458
void entry_0020044c_0x20044c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020044c_0x20044c");
#endif

    ctx->pc = 0x20044cu;

    // 0x20044c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20044cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x200450: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x200450u;
    {
        const bool branch_taken_0x200450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200450) {
            ctx->pc = 0x2004B8u;
            return;
        }
    }
    ctx->pc = 0x200458u;
}
