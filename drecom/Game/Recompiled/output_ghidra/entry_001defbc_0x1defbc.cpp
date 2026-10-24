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

// Function: entry_001defbc
// Address: 0x1defbc - 0x1defc8
void entry_001defbc_0x1defbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001defbc_0x1defbc");
#endif

    ctx->pc = 0x1defbcu;

    // 0x1defbc: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1defbcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1defc0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DEFC0u;
    {
        const bool branch_taken_0x1defc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1defc0) {
            ctx->pc = 0x1DF088u;
            return;
        }
    }
    ctx->pc = 0x1DEFC8u;
}
