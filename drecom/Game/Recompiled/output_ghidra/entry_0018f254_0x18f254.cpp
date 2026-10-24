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

// Function: entry_0018f254
// Address: 0x18f254 - 0x18f264
void entry_0018f254_0x18f254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f254_0x18f254");
#endif

    ctx->pc = 0x18f254u;

    // 0x18f254: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x18f258: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f258u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f25c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F294u;
            return;
        }
    }
    ctx->pc = 0x18F264u;
}
