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

// Function: entry_00301c20
// Address: 0x301c20 - 0x301c6c
void entry_00301c20_0x301c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301c20_0x301c20");
#endif

    ctx->pc = 0x301c20u;

    // 0x301c20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c24: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x301c28: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x301c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x301c2c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x301C2Cu;
    {
        const bool branch_taken_0x301c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c2c) {
            ctx->pc = 0x301C6Cu;
            return;
        }
    }
    ctx->pc = 0x301C34u;
    // 0x301c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301c38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301c40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x301c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x301c44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301c50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301c54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301c5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x301c64: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x301C64u;
    {
        const bool branch_taken_0x301c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c64) {
            ctx->pc = 0x30207Cu;
            return;
        }
    }
    ctx->pc = 0x301C6Cu;
}
