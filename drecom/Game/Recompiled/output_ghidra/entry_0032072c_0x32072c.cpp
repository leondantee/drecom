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

// Function: entry_0032072c
// Address: 0x32072c - 0x320748
void entry_0032072c_0x32072c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032072c_0x32072c");
#endif

    switch (ctx->pc) {
        case 0x32073cu: goto label_32073c;
        default: break;
    }

    ctx->pc = 0x32072cu;

    // 0x32072c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x32072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320730: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x320730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320734: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x320734u;
    SET_GPR_U32(ctx, 31, 0x32073Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x32073Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32073Cu) { return; }
    ctx->pc = 0x32073Cu;
label_32073c:
    // 0x32073c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32073cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320744: 0x0  nop
    ctx->pc = 0x320744u;
    // NOP
    ctx->pc = 0x320748u;
}
