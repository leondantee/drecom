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

// Function: entry_0029a7ac
// Address: 0x29a7ac - 0x29a7d0
void entry_0029a7ac_0x29a7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a7ac_0x29a7ac");
#endif

    ctx->pc = 0x29a7acu;

    // 0x29a7ac: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29a7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7b0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7b4: 0x27b50140  addiu       $s5, $sp, 0x140
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a7b8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x29a7b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x29a7bc: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x29a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x29a7c0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x29a7c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29a7c4: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x29a7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x29a7c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29A7C8u;
    SET_GPR_U32(ctx, 31, 0x29A7D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29A7D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A7D0u) { return; }
    ctx->pc = 0x29A7D0u;
}
