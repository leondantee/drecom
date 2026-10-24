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

// Function: entry_001e7200
// Address: 0x1e7200 - 0x1e7268
void entry_001e7200_0x1e7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7200_0x1e7200");
#endif

    ctx->pc = 0x1e7200u;

    // 0x1e7200: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7204: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7208: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e720c: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x1e720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7210: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7214: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1e7214u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7218: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1e7218u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e721c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x1e721cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7220: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7224: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e7224u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7228: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1e7228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e722c: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7230: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1e7230u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7234: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x1e7234u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7238: 0x2b62818  mult        $a1, $s5, $s6
    ctx->pc = 0x1e7238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e723c: 0x2973018  mult        $a2, $s4, $s7
    ctx->pc = 0x1e723cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1e7240: 0xa6a023  subu        $s4, $a1, $a2
    ctx->pc = 0x1e7240u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7244: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7244u;
    {
        const bool branch_taken_0x1e7244 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1e7244) {
            ctx->pc = 0x1E7268u;
            return;
        }
    }
    ctx->pc = 0x1E724Cu;
    // 0x1e724c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7250: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e7250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e7254: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e7254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7258: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e725c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e725cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e7260: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7260u;
    {
        const bool branch_taken_0x1e7260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7260) {
            ctx->pc = 0x1E7280u;
            return;
        }
    }
    ctx->pc = 0x1E7268u;
}
