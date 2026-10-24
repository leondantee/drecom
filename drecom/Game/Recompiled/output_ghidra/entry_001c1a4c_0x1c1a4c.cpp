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

// Function: entry_001c1a4c
// Address: 0x1c1a4c - 0x1c1a68
void entry_001c1a4c_0x1c1a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a4c_0x1c1a4c");
#endif

    ctx->pc = 0x1c1a4cu;

    // 0x1c1a4c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c1a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a54: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C1A54u;
    {
        const bool branch_taken_0x1c1a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a54) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A5Cu;
    // 0x1c1a5c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1a60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A68u;
}
