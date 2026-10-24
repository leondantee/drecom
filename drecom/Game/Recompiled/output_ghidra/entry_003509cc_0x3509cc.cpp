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

// Function: entry_003509cc
// Address: 0x3509cc - 0x350bbc
void entry_003509cc_0x3509cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003509cc_0x3509cc");
#endif

    switch (ctx->pc) {
        case 0x3509f8u: goto label_3509f8;
        case 0x350ac8u: goto label_350ac8;
        default: break;
    }

    ctx->pc = 0x3509ccu;

    // 0x3509cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3509ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3509d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509d4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3509d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3509d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3509d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3509dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509e0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3509e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3509e4: 0x24060422  addiu       $a2, $zero, 0x422
    ctx->pc = 0x3509e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1058));
    // 0x3509e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3509e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3509ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3509f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3509F0u;
    SET_GPR_U32(ctx, 31, 0x3509F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3509F0u, 0x3509F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509F8u;
label_3509f8:
    // 0x3509f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3509f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509fc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3509fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x350a00: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x350a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x350a04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x350a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x350a08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x350a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350a0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x350a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x350a10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x350a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x350a14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x350a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350a20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x350a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x350a24: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350a28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a30: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x350a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350a34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350a38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a40: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x350a40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x350a44: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350a48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350a50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a58: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350a5c: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x350a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350a60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a64: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350a68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350a6c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x350a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x350a70: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x350a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350a74: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x350a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x350a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350a7c: 0x0  nop
    ctx->pc = 0x350a7cu;
    // NOP
    // 0x350a80: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x350a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350a84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x350a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350a8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350a90: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x350a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x350a94: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x350a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350a98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a9c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350aa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350aa4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x350aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x350aa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350ab0: 0x0  nop
    ctx->pc = 0x350ab0u;
    // NOP
    // 0x350ab4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x350ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x350ab8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x350ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350abc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x350abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350ac0: 0xc040c24  jal         func_103090
    ctx->pc = 0x350AC0u;
    SET_GPR_U32(ctx, 31, 0x350AC8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x350AC8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x350AC8u) { return; }
    ctx->pc = 0x350AC8u;
label_350ac8:
    // 0x350ac8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x350ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x350acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350ad0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x350ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350ad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350ad8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350ae0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x350ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x350ae4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x350ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x350ae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350aec: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x350aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350af0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350af4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350af8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350afc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x350afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x350b00: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x350b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350b08: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x350b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350b0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350b10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b18: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x350b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x350b1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b20: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x350b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350b28: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x350b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x350b2c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350b30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b38: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x350b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x350b3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x350b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350b40: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x350b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350b44: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x350B44u;
    {
        const bool branch_taken_0x350b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x350b44) {
            ctx->pc = 0x350BBCu;
            return;
        }
    }
    ctx->pc = 0x350B4Cu;
    // 0x350b4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b54: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x350b54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350b5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b64: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x350b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x350b68: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350b6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350b74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b7c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350b80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b84: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x350b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x350b88: 0x24500190  addiu       $s0, $v0, 0x190
    ctx->pc = 0x350b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x350b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350b94: 0x0  nop
    ctx->pc = 0x350b94u;
    // NOP
    // 0x350b98: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x350b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x350b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350ba4: 0x0  nop
    ctx->pc = 0x350ba4u;
    // NOP
    // 0x350ba8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x350ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x350bac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350bb4: 0x0  nop
    ctx->pc = 0x350bb4u;
    // NOP
    // 0x350bb8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x350bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->pc = 0x350bbcu;
}
