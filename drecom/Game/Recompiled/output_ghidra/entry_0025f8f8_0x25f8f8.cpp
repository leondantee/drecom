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

// Function: entry_0025f8f8
// Address: 0x25f8f8 - 0x25f910
void entry_0025f8f8_0x25f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f8f8_0x25f8f8");
#endif

    switch (ctx->pc) {
        case 0x25f90cu: goto label_25f90c;
        default: break;
    }

    ctx->pc = 0x25f8f8u;

    // 0x25f8f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f8f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f8fc: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25f900: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25f900u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f904: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F904u;
    SET_GPR_U32(ctx, 31, 0x25F90Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F90Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F90Cu) { return; }
    ctx->pc = 0x25F90Cu;
label_25f90c:
    // 0x25f90c: 0x0  nop
    ctx->pc = 0x25f90cu;
    // NOP
    ctx->pc = 0x25f910u;
}
