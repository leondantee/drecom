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

// Function: entry_0014c454
// Address: 0x14c454 - 0x14c47c
void entry_0014c454_0x14c454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c454_0x14c454");
#endif

    switch (ctx->pc) {
        case 0x14c464u: goto label_14c464;
        case 0x14c470u: goto label_14c470;
        default: break;
    }

    ctx->pc = 0x14c454u;

    // 0x14c454: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c458: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c45c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C45Cu;
    SET_GPR_U32(ctx, 31, 0x14C464u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C45Cu, 0x14C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C464u;
label_14c464:
    // 0x14c464: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c468: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14C468u;
    SET_GPR_U32(ctx, 31, 0x14C470u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C468u, 0x14C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c474: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14c47cu;
}
