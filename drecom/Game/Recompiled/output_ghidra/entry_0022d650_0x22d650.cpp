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

// Function: entry_0022d650
// Address: 0x22d650 - 0x22d7ec
void entry_0022d650_0x22d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d650_0x22d650");
#endif

    switch (ctx->pc) {
        case 0x22d680u: goto label_22d680;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d708u: goto label_22d708;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7e4u: goto label_22d7e4;
        default: break;
    }

    ctx->pc = 0x22d650u;

    // 0x22d650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d654: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d658: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22d658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d65c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d660: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d664: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d66c: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22d670: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22d674: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d678: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D678u;
    SET_GPR_U32(ctx, 31, 0x22D680u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D678u, 0x22D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D680u;
label_22d680:
    // 0x22d680: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x22d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22d684: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d688: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22d688u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d68c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d690: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d694: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d698: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22d698u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d69c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d6a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22d6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22d6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d6a8: 0x0  nop
    ctx->pc = 0x22d6a8u;
    // NOP
    // 0x22d6ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22d6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22d6b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d6b4: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d6b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d6bc: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22d6bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d6c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d6c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22d6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22d6c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d6d0: 0x0  nop
    ctx->pc = 0x22d6d0u;
    // NOP
    // 0x22d6d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x22d6d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d6dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d6e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22d6e4: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x22d6e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22d6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d6ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22d6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22d6f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22D6F0u;
    SET_GPR_U32(ctx, 31, 0x22D6F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22D6F0u, 0x22D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6F8u;
label_22d6f8:
    // 0x22d6f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d6fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d700: 0xc040c24  jal         func_103090
    ctx->pc = 0x22D700u;
    SET_GPR_U32(ctx, 31, 0x22D708u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22D708u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22D708u) { return; }
    ctx->pc = 0x22D708u;
label_22d708:
    // 0x22d708: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22d70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d710: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d714: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d718: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x22d71c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d724: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d728: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d728u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d72c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x22d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d738: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d73c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22d740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d744: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d748: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d74c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d74cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d750: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x22d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d75c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d760: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22d760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22d764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d768: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d76c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22d770: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22d774: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d778: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22d778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22d77c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d780: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d784: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22d788: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x22d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x22d78c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22d790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d798: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22d798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22d79c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x22d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22d7a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d7a4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x22d7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d7a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D7A8u;
    SET_GPR_U32(ctx, 31, 0x22D7B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D7A8u, 0x22D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7B0u;
label_22d7b0:
    // 0x22d7b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22d7b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d7b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22D7B8u;
    {
        const bool branch_taken_0x22d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7b8) {
            ctx->pc = 0x22D7ECu;
            return;
        }
    }
    ctx->pc = 0x22D7C0u;
    // 0x22d7c0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d7c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d7c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d7cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d7d0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x22d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x22d7d4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22d7d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d7d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d7dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D7DCu;
    SET_GPR_U32(ctx, 31, 0x22D7E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D7DCu, 0x22D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7E4u;
label_22d7e4:
    // 0x22d7e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22D7E4u;
    {
        const bool branch_taken_0x22d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7e4) {
            ctx->pc = 0x22D810u;
            return;
        }
    }
    ctx->pc = 0x22D7ECu;
}
