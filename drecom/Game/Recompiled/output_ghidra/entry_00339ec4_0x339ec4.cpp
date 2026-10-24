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

// Function: entry_00339ec4
// Address: 0x339ec4 - 0x339ee4
void entry_00339ec4_0x339ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339ec4_0x339ec4");
#endif

    ctx->pc = 0x339ec4u;

    // 0x339ec4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x339ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339ec8: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x339ec8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x339ecc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x339ECCu;
    {
        const bool branch_taken_0x339ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ecc) {
            ctx->pc = 0x339EE4u;
            return;
        }
    }
    ctx->pc = 0x339ED4u;
    // 0x339ed4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339ed8: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x339ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x339edc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x339EDCu;
    {
        const bool branch_taken_0x339edc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x339edc) {
            ctx->pc = 0x339F00u;
            return;
        }
    }
    ctx->pc = 0x339EE4u;
}
