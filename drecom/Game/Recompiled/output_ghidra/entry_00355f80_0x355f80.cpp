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

// Function: entry_00355f80
// Address: 0x355f80 - 0x356008
void entry_00355f80_0x355f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355f80_0x355f80");
#endif

    switch (ctx->pc) {
        case 0x355fdcu: goto label_355fdc;
        case 0x355ff8u: goto label_355ff8;
        default: break;
    }

    ctx->pc = 0x355f80u;

    // 0x355f80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x355f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x355f84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f88: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x355f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x355f8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f90: 0x844313ae  lh          $v1, 0x13AE($v0)
    ctx->pc = 0x355f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5038)));
    // 0x355f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355f98: 0xa44313ac  sh          $v1, 0x13AC($v0)
    ctx->pc = 0x355f98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5036), (uint16_t)GPR_U32(ctx, 3));
    // 0x355f9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fa0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x355fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x355fa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fa8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x355fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355fac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fb0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x355fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x355fb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fb8: 0xa44013a8  sh          $zero, 0x13A8($v0)
    ctx->pc = 0x355fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5032), (uint16_t)GPR_U32(ctx, 0));
    // 0x355fbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x355fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x355fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355fc4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x355fc8: 0x24060a8b  addiu       $a2, $zero, 0xA8B
    ctx->pc = 0x355fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2699));
    // 0x355fcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x355fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355fd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x355fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x355fd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x355FD4u;
    SET_GPR_U32(ctx, 31, 0x355FDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x355FD4u, 0x355FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FDCu;
label_355fdc:
    // 0x355fdc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x355fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x355fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x355fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x355fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355fe8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x355fe8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355fec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x355fecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x355ff0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x355FF0u;
    SET_GPR_U32(ctx, 31, 0x355FF8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x355FF0u, 0x355FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FF8u;
label_355ff8:
    // 0x355ff8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x355ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355ffc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x355ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x356000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356004: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x356004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x356008u;
}
