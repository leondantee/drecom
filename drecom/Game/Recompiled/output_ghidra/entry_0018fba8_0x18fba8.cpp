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

// Function: entry_0018fba8
// Address: 0x18fba8 - 0x18fbc0
void entry_0018fba8_0x18fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fba8_0x18fba8");
#endif

    ctx->pc = 0x18fba8u;

    // 0x18fba8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fbac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x18fbacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x18fbb0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x18fbb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x18fbb4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x18fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18fbb8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18FBB8u;
    SET_GPR_U32(ctx, 31, 0x18FBC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18FBC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18FBC0u) { return; }
    ctx->pc = 0x18FBC0u;
}
