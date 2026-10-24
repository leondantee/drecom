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

// Function: entry_001c1a30
// Address: 0x1c1a30 - 0x1c1a4c
void entry_001c1a30_0x1c1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a30_0x1c1a30");
#endif

    ctx->pc = 0x1c1a30u;

    // 0x1c1a30: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c1a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a38: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C1A38u;
    {
        const bool branch_taken_0x1c1a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a38) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A40u;
    // 0x1c1a40: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1a44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C1A44u;
    {
        const bool branch_taken_0x1c1a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a44) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A4Cu;
}
