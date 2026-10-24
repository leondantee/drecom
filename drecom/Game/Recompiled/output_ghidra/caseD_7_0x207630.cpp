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

// Function: caseD_7
// Address: 0x207630 - 0x20772c
void caseD_7_0x207630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x207630");
#endif

    switch (ctx->pc) {
        case 0x207664u: goto label_207664;
        case 0x2076d0u: goto label_2076d0;
        case 0x2076e4u: goto label_2076e4;
        default: break;
    }

    ctx->pc = 0x207630u;

    // 0x207630: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207634: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x207638: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20763c: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x20763cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x207640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x207640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x207644: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207648: 0x8cc202d0  lw          $v0, 0x2D0($a2)
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x20764c: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x207650: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x207650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x207654: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x207654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x207658: 0xc44d011c  lwc1        $f13, 0x11C($v0)
    ctx->pc = 0x207658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20765c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20765Cu;
    SET_GPR_U32(ctx, 31, 0x207664u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20765Cu, 0x207664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207664u;
label_207664:
    // 0x207664: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207668: 0x8c4502d0  lw          $a1, 0x2D0($v0)
    ctx->pc = 0x207668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x20766c: 0xe4a0011c  swc1        $f0, 0x11C($a1)
    ctx->pc = 0x20766cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 284), bits); }
    // 0x207670: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207674: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207678: 0x8cc202d0  lw          $v0, 0x2D0($a2)
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x20767c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x20767cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x207680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207684: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207688: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x20768c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x20768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x207690: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207694: 0x8cc702d0  lw          $a3, 0x2D0($a2)
    ctx->pc = 0x207694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x207698: 0x94e20140  lhu         $v0, 0x140($a3)
    ctx->pc = 0x207698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 320)));
    // 0x20769c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x20769cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2076a0: 0xa4e40140  sh          $a0, 0x140($a3)
    ctx->pc = 0x2076a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2076a4: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x2076a8: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2076ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2076acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2076b0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2076b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2076b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2076b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2076b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2076bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2076c0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2076c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2076c4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2076c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2076c8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2076C8u;
    SET_GPR_U32(ctx, 31, 0x2076D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2076C8u, 0x2076D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076D0u;
label_2076d0:
    // 0x2076d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2076d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2076d4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2076d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2076d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2076d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2076dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2076DCu;
    SET_GPR_U32(ctx, 31, 0x2076E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2076DCu, 0x2076E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076E4u;
label_2076e4:
    // 0x2076e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2076e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2076e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2076ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2076f0: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2076f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2076f4: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x2076f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2076f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2076fc: 0x0  nop
    ctx->pc = 0x2076fcu;
    // NOP
    // 0x207700: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x207700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207704: 0x0  nop
    ctx->pc = 0x207704u;
    // NOP
    // 0x207708: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x207708u;
    {
        const bool branch_taken_0x207708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207708) {
            ctx->pc = 0x20772Cu;
            return;
        }
    }
    ctx->pc = 0x207710u;
    // 0x207710: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207714: 0xc4a10184  lwc1        $f1, 0x184($a1)
    ctx->pc = 0x207714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207718: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x20771c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20771cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207720: 0x0  nop
    ctx->pc = 0x207720u;
    // NOP
    // 0x207724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207728: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x207728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    ctx->pc = 0x20772cu;
}
