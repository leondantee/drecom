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

// Function: entry_001c2628
// Address: 0x1c2628 - 0x1c2658
void entry_001c2628_0x1c2628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2628_0x1c2628");
#endif

    ctx->pc = 0x1c2628u;

    // 0x1c2628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c262c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c2630: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C2630u;
    {
        const bool branch_taken_0x1c2630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2630) {
            ctx->pc = 0x1C2670u;
            return;
        }
    }
    ctx->pc = 0x1C2638u;
    // 0x1c2638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c263c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2640: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c264c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c264cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2650u;
    {
        const bool branch_taken_0x1c2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2650) {
            ctx->pc = 0x1C2670u;
            return;
        }
    }
    ctx->pc = 0x1C2658u;
}
