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

// Function: entry_0035fd34
// Address: 0x35fd34 - 0x35fd68
void entry_0035fd34_0x35fd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fd34_0x35fd34");
#endif

    ctx->pc = 0x35fd34u;

    // 0x35fd34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fd38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35fd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fd40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35fd44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fd48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35fd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fd50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35fd54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fd58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35fd60: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x35FD60u;
    {
        const bool branch_taken_0x35fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fd60) {
            ctx->pc = 0x35FEB0u;
            return;
        }
    }
    ctx->pc = 0x35FD68u;
}
