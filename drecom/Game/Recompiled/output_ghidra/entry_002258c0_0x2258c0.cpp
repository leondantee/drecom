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

// Function: entry_002258c0
// Address: 0x2258c0 - 0x225908
void entry_002258c0_0x2258c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002258c0_0x2258c0");
#endif

    ctx->pc = 0x2258c0u;

    // 0x2258c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2258c8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2258c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2258cc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2258ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2258d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2258D0u;
    {
        const bool branch_taken_0x2258d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258d0) {
            ctx->pc = 0x225908u;
            return;
        }
    }
    ctx->pc = 0x2258D8u;
    // 0x2258d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2258e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2258e4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2258e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2258e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2258ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2258f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2258f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2258f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2258fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225900: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225904: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x225908u;
}
