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

// Function: entry_002e765c
// Address: 0x2e765c - 0x2e7698
void entry_002e765c_0x2e765c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e765c_0x2e765c");
#endif

    ctx->pc = 0x2e765cu;

    // 0x2e765c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2e765cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e7660: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2e7660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2e7664: 0x24838c08  addiu       $v1, $a0, -0x73F8
    ctx->pc = 0x2e7664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937608));
    // 0x2e7668: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2e7668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e766c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2e766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7670: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x2e7670u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2e7674: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e7674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7678: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x2e7678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2e767c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x2e767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2e7680: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e7680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e7684: 0x8ca50058  lw          $a1, 0x58($a1)
    ctx->pc = 0x2e7684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2e7688: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e768c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e768cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e7690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e7694: 0x0  nop
    ctx->pc = 0x2e7694u;
    // NOP
    ctx->pc = 0x2e7698u;
}
