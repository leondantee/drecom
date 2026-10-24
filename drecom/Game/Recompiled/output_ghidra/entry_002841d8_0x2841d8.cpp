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

// Function: entry_002841d8
// Address: 0x2841d8 - 0x284210
void entry_002841d8_0x2841d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002841d8_0x2841d8");
#endif

    ctx->pc = 0x2841d8u;

    // 0x2841d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2841d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2841dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2841dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2841e0: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2841E0u;
    {
        const bool branch_taken_0x2841e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841e0) {
            ctx->pc = 0x284300u;
            return;
        }
    }
    ctx->pc = 0x2841E8u;
    // 0x2841e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2841ec: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2841ECu;
    {
        const bool branch_taken_0x2841ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841ec) {
            ctx->pc = 0x2842B0u;
            return;
        }
    }
    ctx->pc = 0x2841F4u;
    // 0x2841f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2841f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2841f8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2841F8u;
    {
        const bool branch_taken_0x2841f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841f8) {
            ctx->pc = 0x284260u;
            return;
        }
    }
    ctx->pc = 0x284200u;
    // 0x284200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284200u;
    {
        const bool branch_taken_0x284200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284200) {
            ctx->pc = 0x284210u;
            return;
        }
    }
    ctx->pc = 0x284208u;
    // 0x284208: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x284208u;
    {
        const bool branch_taken_0x284208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284208) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x284210u;
}
