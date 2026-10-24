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

// Function: entry_001bf170
// Address: 0x1bf170 - 0x1bf1a0
void entry_001bf170_0x1bf170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf170_0x1bf170");
#endif

    ctx->pc = 0x1bf170u;

    // 0x1bf170: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf174: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf178: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf17c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF180u;
    {
        const bool branch_taken_0x1bf180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf180) {
            ctx->pc = 0x1BF1A0u;
            return;
        }
    }
    ctx->pc = 0x1BF188u;
    // 0x1bf188: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf18c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf190: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf194: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf19c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf19cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bf1a0u;
}
