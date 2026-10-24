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

// Function: entry_00176730
// Address: 0x176730 - 0x176754
void entry_00176730_0x176730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176730_0x176730");
#endif

    ctx->pc = 0x176730u;

    // 0x176730: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x176730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x176734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176738: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x176738u;
    {
        const bool branch_taken_0x176738 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x176738) {
            ctx->pc = 0x176754u;
            return;
        }
    }
    ctx->pc = 0x176740u;
    // 0x176740: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x176744: 0x3f43c  dsll32      $fp, $v1, 16
    ctx->pc = 0x176744u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176748: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x176748u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x17674c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17674Cu;
    {
        const bool branch_taken_0x17674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17674c) {
            ctx->pc = 0x176760u;
            return;
        }
    }
    ctx->pc = 0x176754u;
}
