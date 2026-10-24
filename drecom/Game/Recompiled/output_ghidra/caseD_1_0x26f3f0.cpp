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

// Function: caseD_1
// Address: 0x26f3f0 - 0x26f450
void caseD_1_0x26f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x26f3f0");
#endif

    switch (ctx->pc) {
        case 0x26f400u: goto label_26f400;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f420u: goto label_26f420;
        case 0x26f42cu: goto label_26f42c;
        default: break;
    }

    ctx->pc = 0x26f3f0u;

    // 0x26f3f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f3f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f3f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f3f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26F3F8u;
    SET_GPR_U32(ctx, 31, 0x26F400u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F3F8u, 0x26F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F400u;
label_26f400:
    // 0x26f400: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f404: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26F404u;
    SET_GPR_U32(ctx, 31, 0x26F40Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26F404u, 0x26F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F40Cu;
label_26f40c:
    // 0x26f40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f418: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26F418u;
    SET_GPR_U32(ctx, 31, 0x26F420u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26F418u, 0x26F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F420u;
label_26f420:
    // 0x26f420: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f420u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f424: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26F424u;
    SET_GPR_U32(ctx, 31, 0x26F42Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F424u, 0x26F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F42Cu;
label_26f42c:
    // 0x26f42c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f430: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f438: 0x0  nop
    ctx->pc = 0x26f438u;
    // NOP
    // 0x26f43c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f444: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26F444u;
    {
        const bool branch_taken_0x26f444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f444) {
            ctx->pc = 0x26F450u;
            return;
        }
    }
    ctx->pc = 0x26F44Cu;
    // 0x26f44c: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x26f44cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26f450u;
}
