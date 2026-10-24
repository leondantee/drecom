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

// Function: entry_00366410
// Address: 0x366410 - 0x3664ec
void entry_00366410_0x366410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366410_0x366410");
#endif

    switch (ctx->pc) {
        case 0x366420u: goto label_366420;
        case 0x366434u: goto label_366434;
        case 0x366448u: goto label_366448;
        case 0x366458u: goto label_366458;
        case 0x366470u: goto label_366470;
        case 0x3664a4u: goto label_3664a4;
        default: break;
    }

    ctx->pc = 0x366410u;

    // 0x366410: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366418u;
    SET_GPR_U32(ctx, 31, 0x366420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366418u, 0x366420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366420u;
label_366420:
    // 0x366420: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366424: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366428: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36642c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36642Cu;
    SET_GPR_U32(ctx, 31, 0x366434u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36642Cu, 0x366434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366434u;
label_366434:
    // 0x366434: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366438: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36643c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366440: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366440u;
    SET_GPR_U32(ctx, 31, 0x366448u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366448u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366448u) { return; }
    ctx->pc = 0x366448u;
label_366448:
    // 0x366448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36644c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366450: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366450u;
    SET_GPR_U32(ctx, 31, 0x366458u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366450u, 0x366458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366458u;
label_366458:
    // 0x366458: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36645c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366460: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366464: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x366464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366468: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x366468u;
    SET_GPR_U32(ctx, 31, 0x366470u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x366468u, 0x366470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366470u;
label_366470:
    // 0x366470: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366474: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x366474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366478: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x366478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36647c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36647cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366480: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x366484: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366488: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x366488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36648c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366494: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x366494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x366498: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36649c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36649Cu;
    SET_GPR_U32(ctx, 31, 0x3664A4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36649Cu, 0x3664A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664A4u;
label_3664a4:
    // 0x3664a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3664a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3664ac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3664ACu;
    {
        const bool branch_taken_0x3664ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3664ac) {
            ctx->pc = 0x3664ECu;
            return;
        }
    }
    ctx->pc = 0x3664B4u;
    // 0x3664b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664b8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3664b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3664bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3664bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3664c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3664c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3664c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3664c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3664cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3664d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3664d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3664d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3664dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3664e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3664e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3664e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3664ecu;
}
