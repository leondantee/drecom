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

// Function: entry_0030cc50
// Address: 0x30cc50 - 0x30ccec
void entry_0030cc50_0x30cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030cc50_0x30cc50");
#endif

    switch (ctx->pc) {
        case 0x30cc7cu: goto label_30cc7c;
        case 0x30cc90u: goto label_30cc90;
        case 0x30ccb8u: goto label_30ccb8;
        case 0x30ccc4u: goto label_30ccc4;
        case 0x30ccd4u: goto label_30ccd4;
        case 0x30cce0u: goto label_30cce0;
        default: break;
    }

    ctx->pc = 0x30cc50u;

    // 0x30cc50: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x30cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x30cc54: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30cc58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cc5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc68: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30cc6c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cc70: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30cc74: 0xc05c848  jal         func_172120
    ctx->pc = 0x30CC74u;
    SET_GPR_U32(ctx, 31, 0x30CC7Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30CC74u, 0x30CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC7Cu;
label_30cc7c:
    // 0x30cc7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc80: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30cc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cc84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30cc84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30cc88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30CC88u;
    SET_GPR_U32(ctx, 31, 0x30CC90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30CC88u, 0x30CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC90u;
label_30cc90:
    // 0x30cc90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc94: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30cc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30cc98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc9c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30cc9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30cca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cca4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30cca4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cca8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ccacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ccb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30CCB0u;
    SET_GPR_U32(ctx, 31, 0x30CCB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30CCB0u, 0x30CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCB8u;
label_30ccb8:
    // 0x30ccb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccbc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30CCBCu;
    SET_GPR_U32(ctx, 31, 0x30CCC4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30CCBCu, 0x30CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCC4u;
label_30ccc4:
    // 0x30ccc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ccc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cccc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30CCCCu;
    SET_GPR_U32(ctx, 31, 0x30CCD4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30CCCCu, 0x30CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCD4u;
label_30ccd4:
    // 0x30ccd4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccd8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30CCD8u;
    SET_GPR_U32(ctx, 31, 0x30CCE0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30CCD8u, 0x30CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCE0u;
label_30cce0:
    // 0x30cce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cce4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30CCE4u;
    {
        const bool branch_taken_0x30cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cce4) {
            ctx->pc = 0x30CE44u;
            return;
        }
    }
    ctx->pc = 0x30CCECu;
}
