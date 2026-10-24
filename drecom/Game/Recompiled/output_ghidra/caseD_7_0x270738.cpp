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

// Function: caseD_7
// Address: 0x270738 - 0x270774
void caseD_7_0x270738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x270738");
#endif

    switch (ctx->pc) {
        case 0x270748u: goto label_270748;
        case 0x270754u: goto label_270754;
        case 0x270768u: goto label_270768;
        default: break;
    }

    ctx->pc = 0x270738u;

    // 0x270738: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27073c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270740: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270740u;
    SET_GPR_U32(ctx, 31, 0x270748u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270740u, 0x270748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270748u;
label_270748:
    // 0x270748: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27074c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x27074Cu;
    SET_GPR_U32(ctx, 31, 0x270754u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x27074Cu, 0x270754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270754u;
label_270754:
    // 0x270754: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270758: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27075c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27075cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270760: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x270760u;
    SET_GPR_U32(ctx, 31, 0x270768u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270760u, 0x270768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270768u;
label_270768:
    // 0x270768: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27076c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x27076Cu;
    SET_GPR_U32(ctx, 31, 0x270774u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x27076Cu, 0x270774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270774u;
}
