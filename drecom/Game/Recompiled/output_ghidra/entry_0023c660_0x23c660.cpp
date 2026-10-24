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

// Function: entry_0023c660
// Address: 0x23c660 - 0x23c744
void entry_0023c660_0x23c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c660_0x23c660");
#endif

    switch (ctx->pc) {
        case 0x23c690u: goto label_23c690;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c700u: goto label_23c700;
        default: break;
    }

    ctx->pc = 0x23c660u;

    // 0x23c660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c664: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c668: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c66c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c674: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c678: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c67c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c680: 0xc46d0050  lwc1        $f13, 0x50($v1)
    ctx->pc = 0x23c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c684: 0xc44e003c  lwc1        $f14, 0x3C($v0)
    ctx->pc = 0x23c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x23c688: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x23C688u;
    SET_GPR_U32(ctx, 31, 0x23C690u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x23C688u, 0x23C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C690u;
label_23c690:
    // 0x23c690: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c694: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c698: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c69c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c6a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23c6a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c6a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23C6A4u;
    SET_GPR_U32(ctx, 31, 0x23C6ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23C6A4u, 0x23C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6ACu;
label_23c6ac:
    // 0x23c6ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6b0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23c6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23c6b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23c6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23c6bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23C6BCu;
    SET_GPR_U32(ctx, 31, 0x23C6C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23C6BCu, 0x23C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6C4u;
label_23c6c4:
    // 0x23c6c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23C6C8u;
    SET_GPR_U32(ctx, 31, 0x23C6D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23C6C8u, 0x23C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6D0u;
label_23c6d0:
    // 0x23c6d0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23c6d4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23c6d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23c6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23c6dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c6e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c6ec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23c6f0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c6f4: 0xc44d0050  lwc1        $f13, 0x50($v0)
    ctx->pc = 0x23c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23c6f8: 0xc05cbac  jal         func_172EB0
    ctx->pc = 0x23C6F8u;
    SET_GPR_U32(ctx, 31, 0x23C700u);
    ctx->pc = 0x172EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172EB0u, 0x23C6F8u, 0x23C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C700u;
label_23c700:
    // 0x23c700: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23C700u;
    {
        const bool branch_taken_0x23c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c700) {
            ctx->pc = 0x23C744u;
            return;
        }
    }
    ctx->pc = 0x23C708u;
    // 0x23c708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c70c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23c710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23c714: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c718: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x23c718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c71c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c720: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c728: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23c728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c72c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23c730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23c734: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23c738: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x23c738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23c73c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x23c73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x23c740: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23c740u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23c744u;
}
