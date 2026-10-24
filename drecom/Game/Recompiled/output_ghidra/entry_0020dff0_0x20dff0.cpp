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

// Function: entry_0020dff0
// Address: 0x20dff0 - 0x20e028
void entry_0020dff0_0x20dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dff0_0x20dff0");
#endif

    ctx->pc = 0x20dff0u;

    // 0x20dff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20dff4: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20dff8: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20dffc: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20e000: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20e004: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20e004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20e008: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e00c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20e00cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20e010: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20e010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20e014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e018: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E018u;
    {
        const bool branch_taken_0x20e018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e018) {
            ctx->pc = 0x20E028u;
            return;
        }
    }
    ctx->pc = 0x20E020u;
    // 0x20e020: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20E020u;
    {
        const bool branch_taken_0x20e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e020) {
            ctx->pc = 0x20E028u;
            return;
        }
    }
    ctx->pc = 0x20E028u;
}
