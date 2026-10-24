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

// Function: entry_001bd858
// Address: 0x1bd858 - 0x1bd884
void entry_001bd858_0x1bd858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd858_0x1bd858");
#endif

    ctx->pc = 0x1bd858u;

    // 0x1bd858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd85c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd860: 0xac831b6c  sw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1bd860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 3));
    // 0x1bd864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd868: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd86c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1bd870: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x1bd870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1bd874: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD874u;
    {
        const bool branch_taken_0x1bd874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd874) {
            ctx->pc = 0x1BD884u;
            return;
        }
    }
    ctx->pc = 0x1BD87Cu;
    // 0x1bd87c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd880: 0xad001b6c  sw          $zero, 0x1B6C($t0)
    ctx->pc = 0x1bd880u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7020), GPR_U32(ctx, 0));
    ctx->pc = 0x1bd884u;
}
