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

// Function: Coordinate2
// Address: 0x17a8c0 - 0x17b22c
void Coordinate2_0x17a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Coordinate2_0x17a8c0");
#endif

    switch (ctx->pc) {
        case 0x17a904u: goto label_17a904;
        case 0x17a914u: goto label_17a914;
        case 0x17a920u: goto label_17a920;
        case 0x17a92cu: goto label_17a92c;
        case 0x17a938u: goto label_17a938;
        case 0x17a948u: goto label_17a948;
        case 0x17a99cu: goto label_17a99c;
        case 0x17a9b0u: goto label_17a9b0;
        case 0x17a9c4u: goto label_17a9c4;
        case 0x17a9d8u: goto label_17a9d8;
        case 0x17a9f0u: goto label_17a9f0;
        case 0x17aa08u: goto label_17aa08;
        case 0x17aa20u: goto label_17aa20;
        case 0x17aa38u: goto label_17aa38;
        case 0x17aa98u: goto label_17aa98;
        case 0x17aab0u: goto label_17aab0;
        case 0x17ab4cu: goto label_17ab4c;
        case 0x17ab5cu: goto label_17ab5c;
        case 0x17ab78u: goto label_17ab78;
        case 0x17ab90u: goto label_17ab90;
        case 0x17abf0u: goto label_17abf0;
        case 0x17ac04u: goto label_17ac04;
        case 0x17aca0u: goto label_17aca0;
        case 0x17acb0u: goto label_17acb0;
        case 0x17acc8u: goto label_17acc8;
        case 0x17ace0u: goto label_17ace0;
        case 0x17ad40u: goto label_17ad40;
        case 0x17ad54u: goto label_17ad54;
        case 0x17adf0u: goto label_17adf0;
        case 0x17ae00u: goto label_17ae00;
        case 0x17b014u: goto label_17b014;
        case 0x17b020u: goto label_17b020;
        case 0x17b038u: goto label_17b038;
        case 0x17b050u: goto label_17b050;
        case 0x17b074u: goto label_17b074;
        case 0x17b08cu: goto label_17b08c;
        case 0x17b0a4u: goto label_17b0a4;
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b0ecu: goto label_17b0ec;
        case 0x17b100u: goto label_17b100;
        case 0x17b124u: goto label_17b124;
        case 0x17b13cu: goto label_17b13c;
        case 0x17b158u: goto label_17b158;
        case 0x17b16cu: goto label_17b16c;
        case 0x17b184u: goto label_17b184;
        case 0x17b190u: goto label_17b190;
        case 0x17b1a0u: goto label_17b1a0;
        case 0x17b1c0u: goto label_17b1c0;
        case 0x17b1dcu: goto label_17b1dc;
        case 0x17b1fcu: goto label_17b1fc;
        default: break;
    }

    ctx->pc = 0x17a8c0u;

    // 0x17a8c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x17a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x17a8c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x17a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x17a8c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a8d4: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x17a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x17a8d8: 0xe7ac0130  swc1        $f12, 0x130($sp)
    ctx->pc = 0x17a8d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x17a8dc: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x17a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x17a8e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a8e4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x17a8e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17a8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a8ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17a8ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17a8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a8f4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x17a8f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17a8f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17a8fc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17A8FCu;
    SET_GPR_U32(ctx, 31, 0x17A904u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17A8FCu, 0x17A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A904u;
label_17a904:
    // 0x17a904: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a908: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17a908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17a90c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17A90Cu;
    SET_GPR_U32(ctx, 31, 0x17A914u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17A90Cu, 0x17A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A914u;
label_17a914:
    // 0x17a914: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17a918: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17A918u;
    SET_GPR_U32(ctx, 31, 0x17A920u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17A918u, 0x17A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A920u;
label_17a920:
    // 0x17a920: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a924: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17A924u;
    SET_GPR_U32(ctx, 31, 0x17A92Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17A924u, 0x17A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A92Cu;
label_17a92c:
    // 0x17a92c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17a930: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17A930u;
    SET_GPR_U32(ctx, 31, 0x17A938u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17A930u, 0x17A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A938u;
label_17a938:
    // 0x17a938: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17a93c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x17a93cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17a940: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17A940u;
    SET_GPR_U32(ctx, 31, 0x17A948u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17A940u, 0x17A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A948u;
label_17a948:
    // 0x17a948: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x17a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a94c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x17a94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17a950: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x17a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a954: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a954u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17a958: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x17a958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17a95c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x17a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a960: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x17a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x17a964: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x17a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17a96c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17a96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17a970: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x17a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a974: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x17a974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x17a978: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x17a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a97c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a97cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17a980: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17a980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x17a984: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17a988: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17a988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17a98c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x17a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17a990: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17a994: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17A994u;
    SET_GPR_U32(ctx, 31, 0x17A99Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17A99Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A99Cu) { return; }
    ctx->pc = 0x17A99Cu;
label_17a99c:
    // 0x17a99c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a9a0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x17a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17a9a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x17a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a9a8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17A9A8u;
    SET_GPR_U32(ctx, 31, 0x17A9B0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17A9B0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A9B0u) { return; }
    ctx->pc = 0x17A9B0u;
label_17a9b0:
    // 0x17a9b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17a9b4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x17a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17a9b8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x17a9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17a9bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17A9BCu;
    SET_GPR_U32(ctx, 31, 0x17A9C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17A9C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A9C4u) { return; }
    ctx->pc = 0x17A9C4u;
label_17a9c4:
    // 0x17a9c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a9c8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x17a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17a9cc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17a9d0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17A9D0u;
    SET_GPR_U32(ctx, 31, 0x17A9D8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17A9D8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A9D8u) { return; }
    ctx->pc = 0x17A9D8u;
label_17a9d8:
    // 0x17a9d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17a9dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17a9dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17a9e0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x17a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17a9e4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x17a9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17a9e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17A9E8u;
    SET_GPR_U32(ctx, 31, 0x17A9F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17A9F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A9F0u) { return; }
    ctx->pc = 0x17A9F0u;
label_17a9f0:
    // 0x17a9f0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x17a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17a9f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17a9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17a9f8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x17a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17a9fc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17a9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17aa00: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AA00u;
    SET_GPR_U32(ctx, 31, 0x17AA08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AA08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AA08u) { return; }
    ctx->pc = 0x17AA08u;
label_17aa08:
    // 0x17aa08: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17aa0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17aa10: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17aa14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17aa18: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AA18u;
    SET_GPR_U32(ctx, 31, 0x17AA20u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AA20u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AA20u) { return; }
    ctx->pc = 0x17AA20u;
label_17aa20:
    // 0x17aa20: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17aa24: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17aa28: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17aa2c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x17aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17aa30: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AA30u;
    SET_GPR_U32(ctx, 31, 0x17AA38u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AA38u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AA38u) { return; }
    ctx->pc = 0x17AA38u;
label_17aa38:
    // 0x17aa38: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x17aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aa3c: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x17aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x17aa40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17aa40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aa44: 0x0  nop
    ctx->pc = 0x17aa44u;
    // NOP
    // 0x17aa48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aa4c: 0x0  nop
    ctx->pc = 0x17aa4cu;
    // NOP
    // 0x17aa50: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17AA50u;
    {
        const bool branch_taken_0x17aa50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aa50) {
            ctx->pc = 0x17AA78u;
            goto label_17aa78;
        }
    }
    ctx->pc = 0x17AA58u;
    // 0x17aa58: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x17aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aa5c: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x17aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x17aa60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17aa60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aa64: 0x0  nop
    ctx->pc = 0x17aa64u;
    // NOP
    // 0x17aa68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aa68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aa6c: 0x0  nop
    ctx->pc = 0x17aa6cu;
    // NOP
    // 0x17aa70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AA70u;
    {
        const bool branch_taken_0x17aa70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aa70) {
            ctx->pc = 0x17AA84u;
            goto label_17aa84;
        }
    }
    ctx->pc = 0x17AA78u;
label_17aa78:
    // 0x17aa78: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17aa78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17aa7c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x17AA7Cu;
    {
        const bool branch_taken_0x17aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa7c) {
            ctx->pc = 0x17AB5Cu;
            goto label_17ab5c;
        }
    }
    ctx->pc = 0x17AA84u;
label_17aa84:
    // 0x17aa84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17aa88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17aa8c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x17aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17aa90: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AA90u;
    SET_GPR_U32(ctx, 31, 0x17AA98u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AA98u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AA98u) { return; }
    ctx->pc = 0x17AA98u;
label_17aa98:
    // 0x17aa98: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17aa9c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17aa9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17aaa0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17aaa4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x17aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17aaa8: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AAA8u;
    SET_GPR_U32(ctx, 31, 0x17AAB0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AAB0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AAB0u) { return; }
    ctx->pc = 0x17AAB0u;
label_17aab0:
    // 0x17aab0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17aab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aab8: 0x0  nop
    ctx->pc = 0x17aab8u;
    // NOP
    // 0x17aabc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aac0: 0x0  nop
    ctx->pc = 0x17aac0u;
    // NOP
    // 0x17aac4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17AAC4u;
    {
        const bool branch_taken_0x17aac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aac4) {
            ctx->pc = 0x17AB30u;
            goto label_17ab30;
        }
    }
    ctx->pc = 0x17AACCu;
    // 0x17aacc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aad0: 0x3c04457f  lui         $a0, 0x457F
    ctx->pc = 0x17aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17791 << 16));
    // 0x17aad4: 0x3482f000  ori         $v0, $a0, 0xF000
    ctx->pc = 0x17aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x17aad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17aad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aadc: 0x0  nop
    ctx->pc = 0x17aadcu;
    // NOP
    // 0x17aae0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17aae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aae4: 0x0  nop
    ctx->pc = 0x17aae4u;
    // NOP
    // 0x17aae8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17AAE8u;
    {
        const bool branch_taken_0x17aae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aae8) {
            ctx->pc = 0x17AB30u;
            goto label_17ab30;
        }
    }
    ctx->pc = 0x17AAF0u;
    // 0x17aaf0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x17aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aaf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17aaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aaf8: 0x0  nop
    ctx->pc = 0x17aaf8u;
    // NOP
    // 0x17aafc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ab00: 0x0  nop
    ctx->pc = 0x17ab00u;
    // NOP
    // 0x17ab04: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x17AB04u;
    {
        const bool branch_taken_0x17ab04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ab04) {
            ctx->pc = 0x17AB30u;
            goto label_17ab30;
        }
    }
    ctx->pc = 0x17AB0Cu;
    // 0x17ab0c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x17ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ab10: 0x3c04457f  lui         $a0, 0x457F
    ctx->pc = 0x17ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17791 << 16));
    // 0x17ab14: 0x3482f000  ori         $v0, $a0, 0xF000
    ctx->pc = 0x17ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x17ab18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ab1c: 0x0  nop
    ctx->pc = 0x17ab1cu;
    // NOP
    // 0x17ab20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ab20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ab24: 0x0  nop
    ctx->pc = 0x17ab24u;
    // NOP
    // 0x17ab28: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB28u;
    {
        const bool branch_taken_0x17ab28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ab28) {
            ctx->pc = 0x17AB3Cu;
            goto label_17ab3c;
        }
    }
    ctx->pc = 0x17AB30u;
