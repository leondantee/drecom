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

// Function: caseD_4
// Address: 0x351c48 - 0x351c9c
void caseD_4_0x351c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x351c48");
#endif

    ctx->pc = 0x351c48u;

    // 0x351c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351c4c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x351c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351c50: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x351c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x351c54: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x351c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x351c58: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x351c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x351c5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351c60: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351c64: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351c68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351c6c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x351c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351c70: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x351c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x351c74: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x351c74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x351c78: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x351c78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x351c7c: 0x2503bd00  addiu       $v1, $t0, -0x4300
    ctx->pc = 0x351c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950144));
    // 0x351c80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x351c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x351c84: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x351c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x351c88: 0x34860007  ori         $a2, $a0, 0x7
    ctx->pc = 0x351c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
    // 0x351c8c: 0xac66007c  sw          $a2, 0x7C($v1)
    ctx->pc = 0x351c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 6));
    // 0x351c90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x351c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x351c94: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351c98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x351c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x351c9cu;
}
