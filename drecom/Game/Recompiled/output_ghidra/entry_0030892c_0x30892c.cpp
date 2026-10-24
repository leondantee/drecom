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

// Function: entry_0030892c
// Address: 0x30892c - 0x308970
void entry_0030892c_0x30892c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030892c_0x30892c");
#endif

    ctx->pc = 0x30892cu;

    // 0x30892c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308930: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x308930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x308934: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x308934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x308938: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x308938u;
    {
        const bool branch_taken_0x308938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308938) {
            ctx->pc = 0x308970u;
            return;
        }
    }
    ctx->pc = 0x308940u;
    // 0x308940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308944: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308948: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30894c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x308950: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308954: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30895c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30895cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308964: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308968: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30896c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30896cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x308970u;
}