label_17ab30:
    // 0x17ab30: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17ab30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17ab34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17AB34u;
    {
        const bool branch_taken_0x17ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab34) {
            ctx->pc = 0x17AB5Cu;
            goto label_17ab5c;
        }
    }
    ctx->pc = 0x17AB3Cu;
label_17ab3c:
    // 0x17ab3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17ab40: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ab44: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17AB44u;
    SET_GPR_U32(ctx, 31, 0x17AB4Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17AB4Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB4Cu) { return; }
    ctx->pc = 0x17AB4Cu;
label_17ab4c:
    // 0x17ab4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17ab50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17ab54: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17AB54u;
    SET_GPR_U32(ctx, 31, 0x17AB5Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17AB5Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB5Cu) { return; }
    ctx->pc = 0x17AB5Cu;
label_17ab5c:
    // 0x17ab5c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17ab60: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ab64: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17ab64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17ab68: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17ab6c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ab70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AB70u;
    SET_GPR_U32(ctx, 31, 0x17AB78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AB78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB78u) { return; }
    ctx->pc = 0x17AB78u;
label_17ab78:
    // 0x17ab78: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17ab7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17ab80: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17ab84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x17ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17ab88: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AB88u;
    SET_GPR_U32(ctx, 31, 0x17AB90u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AB90u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB90u) { return; }
    ctx->pc = 0x17AB90u;
