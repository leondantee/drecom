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

// Function: entry_002e98b8
// Address: 0x2e98b8 - 0x2e9a70
void entry_002e98b8_0x2e98b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e98b8_0x2e98b8");
#endif

    switch (ctx->pc) {
        case 0x2e9940u: goto label_2e9940;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e99e4u: goto label_2e99e4;
        case 0x2e99f0u: goto label_2e99f0;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a58u: goto label_2e9a58;
        default: break;
    }

    ctx->pc = 0x2e98b8u;

    // 0x2e98b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e98bc: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2e98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e98c0: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2e98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2e98c4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2e98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e98c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e98cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e98d0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e98d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e98d4: 0x12030066  beq         $s0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E98D4u;
    {
        const bool branch_taken_0x2e98d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e98d4) {
            ctx->pc = 0x2E9A70u;
            return;
        }
    }
    ctx->pc = 0x2E98DCu;
    // 0x2e98dc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e98e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e98e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e98e4: 0x0  nop
    ctx->pc = 0x2e98e4u;
    // NOP
    // 0x2e98e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e98e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e98ec: 0x3c0241e9  lui         $v0, 0x41E9
    ctx->pc = 0x2e98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16873 << 16));
    // 0x2e98f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e98f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e98f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e98f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e98f8: 0x0  nop
    ctx->pc = 0x2e98f8u;
    // NOP
    // 0x2e98fc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e98fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9900: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e9900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e9904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9908: 0x0  nop
    ctx->pc = 0x2e9908u;
    // NOP
    // 0x2e990c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9910: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e9910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9918: 0x0  nop
    ctx->pc = 0x2e9918u;
    // NOP
    // 0x2e991c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e991cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9920: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e9920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e9924: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e9924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e9928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e992c: 0x0  nop
    ctx->pc = 0x2e992cu;
    // NOP
    // 0x2e9930: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e9934: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9938: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E9938u;
    SET_GPR_U32(ctx, 31, 0x2E9940u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E9938u, 0x2E9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9940u;
label_2e9940:
    // 0x2e9940: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9948: 0x0  nop
    ctx->pc = 0x2e9948u;
    // NOP
    // 0x2e994c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e994cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9950: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e9954: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2e9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2e9958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e995c: 0x0  nop
    ctx->pc = 0x2e995cu;
    // NOP
    // 0x2e9960: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e9964: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e9964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9968: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E9968u;
    SET_GPR_U32(ctx, 31, 0x2E9970u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E9968u, 0x2E9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9970u;
label_2e9970:
    // 0x2e9970: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9978: 0x0  nop
    ctx->pc = 0x2e9978u;
    // NOP
    // 0x2e997c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e997cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9980: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e9984: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e9988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e998c: 0x0  nop
    ctx->pc = 0x2e998cu;
    // NOP
    // 0x2e9990: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e9994: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e9998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e999c: 0x0  nop
    ctx->pc = 0x2e999cu;
    // NOP
    // 0x2e99a0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e99a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e99a4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e99a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e99ac: 0x0  nop
    ctx->pc = 0x2e99acu;
    // NOP
    // 0x2e99b0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e99b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e99b4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e99b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e99b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e99bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e99c0: 0x0  nop
    ctx->pc = 0x2e99c0u;
    // NOP
    // 0x2e99c4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e99c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e99c8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e99cc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e99ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e99d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e99d4: 0x0  nop
    ctx->pc = 0x2e99d4u;
    // NOP
    // 0x2e99d8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e99d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e99dc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E99DCu;
    SET_GPR_U32(ctx, 31, 0x2E99E4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E99DCu, 0x2E99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99E4u;
label_2e99e4:
    // 0x2e99e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e99e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e99e8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2E99E8u;
    SET_GPR_U32(ctx, 31, 0x2E99F0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2E99E8u, 0x2E99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99F0u;
label_2e99f0:
    // 0x2e99f0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2e99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2e99f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e99f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e99f8: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e99fc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e9a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a04: 0x0  nop
    ctx->pc = 0x2e9a04u;
    // NOP
    // 0x2e9a08: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e9a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e9a0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a14: 0x0  nop
    ctx->pc = 0x2e9a14u;
    // NOP
    // 0x2e9a18: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e9a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e9a1c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2e9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2e9a20: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2e9a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2e9a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a28: 0x0  nop
    ctx->pc = 0x2e9a28u;
    // NOP
    // 0x2e9a2c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e9a30: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9A30u;
    SET_GPR_U32(ctx, 31, 0x2E9A38u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9A30u, 0x2E9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9a3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e9a40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9a44: 0x0  nop
    ctx->pc = 0x2e9a44u;
    // NOP
    // 0x2e9a48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9a4c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e9a50: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9A50u;
    SET_GPR_U32(ctx, 31, 0x2E9A58u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9A50u, 0x2E9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A58u;
label_2e9a58:
    // 0x2e9a58: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9a5c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e9a60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9a64: 0x0  nop
    ctx->pc = 0x2e9a64u;
    // NOP
    // 0x2e9a68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9a6c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e9a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2e9a70u;
}
