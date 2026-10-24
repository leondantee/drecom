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

// Function: entry_0018adf4
// Address: 0x18adf4 - 0x18ae00
void entry_0018adf4_0x18adf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018adf4_0x18adf4");
#endif

    ctx->pc = 0x18adf4u;

    // 0x18adf4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x18adf4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18adf8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18ADF8u;
    {
        const bool branch_taken_0x18adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18adf8) {
            ctx->pc = 0x18AE30u;
            return;
        }
    }
    ctx->pc = 0x18AE00u;
}
