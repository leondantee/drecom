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

// Function: entry_00351f4c
// Address: 0x351f4c - 0x351f98
void entry_00351f4c_0x351f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00351f4c_0x351f4c");
#endif

    switch (ctx->pc) {
        case 0x351f5cu: goto label_351f5c;
        case 0x351f70u: goto label_351f70;
        case 0x351f84u: goto label_351f84;
        case 0x351f90u: goto label_351f90;
        default: break;
    }

    ctx->pc = 0x351f4cu;

    // 0x351f4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351f54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x351F54u;
    SET_GPR_U32(ctx, 31, 0x351F5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x351F54u, 0x351F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F5Cu;
label_351f5c:
    // 0x351f5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f64: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x351f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x351f68: 0xc05cd58  jal         func_173560
    ctx->pc = 0x351F68u;
    SET_GPR_U32(ctx, 31, 0x351F70u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x351F68u, 0x351F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F70u;
label_351f70:
    // 0x351f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x351f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351f74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351f7c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x351F7Cu;
    SET_GPR_U32(ctx, 31, 0x351F84u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x351F7Cu, 0x351F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F84u;
label_351f84:
    // 0x351f84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f88: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x351F88u;
    SET_GPR_U32(ctx, 31, 0x351F90u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x351F88u, 0x351F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F90u;
label_351f90:
    // 0x351f90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f94: 0x0  nop
    ctx->pc = 0x351f94u;
    // NOP
    ctx->pc = 0x351f98u;
}
