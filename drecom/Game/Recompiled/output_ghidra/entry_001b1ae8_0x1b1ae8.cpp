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

// Function: entry_001b1ae8
// Address: 0x1b1ae8 - 0x1b1afc
void entry_001b1ae8_0x1b1ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ae8_0x1b1ae8");
#endif

    ctx->pc = 0x1b1ae8u;

    // 0x1b1ae8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1b1aec: 0x2453f9e0  addiu       $s3, $v0, -0x620
    ctx->pc = 0x1b1aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x1b1af0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1b1af0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1af4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1AF4u;
    {
        const bool branch_taken_0x1b1af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1af4) {
            ctx->pc = 0x1B1B60u;
            return;
        }
    }
    ctx->pc = 0x1B1AFCu;
}
