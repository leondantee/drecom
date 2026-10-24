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

// Function: entry_003078dc
// Address: 0x3078dc - 0x307900
void entry_003078dc_0x3078dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003078dc_0x3078dc");
#endif

    ctx->pc = 0x3078dcu;

    // 0x3078dc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078e0: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3078e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3078e4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3078e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3078e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3078E8u;
    {
        const bool branch_taken_0x3078e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3078e8) {
            ctx->pc = 0x307900u;
            return;
        }
    }
    ctx->pc = 0x3078F0u;
    // 0x3078f0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3078f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078f4: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x3078f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x3078f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3078f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3078fc: 0xa48311f2  sh          $v1, 0x11F2($a0)
    ctx->pc = 0x3078fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4594), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x307900u;
}
