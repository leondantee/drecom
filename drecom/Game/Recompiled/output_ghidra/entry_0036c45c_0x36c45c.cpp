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

// Function: entry_0036c45c
// Address: 0x36c45c - 0x36c46c
void entry_0036c45c_0x36c45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c45c_0x36c45c");
#endif

    ctx->pc = 0x36c45cu;

    // 0x36c45c: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x36c45cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x36c460: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x36c460u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c464: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x36C464u;
    {
        const bool branch_taken_0x36c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c464) {
            ctx->pc = 0x36C5F0u;
            return;
        }
    }
    ctx->pc = 0x36C46Cu;
}
