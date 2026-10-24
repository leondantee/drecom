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

// Function: entry_001e7e90
// Address: 0x1e7e90 - 0x1e7efc
void entry_001e7e90_0x1e7e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7e90_0x1e7e90");
#endif

    ctx->pc = 0x1e7e90u;

    // 0x1e7e90: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7e94: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7e98: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x1e7e98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7e9c: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1e7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7ea0: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7ea4: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x1e7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e7ea8: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x1e7ea8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7eac: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x1e7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7eb0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7eb4: 0xa2b023  subu        $s6, $a1, $v0
    ctx->pc = 0x1e7eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e7eb8: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x1e7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e7ebc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7ec0: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e7ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7ec4: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x1e7ec4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7ec8: 0x2b62018  mult        $a0, $s5, $s6
    ctx->pc = 0x1e7ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e7ecc: 0x2772818  mult        $a1, $s3, $s7
    ctx->pc = 0x1e7eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e7ed0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7ed4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1e7ed4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ed8: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7ED8u;
    {
        const bool branch_taken_0x1e7ed8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e7ed8) {
            ctx->pc = 0x1E7EFCu;
            return;
        }
    }
    ctx->pc = 0x1E7EE0u;
    // 0x1e7ee0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7ee4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7ee8: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7eec: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1e7eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7ef0: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1e7ef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7EF4u;
    {
        const bool branch_taken_0x1e7ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ef4) {
            ctx->pc = 0x1E7F10u;
            return;
        }
    }
    ctx->pc = 0x1E7EFCu;
}
