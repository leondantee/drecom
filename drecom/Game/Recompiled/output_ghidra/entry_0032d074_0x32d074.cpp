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

// Function: entry_0032d074
// Address: 0x32d074 - 0x32d088
void entry_0032d074_0x32d074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d074_0x32d074");
#endif

    ctx->pc = 0x32d074u;

    // 0x32d074: 0x26321020  addiu       $s2, $s1, 0x1020
    ctx->pc = 0x32d074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4128));
    // 0x32d078: 0x26331820  addiu       $s3, $s1, 0x1820
    ctx->pc = 0x32d078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 6176));
    // 0x32d07c: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x32d07cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32d080: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x32D080u;
    {
        const bool branch_taken_0x32d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d080) {
            ctx->pc = 0x32D7C8u;
            return;
        }
    }
    ctx->pc = 0x32D088u;
}
