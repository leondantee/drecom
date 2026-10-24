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

// Function: entry_002e1330
// Address: 0x2e1330 - 0x2e133c
void entry_002e1330_0x2e1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1330_0x2e1330");
#endif

    ctx->pc = 0x2e1330u;

    // 0x2e1330: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e1330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1334: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E1334u;
    {
        const bool branch_taken_0x2e1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1334) {
            ctx->pc = 0x2E13F8u;
            return;
        }
    }
    ctx->pc = 0x2E133Cu;
}
