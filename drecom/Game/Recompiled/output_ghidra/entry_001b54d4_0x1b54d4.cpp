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

// Function: entry_001b54d4
// Address: 0x1b54d4 - 0x1b54e8
void entry_001b54d4_0x1b54d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b54d4_0x1b54d4");
#endif

    ctx->pc = 0x1b54d4u;

    // 0x1b54d4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1b54d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b54dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B54DCu;
    {
        const bool branch_taken_0x1b54dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54dc) {
            ctx->pc = 0x1B54E8u;
            return;
        }
    }
    ctx->pc = 0x1B54E4u;
    // 0x1b54e4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b54e8u;
}
