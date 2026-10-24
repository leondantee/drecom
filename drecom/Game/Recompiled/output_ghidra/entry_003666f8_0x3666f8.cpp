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

// Function: entry_003666f8
// Address: 0x3666f8 - 0x3667d4
void entry_003666f8_0x3666f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003666f8_0x3666f8");
#endif

    switch (ctx->pc) {
        case 0x366708u: goto label_366708;
        case 0x36671cu: goto label_36671c;
        case 0x366730u: goto label_366730;
        case 0x366740u: goto label_366740;
        case 0x366758u: goto label_366758;
        case 0x36678cu: goto label_36678c;
        default: break;
    }

    ctx->pc = 0x3666f8u;

    // 0x3666f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3666f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3666fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366700: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366700u;
    SET_GPR_U32(ctx, 31, 0x366708u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366700u, 0x366708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366708u;
label_366708:
    // 0x366708: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36670c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366710: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366714: 0xc05cd58  jal         func_173560
    ctx->pc = 0x366714u;
    SET_GPR_U32(ctx, 31, 0x36671Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x366714u, 0x36671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36671Cu;
label_36671c:
    // 0x36671c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366720: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366724: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366728: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366728u;
    SET_GPR_U32(ctx, 31, 0x366730u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366730u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366730u) { return; }
    ctx->pc = 0x366730u;
label_366730:
    // 0x366730: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366738: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366738u;
    SET_GPR_U32(ctx, 31, 0x366740u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366738u, 0x366740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366740u;
label_366740:
    // 0x366740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366744: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366748: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36674c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36674cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366750: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x366750u;
    SET_GPR_U32(ctx, 31, 0x366758u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x366750u, 0x366758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366758u;
label_366758:
    // 0x366758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36675c: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x36675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366760: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x366760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366768: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x36676c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366770: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x366770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366774: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x366774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366778: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36677c: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x36677cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x366780: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366784: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366784u;
    SET_GPR_U32(ctx, 31, 0x36678Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366784u, 0x36678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36678Cu;
label_36678c:
    // 0x36678c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366790: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366794: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x366794u;
    {
        const bool branch_taken_0x366794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366794) {
            ctx->pc = 0x3667D4u;
            return;
        }
    }
    ctx->pc = 0x36679Cu;
    // 0x36679c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667a0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3667a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3667a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3667a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3667a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3667acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3667b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3667b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3667b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3667b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3667bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3667c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3667c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3667c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3667cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3667d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3667d4u;
}
