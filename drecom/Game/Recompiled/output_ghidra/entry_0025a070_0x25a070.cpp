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

// Function: entry_0025a070
// Address: 0x25a070 - 0x25a088
void entry_0025a070_0x25a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a070_0x25a070");
#endif

    ctx->pc = 0x25a070u;

    // 0x25a070: 0x2a030050  slti        $v1, $s0, 0x50
    ctx->pc = 0x25a070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x25a074: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x25A074u;
    {
        const bool branch_taken_0x25a074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a074) {
            ctx->pc = 0x25A04Cu;
            return;
        }
    }
    ctx->pc = 0x25A07Cu;
    // 0x25a07c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a07cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a080: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x25A080u;
    {
        const bool branch_taken_0x25a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a080) {
            ctx->pc = 0x25A220u;
            return;
        }
    }
    ctx->pc = 0x25A088u;
}
