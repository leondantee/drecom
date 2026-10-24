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

// Function: entry_003665e4
// Address: 0x3665e4 - 0x3666b0
void entry_003665e4_0x3665e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003665e4_0x3665e4");
#endif

    switch (ctx->pc) {
        case 0x3665f4u: goto label_3665f4;
        case 0x366608u: goto label_366608;
        case 0x36661cu: goto label_36661c;
        case 0x36662cu: goto label_36662c;
        case 0x366644u: goto label_366644;
        case 0x366678u: goto label_366678;
        default: break;
    }

    ctx->pc = 0x3665e4u;

    // 0x3665e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3665e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3665e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3665ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3665ECu;
    SET_GPR_U32(ctx, 31, 0x3665F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3665ECu, 0x3665F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665F4u;
label_3665f4:
    // 0x3665f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3665f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3665f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665fc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3665fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366600: 0xc05cd58  jal         func_173560
    ctx->pc = 0x366600u;
    SET_GPR_U32(ctx, 31, 0x366608u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x366600u, 0x366608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366608u;
label_366608:
    // 0x366608: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36660c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366610: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366614: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366614u;
    SET_GPR_U32(ctx, 31, 0x36661Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36661Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36661Cu) { return; }
    ctx->pc = 0x36661Cu;
label_36661c:
    // 0x36661c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366624: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366624u;
    SET_GPR_U32(ctx, 31, 0x36662Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366624u, 0x36662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36662Cu;
label_36662c:
    // 0x36662c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366630: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366634: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366638: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x366638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36663c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36663Cu;
    SET_GPR_U32(ctx, 31, 0x366644u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36663Cu, 0x366644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366644u;
label_366644:
    // 0x366644: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366648: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x366648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36664c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366654: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x366658: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36665c: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x36665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366660: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x366660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366664: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366668: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x366668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x36666c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366670: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366670u;
    SET_GPR_U32(ctx, 31, 0x366678u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366670u, 0x366678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366678u;
label_366678:
    // 0x366678: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36667c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36667cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366680: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x366680u;
    {
        const bool branch_taken_0x366680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366680) {
            ctx->pc = 0x3667D4u;
            return;
        }
    }
    ctx->pc = 0x366688u;
    // 0x366688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36668c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x36668cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x366690: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x366690u;
    {
        const bool branch_taken_0x366690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366690) {
            ctx->pc = 0x3666B0u;
            return;
        }
    }
    ctx->pc = 0x366698u;
    // 0x366698: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36669c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x36669cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3666a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3666a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3666a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3666a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3666a8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3666A8u;
    {
        const bool branch_taken_0x3666a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666a8) {
            ctx->pc = 0x3667D4u;
            return;
        }
    }
    ctx->pc = 0x3666B0u;
}
