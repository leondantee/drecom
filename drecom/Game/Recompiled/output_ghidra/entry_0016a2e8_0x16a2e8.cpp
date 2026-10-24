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

// Function: entry_0016a2e8
// Address: 0x16a2e8 - 0x16a2fc
void entry_0016a2e8_0x16a2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a2e8_0x16a2e8");
#endif

    ctx->pc = 0x16a2e8u;

    // 0x16a2e8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a2e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a2ec: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16a2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a2f0: 0xafb00258  sw          $s0, 0x258($sp)
    ctx->pc = 0x16a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 16));
    // 0x16a2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A2F4u;
    {
        const bool branch_taken_0x16a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2f4) {
            ctx->pc = 0x16A318u;
            return;
        }
    }
    ctx->pc = 0x16A2FCu;
}
