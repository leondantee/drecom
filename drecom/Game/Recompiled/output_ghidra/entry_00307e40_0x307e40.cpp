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

// Function: entry_00307e40
// Address: 0x307e40 - 0x307e78
void entry_00307e40_0x307e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307e40_0x307e40");
#endif

    ctx->pc = 0x307e40u;

    // 0x307e40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307e44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307e50: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e54: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x307e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x307e58: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e60: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e64: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x307e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307e68: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x307e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x307e70: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x307E70u;
    {
        const bool branch_taken_0x307e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e70) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307E78u;
}