label_17ab90:
    // 0x17ab90: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x17ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ab94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17ab98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ab9c: 0x0  nop
    ctx->pc = 0x17ab9cu;
    // NOP
    // 0x17aba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aba4: 0x0  nop
    ctx->pc = 0x17aba4u;
    // NOP
    // 0x17aba8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17ABA8u;
    {
        const bool branch_taken_0x17aba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aba8) {
            ctx->pc = 0x17ABD0u;
            goto label_17abd0;
        }
    }
    ctx->pc = 0x17ABB0u;
    // 0x17abb0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x17abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17abb4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17abb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17abb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17abbc: 0x0  nop
    ctx->pc = 0x17abbcu;
    // NOP
    // 0x17abc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17abc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17abc4: 0x0  nop
    ctx->pc = 0x17abc4u;
    // NOP
    // 0x17abc8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17ABC8u;
    {
        const bool branch_taken_0x17abc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17abc8) {
            ctx->pc = 0x17ABDCu;
            goto label_17abdc;
        }
    }
    ctx->pc = 0x17ABD0u;
label_17abd0:
    // 0x17abd0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17abd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17abd4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17ABD4u;
    {
        const bool branch_taken_0x17abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17abd4) {
            ctx->pc = 0x17ACB0u;
            goto label_17acb0;
        }
    }
    ctx->pc = 0x17ABDCu;
