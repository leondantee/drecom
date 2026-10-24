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

// Function: entry_002dc080
// Address: 0x2dc080 - 0x2dc0bc
void entry_002dc080_0x2dc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc080_0x2dc080");
#endif

    ctx->pc = 0x2dc080u;

    // 0x2dc080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc084: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dc084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dc088: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC088u;
    {
        const bool branch_taken_0x2dc088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc088) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DC090u;
    // 0x2dc090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc094: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc098: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc09c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dc0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2dc0bcu;
}
