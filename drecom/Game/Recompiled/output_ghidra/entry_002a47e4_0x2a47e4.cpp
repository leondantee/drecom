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

// Function: entry_002a47e4
// Address: 0x2a47e4 - 0x2a4d3c
void entry_002a47e4_0x2a47e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a47e4_0x2a47e4");
#endif

    switch (ctx->pc) {
        case 0x2a4810u: goto label_2a4810;
        case 0x2a4834u: goto label_2a4834;
        case 0x2a486cu: goto label_2a486c;
        case 0x2a4888u: goto label_2a4888;
        case 0x2a48b4u: goto label_2a48b4;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a4974u: goto label_2a4974;
        case 0x2a49a8u: goto label_2a49a8;
        case 0x2a49ecu: goto label_2a49ec;
        case 0x2a49f4u: goto label_2a49f4;
        case 0x2a4a28u: goto label_2a4a28;
        case 0x2a4a78u: goto label_2a4a78;
        case 0x2a4a80u: goto label_2a4a80;
        case 0x2a4ab4u: goto label_2a4ab4;
        case 0x2a4afcu: goto label_2a4afc;
        case 0x2a4b30u: goto label_2a4b30;
        case 0x2a4b3cu: goto label_2a4b3c;
        case 0x2a4b48u: goto label_2a4b48;
        case 0x2a4c08u: goto label_2a4c08;
        case 0x2a4c44u: goto label_2a4c44;
        case 0x2a4c84u: goto label_2a4c84;
        case 0x2a4cbcu: goto label_2a4cbc;
        case 0x2a4cfcu: goto label_2a4cfc;
        case 0x2a4d34u: goto label_2a4d34;
        default: break;
    }

    ctx->pc = 0x2a47e4u;

    // 0x2a47e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a47e8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a47ec: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a47ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a47f0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a47f4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a47f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a47f8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a47f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a47fc: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x2a47fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2a4800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4808u;
    SET_GPR_U32(ctx, 31, 0x2A4810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4808u, 0x2A4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4810u;
label_2a4810:
    // 0x2a4810: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4814: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x2a4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4818: 0x3c074049  lui         $a3, 0x4049
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16457 << 16));
    // 0x2a481c: 0x34e60fdb  ori         $a2, $a3, 0xFDB
    ctx->pc = 0x2a481cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
    // 0x2a4820: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a4820u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4824: 0x0  nop
    ctx->pc = 0x2a4824u;
    // NOP
    // 0x2a4828: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4828u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a482c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A482Cu;
    SET_GPR_U32(ctx, 31, 0x2A4834u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A482Cu, 0x2A4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4834u;
label_2a4834:
    // 0x2a4834: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a4834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4838: 0xe50000d4  swc1        $f0, 0xD4($t0)
    ctx->pc = 0x2a4838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 212), bits); }
    // 0x2a483c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4840: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4844: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x2a4844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
    // 0x2a4848: 0x3465fa35  ori         $a1, $v1, 0xFA35
    ctx->pc = 0x2a4848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a484c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a484cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4850: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a4854: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a4854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4858: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a4858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a485c: 0x2462dce0  addiu       $v0, $v1, -0x2320
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a4860: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4864: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A4864u;
    SET_GPR_U32(ctx, 31, 0x2A486Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A4864u, 0x2A486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A486Cu;
label_2a486c:
    // 0x2a486c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a4870: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4874: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x2a4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4878: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a487c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a487cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4880: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4880u;
    SET_GPR_U32(ctx, 31, 0x2A4888u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4880u, 0x2A4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4888u;
label_2a4888:
    // 0x2a4888: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a488c: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x2a488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x2a4890: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4894: 0xc4c100d4  lwc1        $f1, 0xD4($a2)
    ctx->pc = 0x2a4894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4898: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x2a4898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x2a489c: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x2a489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2a48a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a48a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a48a4: 0x0  nop
    ctx->pc = 0x2a48a4u;
    // NOP
    // 0x2a48a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a48a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a48ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A48ACu;
    SET_GPR_U32(ctx, 31, 0x2A48B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A48ACu, 0x2A48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48B4u;
label_2a48b4:
    // 0x2a48b4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a48b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a48b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a48bc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a48c0: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a48c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a48c8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a48c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a48cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a48ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a48d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a48d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a48d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a48d8: 0x0  nop
    ctx->pc = 0x2a48d8u;
    // NOP
    // 0x2a48dc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a48dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a48e0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a48e4: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a48e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a48e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a48e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a48ec: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a48ecu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a48f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a48f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a48f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a48f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a48f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a48fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a48fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4900: 0x0  nop
    ctx->pc = 0x2a4900u;
    // NOP
    // 0x2a4904: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a4904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a4908: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a4908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a490c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4910: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A4910u;
    SET_GPR_U32(ctx, 31, 0x2A4918u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A4918u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A4918u) { return; }
    ctx->pc = 0x2A4918u;
label_2a4918:
    // 0x2a4918: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4918u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a491c: 0x3c04c2f0  lui         $a0, 0xC2F0
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49904 << 16));
    // 0x2a4920: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a4920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4924: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a4924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4928: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a4928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a492c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4930: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a4930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a4934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4938: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a493c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a493cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a4940: 0x3c03c2f0  lui         $v1, 0xC2F0
    ctx->pc = 0x2a4940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49904 << 16));
    // 0x2a4944: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4948: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a4948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a494c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a494cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4950: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4954: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a4954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a4958: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a495c: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x2a495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2a4960: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a4960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4964: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a4964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4968: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2a4968u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2a496c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A496Cu;
    SET_GPR_U32(ctx, 31, 0x2A4974u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A496Cu, 0x2A4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4974u;
label_2a4974:
    // 0x2a4974: 0x3c063c8e  lui         $a2, 0x3C8E
    ctx->pc = 0x2a4974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15502 << 16));
    // 0x2a4978: 0x34c5fa35  ori         $a1, $a2, 0xFA35
    ctx->pc = 0x2a4978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64053);
    // 0x2a497c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a497cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4980: 0x0  nop
    ctx->pc = 0x2a4980u;
    // NOP
    // 0x2a4984: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a4984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4988: 0x3c0742b4  lui         $a3, 0x42B4
    ctx->pc = 0x2a4988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17076 << 16));
    // 0x2a498c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a498cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4990: 0x0  nop
    ctx->pc = 0x2a4990u;
    // NOP
    // 0x2a4994: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a4994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4998: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a499c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a499cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a49a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A49A0u;
    SET_GPR_U32(ctx, 31, 0x2A49A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A49A0u, 0x2A49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49A8u;
label_2a49a8:
    // 0x2a49a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a49a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a49ac: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a49acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a49b0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2a49b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a49b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a49b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a49b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a49b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a49bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a49bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a49c0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2a49c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a49c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a49c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a49c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a49c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a49cc: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2a49ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2a49d0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a49d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a49d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a49d8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a49d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a49dc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a49dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a49e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a49e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a49e4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A49E4u;
    SET_GPR_U32(ctx, 31, 0x2A49ECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A49E4u, 0x2A49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49ECu;
label_2a49ec:
    // 0x2a49ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A49ECu;
    SET_GPR_U32(ctx, 31, 0x2A49F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A49ECu, 0x2A49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49F4u;
label_2a49f4:
    // 0x2a49f4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a49f8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a49f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a49fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a49fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a00: 0x0  nop
    ctx->pc = 0x2a4a00u;
    // NOP
    // 0x2a4a04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a4a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4a08: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a4a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a10: 0x0  nop
    ctx->pc = 0x2a4a10u;
    // NOP
    // 0x2a4a14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a4a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4a18: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4a1c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4a1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4a20: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4A20u;
    SET_GPR_U32(ctx, 31, 0x2A4A28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4A20u, 0x2A4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A28u;
label_2a4a28:
    // 0x2a4a28: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a4a2c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4a30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a4a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4a34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a4a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a4a38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a4a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4a3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a4a40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a4a44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a4a48: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a4a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4a4c: 0x34860008  ori         $a2, $a0, 0x8
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2a4a50: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4a54: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a4a54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4a58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4a5c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2a4a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4a60: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a4a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a4a64: 0x8ce90130  lw          $t1, 0x130($a3)
    ctx->pc = 0x2a4a64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x2a4a68: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a4a68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a4a6c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a4a6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4a70: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A4A70u;
    SET_GPR_U32(ctx, 31, 0x2A4A78u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A4A70u, 0x2A4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A78u;
label_2a4a78:
    // 0x2a4a78: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A4A78u;
    SET_GPR_U32(ctx, 31, 0x2A4A80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A4A78u, 0x2A4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A80u;
label_2a4a80:
    // 0x2a4a80: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a4a84: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a4a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a4a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a8c: 0x0  nop
    ctx->pc = 0x2a4a8cu;
    // NOP
    // 0x2a4a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a4a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4a94: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a4a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a9c: 0x0  nop
    ctx->pc = 0x2a4a9cu;
    // NOP
    // 0x2a4aa0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a4aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4aa4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4aa8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4aa8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4aac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4AACu;
    SET_GPR_U32(ctx, 31, 0x2A4AB4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4AACu, 0x2A4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AB4u;
label_2a4ab4:
    // 0x2a4ab4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a4ab8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4abc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a4abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4ac0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a4ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a4ac4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a4ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4ac8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2a4ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2a4acc: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2a4accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a4ad0: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x2a4ad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2a4ad4: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2a4ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a4ad8: 0x352a0008  ori         $t2, $t1, 0x8
    ctx->pc = 0x2a4ad8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
    // 0x2a4adc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ae0: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a4ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a4ae4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4ae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4ae8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a4ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4aec: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a4aecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a4af0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a4af0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4af4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A4AF4u;
    SET_GPR_U32(ctx, 31, 0x2A4AFCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A4AF4u, 0x2A4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AFCu;
label_2a4afc:
    // 0x2a4afc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2a4b00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a4b00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b04: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4b08: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a4b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a4b0c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2a4b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2a4b10: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4b14: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x2a4b14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2a4b18: 0x15000088  bnez        $t0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2A4B18u;
    {
        const bool branch_taken_0x2a4b18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b18) {
            ctx->pc = 0x2A4D3Cu;
            return;
        }
    }
    ctx->pc = 0x2A4B20u;
    // 0x2a4b20: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a4b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4b24: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a4b24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a4b28: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4B28u;
    SET_GPR_U32(ctx, 31, 0x2A4B30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4B28u, 0x2A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B30u;
label_2a4b30:
    // 0x2a4b30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4b34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4B34u;
    SET_GPR_U32(ctx, 31, 0x2A4B3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4B34u, 0x2A4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B3Cu;
label_2a4b3c:
    // 0x2a4b3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4b40: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4B40u;
    SET_GPR_U32(ctx, 31, 0x2A4B48u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4B40u, 0x2A4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B48u;
label_2a4b48:
    // 0x2a4b48: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x2a4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x2a4b4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a4b4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b50: 0x0  nop
    ctx->pc = 0x2a4b50u;
    // NOP
    // 0x2a4b54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a4b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a4b58: 0x3c0541c0  lui         $a1, 0x41C0
    ctx->pc = 0x2a4b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16832 << 16));
    // 0x2a4b5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a4b5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b60: 0x0  nop
    ctx->pc = 0x2a4b60u;
    // NOP
    // 0x2a4b64: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a4b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a4b68: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x2a4b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x2a4b6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a4b6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b70: 0x0  nop
    ctx->pc = 0x2a4b70u;
    // NOP
    // 0x2a4b74: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a4b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a4b78: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x2a4b78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x2a4b7c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a4b7cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b80: 0x0  nop
    ctx->pc = 0x2a4b80u;
    // NOP
    // 0x2a4b84: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a4b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a4b88: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2a4b88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4b8c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a4b8cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b90: 0x0  nop
    ctx->pc = 0x2a4b90u;
    // NOP
    // 0x2a4b94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a4b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a4b98: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2a4b98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4b9c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a4b9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4ba0: 0x0  nop
    ctx->pc = 0x2a4ba0u;
    // NOP
    // 0x2a4ba4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a4ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a4ba8: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x2a4ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4bac: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2a4bacu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4bb0: 0x0  nop
    ctx->pc = 0x2a4bb0u;
    // NOP
    // 0x2a4bb4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a4bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a4bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4bc0: 0x0  nop
    ctx->pc = 0x2a4bc0u;
    // NOP
    // 0x2a4bc4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a4bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a4bc8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4bcc: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4bd0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4bd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4bd4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4bd8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4bdc: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4be0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a4be0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4be4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a4be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4be8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a4be8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4bec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4bf0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4bf4: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4bf8: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4bfc: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4c00: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4C00u;
    SET_GPR_U32(ctx, 31, 0x2A4C08u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4C00u, 0x2A4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C08u;
label_2a4c08:
    // 0x2a4c08: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4c0c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4c0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4c10: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a4c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4c14: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a4c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a4c18: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a4c18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4c1c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4c20: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a4c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4c24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a4c28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4c2c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4c30: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4c34: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4c38: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4c3c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C44u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4C3Cu, 0x2A4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C44u;
label_2a4c44:
    // 0x2a4c44: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4c48: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x2a4c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4c4c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a4c4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4c50: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4c54: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4c58: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4c5c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a4c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a4c60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2a4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4c64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4c68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4c6c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4c70: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4c74: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4c78: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4c7c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C84u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4C7Cu, 0x2A4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C84u;
label_2a4c84:
    // 0x2a4c84: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4c88: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4c8c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4c8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4c90: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4c94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a4c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4c98: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4c9c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a4c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a4ca0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4ca4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4ca8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4cac: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4cb0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4cb4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4CB4u;
    SET_GPR_U32(ctx, 31, 0x2A4CBCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4CB4u, 0x2A4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CBCu;
label_2a4cbc:
    // 0x2a4cbc: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4cc0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4cc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4cc4: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a4cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4cc8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a4cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a4ccc: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a4cccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4cd0: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4cd4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a4cd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4cd8: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a4cdc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a4cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a4ce0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4ce4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4ce8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4cec: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4cf0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4cf4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4CF4u;
    SET_GPR_U32(ctx, 31, 0x2A4CFCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4CF4u, 0x2A4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CFCu;
label_2a4cfc:
    // 0x2a4cfc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4d00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a4d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4d04: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4d08: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4d0c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4d0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4d10: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d14: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4d18: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4d1c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4d20: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4d24: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4d28: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4d2c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D34u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4D2Cu, 0x2A4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D34u;
label_2a4d34:
    // 0x2a4d34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A4D34u;
    {
        const bool branch_taken_0x2a4d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d34) {
            ctx->pc = 0x2A4DA8u;
            return;
        }
    }
    ctx->pc = 0x2A4D3Cu;
}
