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

// Function: entry_0012ba78
// Address: 0x12ba78 - 0x12bab0
void entry_0012ba78_0x12ba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ba78_0x12ba78");
#endif

    ctx->pc = 0x12ba78u;

    // 0x12ba78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ba80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ba84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12ba88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ba8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ba90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ba94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ba98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12baa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12baa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12baa8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12BAA8u;
    {
        const bool branch_taken_0x12baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12baa8) {
            ctx->pc = 0x12BB48u;
            return;
        }
    }
    ctx->pc = 0x12BAB0u;
}
