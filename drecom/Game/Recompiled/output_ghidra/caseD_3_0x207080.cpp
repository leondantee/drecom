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

// Function: caseD_3
// Address: 0x207080 - 0x20717c
void caseD_3_0x207080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x207080");
#endif

    switch (ctx->pc) {
        case 0x2070b4u: goto label_2070b4;
        case 0x207120u: goto label_207120;
        case 0x207134u: goto label_207134;
        default: break;
    }

    ctx->pc = 0x207080u;

    // 0x207080: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207084: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x207088: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x207088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20708c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x20708cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x207090: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x207090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x207094: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207098: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x207098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x20709c: 0x3c073ba3  lui         $a3, 0x3BA3
    ctx->pc = 0x20709cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15267 << 16));
    // 0x2070a0: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2070a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2070a4: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2070a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2070a8: 0xc4ad011c  lwc1        $f13, 0x11C($a1)
    ctx->pc = 0x2070a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2070ac: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2070ACu;
    SET_GPR_U32(ctx, 31, 0x2070B4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2070ACu, 0x2070B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070B4u;
label_2070b4:
    // 0x2070b4: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2070b8: 0x8d0202d0  lw          $v0, 0x2D0($t0)
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 720)));
    // 0x2070bc: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x2070bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x2070c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2070c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2070c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2070c8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2070c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2070cc: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x2070ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x2070d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2070d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2070d4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2070d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2070d8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2070d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2070dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2070dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2070e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2070e4: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x2070e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2070e8: 0x94a20140  lhu         $v0, 0x140($a1)
    ctx->pc = 0x2070e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x2070ec: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x2070ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2070f0: 0xa4a40140  sh          $a0, 0x140($a1)
    ctx->pc = 0x2070f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2070f4: 0x3c033c83  lui         $v1, 0x3C83
    ctx->pc = 0x2070f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15491 << 16));
    // 0x2070f8: 0x3462126f  ori         $v0, $v1, 0x126F
    ctx->pc = 0x2070f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2070fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2070fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x207100: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207104: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207108: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20710c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x207110: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x207110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207114: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x207114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x207118: 0xc05c848  jal         func_172120
    ctx->pc = 0x207118u;
    SET_GPR_U32(ctx, 31, 0x207120u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x207118u, 0x207120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207120u;
label_207120:
    // 0x207120: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207124: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x207124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207128: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x207128u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20712c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20712Cu;
    SET_GPR_U32(ctx, 31, 0x207134u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20712Cu, 0x207134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207134u;
label_207134:
    // 0x207134: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207138: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x207138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x20713c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207140: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x207140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207144: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x207148: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x207148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20714c: 0x0  nop
    ctx->pc = 0x20714cu;
    // NOP
    // 0x207150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207154: 0x0  nop
    ctx->pc = 0x207154u;
    // NOP
    // 0x207158: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x207158u;
    {
        const bool branch_taken_0x207158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207158) {
            ctx->pc = 0x20717Cu;
            return;
        }
    }
    ctx->pc = 0x207160u;
    // 0x207160: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207164: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x207164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207168: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x207168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x20716c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20716cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207170: 0x0  nop
    ctx->pc = 0x207170u;
    // NOP
    // 0x207174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207178: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x207178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    ctx->pc = 0x20717cu;
}
