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

// Function: entry_001b12c0
// Address: 0x1b12c0 - 0x1b12e0
void entry_001b12c0_0x1b12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12c0_0x1b12c0");
#endif

    ctx->pc = 0x1b12c0u;

    // 0x1b12c0: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b12c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b12c8: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b12cc: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b12ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b12d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b12d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b12d4: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B12D4u;
    {
        const bool branch_taken_0x1b12d4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b12d4) {
            ctx->pc = 0x1B12E0u;
            return;
        }
    }
    ctx->pc = 0x1B12DCu;
    // 0x1b12dc: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->pc = 0x1b12e0u;
}
