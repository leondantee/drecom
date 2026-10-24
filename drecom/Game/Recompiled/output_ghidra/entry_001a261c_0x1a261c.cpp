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

// Function: entry_001a261c
// Address: 0x1a261c - 0x1a265c
void entry_001a261c_0x1a261c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a261c_0x1a261c");
#endif

    ctx->pc = 0x1a261cu;

    // 0x1a261c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2620: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x1a2620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x1a2624: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1a2624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1a2628: 0x3c031080  lui         $v1, 0x1080
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4224 << 16));
    // 0x1a262c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2630: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A2630u;
    {
        const bool branch_taken_0x1a2630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2630) {
            ctx->pc = 0x1A26F0u;
            return;
        }
    }
    ctx->pc = 0x1A2638u;
    // 0x1a2638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a263c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1a263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a2640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2644: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A2698u;
            return;
        }
    }
    ctx->pc = 0x1A264Cu;
    // 0x1a264c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A264Cu;
    {
        const bool branch_taken_0x1a264c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a264c) {
            ctx->pc = 0x1A265Cu;
            return;
        }
    }
    ctx->pc = 0x1A2654u;
    // 0x1a2654: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1A2654u;
    {
        const bool branch_taken_0x1a2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2654) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A265Cu;
}
