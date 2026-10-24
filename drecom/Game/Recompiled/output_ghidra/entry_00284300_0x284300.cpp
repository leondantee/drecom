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

// Function: entry_00284300
// Address: 0x284300 - 0x284320
void entry_00284300_0x284300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284300_0x284300");
#endif

    ctx->pc = 0x284300u;

    // 0x284300: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284304: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284304u;
    {
        const bool branch_taken_0x284304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284304) {
            ctx->pc = 0x284320u;
            return;
        }
    }
    ctx->pc = 0x28430Cu;
    // 0x28430c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284310: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x284310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
    // 0x284314: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284318: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284318u;
    {
        const bool branch_taken_0x284318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284318) {
            ctx->pc = 0x28433Cu;
            return;
        }
    }
    ctx->pc = 0x284320u;
}
