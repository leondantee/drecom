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

// Function: entry_00184918
// Address: 0x184918 - 0x184a9c
void entry_00184918_0x184918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184918_0x184918");
#endif

    switch (ctx->pc) {
        case 0x184960u: goto label_184960;
        case 0x18499cu: goto label_18499c;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849ecu: goto label_1849ec;
        case 0x184a00u: goto label_184a00;
        default: break;
    }

    ctx->pc = 0x184918u;

    // 0x184918: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18491c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x184920: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x184920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x184924: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x184924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x184928: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x184928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18492c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x18492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184930: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184934: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184938: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184938u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18493c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18493cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184940: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184944: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184944u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184948: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18494c: 0x0  nop
    ctx->pc = 0x18494cu;
    // NOP
    // 0x184950: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x184950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184954: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x184954u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184958: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x184958u;
    SET_GPR_U32(ctx, 31, 0x184960u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x184958u, 0x184960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184960u;
label_184960:
    // 0x184960: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x184960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x184964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184968: 0x0  nop
    ctx->pc = 0x184968u;
    // NOP
    // 0x18496c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x18496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x184970: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x184970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184974: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x184974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x184978: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x184978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18497c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x184980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184988: 0x0  nop
    ctx->pc = 0x184988u;
    // NOP
    // 0x18498c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x18498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x184990: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184994: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x184994u;
    SET_GPR_U32(ctx, 31, 0x18499Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x18499Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18499Cu) { return; }
    ctx->pc = 0x18499Cu;
label_18499c:
    // 0x18499c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1849a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1849a4: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x1849a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1849a8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1849A8u;
    SET_GPR_U32(ctx, 31, 0x1849B0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1849B0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1849B0u) { return; }
    ctx->pc = 0x1849B0u;
label_1849b0:
    // 0x1849b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1849b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1849b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1849b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1849b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1849BCu;
    SET_GPR_U32(ctx, 31, 0x1849C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1849C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1849C4u) { return; }
    ctx->pc = 0x1849C4u;
label_1849c4:
    // 0x1849c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1849cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1849ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849d0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1849D0u;
    SET_GPR_U32(ctx, 31, 0x1849D8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1849D0u, 0x1849D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849D8u;
label_1849d8:
    // 0x1849d8: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1849d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1849dc: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1849dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1849e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1849E4u;
    SET_GPR_U32(ctx, 31, 0x1849ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1849E4u, 0x1849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849ECu;
label_1849ec:
    // 0x1849ec: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1849ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1849f0: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1849f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1849f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1849f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1849F8u;
    SET_GPR_U32(ctx, 31, 0x184A00u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1849F8u, 0x184A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A00u;
label_184a00:
    // 0x184a00: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a04: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x184a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184a08: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a0c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x184a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184a14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a18: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184a18u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184a20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a24: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184a24u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184a28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184a2c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a30: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x184a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x184a34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a38: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x184a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a40: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x184a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x184a44: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a48: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x184a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184a4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a50: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x184a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184a58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a5c: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184a5cu;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a60: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184a64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a68: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184a68u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a6c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184a6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184a70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a74: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x184a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a78: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x184a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a7c: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x184a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a84: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x184a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x184a88: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x184a88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a90: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x184a94: 0x3e00008  jr          $ra
    ctx->pc = 0x184A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A9Cu;
}
