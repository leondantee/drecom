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

// Function: entry_001e60b8
// Address: 0x1e60b8 - 0x1e6120
void entry_001e60b8_0x1e60b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e60b8_0x1e60b8");
#endif

    ctx->pc = 0x1e60b8u;

    // 0x1e60b8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e60bc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1e60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e60c0: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e60c4: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x1e60c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e60c8: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e60cc: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e60d0: 0x64a023  subu        $s4, $v1, $a0
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e60d4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e60d8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e60dc: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1e60dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e60e0: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x1e60e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e60e4: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e60e8: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e60ec: 0x64b023  subu        $s6, $v1, $a0
    ctx->pc = 0x1e60ecu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e60f0: 0x2952818  mult        $a1, $s4, $s5
    ctx->pc = 0x1e60f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e60f4: 0x2563018  mult        $a2, $s2, $s6
    ctx->pc = 0x1e60f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1e60f8: 0xa69023  subu        $s2, $a1, $a2
    ctx->pc = 0x1e60f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e60fc: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E60FCu;
    {
        const bool branch_taken_0x1e60fc = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e60fc) {
            ctx->pc = 0x1E6120u;
            return;
        }
    }
    ctx->pc = 0x1E6104u;
    // 0x1e6104: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6108: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e610c: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6110: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x1e6110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e6114: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e6114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1e6118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6118u;
    {
        const bool branch_taken_0x1e6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6118) {
            ctx->pc = 0x1E6138u;
            return;
        }
    }
    ctx->pc = 0x1E6120u;
}
