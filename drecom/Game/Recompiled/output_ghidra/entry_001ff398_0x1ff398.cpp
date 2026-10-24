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

// Function: entry_001ff398
// Address: 0x1ff398 - 0x1ff3b8
void entry_001ff398_0x1ff398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff398_0x1ff398");
#endif

    switch (ctx->pc) {
        case 0x1ff3a8u: goto label_1ff3a8;
        default: break;
    }

    ctx->pc = 0x1ff398u;

    // 0x1ff398: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff39c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff3a0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FF3A0u;
    SET_GPR_U32(ctx, 31, 0x1FF3A8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FF3A8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF3A8u) { return; }
    ctx->pc = 0x1FF3A8u;
label_1ff3a8:
    // 0x1ff3a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff3a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff3ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ff3b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ff3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ff3b4: 0x0  nop
    ctx->pc = 0x1ff3b4u;
    // NOP
    ctx->pc = 0x1ff3b8u;
}
