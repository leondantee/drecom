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

// Function: entry_001c1a84
// Address: 0x1c1a84 - 0x1c1a98
void entry_001c1a84_0x1c1a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a84_0x1c1a84");
#endif

    ctx->pc = 0x1c1a84u;

    // 0x1c1a84: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c1a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1a8c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1A8Cu;
    {
        const bool branch_taken_0x1c1a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a8c) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A94u;
    // 0x1c1a94: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c1a98u;
}
