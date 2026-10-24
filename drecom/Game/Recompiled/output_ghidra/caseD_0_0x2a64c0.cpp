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
// Address: 0x2a64c0 - 0x2a6a20
void caseD_0_0x2a64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2a64c0");
#endif

    switch (ctx->pc) {
        case 0x2a64f4u: goto label_2a64f4;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6558u: goto label_2a6558;
        case 0x2a6574u: goto label_2a6574;
        case 0x2a65a0u: goto label_2a65a0;
        case 0x2a6604u: goto label_2a6604;
        case 0x2a665cu: goto label_2a665c;
        case 0x2a6690u: goto label_2a6690;
        case 0x2a66d4u: goto label_2a66d4;
        case 0x2a66dcu: goto label_2a66dc;
        case 0x2a6710u: goto label_2a6710;
        case 0x2a6754u: goto label_2a6754;
        case 0x2a675cu: goto label_2a675c;
        case 0x2a6790u: goto label_2a6790;
        case 0x2a67e0u: goto label_2a67e0;
        case 0x2a6814u: goto label_2a6814;
        case 0x2a6824u: goto label_2a6824;
        case 0x2a6834u: goto label_2a6834;
        case 0x2a68ecu: goto label_2a68ec;
        case 0x2a6924u: goto label_2a6924;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a699cu: goto label_2a699c;
        case 0x2a69d4u: goto label_2a69d4;
        case 0x2a6a18u: goto label_2a6a18;
        default: break;
    }

    ctx->pc = 0x2a64c0u;

    // 0x2a64c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a64c4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a64c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a64c8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2a64c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a64cc: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a64ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a64d0: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a64d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a64d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a64d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a64d8: 0x8cc80368  lw          $t0, 0x368($a2)
    ctx->pc = 0x2a64d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x2a64dc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a64dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a64e0: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2a64e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a64e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a64e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a64e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a64ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A64ECu;
    SET_GPR_U32(ctx, 31, 0x2A64F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A64ECu, 0x2A64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64F4u;
label_2a64f4:
    // 0x2a64f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a64f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a64f8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a64f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a64fc: 0xc4c100d4  lwc1        $f1, 0xD4($a2)
    ctx->pc = 0x2a64fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6500: 0x3c084049  lui         $t0, 0x4049
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16457 << 16));
    // 0x2a6504: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x2a6504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x2a6508: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6508u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a650c: 0x0  nop
    ctx->pc = 0x2a650cu;
    // NOP
    // 0x2a6510: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6510u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a6514: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6514u;
    SET_GPR_U32(ctx, 31, 0x2A651Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6514u, 0x2A651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A651Cu;
label_2a651c:
    // 0x2a651c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6520: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a6520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a6524: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x2a6524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
    // 0x2a6528: 0x3462fa35  ori         $v0, $v1, 0xFA35
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a652c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a652cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6530: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6534: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6538: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x2a6538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a653c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a653cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a6540: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x2a6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6544: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a6544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a6548: 0x2462dce0  addiu       $v0, $v1, -0x2320
    ctx->pc = 0x2a6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a654c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a654cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6550: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A6550u;
    SET_GPR_U32(ctx, 31, 0x2A6558u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A6550u, 0x2A6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6558u;
label_2a6558:
    // 0x2a6558: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2a655c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6560: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6564: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6568: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a6568u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a656c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A656Cu;
    SET_GPR_U32(ctx, 31, 0x2A6574u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A656Cu, 0x2A6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6574u;
label_2a6574:
    // 0x2a6574: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6578: 0xe4c000d4  swc1        $f0, 0xD4($a2)
    ctx->pc = 0x2a6578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 212), bits); }
    // 0x2a657c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6580: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a6580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6584: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2a6584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2a6588: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2a6588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2a658c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a658cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6590: 0x0  nop
    ctx->pc = 0x2a6590u;
    // NOP
    // 0x2a6594: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a6594u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6598: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6598u;
    SET_GPR_U32(ctx, 31, 0x2A65A0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6598u, 0x2A65A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65A0u;
label_2a65a0:
    // 0x2a65a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a65a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a65a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a65a8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a65a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a65ac: 0xc4c10120  lwc1        $f1, 0x120($a2)
    ctx->pc = 0x2a65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a65b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a65b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a65b4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a65b4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a65b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a65b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a65bc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a65bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a65c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a65c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a65c4: 0x0  nop
    ctx->pc = 0x2a65c4u;
    // NOP
    // 0x2a65c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a65c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a65cc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a65d0: 0xc4610128  lwc1        $f1, 0x128($v1)
    ctx->pc = 0x2a65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a65d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a65d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a65d8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a65d8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a65dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a65dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a65e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a65e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a65e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a65e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a65e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a65ec: 0x0  nop
    ctx->pc = 0x2a65ecu;
    // NOP
    // 0x2a65f0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a65f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a65f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a65f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a65f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a65fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A65FCu;
    SET_GPR_U32(ctx, 31, 0x2A6604u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A6604u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A6604u) { return; }
    ctx->pc = 0x2A6604u;
label_2a6604:
    // 0x2a6604: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2a6608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a6608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a660c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6614: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6618: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a6618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a661c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a661cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6620: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6624: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a6624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a6628: 0x3c06c2f0  lui         $a2, 0xC2F0
    ctx->pc = 0x2a6628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49904 << 16));
    // 0x2a662c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a662cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6630: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6634: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a6634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6638: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a663c: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x2a663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
    // 0x2a6640: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6644: 0x250300d0  addiu       $v1, $t0, 0xD0
    ctx->pc = 0x2a6644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
    // 0x2a6648: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2a6648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a664c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6650: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2a6650u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2a6654: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A6654u;
    SET_GPR_U32(ctx, 31, 0x2A665Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A6654u, 0x2A665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A665Cu;
label_2a665c:
    // 0x2a665c: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2a665cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2a6660: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x2a6660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a6664: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a6664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6668: 0x0  nop
    ctx->pc = 0x2a6668u;
    // NOP
    // 0x2a666c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a666cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6670: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2a6670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2a6674: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6674u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6678: 0x0  nop
    ctx->pc = 0x2a6678u;
    // NOP
    // 0x2a667c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a667cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6680: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6684: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6684u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a6688: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6688u;
    SET_GPR_U32(ctx, 31, 0x2A6690u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6688u, 0x2A6690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6690u;
label_2a6690:
    // 0x2a6690: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a6694: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6698: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2a6698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a669c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a669cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2a66a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a66a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a66a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a66a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a66a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a66a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a66ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2a66acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2a66b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a66b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a66b4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2a66b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2a66b8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a66bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a66bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a66c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a66c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a66c4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a66c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a66c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a66cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A66CCu;
    SET_GPR_U32(ctx, 31, 0x2A66D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A66CCu, 0x2A66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66D4u;
label_2a66d4:
    // 0x2a66d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A66D4u;
    SET_GPR_U32(ctx, 31, 0x2A66DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A66D4u, 0x2A66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66DCu;
label_2a66dc:
    // 0x2a66dc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a66e0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a66e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a66e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a66e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a66e8: 0x0  nop
    ctx->pc = 0x2a66e8u;
    // NOP
    // 0x2a66ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a66ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a66f0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2a66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2a66f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a66f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a66f8: 0x0  nop
    ctx->pc = 0x2a66f8u;
    // NOP
    // 0x2a66fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a66fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6700: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6704: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6704u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a6708: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6708u;
    SET_GPR_U32(ctx, 31, 0x2A6710u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6708u, 0x2A6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6710u;
label_2a6710:
    // 0x2a6710: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a6714: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a6714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6718: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2a6718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a671c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2a671cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2a6720: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2a6720u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a6724: 0x84c38  dsll        $t1, $t0, 16
    ctx->pc = 0x2a6724u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 16);
    // 0x2a6728: 0x352affff  ori         $t2, $t1, 0xFFFF
    ctx->pc = 0x2a6728u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2a672c: 0xea1024  and         $v0, $a3, $t2
    ctx->pc = 0x2a672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x2a6730: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a6730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a6734: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a6734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a6738: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a673c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a673cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6740: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a6740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6744: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a6744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a6748: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a6748u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a674c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A674Cu;
    SET_GPR_U32(ctx, 31, 0x2A6754u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A674Cu, 0x2A6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6754u;
label_2a6754:
    // 0x2a6754: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A6754u;
    SET_GPR_U32(ctx, 31, 0x2A675Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A6754u, 0x2A675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A675Cu;
label_2a675c:
    // 0x2a675c: 0x3c083c8e  lui         $t0, 0x3C8E
    ctx->pc = 0x2a675cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15502 << 16));
    // 0x2a6760: 0x3507fa35  ori         $a3, $t0, 0xFA35
    ctx->pc = 0x2a6760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64053);
    // 0x2a6764: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a6764u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6768: 0x0  nop
    ctx->pc = 0x2a6768u;
    // NOP
    // 0x2a676c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a676cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a6770: 0x3c0942b4  lui         $t1, 0x42B4
    ctx->pc = 0x2a6770u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17076 << 16));
    // 0x2a6774: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a6774u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6778: 0x0  nop
    ctx->pc = 0x2a6778u;
    // NOP
    // 0x2a677c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a677cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6780: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6784: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a6784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a6788: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A6788u;
    SET_GPR_U32(ctx, 31, 0x2A6790u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A6788u, 0x2A6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6790u;
label_2a6790:
    // 0x2a6790: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a6790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a6794: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a6794u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6798: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2a6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2a679c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a67a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a67a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a67a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a67a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a67a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a67a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a67ac: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x2a67acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a67b0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a67b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a67b4: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2a67b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2a67b8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a67b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a67bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a67bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a67c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a67c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a67c4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2a67c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a67c8: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a67c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a67cc: 0x8ce90130  lw          $t1, 0x130($a3)
    ctx->pc = 0x2a67ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x2a67d0: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a67d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a67d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a67d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a67d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A67D8u;
    SET_GPR_U32(ctx, 31, 0x2A67E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A67D8u, 0x2A67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A67E0u;
label_2a67e0:
    // 0x2a67e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a67e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a67e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a67e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a67ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a67f0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a67f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a67f4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a67f8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a67fc: 0x14800088  bnez        $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2A67FCu;
    {
        const bool branch_taken_0x2a67fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a67fc) {
            ctx->pc = 0x2A6A20u;
            return;
        }
    }
    ctx->pc = 0x2A6804u;
    // 0x2a6804: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a6804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a6808: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a680c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A680Cu;
    SET_GPR_U32(ctx, 31, 0x2A6814u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A680Cu, 0x2A6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6814u;
label_2a6814:
    // 0x2a6814: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6818: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a6818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a681c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A681Cu;
    SET_GPR_U32(ctx, 31, 0x2A6824u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A681Cu, 0x2A6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6824u;
label_2a6824:
    // 0x2a6824: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a6828: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a6828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a682c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A682Cu;
    SET_GPR_U32(ctx, 31, 0x2A6834u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A682Cu, 0x2A6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6834u;
label_2a6834:
    // 0x2a6834: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a6834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a6838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a683c: 0x0  nop
    ctx->pc = 0x2a683cu;
    // NOP
    // 0x2a6840: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a6840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a6844: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x2a6844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x2a6848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a684c: 0x0  nop
    ctx->pc = 0x2a684cu;
    // NOP
    // 0x2a6850: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a6850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a6854: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a6854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a6858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a685c: 0x0  nop
    ctx->pc = 0x2a685cu;
    // NOP
    // 0x2a6860: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a6860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a6864: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a6864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2a6868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a686c: 0x0  nop
    ctx->pc = 0x2a686cu;
    // NOP
    // 0x2a6870: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a6870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a6874: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a6874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6878: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a6878u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a687c: 0x0  nop
    ctx->pc = 0x2a687cu;
    // NOP
    // 0x2a6880: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a6880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a6884: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a6884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6888: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a6888u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a688c: 0x0  nop
    ctx->pc = 0x2a688cu;
    // NOP
    // 0x2a6890: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a6890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a6894: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a6894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a689c: 0x0  nop
    ctx->pc = 0x2a689cu;
    // NOP
    // 0x2a68a0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a68a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a68a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a68a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a68a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a68ac: 0x0  nop
    ctx->pc = 0x2a68acu;
    // NOP
    // 0x2a68b0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a68b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a68b4: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x2a68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x2a68b8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a68b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a68bc: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a68bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a68c0: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a68c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a68c4: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a68c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a68c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a68cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a68d0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a68d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a68d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a68d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a68d8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a68d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a68dc: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a68dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a68e0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a68e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a68e4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A68E4u;
    SET_GPR_U32(ctx, 31, 0x2A68ECu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A68E4u, 0x2A68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68ECu;
label_2a68ec:
    // 0x2a68ec: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a68ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x2a68f0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a68f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a68f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a68f8: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x2a68f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a68fc: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x2a68fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6900: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6904: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a6904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a6908: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a6908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a690c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a690cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6910: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a6914: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a6914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a6918: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a691c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A691Cu;
    SET_GPR_U32(ctx, 31, 0x2A6924u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A691Cu, 0x2A6924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6924u;
label_2a6924:
    // 0x2a6924: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x2a6928: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2a6928u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a692c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a692cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a6930: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a6930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a6934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a6934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6938: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a693c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a6940: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a6940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a6944: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6948: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a694c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a694cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a6950: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a6954: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6954u;
    SET_GPR_U32(ctx, 31, 0x2A695Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6954u, 0x2A695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A695Cu;
label_2a695c:
    // 0x2a695c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a695cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6960: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a6960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a6964: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a6964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6968: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a696c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2a696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a6970: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a6970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a6974: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6978: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6978u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a697c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a6980: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a6980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a6984: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6988: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a698c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a698cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a6990: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a6994: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6994u;
    SET_GPR_U32(ctx, 31, 0x2A699Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6994u, 0x2A699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A699Cu;
label_2a699c:
    // 0x2a699c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a699cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a69a0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a69a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a69a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a69a8: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x2a69a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a69ac: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a69acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a69b0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a69b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a69b4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a69b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a69b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a69bc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a69bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a69c0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a69c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a69c4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a69c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a69c8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a69c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a69cc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A69CCu;
    SET_GPR_U32(ctx, 31, 0x2A69D4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A69CCu, 0x2A69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69D4u;
label_2a69d4:
    // 0x2a69d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a69d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a69d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a69dc: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x2a69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x2a69e0: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2a69e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2a69e4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a69e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a69e8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a69e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a69ec: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a69ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a69f0: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x2a69f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a69f4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a69f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a69f8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a69f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a69fc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a69fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a6a00: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a6a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6a04: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a6a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a6a08: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a6a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a6a0c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a6a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a6a10: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A6A10u;
    SET_GPR_U32(ctx, 31, 0x2A6A18u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A6A10u, 0x2A6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A18u;
label_2a6a18:
    // 0x2a6a18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A6A18u;
    {
        const bool branch_taken_0x2a6a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a18) {
            ctx->pc = 0x2A6A98u;
            return;
        }
    }
    ctx->pc = 0x2A6A20u;
}
