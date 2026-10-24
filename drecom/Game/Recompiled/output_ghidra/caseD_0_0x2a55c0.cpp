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

// Function: caseD_0
// Address: 0x2a55c0 - 0x2a5ac0
void caseD_0_0x2a55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2a55c0");
#endif

    switch (ctx->pc) {
        case 0x2a55f4u: goto label_2a55f4;
        case 0x2a5620u: goto label_2a5620;
        case 0x2a563cu: goto label_2a563c;
        case 0x2a56a0u: goto label_2a56a0;
        case 0x2a56fcu: goto label_2a56fc;
        case 0x2a5730u: goto label_2a5730;
        case 0x2a5778u: goto label_2a5778;
        case 0x2a5780u: goto label_2a5780;
        case 0x2a57b4u: goto label_2a57b4;
        case 0x2a5804u: goto label_2a5804;
        case 0x2a580cu: goto label_2a580c;
        case 0x2a5840u: goto label_2a5840;
        case 0x2a5888u: goto label_2a5888;
        case 0x2a58b8u: goto label_2a58b8;
        case 0x2a58c8u: goto label_2a58c8;
        case 0x2a58d4u: goto label_2a58d4;
        case 0x2a5994u: goto label_2a5994;
        case 0x2a59ccu: goto label_2a59cc;
        case 0x2a5a04u: goto label_2a5a04;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a80u: goto label_2a5a80;
        case 0x2a5ab8u: goto label_2a5ab8;
        default: break;
    }

    ctx->pc = 0x2a55c0u;

    // 0x2a55c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a55c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a55c8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2a55c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a55cc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a55d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a55d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a55d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a55d8: 0x8c620368  lw          $v0, 0x368($v1)
    ctx->pc = 0x2a55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a55dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a55dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a55e0: 0x24060409  addiu       $a2, $zero, 0x409
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2a55e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a55e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a55e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a55e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a55ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A55ECu;
    SET_GPR_U32(ctx, 31, 0x2A55F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A55ECu, 0x2A55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55F4u;
label_2a55f4:
    // 0x2a55f4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2a55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2a55f8: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x2a55f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a55fc: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a55fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5600: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5604: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5608: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a5608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a560c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a5610: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a5610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a5614: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a5618: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A5618u;
    SET_GPR_U32(ctx, 31, 0x2A5620u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A5618u, 0x2A5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5620u;
label_2a5620:
    // 0x2a5620: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a5620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2a5624: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5628: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x2a5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a562c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5630: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a5630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a5634: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A5634u;
    SET_GPR_U32(ctx, 31, 0x2A563Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5634u, 0x2A563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A563Cu;
label_2a563c:
    // 0x2a563c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5640: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a5640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a5644: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5648: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a564c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a564cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a5650: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a5650u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5654: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a5658: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a5658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a565c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a565cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5660: 0x0  nop
    ctx->pc = 0x2a5660u;
    // NOP
    // 0x2a5664: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a5664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a5668: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a566c: 0xc4610128  lwc1        $f1, 0x128($v1)
    ctx->pc = 0x2a566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a5670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a5674: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a5674u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a5678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a567c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a5680: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a5680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a5684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5688: 0x0  nop
    ctx->pc = 0x2a5688u;
    // NOP
    // 0x2a568c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a5690: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a5694: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a5694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a5698: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A5698u;
    SET_GPR_U32(ctx, 31, 0x2A56A0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A56A0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A56A0u) { return; }
    ctx->pc = 0x2A56A0u;
label_2a56a0:
    // 0x2a56a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a56a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a56a4: 0x3c07c302  lui         $a3, 0xC302
    ctx->pc = 0x2a56a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49922 << 16));
    // 0x2a56a8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a56a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a56ac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a56acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a56b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a56b4: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a56b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a56b8: 0xe5000180  swc1        $f0, 0x180($t0)
    ctx->pc = 0x2a56b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 384), bits); }
    // 0x2a56bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a56bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a56c0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a56c4: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a56c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a56c8: 0x3c03c302  lui         $v1, 0xC302
    ctx->pc = 0x2a56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49922 << 16));
    // 0x2a56cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a56ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a56d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a56d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a56d8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a56dc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a56dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a56e0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a56e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a56e4: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2a56e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2a56e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a56ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2a56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a56f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2a56f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2a56f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A56F4u;
    SET_GPR_U32(ctx, 31, 0x2A56FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A56F4u, 0x2A56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56FCu;
label_2a56fc:
    // 0x2a56fc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a5700: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x2a5700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a5704: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a5704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5708: 0x0  nop
    ctx->pc = 0x2a5708u;
    // NOP
    // 0x2a570c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a570cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a5710: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a5710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a5714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5718: 0x0  nop
    ctx->pc = 0x2a5718u;
    // NOP
    // 0x2a571c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a571cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5720: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5724: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a5724u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a5728: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A5728u;
    SET_GPR_U32(ctx, 31, 0x2A5730u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5728u, 0x2A5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5730u;
label_2a5730:
    // 0x2a5730: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a5734: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5738: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a5738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a573c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a573cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a5740: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2a5740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a5744: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2a5744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2a5748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a5748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a574c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a574cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a5750: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a5750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a5754: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2a5754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2a5758: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a575c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a575cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5760: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5764: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a5764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5768: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a5768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a576c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a576cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5770: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A5770u;
    SET_GPR_U32(ctx, 31, 0x2A5778u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A5770u, 0x2A5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5778u;
label_2a5778:
    // 0x2a5778: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A5778u;
    SET_GPR_U32(ctx, 31, 0x2A5780u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A5778u, 0x2A5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5780u;
label_2a5780:
    // 0x2a5780: 0x3c083c8e  lui         $t0, 0x3C8E
    ctx->pc = 0x2a5780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15502 << 16));
    // 0x2a5784: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x2a5784u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
    // 0x2a5788: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a5788u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a578c: 0x0  nop
    ctx->pc = 0x2a578cu;
    // NOP
    // 0x2a5790: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a5790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a5794: 0x3c0942b4  lui         $t1, 0x42B4
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17076 << 16));
    // 0x2a5798: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a5798u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a579c: 0x0  nop
    ctx->pc = 0x2a579cu;
    // NOP
    // 0x2a57a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a57a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a57a4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a57a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a57a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a57ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A57ACu;
    SET_GPR_U32(ctx, 31, 0x2A57B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A57ACu, 0x2A57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57B4u;
label_2a57b4:
    // 0x2a57b4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a57b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a57b8: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a57bc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2a57bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2a57c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a57c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a57c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a57c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a57c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a57c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a57cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a57ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a57d0: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x2a57d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a57d4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a57d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a57d8: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2a57d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2a57dc: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a57dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a57e0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a57e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a57e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a57e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a57e8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a57e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a57ec: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a57ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a57f0: 0x8ce90130  lw          $t1, 0x130($a3)
    ctx->pc = 0x2a57f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x2a57f4: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a57f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a57f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a57f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a57fc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A57FCu;
    SET_GPR_U32(ctx, 31, 0x2A5804u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A57FCu, 0x2A5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5804u;
label_2a5804:
    // 0x2a5804: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A5804u;
    SET_GPR_U32(ctx, 31, 0x2A580Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A5804u, 0x2A580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A580Cu;
label_2a580c:
    // 0x2a580c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a5810: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a5810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a5814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a5814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5818: 0x0  nop
    ctx->pc = 0x2a5818u;
    // NOP
    // 0x2a581c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a581cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a5820: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a5820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a5824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5828: 0x0  nop
    ctx->pc = 0x2a5828u;
    // NOP
    // 0x2a582c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a582cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5830: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5834: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a5834u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a5838: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A5838u;
    SET_GPR_U32(ctx, 31, 0x2A5840u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A5838u, 0x2A5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5840u;
label_2a5840:
    // 0x2a5840: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a5840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a5844: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5848: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a5848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a584c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a584cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a5850: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a5850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a5854: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2a5854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2a5858: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2a5858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a585c: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x2a585cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2a5860: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2a5860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a5864: 0x352a0008  ori         $t2, $t1, 0x8
    ctx->pc = 0x2a5864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
    // 0x2a5868: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a586c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a586cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a5870: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5870u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5874: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a5874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5878: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a5878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a587c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a587cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5880: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A5880u;
    SET_GPR_U32(ctx, 31, 0x2A5888u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A5880u, 0x2A5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5888u;
label_2a5888:
    // 0x2a5888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a5888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a588c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5890: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2a5890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2a5894: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2a5894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2a5898: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a589c: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x2a589cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a58a0: 0x14e00087  bnez        $a3, . + 4 + (0x87 << 2)
    ctx->pc = 0x2A58A0u;
    {
        const bool branch_taken_0x2a58a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a58a0) {
            ctx->pc = 0x2A5AC0u;
            return;
        }
    }
    ctx->pc = 0x2A58A8u;
    // 0x2a58a8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a58a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a58ac: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a58acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a58b0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A58B0u;
    SET_GPR_U32(ctx, 31, 0x2A58B8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A58B0u, 0x2A58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58B8u;
label_2a58b8:
    // 0x2a58b8: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2a58b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a58bc: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a58bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a58c0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A58C0u;
    SET_GPR_U32(ctx, 31, 0x2A58C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A58C0u, 0x2A58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58C8u;
label_2a58c8:
    // 0x2a58c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a58cc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A58CCu;
    SET_GPR_U32(ctx, 31, 0x2A58D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A58CCu, 0x2A58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58D4u;
label_2a58d4:
    // 0x2a58d4: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x2a58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x2a58d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a58d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58dc: 0x0  nop
    ctx->pc = 0x2a58dcu;
    // NOP
    // 0x2a58e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a58e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a58e4: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x2a58e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
    // 0x2a58e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a58e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58ec: 0x0  nop
    ctx->pc = 0x2a58ecu;
    // NOP
    // 0x2a58f0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a58f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a58f4: 0x3c074180  lui         $a3, 0x4180
    ctx->pc = 0x2a58f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16768 << 16));
    // 0x2a58f8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a58f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a58fc: 0x0  nop
    ctx->pc = 0x2a58fcu;
    // NOP
    // 0x2a5900: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a5900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a5904: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a5908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a5908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a590c: 0x0  nop
    ctx->pc = 0x2a590cu;
    // NOP
    // 0x2a5910: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a5910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a5914: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a5914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5918: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a5918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a591c: 0x0  nop
    ctx->pc = 0x2a591cu;
    // NOP
    // 0x2a5920: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a5920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a5924: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a5924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5928: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a5928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a592c: 0x0  nop
    ctx->pc = 0x2a592cu;
    // NOP
    // 0x2a5930: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a5930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a5934: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a5934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5938: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a5938u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a593c: 0x0  nop
    ctx->pc = 0x2a593cu;
    // NOP
    // 0x2a5940: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a5940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a5944: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a5944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5948: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a5948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a594c: 0x0  nop
    ctx->pc = 0x2a594cu;
    // NOP
    // 0x2a5950: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a5950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a5954: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a595c: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5960: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2a5960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2a5964: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a5964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5968: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a596c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a596cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5970: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a5970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a5974: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5978: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a5978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a597c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a597cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a5980: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a5984: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a5988: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a598c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A598Cu;
    SET_GPR_U32(ctx, 31, 0x2A5994u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A598Cu, 0x2A5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5994u;
label_2a5994:
    // 0x2a5994: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a5994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5998: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a5998u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a599c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a59a0: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x2a59a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a59a4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a59a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a59a8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a59ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a59b0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a59b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a59b4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a59b8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a59b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a59bc: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a59bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a59c0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a59c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a59c4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A59C4u;
    SET_GPR_U32(ctx, 31, 0x2A59CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A59C4u, 0x2A59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59CCu;
label_2a59cc:
    // 0x2a59cc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a59d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a59d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a59d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a59d8: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a59d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a59dc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a59dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a59e0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a59e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a59e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a59ec: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a59ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a59f0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a59f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a59f4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a59f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a59f8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a59f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a59fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A59FCu;
    SET_GPR_U32(ctx, 31, 0x2A5A04u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A59FCu, 0x2A5A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A04u;
label_2a5a04:
    // 0x2a5a04: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5a08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5a0c: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x2a5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5a10: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2a5a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2a5a14: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a5a14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5a18: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5a1c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a5a1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5a20: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2a5a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a5a24: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5a24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5a28: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a5a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a5a2c: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a5a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5a30: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a5a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a5a34: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a5a38: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a5a3c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a5a40: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5A40u;
    SET_GPR_U32(ctx, 31, 0x2A5A48u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5A40u, 0x2A5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A48u;
label_2a5a48:
    // 0x2a5a48: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5a4c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a5a4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5a50: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5a54: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a5a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a5a58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5a5c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5a60: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a5a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a5a64: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a5a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a5a68: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a5a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a5a6c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a5a70: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a5a74: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a5a78: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5A78u;
    SET_GPR_U32(ctx, 31, 0x2A5A80u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5A78u, 0x2A5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A80u;
label_2a5a80:
    // 0x2a5a80: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a5a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5a84: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a5a84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5a88: 0x3c083c23  lui         $t0, 0x3C23
    ctx->pc = 0x2a5a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5a8c: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x2a5a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x2a5a90: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x2a5a90u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5a94: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5a98: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a5a9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a5a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a5aa0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a5aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a5aa4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a5aa8: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a5aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a5aac: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a5aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a5ab0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5AB0u;
    SET_GPR_U32(ctx, 31, 0x2A5AB8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5AB0u, 0x2A5AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AB8u;
label_2a5ab8:
    // 0x2a5ab8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A5AB8u;
    {
        const bool branch_taken_0x2a5ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ab8) {
            ctx->pc = 0x2A5B34u;
            return;
        }
    }
    ctx->pc = 0x2A5AC0u;
}
