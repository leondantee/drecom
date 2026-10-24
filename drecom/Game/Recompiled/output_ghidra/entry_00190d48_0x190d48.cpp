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

// Function: entry_00190d48
// Address: 0x190d48 - 0x190d54
void entry_00190d48_0x190d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d48_0x190d48");
#endif

    ctx->pc = 0x190d48u;

    // 0x190d48: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190d48u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190d4c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x190D4Cu;
    {
        const bool branch_taken_0x190d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d4c) {
            ctx->pc = 0x1910D8u;
            return;
        }
    }
    ctx->pc = 0x190D54u;
}
