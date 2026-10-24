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

// Function: entry_00244c30
// Address: 0x244c30 - 0x244ca0
void entry_00244c30_0x244c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244c30_0x244c30");
#endif

    switch (ctx->pc) {
        case 0x244c5cu: goto label_244c5c;
        case 0x244c78u: goto label_244c78;
        case 0x244c90u: goto label_244c90;
        case 0x244c9cu: goto label_244c9c;
        default: break;
    }

    ctx->pc = 0x244c30u;

    // 0x244c30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c3c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244c40: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244c44: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244c48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244c4c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244c50: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x244c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244c54: 0xc05c848  jal         func_172120
    ctx->pc = 0x244C54u;
    SET_GPR_U32(ctx, 31, 0x244C5Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244C54u, 0x244C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C5Cu;
label_244c5c:
    // 0x244c5c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244c60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c64: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244c68: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x244c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c6c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244c6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244c70: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244C70u;
    SET_GPR_U32(ctx, 31, 0x244C78u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244C70u, 0x244C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C78u;
label_244c78:
    // 0x244c78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c7c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244c80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x244c88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x244C88u;
    SET_GPR_U32(ctx, 31, 0x244C90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x244C88u, 0x244C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C90u;
label_244c90:
    // 0x244c90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c94: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x244C94u;
    SET_GPR_U32(ctx, 31, 0x244C9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x244C94u, 0x244C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x244c9cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x244ca0u;
}
