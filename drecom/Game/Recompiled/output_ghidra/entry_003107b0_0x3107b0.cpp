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

// Function: entry_003107b0
// Address: 0x3107b0 - 0x3107d4
void entry_003107b0_0x3107b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003107b0_0x3107b0");
#endif

    ctx->pc = 0x3107b0u;

    // 0x3107b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107b4: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x3107b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x3107b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3107b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3107bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3107BCu;
    {
        const bool branch_taken_0x3107bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3107bc) {
            ctx->pc = 0x3107D4u;
            return;
        }
    }
    ctx->pc = 0x3107C4u;
    // 0x3107c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3107c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3107c8: 0x846211f2  lh          $v0, 0x11F2($v1)
    ctx->pc = 0x3107c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x3107cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3107ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3107d0: 0xa46211f2  sh          $v0, 0x11F2($v1)
    ctx->pc = 0x3107d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4594), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3107d4u;
}
