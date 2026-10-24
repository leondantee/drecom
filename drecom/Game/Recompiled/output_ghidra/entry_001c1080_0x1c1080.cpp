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

// Function: entry_001c1080
// Address: 0x1c1080 - 0x1c10b0
void entry_001c1080_0x1c1080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1080_0x1c1080");
#endif

    ctx->pc = 0x1c1080u;

    // 0x1c1080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1084: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1088: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c108c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1090: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1090u;
    {
        const bool branch_taken_0x1c1090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1090) {
            ctx->pc = 0x1C10B0u;
            return;
        }
    }
    ctx->pc = 0x1C1098u;
    // 0x1c1098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c109c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10a0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c10a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c10a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10ac: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c10acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c10b0u;
}