label_17abdc:
    // 0x17abdc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17abe0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17abe4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x17abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17abe8: 0xc040c60  jal         func_103180
    ctx->pc = 0x17ABE8u;
    SET_GPR_U32(ctx, 31, 0x17ABF0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17ABF0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ABF0u) { return; }
    ctx->pc = 0x17ABF0u;
label_17abf0:
    // 0x17abf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17abf4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17abf8: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x17abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17abfc: 0xc040c60  jal         func_103180
    ctx->pc = 0x17ABFCu;
    SET_GPR_U32(ctx, 31, 0x17AC04u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AC04u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AC04u) { return; }
    ctx->pc = 0x17AC04u;
label_17ac04:
    // 0x17ac04: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ac08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac0c: 0x0  nop
    ctx->pc = 0x17ac0cu;
    // NOP
    // 0x17ac10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ac10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac14: 0x0  nop
    ctx->pc = 0x17ac14u;
    // NOP
    // 0x17ac18: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17AC18u;
    {
        const bool branch_taken_0x17ac18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac18) {
            ctx->pc = 0x17AC84u;
            goto label_17ac84;
        }
    }
    ctx->pc = 0x17AC20u;
    // 0x17ac20: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac24: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17ac28: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17ac2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac30: 0x0  nop
    ctx->pc = 0x17ac30u;
    // NOP
    // 0x17ac34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ac34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac38: 0x0  nop
    ctx->pc = 0x17ac38u;
    // NOP
    // 0x17ac3c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17AC3Cu;
    {
        const bool branch_taken_0x17ac3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac3c) {
            ctx->pc = 0x17AC84u;
            goto label_17ac84;
        }
    }
    ctx->pc = 0x17AC44u;
    // 0x17ac44: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ac48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac4c: 0x0  nop
    ctx->pc = 0x17ac4cu;
    // NOP
    // 0x17ac50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ac50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac54: 0x0  nop
    ctx->pc = 0x17ac54u;
    // NOP
    // 0x17ac58: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x17AC58u;
    {
        const bool branch_taken_0x17ac58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac58) {
            ctx->pc = 0x17AC84u;
            goto label_17ac84;
        }
    }
    ctx->pc = 0x17AC60u;
    // 0x17ac60: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac64: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17ac68: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17ac6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ac6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac70: 0x0  nop
    ctx->pc = 0x17ac70u;
    // NOP
    // 0x17ac74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ac74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac78: 0x0  nop
    ctx->pc = 0x17ac78u;
    // NOP
    // 0x17ac7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AC7Cu;
    {
        const bool branch_taken_0x17ac7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac7c) {
            ctx->pc = 0x17AC90u;
            goto label_17ac90;
        }
    }
    ctx->pc = 0x17AC84u;
label_17ac84:
    // 0x17ac84: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17ac84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17ac88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17AC88u;
    {
        const bool branch_taken_0x17ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac88) {
            ctx->pc = 0x17ACB0u;
            goto label_17acb0;
        }
    }
    ctx->pc = 0x17AC90u;
label_17ac90:
    // 0x17ac90: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ac94: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ac98: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17AC98u;
    SET_GPR_U32(ctx, 31, 0x17ACA0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17ACA0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACA0u) { return; }
    ctx->pc = 0x17ACA0u;
label_17aca0:
    // 0x17aca0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17aca4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17aca8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17ACA8u;
    SET_GPR_U32(ctx, 31, 0x17ACB0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17ACB0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACB0u) { return; }
    ctx->pc = 0x17ACB0u;
label_17acb0:
    // 0x17acb0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17acb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17acb8: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17acbc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x17acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17acc0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17ACC0u;
    SET_GPR_U32(ctx, 31, 0x17ACC8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17ACC8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACC8u) { return; }
    ctx->pc = 0x17ACC8u;
