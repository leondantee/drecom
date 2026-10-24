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

// Function: entry_00310b10
// Address: 0x310b10 - 0x310b1c
void entry_00310b10_0x310b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310b10_0x310b10");
#endif

    ctx->pc = 0x310b10u;

    // 0x310b10: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x310b10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310b14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x310B14u;
    {
        const bool branch_taken_0x310b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b14) {
            ctx->pc = 0x310B60u;
            return;
        }
    }
    ctx->pc = 0x310B1Cu;
}
