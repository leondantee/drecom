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

// Function: entry_0021b078
// Address: 0x21b078 - 0x21b2b8
void entry_0021b078_0x21b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b078_0x21b078");
#endif

    switch (ctx->pc) {
        case 0x21b0e0u: goto label_21b0e0;
        case 0x21b104u: goto label_21b104;
        case 0x21b128u: goto label_21b128;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b188u: goto label_21b188;
        case 0x21b1b8u: goto label_21b1b8;
        case 0x21b27cu: goto label_21b27c;
        case 0x21b29cu: goto label_21b29c;
        default: break;
    }

    ctx->pc = 0x21b078u;

    // 0x21b078: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21b07c: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21b080: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b084: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x21b088: 0x34860011  ori         $a2, $a0, 0x11
    ctx->pc = 0x21b088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x21b08c: 0x1206008a  beq         $s0, $a2, . + 4 + (0x8A << 2)
    ctx->pc = 0x21B08Cu;
    {
        const bool branch_taken_0x21b08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x21b08c) {
            ctx->pc = 0x21B2B8u;
            return;
        }
    }
    ctx->pc = 0x21B094u;
    // 0x21b094: 0x3c0342f1  lui         $v1, 0x42F1
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17137 << 16));
    // 0x21b098: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x21b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b0a0: 0x0  nop
    ctx->pc = 0x21b0a0u;
    // NOP
    // 0x21b0a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b0a8: 0x3c0342f1  lui         $v1, 0x42F1
    ctx->pc = 0x21b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17137 << 16));
    // 0x21b0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b0b0: 0x0  nop
    ctx->pc = 0x21b0b0u;
    // NOP
    // 0x21b0b4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b0b8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21b0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21b0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21b0c0: 0x0  nop
    ctx->pc = 0x21b0c0u;
    // NOP
    // 0x21b0c4: 0xe60c0098  swc1        $f12, 0x98($s0)
    ctx->pc = 0x21b0c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b0c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x21b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x21b0cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b0d0: 0x0  nop
    ctx->pc = 0x21b0d0u;
    // NOP
    // 0x21b0d4: 0xe601009c  swc1        $f1, 0x9C($s0)
    ctx->pc = 0x21b0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b0d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B0D8u;
    SET_GPR_U32(ctx, 31, 0x21B0E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B0D8u, 0x21B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0E0u;
label_21b0e0:
    // 0x21b0e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b0e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b0e8: 0x0  nop
    ctx->pc = 0x21b0e8u;
    // NOP
    // 0x21b0ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b0f0: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x21b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b0f4: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x21b0f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x21b0f8: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x21b0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b0fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B0FCu;
    SET_GPR_U32(ctx, 31, 0x21B104u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B0FCu, 0x21B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B104u;
label_21b104:
    // 0x21b104: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b10c: 0x0  nop
    ctx->pc = 0x21b10cu;
    // NOP
    // 0x21b110: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b114: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b11c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b120: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B120u;
    SET_GPR_U32(ctx, 31, 0x21B128u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B120u, 0x21B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B128u;
label_21b128:
    // 0x21b128: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b12c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b130: 0x0  nop
    ctx->pc = 0x21b130u;
    // NOP
    // 0x21b134: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b138: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b13c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b140: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b144: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B144u;
    SET_GPR_U32(ctx, 31, 0x21B14Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B144u, 0x21B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b150: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21b150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21b154: 0x0  nop
    ctx->pc = 0x21b154u;
    // NOP
    // 0x21b158: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x21b158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21b15c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b160: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b164: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b168: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x21b168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x21b16c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x21b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x21b170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b174: 0x0  nop
    ctx->pc = 0x21b174u;
    // NOP
    // 0x21b178: 0xe60100ac  swc1        $f1, 0xAC($s0)
    ctx->pc = 0x21b178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21b17c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b180: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21B180u;
    SET_GPR_U32(ctx, 31, 0x21B188u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21B180u, 0x21B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B188u;
label_21b188:
    // 0x21b188: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b190: 0x0  nop
    ctx->pc = 0x21b190u;
    // NOP
    // 0x21b194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b198: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21b198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21b19c: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x21b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x21b1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1a4: 0x0  nop
    ctx->pc = 0x21b1a4u;
    // NOP
    // 0x21b1a8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21b1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21b1ac: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b1b0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21B1B0u;
    SET_GPR_U32(ctx, 31, 0x21B1B8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21B1B0u, 0x21B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1B8u;
label_21b1b8:
    // 0x21b1b8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b1bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b1c0: 0x0  nop
    ctx->pc = 0x21b1c0u;
    // NOP
    // 0x21b1c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b1c8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21b1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21b1cc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b1d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1d4: 0x0  nop
    ctx->pc = 0x21b1d4u;
    // NOP
    // 0x21b1d8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21b1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21b1dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1e4: 0x0  nop
    ctx->pc = 0x21b1e4u;
    // NOP
    // 0x21b1e8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21b1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21b1ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b1f4: 0x0  nop
    ctx->pc = 0x21b1f4u;
    // NOP
    // 0x21b1f8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21b1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21b1fc: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b200: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b208: 0x0  nop
    ctx->pc = 0x21b208u;
    // NOP
    // 0x21b20c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21b210: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b214: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b21c: 0x0  nop
    ctx->pc = 0x21b21cu;
    // NOP
    // 0x21b220: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21b220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21b224: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x21b228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b22c: 0x0  nop
    ctx->pc = 0x21b22cu;
    // NOP
    // 0x21b230: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21b230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21b234: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21b238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b23c: 0x0  nop
    ctx->pc = 0x21b23cu;
    // NOP
    // 0x21b240: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21b240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21b244: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x21b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21b248: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21b248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x21b24c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21b250: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b258: 0x0  nop
    ctx->pc = 0x21b258u;
    // NOP
    // 0x21b25c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21b25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21b260: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21b260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x21b264: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21b264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21b268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b26c: 0x0  nop
    ctx->pc = 0x21b26cu;
    // NOP
    // 0x21b270: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21b270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21b274: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B274u;
    SET_GPR_U32(ctx, 31, 0x21B27Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B274u, 0x21B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B27Cu;
label_21b27c:
    // 0x21b27c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21b280: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b288: 0x0  nop
    ctx->pc = 0x21b288u;
    // NOP
    // 0x21b28c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b290: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21b290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21b294: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B294u;
    SET_GPR_U32(ctx, 31, 0x21B29Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B294u, 0x21B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B29Cu;
label_21b29c:
    // 0x21b29c: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x21b2a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b2a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b2a8: 0x0  nop
    ctx->pc = 0x21b2a8u;
    // NOP
    // 0x21b2ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b2b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x21b2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x21b2b4: 0x0  nop
    ctx->pc = 0x21b2b4u;
    // NOP
    ctx->pc = 0x21b2b8u;
}
