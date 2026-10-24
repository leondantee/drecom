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

// Function: entry_0018f1d4
// Address: 0x18f1d4 - 0x18f1e8
void entry_0018f1d4_0x18f1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f1d4_0x18f1d4");
#endif

    ctx->pc = 0x18f1d4u;

    // 0x18f1d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f1d8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x18f1d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x18f1dc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f1e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18F1E0u;
    SET_GPR_U32(ctx, 31, 0x18F1E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18F1E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F1E8u) { return; }
    ctx->pc = 0x18F1E8u;
}
