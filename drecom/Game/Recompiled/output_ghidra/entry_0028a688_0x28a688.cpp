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

// Function: entry_0028a688
// Address: 0x28a688 - 0x28a6b8
void entry_0028a688_0x28a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a688_0x28a688");
#endif

    ctx->pc = 0x28a688u;

    // 0x28a688: 0x2ae70002  slti        $a3, $s7, 0x2
    ctx->pc = 0x28a688u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a68c: 0x14e0fed9  bnez        $a3, . + 4 + (-0x127 << 2)
    ctx->pc = 0x28A68Cu;
    {
        const bool branch_taken_0x28a68c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a68c) {
            ctx->pc = 0x28A1F4u;
            return;
        }
    }
    ctx->pc = 0x28A694u;
    // 0x28a694: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x28a698: 0x24c36760  addiu       $v1, $a2, 0x6760
    ctx->pc = 0x28a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26464));
    // 0x28a69c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28a69cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28a6a0: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x28a6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x28a6a4: 0x25076208  addiu       $a3, $t0, 0x6208
    ctx->pc = 0x28a6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 25096));
    // 0x28a6a8: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x28a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x28a6ac: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a6acu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a6b0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28A6B0u;
    {
        const bool branch_taken_0x28a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a6b0) {
            ctx->pc = 0x28A9E8u;
            return;
        }
    }
    ctx->pc = 0x28A6B8u;
}
