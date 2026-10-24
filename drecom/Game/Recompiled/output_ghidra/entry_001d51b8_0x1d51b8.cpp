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

// Function: entry_001d51b8
// Address: 0x1d51b8 - 0x1d51d8
void entry_001d51b8_0x1d51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d51b8_0x1d51b8");
#endif

    ctx->pc = 0x1d51b8u;

    // 0x1d51b8: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d51bc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d51bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d51c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D51C0u;
    {
        const bool branch_taken_0x1d51c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d51c0) {
            ctx->pc = 0x1D51D8u;
            return;
        }
    }
    ctx->pc = 0x1D51C8u;
    // 0x1d51c8: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1d51cc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1d51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1d51d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D51D0u;
    {
        const bool branch_taken_0x1d51d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d51d0) {
            ctx->pc = 0x1D51E8u;
            return;
        }
    }
    ctx->pc = 0x1D51D8u;
}
