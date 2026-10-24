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

// Function: entry_0031fed0
// Address: 0x31fed0 - 0x31fedc
void entry_0031fed0_0x31fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fed0_0x31fed0");
#endif

    ctx->pc = 0x31fed0u;

    // 0x31fed0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31fed0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31fed4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31FED4u;
    {
        const bool branch_taken_0x31fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fed4) {
            ctx->pc = 0x31FF18u;
            return;
        }
    }
    ctx->pc = 0x31FEDCu;
}
