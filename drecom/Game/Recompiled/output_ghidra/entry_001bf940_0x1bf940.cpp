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

// Function: entry_001bf940
// Address: 0x1bf940 - 0x1bf970
void entry_001bf940_0x1bf940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf940_0x1bf940");
#endif

    ctx->pc = 0x1bf940u;

    // 0x1bf940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf944: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf948: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf94c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf950: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF950u;
    {
        const bool branch_taken_0x1bf950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf950) {
            ctx->pc = 0x1BF970u;
            return;
        }
    }
    ctx->pc = 0x1BF958u;
    // 0x1bf958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf95c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf960: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf96c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bf970u;
}
