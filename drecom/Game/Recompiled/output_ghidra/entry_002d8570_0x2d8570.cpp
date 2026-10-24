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

// Function: entry_002d8570
// Address: 0x2d8570 - 0x2d85b8
void entry_002d8570_0x2d8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8570_0x2d8570");
#endif

    ctx->pc = 0x2d8570u;

    // 0x2d8570: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8574: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8574u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8578: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d857c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8584: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8588: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d858c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8590: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8594: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8598: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d8598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d859c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d85a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d85a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d85a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d85a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d85ac: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d85acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d85b0: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x2D85B0u;
    {
        const bool branch_taken_0x2d85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d85b0) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D85B8u;
}
