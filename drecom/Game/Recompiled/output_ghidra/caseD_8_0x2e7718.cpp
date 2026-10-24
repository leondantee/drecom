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

// Function: caseD_8
// Address: 0x2e7718 - 0x2e7798
void caseD_8_0x2e7718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x2e7718");
#endif

    switch (ctx->pc) {
        case 0x2e7730u: goto label_2e7730;
        case 0x2e7740u: goto label_2e7740;
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7780u: goto label_2e7780;
        default: break;
    }

    ctx->pc = 0x2e7718u;

    // 0x2e7718: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x2e7718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e771c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2e771cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2e7720: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e7720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7724: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2e7724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e7728: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E7728u;
    SET_GPR_U32(ctx, 31, 0x2E7730u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E7728u, 0x2E7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7730u;
label_2e7730:
    // 0x2e7730: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7734: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7738: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E7738u;
    SET_GPR_U32(ctx, 31, 0x2E7740u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E7738u, 0x2E7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7740u;
label_2e7740:
    // 0x2e7740: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7744: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E7744u;
    SET_GPR_U32(ctx, 31, 0x2E774Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E7744u, 0x2E774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E774Cu;
label_2e774c:
    // 0x2e774c: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x2e774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7750: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2e7750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2e7754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7758: 0x0  nop
    ctx->pc = 0x2e7758u;
    // NOP
    // 0x2e775c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e775cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7760: 0x0  nop
    ctx->pc = 0x2e7760u;
    // NOP
    // 0x2e7764: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E7764u;
    {
        const bool branch_taken_0x2e7764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7764) {
            ctx->pc = 0x2E7798u;
            return;
        }
    }
    ctx->pc = 0x2E776Cu;
    // 0x2e776c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7770: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2e7770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e7774: 0xc68c009c  lwc1        $f12, 0x9C($s4)
    ctx->pc = 0x2e7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7778: 0xc0c9144  jal         func_324510
    ctx->pc = 0x2E7778u;
    SET_GPR_U32(ctx, 31, 0x2E7780u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E7778u, 0x2E7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7780u;
label_2e7780:
    // 0x2e7780: 0xc681009c  lwc1        $f1, 0x9C($s4)
    ctx->pc = 0x2e7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7784: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2e7784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2e7788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e778c: 0x0  nop
    ctx->pc = 0x2e778cu;
    // NOP
    // 0x2e7790: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e7794: 0xe680009c  swc1        $f0, 0x9C($s4)
    ctx->pc = 0x2e7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
    ctx->pc = 0x2e7798u;
}
