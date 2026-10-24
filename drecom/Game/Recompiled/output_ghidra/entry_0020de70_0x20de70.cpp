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

// Function: entry_0020de70
// Address: 0x20de70 - 0x20dea8
void entry_0020de70_0x20de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020de70_0x20de70");
#endif

    ctx->pc = 0x20de70u;

    // 0x20de70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20de70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20de74: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20de74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20de78: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20de78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20de7c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20de80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20de80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20de84: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20de84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20de88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de8c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20de8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20de90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20de90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20de94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DE98u;
    {
        const bool branch_taken_0x20de98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20de98) {
            ctx->pc = 0x20DEA8u;
            return;
        }
    }
    ctx->pc = 0x20DEA0u;
    // 0x20dea0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DEA0u;
    {
        const bool branch_taken_0x20dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dea0) {
            ctx->pc = 0x20DEA8u;
            return;
        }
    }
    ctx->pc = 0x20DEA8u;
}
