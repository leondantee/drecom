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

// Function: entry_0017aa78
// Address: 0x17aa78 - 0x17aa84
void entry_0017aa78_0x17aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa78_0x17aa78");
#endif

    ctx->pc = 0x17aa78u;

    // 0x17aa78: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17aa78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17aa7c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x17AA7Cu;
    {
        const bool branch_taken_0x17aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa7c) {
            ctx->pc = 0x17AB5Cu;
            return;
        }
    }
    ctx->pc = 0x17AA84u;
}
