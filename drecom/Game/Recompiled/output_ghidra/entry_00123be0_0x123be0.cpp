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

// Function: entry_00123be0
// Address: 0x123be0 - 0x123bf8
void entry_00123be0_0x123be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123be0_0x123be0");
#endif

    ctx->pc = 0x123be0u;

    // 0x123be0: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x123be4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x123BE4u;
    {
        const bool branch_taken_0x123be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123be4) {
            ctx->pc = 0x123B98u;
            return;
        }
    }
    ctx->pc = 0x123BECu;
    // 0x123bec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123becu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123bf0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x123BF0u;
    {
        const bool branch_taken_0x123bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123bf0) {
            ctx->pc = 0x123C40u;
            return;
        }
    }
    ctx->pc = 0x123BF8u;
}
