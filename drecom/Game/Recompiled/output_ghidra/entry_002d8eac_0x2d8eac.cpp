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

// Function: entry_002d8eac
// Address: 0x2d8eac - 0x2d8ef4
void entry_002d8eac_0x2d8eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8eac_0x2d8eac");
#endif

    ctx->pc = 0x2d8eacu;

    // 0x2d8eac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8eb0: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8eb4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ebc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ec0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8ec4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8ec8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ecc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2d8eccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ed0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ed4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8edc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ee4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ee8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8eec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8EECu;
    {
        const bool branch_taken_0x2d8eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8eec) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8EF4u;
}