label_17acc8:
    // 0x17acc8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17accc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17acd0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17acd4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17acd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17acd8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17ACD8u;
    SET_GPR_U32(ctx, 31, 0x17ACE0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17ACE0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACE0u) { return; }
    ctx->pc = 0x17ACE0u;
label_17ace0:
    // 0x17ace0: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x17ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ace4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17ace8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ace8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17acec: 0x0  nop
    ctx->pc = 0x17acecu;
    // NOP
    // 0x17acf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17acf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17acf4: 0x0  nop
    ctx->pc = 0x17acf4u;
    // NOP
    // 0x17acf8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17ACF8u;
    {
        const bool branch_taken_0x17acf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17acf8) {
            ctx->pc = 0x17AD20u;
            goto label_17ad20;
        }
    }
    ctx->pc = 0x17AD00u;
    // 0x17ad00: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x17ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad04: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17ad08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ad08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad0c: 0x0  nop
    ctx->pc = 0x17ad0cu;
    // NOP
    // 0x17ad10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ad10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad14: 0x0  nop
    ctx->pc = 0x17ad14u;
    // NOP
    // 0x17ad18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AD18u;
    {
        const bool branch_taken_0x17ad18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ad18) {
            ctx->pc = 0x17AD2Cu;
            goto label_17ad2c;
        }
    }
    ctx->pc = 0x17AD20u;
label_17ad20:
    // 0x17ad20: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x17ad20u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17ad24: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17AD24u;
    {
        const bool branch_taken_0x17ad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ad24) {
            ctx->pc = 0x17AE00u;
            goto label_17ae00;
        }
    }
    ctx->pc = 0x17AD2Cu;
label_17ad2c:
    // 0x17ad2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17ad30: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17ad34: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x17ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad38: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AD38u;
    SET_GPR_U32(ctx, 31, 0x17AD40u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AD40u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AD40u) { return; }
    ctx->pc = 0x17AD40u;
label_17ad40:
    // 0x17ad40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17ad44: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17ad48: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x17ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad4c: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AD4Cu;
    SET_GPR_U32(ctx, 31, 0x17AD54u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AD54u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AD54u) { return; }
    ctx->pc = 0x17AD54u;
label_17ad54:
    // 0x17ad54: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x17ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ad58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad5c: 0x0  nop
    ctx->pc = 0x17ad5cu;
    // NOP
    // 0x17ad60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ad60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad64: 0x0  nop
    ctx->pc = 0x17ad64u;
    // NOP
    // 0x17ad68: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17AD68u;
    {
        const bool branch_taken_0x17ad68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ad68) {
            ctx->pc = 0x17ADD4u;
            goto label_17add4;
        }
    }
    ctx->pc = 0x17AD70u;
    // 0x17ad70: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x17ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad74: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17ad78: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17ad7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ad7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad80: 0x0  nop
    ctx->pc = 0x17ad80u;
    // NOP
    // 0x17ad84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ad84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad88: 0x0  nop
    ctx->pc = 0x17ad88u;
    // NOP
    // 0x17ad8c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17AD8Cu;
    {
        const bool branch_taken_0x17ad8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ad8c) {
            ctx->pc = 0x17ADD4u;
            goto label_17add4;
        }
    }
    ctx->pc = 0x17AD94u;
    // 0x17ad94: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ad98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad9c: 0x0  nop
    ctx->pc = 0x17ad9cu;
    // NOP
    // 0x17ada0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ada0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ada4: 0x0  nop
    ctx->pc = 0x17ada4u;
    // NOP
    // 0x17ada8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x17ADA8u;
    {
        const bool branch_taken_0x17ada8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ada8) {
            ctx->pc = 0x17ADD4u;
            goto label_17add4;
        }
    }
    ctx->pc = 0x17ADB0u;
    // 0x17adb0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17adb4: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17adb8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17adbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17adbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17adc0: 0x0  nop
    ctx->pc = 0x17adc0u;
    // NOP
    // 0x17adc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17adc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17adc8: 0x0  nop
    ctx->pc = 0x17adc8u;
    // NOP
    // 0x17adcc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17ADCCu;
    {
        const bool branch_taken_0x17adcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17adcc) {
            ctx->pc = 0x17ADE0u;
            goto label_17ade0;
        }
    }
    ctx->pc = 0x17ADD4u;
label_17add4:
    // 0x17add4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x17add4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17add8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17ADD8u;
    {
        const bool branch_taken_0x17add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17add8) {
            ctx->pc = 0x17AE00u;
            goto label_17ae00;
        }
    }
    ctx->pc = 0x17ADE0u;
