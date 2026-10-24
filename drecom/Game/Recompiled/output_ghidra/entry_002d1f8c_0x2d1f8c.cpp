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

// Function: entry_002d1f8c
// Address: 0x2d1f8c - 0x2d2008
void entry_002d1f8c_0x2d1f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1f8c_0x2d1f8c");
#endif

    switch (ctx->pc) {
        case 0x2d1fb8u: goto label_2d1fb8;
        case 0x2d1fccu: goto label_2d1fcc;
        case 0x2d1ff4u: goto label_2d1ff4;
        case 0x2d2000u: goto label_2d2000;
        default: break;
    }

    ctx->pc = 0x2d1f8cu;

    // 0x2d1f8c: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x2d1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x2d1f90: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d1f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d1f94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1f98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1fa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1fa4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1fa8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1fac: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d1facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d1fb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D1FB0u;
    SET_GPR_U32(ctx, 31, 0x2D1FB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D1FB0u, 0x2D1FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FB8u;
label_2d1fb8:
    // 0x2d1fb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1fbc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d1fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1fc0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d1fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d1fc4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D1FC4u;
    SET_GPR_U32(ctx, 31, 0x2D1FCCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D1FC4u, 0x2D1FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FCCu;
label_2d1fcc:
    // 0x2d1fcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1fd0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d1fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d1fd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1fd8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d1fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d1fe0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1fe4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1fe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1fe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1fec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D1FECu;
    SET_GPR_U32(ctx, 31, 0x2D1FF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D1FECu, 0x2D1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FF4u;
label_2d1ff4:
    // 0x2d1ff4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1ff8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D1FF8u;
    SET_GPR_U32(ctx, 31, 0x2D2000u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D1FF8u, 0x2D2000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2000u;
label_2d2000:
    // 0x2d2000: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2004: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2d2008u;
}
