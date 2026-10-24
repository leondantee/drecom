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

// Function: entry_0028f280
// Address: 0x28f280 - 0x28f2b0
void entry_0028f280_0x28f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f280_0x28f280");
#endif

    ctx->pc = 0x28f280u;

    // 0x28f280: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f284: 0x8c242850  lw          $a0, 0x2850($at)
    ctx->pc = 0x28f284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622850u));
    // 0x28f288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f28c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F28Cu;
    {
        const bool branch_taken_0x28f28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f28c) {
            ctx->pc = 0x28F2C8u;
            return;
        }
    }
    ctx->pc = 0x28F294u;
    // 0x28f294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f298: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F298u;
    {
        const bool branch_taken_0x28f298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f298) {
            ctx->pc = 0x28F2BCu;
            return;
        }
    }
    ctx->pc = 0x28F2A0u;
    // 0x28f2a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F2A0u;
    {
        const bool branch_taken_0x28f2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2a0) {
            ctx->pc = 0x28F2B0u;
            return;
        }
    }
    ctx->pc = 0x28F2A8u;
    // 0x28f2a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F2A8u;
    {
        const bool branch_taken_0x28f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2a8) {
            ctx->pc = 0x28F2CCu;
            return;
        }
    }
    ctx->pc = 0x28F2B0u;
}
