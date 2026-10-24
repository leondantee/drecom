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

// Function: entry_00296d0c
// Address: 0x296d0c - 0x296d70
void entry_00296d0c_0x296d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296d0c_0x296d0c");
#endif

    ctx->pc = 0x296d0cu;

    // 0x296d0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d10: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296d14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d18: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296d1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d20: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296d28: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296d2c: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296d30: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d34: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296d38: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296d3c: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296d40: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296d44: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x296d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296d48: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d4c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296d50: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296d54: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296d58: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296d5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296d60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d64: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x296d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
    // 0x296d68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d6c: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    ctx->pc = 0x296d70u;
}
