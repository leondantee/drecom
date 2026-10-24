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

// Function: entry_002f82b0
// Address: 0x2f82b0 - 0x2f82cc
void entry_002f82b0_0x2f82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f82b0_0x2f82b0");
#endif

    ctx->pc = 0x2f82b0u;

    // 0x2f82b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f82b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f82b8: 0x38870010  xori        $a3, $a0, 0x10
    ctx->pc = 0x2f82b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x2f82bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f82c0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2f82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2f82c4: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x2F82C4u;
    {
        const bool branch_taken_0x2f82c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82c4) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F82CCu;
}
