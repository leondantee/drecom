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

// Function: entry_001e79e8
// Address: 0x1e79e8 - 0x1e7a00
void entry_001e79e8_0x1e79e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e79e8_0x1e79e8");
#endif

    ctx->pc = 0x1e79e8u;

    // 0x1e79e8: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1e79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e79ec: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x1e79ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e79f0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e79f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e79f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e79f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E79F8u;
    {
        const bool branch_taken_0x1e79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79f8) {
            ctx->pc = 0x1E7AB8u;
            return;
        }
    }
    ctx->pc = 0x1E7A00u;
}