label_17ade0:
    // 0x17ade0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17ade4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17ade8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17ADE8u;
    SET_GPR_U32(ctx, 31, 0x17ADF0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17ADF0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ADF0u) { return; }
    ctx->pc = 0x17ADF0u;
label_17adf0:
    // 0x17adf0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17adf4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17adf8: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x17ADF8u;
    SET_GPR_U32(ctx, 31, 0x17AE00u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x17AE00u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AE00u) { return; }
    ctx->pc = 0x17AE00u;
label_17ae00:
    // 0x17ae00: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ae04: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x17ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae0c: 0x93a40051  lbu         $a0, 0x51($sp)
    ctx->pc = 0x17ae0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
    // 0x17ae10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ae14: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x17ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x17ae18: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x17ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17ae1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17ae20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ae24: 0xa3a20051  sb          $v0, 0x51($sp)
    ctx->pc = 0x17ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ae28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae2c: 0x93a40055  lbu         $a0, 0x55($sp)
    ctx->pc = 0x17ae2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 85)));
    // 0x17ae30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ae34: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x17ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17ae38: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17ae3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17ae40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ae44: 0xa3a20055  sb          $v0, 0x55($sp)
    ctx->pc = 0x17ae44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ae48: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x17ae4c: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x17ae4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ae50: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x17ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x17ae54: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x17ae54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x17ae58: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x17ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x17ae5c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x17ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x17ae60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17ae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ae64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17ae68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17ae6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17ae70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ae74: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x17ae78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17ae7c: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x17ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x17ae80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17ae84: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x17ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ae88: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17ae8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17ae90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ae94: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x17ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x17ae98: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17ae9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17aea0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17aea4: 0x93a40057  lbu         $a0, 0x57($sp)
    ctx->pc = 0x17aea4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 87)));
    // 0x17aea8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17aeac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17aeb0: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17aeb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17aeb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17aebc: 0xa3a20057  sb          $v0, 0x57($sp)
    ctx->pc = 0x17aebcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x17aec0: 0x97a40050  lhu         $a0, 0x50($sp)
    ctx->pc = 0x17aec0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17aec4: 0x30037fff  andi        $v1, $zero, 0x7FFF
    ctx->pc = 0x17aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x17aec8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17aecc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17aed0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17aed4: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x17aed4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x17aed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aedc: 0x93a40058  lbu         $a0, 0x58($sp)
    ctx->pc = 0x17aedcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17aee0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17aee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17aee4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17aee8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17aeec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17aef0: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x17aef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x17aef4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17aef8: 0x93a40058  lbu         $a0, 0x58($sp)
    ctx->pc = 0x17aef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17aefc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af00: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af04: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17af08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af10: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x17af10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17af18: 0x93a40059  lbu         $a0, 0x59($sp)
    ctx->pc = 0x17af18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 89)));
    // 0x17af1c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af20: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17af24: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af2c: 0xa3a20059  sb          $v0, 0x59($sp)
    ctx->pc = 0x17af2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17af34: 0x93a40059  lbu         $a0, 0x59($sp)
    ctx->pc = 0x17af34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 89)));
    // 0x17af38: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af40: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17af44: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af4c: 0xa3a20059  sb          $v0, 0x59($sp)
    ctx->pc = 0x17af4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17af54: 0x93a4005a  lbu         $a0, 0x5A($sp)
    ctx->pc = 0x17af54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 90)));
    // 0x17af58: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17af58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17af60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af68: 0xa3a2005a  sb          $v0, 0x5A($sp)
    ctx->pc = 0x17af68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17af70: 0x93a4005a  lbu         $a0, 0x5A($sp)
    ctx->pc = 0x17af70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 90)));
    // 0x17af74: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17af78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af7c: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17af80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17af84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17af88: 0xa3a2005a  sb          $v0, 0x5A($sp)
    ctx->pc = 0x17af88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17af90: 0x93a4005b  lbu         $a0, 0x5B($sp)
    ctx->pc = 0x17af90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 91)));
    // 0x17af94: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17af94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17af98: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17af9c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17afa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17afa4: 0xa3a2005b  sb          $v0, 0x5B($sp)
    ctx->pc = 0x17afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17afac: 0x93a4005b  lbu         $a0, 0x5B($sp)
    ctx->pc = 0x17afacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 91)));
    // 0x17afb0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17afb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17afb8: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x17afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17afbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17afc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17afc4: 0xa3a2005b  sb          $v0, 0x5B($sp)
    ctx->pc = 0x17afc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17afcc: 0x93a4005c  lbu         $a0, 0x5C($sp)
    ctx->pc = 0x17afccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x17afd0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17afd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17afd4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17afd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17afdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17afe0: 0xa3a2005c  sb          $v0, 0x5C($sp)
    ctx->pc = 0x17afe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17afe8: 0x8c23ef00  lw          $v1, -0x1100($at)
    ctx->pc = 0x17afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47EF00u));
    // 0x17afec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17afecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17aff0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17aff4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x17aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17aff8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17affc: 0x2442ed20  addiu       $v0, $v0, -0x12E0
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962464));
    // 0x17b000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17b004: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b008: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b00c: 0xc040b66  jal         func_102D98
    ctx->pc = 0x17B00Cu;
    SET_GPR_U32(ctx, 31, 0x17B014u);
    ctx->pc = 0x102D98u;
    {
        ctx->pc = 0x17B014u;
        ps2_stubs::sceGifPkInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B014u) { return; }
    ctx->pc = 0x17B014u;
