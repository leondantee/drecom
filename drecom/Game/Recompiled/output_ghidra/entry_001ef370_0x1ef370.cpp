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

// Function: entry_001ef370
// Address: 0x1ef370 - 0x1ef3f0
void entry_001ef370_0x1ef370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef370_0x1ef370");
#endif

    switch (ctx->pc) {
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef3a0u: goto label_1ef3a0;
        case 0x1ef3acu: goto label_1ef3ac;
        case 0x1ef3dcu: goto label_1ef3dc;
        default: break;
    }

    ctx->pc = 0x1ef370u;

    // 0x1ef370: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef374: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef378: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef37c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ef37cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef380: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EF380u;
    SET_GPR_U32(ctx, 31, 0x1EF388u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EF380u, 0x1EF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF388u;
label_1ef388:
    // 0x1ef388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef38c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ef38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ef390: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef394: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ef394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef398: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EF398u;
    SET_GPR_U32(ctx, 31, 0x1EF3A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EF398u, 0x1EF3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3A0u;
label_1ef3a0:
    // 0x1ef3a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3a4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EF3A4u;
    SET_GPR_U32(ctx, 31, 0x1EF3ACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EF3A4u, 0x1EF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3ACu;
label_1ef3ac:
    // 0x1ef3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ef3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ef3b4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1EF3B4u;
    {
        const bool branch_taken_0x1ef3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3b4) {
            ctx->pc = 0x1EF4C0u;
            return;
        }
    }
    ctx->pc = 0x1EF3BCu;
    // 0x1ef3bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ef3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ef3c8: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1ef3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1ef3cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef3d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ef3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ef3d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EF3D4u;
    SET_GPR_U32(ctx, 31, 0x1EF3DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EF3D4u, 0x1EF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3DCu;
label_1ef3dc:
    // 0x1ef3dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3e4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ef3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef3e8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EF3E8u;
    {
        const bool branch_taken_0x1ef3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3e8) {
            ctx->pc = 0x1EF4C0u;
            return;
        }
    }
    ctx->pc = 0x1EF3F0u;
}
