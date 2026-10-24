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

// Function: entry_001a87b8
// Address: 0x1a87b8 - 0x1a87dc
void entry_001a87b8_0x1a87b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a87b8_0x1a87b8");
#endif

    ctx->pc = 0x1a87b8u;

    // 0x1a87b8: 0x288c0  sll         $s1, $v0, 3
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a87bc: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a87c0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a87c4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a87c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a87c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a87cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a87d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a87d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a87d4: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x1a87d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a87d8: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1a87dcu;
}