label_17b014:
    // 0x17b014: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b018: 0xc040b6a  jal         func_102DA8
    ctx->pc = 0x17B018u;
    SET_GPR_U32(ctx, 31, 0x17B020u);
    ctx->pc = 0x102DA8u;
    {
        ctx->pc = 0x17B020u;
        ps2_stubs::sceGifPkReset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B020u) { return; }
    ctx->pc = 0x17B020u;
label_17b020:
    // 0x17b020: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b028: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b028u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b02c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x17b02cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b030: 0xc040b84  jal         func_102E10
    ctx->pc = 0x17B030u;
    SET_GPR_U32(ctx, 31, 0x17B038u);
    ctx->pc = 0x102E10u;
    {
        ctx->pc = 0x17B038u;
        ps2_stubs::sceGifPkCnt(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B038u) { return; }
    ctx->pc = 0x17B038u;
label_17b038:
    // 0x17b038: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x17b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17b03c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b044: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x17b044u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b048: 0xc040bc0  jal         func_102F00
    ctx->pc = 0x17B048u;
    SET_GPR_U32(ctx, 31, 0x17B050u);
    ctx->pc = 0x102F00u;
    {
        ctx->pc = 0x17B050u;
        ps2_stubs::sceGifPkOpenGifTag(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B050u) { return; }
    ctx->pc = 0x17B050u;
label_17b050:
    // 0x17b050: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b054: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17B054u;
    {
        const bool branch_taken_0x17b054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b054) {
            ctx->pc = 0x17B0A8u;
            goto label_17b0a8;
        }
    }
    ctx->pc = 0x17B05Cu;
    // 0x17b05c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x17b05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x17b060: 0x24c258c0  addiu       $v0, $a2, 0x58C0
    ctx->pc = 0x17b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22720));
    // 0x17b064: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b068: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b068u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3858C0u));
    // 0x17b06c: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B06Cu;
    SET_GPR_U32(ctx, 31, 0x17B074u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B06Cu, 0x17B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B074u;
label_17b074:
    // 0x17b074: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b074u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b078: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x17b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17b07c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b080: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b080u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b084: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B084u;
    SET_GPR_U32(ctx, 31, 0x17B08Cu);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B084u, 0x17B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B08Cu;
label_17b08c:
    // 0x17b08c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b08cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b090: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17b094: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b098: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b098u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b09c: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B09Cu;
    SET_GPR_U32(ctx, 31, 0x17B0A4u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B09Cu, 0x17B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0A4u;
label_17b0a4:
    // 0x17b0a4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b0a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_17b0a8:
    // 0x17b0a8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B0A8u;
    {
        const bool branch_taken_0x17b0a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b0a8) {
            ctx->pc = 0x17B104u;
            goto label_17b104;
        }
    }
    ctx->pc = 0x17B0B0u;
    // 0x17b0b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17b0b4: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x17b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x17b0b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b0bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17b0bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17b0c0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17b0c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b0c4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17b0c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17b0c8: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B0C8u;
    SET_GPR_U32(ctx, 31, 0x17B0D0u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B0C8u, 0x17B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0D0u;
label_17b0d0:
    // 0x17b0d0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17b0d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b0d8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17b0d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17b0dc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17b0dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b0e0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17b0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17b0e4: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B0E4u;
    SET_GPR_U32(ctx, 31, 0x17B0ECu);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B0E4u, 0x17B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0ECu;
label_17b0ec:
    // 0x17b0ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x17b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17b0f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b0f4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b0f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b0f8: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B0F8u;
    SET_GPR_U32(ctx, 31, 0x17B100u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B0F8u, 0x17B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B100u;
label_17b100:
    // 0x17b100: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_17b104:
    // 0x17b104: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x17B104u;
    {
        const bool branch_taken_0x17b104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b104) {
            ctx->pc = 0x17B15Cu;
            goto label_17b15c;
        }
    }
    ctx->pc = 0x17B10Cu;
    // 0x17b10c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17b110: 0x244258e0  addiu       $v0, $v0, 0x58E0
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22752));
    // 0x17b114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b118: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b118u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3858E0u));
    // 0x17b11c: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B11Cu;
    SET_GPR_U32(ctx, 31, 0x17B124u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B11Cu, 0x17B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B124u;
label_17b124:
    // 0x17b124: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b128: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17b12c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b130: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b130u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b134: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B134u;
    SET_GPR_U32(ctx, 31, 0x17B13Cu);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B134u, 0x17B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B13Cu;
label_17b13c:
    // 0x17b13c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b13cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b140: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17b144: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b148: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b14c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x17b14cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b150: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B150u;
    SET_GPR_U32(ctx, 31, 0x17B158u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B150u, 0x17B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B158u;
label_17b158:
    // 0x17b158: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_17b15c:
    // 0x17b15c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b164: 0xc040bc6  jal         func_102F18
    ctx->pc = 0x17B164u;
    SET_GPR_U32(ctx, 31, 0x17B16Cu);
    ctx->pc = 0x102F18u;
    {
        ctx->pc = 0x17B16Cu;
        ps2_stubs::sceGifPkCloseGifTag(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B16Cu) { return; }
    ctx->pc = 0x17B16Cu;
label_17b16c:
    // 0x17b16c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b170: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b174: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b174u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b178: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x17b178u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b17c: 0xc040ba2  jal         func_102E88
    ctx->pc = 0x17B17Cu;
    SET_GPR_U32(ctx, 31, 0x17B184u);
    ctx->pc = 0x102E88u;
    {
        ctx->pc = 0x17B184u;
        ps2_stubs::sceGifPkEnd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B184u) { return; }
    ctx->pc = 0x17B184u;
label_17b184:
    // 0x17b184: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b188: 0xc040b6e  jal         func_102DB8
    ctx->pc = 0x17B188u;
    SET_GPR_U32(ctx, 31, 0x17B190u);
    ctx->pc = 0x102DB8u;
    {
        ctx->pc = 0x17B190u;
        ps2_stubs::sceGifPkTerminate(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B190u) { return; }
    ctx->pc = 0x17B190u;
label_17b190:
    // 0x17b190: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b194: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17b194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b198: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17B198u;
    SET_GPR_U32(ctx, 31, 0x17B1A0u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17B1A0u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1A0u) { return; }
    ctx->pc = 0x17B1A0u;
label_17b1a0:
    // 0x17b1a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x17b1a8: 0x3482a000  ori         $v0, $a0, 0xA000
    ctx->pc = 0x17b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x17b1ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b1b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1b8: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17B1B8u;
    SET_GPR_U32(ctx, 31, 0x17B1C0u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17B1C0u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1C0u) { return; }
    ctx->pc = 0x17B1C0u;
label_17b1c0:
    // 0x17b1c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17b1c8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x17b1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17b1cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1d0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x17b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17b1d4: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x17B1D4u;
    SET_GPR_U32(ctx, 31, 0x17B1DCu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x17B1DCu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1DCu) { return; }
    ctx->pc = 0x17B1DCu;
label_17b1dc:
    // 0x17b1dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17b1e4: 0x3446a000  ori         $a2, $v0, 0xA000
    ctx->pc = 0x17b1e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17b1e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x17b1e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17b1ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b1ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b1f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1f4: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17B1F4u;
    SET_GPR_U32(ctx, 31, 0x17B1FCu);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17B1FCu;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1FCu) { return; }
    ctx->pc = 0x17B1FCu;
label_17b1fc:
    // 0x17b1fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b200: 0x8c24ef00  lw          $a0, -0x1100($at)
    ctx->pc = 0x17b200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47EF00u));
    // 0x17b204: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x17b204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x17b208: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b20c: 0xac25ef00  sw          $a1, -0x1100($at)
    ctx->pc = 0x17b20cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x47EF00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF00u, _value); } while (0);
    // 0x17b210: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x17b210u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b214: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b220: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x17b224: 0x3e00008  jr          $ra
    ctx->pc = 0x17B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B22Cu;
}
