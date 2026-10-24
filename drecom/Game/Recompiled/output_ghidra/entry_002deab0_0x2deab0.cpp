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

// Function: entry_002deab0
// Address: 0x2deab0 - 0x2deaf8
void entry_002deab0_0x2deab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002deab0_0x2deab0");
#endif

    ctx->pc = 0x2deab0u;

    // 0x2deab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deab4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2deab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2deab8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DEAB8u;
    {
        const bool branch_taken_0x2deab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deab8) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DEAC0u;
    // 0x2deac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2deac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deac8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2deac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2deacc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2deaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dead0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dead4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dead4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dead8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deadc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2deadcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2deae0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deae4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2deae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2deae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deaec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2deaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2deaf0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DEAF0u;
    {
        const bool branch_taken_0x2deaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deaf0) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DEAF8u;
}
