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

// Function: entry_0021c698
// Address: 0x21c698 - 0x21c6a4
void entry_0021c698_0x21c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c698_0x21c698");
#endif

    ctx->pc = 0x21c698u;

    // 0x21c698: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21c698u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c69c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x21C69Cu;
    {
        const bool branch_taken_0x21c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c69c) {
            ctx->pc = 0x21C7D8u;
            return;
        }
    }
    ctx->pc = 0x21C6A4u;
}
