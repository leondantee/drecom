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

// Function: entry_00123b54
// Address: 0x123b54 - 0x123b98
void entry_00123b54_0x123b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123b54_0x123b54");
#endif

    ctx->pc = 0x123b54u;

    // 0x123b54: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x123b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x123b58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b5c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x123b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x123b60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b64: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x123b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x123b68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b6c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x123b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x123b70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b74: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x123b74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x123b78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x123b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x123b80: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x123b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x123b84: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x123b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x123b88: 0xaea400f0  sw          $a0, 0xF0($s5)
    ctx->pc = 0x123b88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 4));
    // 0x123b8c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123b8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123b90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x123B90u;
    {
        const bool branch_taken_0x123b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b90) {
            ctx->pc = 0x123BE0u;
            return;
        }
    }
    ctx->pc = 0x123B98u;
}
