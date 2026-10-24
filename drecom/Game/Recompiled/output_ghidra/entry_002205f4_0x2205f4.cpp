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

// Function: entry_002205f4
// Address: 0x2205f4 - 0x220658
void entry_002205f4_0x2205f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002205f4_0x2205f4");
#endif

    switch (ctx->pc) {
        case 0x220614u: goto label_220614;
        case 0x220624u: goto label_220624;
        case 0x22063cu: goto label_22063c;
        default: break;
    }

    ctx->pc = 0x2205f4u;

    // 0x2205f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2205f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2205f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2205fc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x2205fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x220600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220604: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x220604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220608: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x220608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x22060c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x22060Cu;
    SET_GPR_U32(ctx, 31, 0x220614u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x22060Cu, 0x220614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220614u;
label_220614:
    // 0x220614: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220618: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22061c: 0xc040c24  jal         func_103090
    ctx->pc = 0x22061Cu;
    SET_GPR_U32(ctx, 31, 0x220624u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x220624u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x220624u) { return; }
    ctx->pc = 0x220624u;
label_220624:
    // 0x220624: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x220628: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x220628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22062c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22062cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220630: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x220630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220634: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x220634u;
    SET_GPR_U32(ctx, 31, 0x22063Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x22063Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22063Cu) { return; }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x220640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220644: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220648: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x220648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x22064c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x22064cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220650: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x220650u;
    SET_GPR_U32(ctx, 31, 0x220658u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x220650u, 0x220658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220658u;
}
