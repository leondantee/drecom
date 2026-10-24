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

// Function: entry_001e6948
// Address: 0x1e6948 - 0x1e6960
void entry_001e6948_0x1e6948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6948_0x1e6948");
#endif

    ctx->pc = 0x1e6948u;

    // 0x1e6948: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e694c: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e694cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6950: 0x26360010  addiu       $s6, $s1, 0x10
    ctx->pc = 0x1e6950u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6954: 0x72c08e28  paddub      $s1, $s6, $zero
    ctx->pc = 0x1e6954u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e6958: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1E6958u;
    {
        const bool branch_taken_0x1e6958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6958) {
            ctx->pc = 0x1E6B78u;
            return;
        }
    }
    ctx->pc = 0x1E6960u;
}
