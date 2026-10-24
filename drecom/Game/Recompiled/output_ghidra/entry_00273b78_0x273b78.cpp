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

// Function: entry_00273b78
// Address: 0x273b78 - 0x273b88
void entry_00273b78_0x273b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b78_0x273b78");
#endif

    ctx->pc = 0x273b78u;

    // 0x273b78: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x273b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x273b7c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273b7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273b80: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x273B80u;
    {
        const bool branch_taken_0x273b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b80) {
            ctx->pc = 0x274130u;
            return;
        }
    }
    ctx->pc = 0x273B88u;
}
