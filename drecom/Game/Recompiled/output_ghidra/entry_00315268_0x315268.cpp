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

// Function: entry_00315268
// Address: 0x315268 - 0x3154a8
void entry_00315268_0x315268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315268_0x315268");
#endif

    switch (ctx->pc) {
        case 0x3152d0u: goto label_3152d0;
        case 0x3152f4u: goto label_3152f4;
        case 0x315318u: goto label_315318;
        case 0x31533cu: goto label_31533c;
        case 0x315378u: goto label_315378;
        case 0x3153a8u: goto label_3153a8;
        case 0x31546cu: goto label_31546c;
        case 0x31548cu: goto label_31548c;
        default: break;
    }

    ctx->pc = 0x315268u;

    // 0x315268: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x315268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31526c: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x31526cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x315270: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x315274: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x315274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x315278: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x315278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x31527c: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x31527Cu;
    {
        const bool branch_taken_0x31527c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x31527c) {
            ctx->pc = 0x3154A8u;
            return;
        }
    }
    ctx->pc = 0x315284u;
    // 0x315284: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x315284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x315288: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31528c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315290: 0x0  nop
    ctx->pc = 0x315290u;
    // NOP
    // 0x315294: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x315294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x315298: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x315298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x31529c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31529cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152a0: 0x0  nop
    ctx->pc = 0x3152a0u;
    // NOP
    // 0x3152a4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3152a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3152a8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3152a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3152ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3152acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152b0: 0x0  nop
    ctx->pc = 0x3152b0u;
    // NOP
    // 0x3152b4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3152b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3152b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3152b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3152bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3152bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152c0: 0x0  nop
    ctx->pc = 0x3152c0u;
    // NOP
    // 0x3152c4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3152c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3152c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3152C8u;
    SET_GPR_U32(ctx, 31, 0x3152D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3152C8u, 0x3152D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152D0u;
label_3152d0:
    // 0x3152d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3152d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3152d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3152d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3152d8: 0x0  nop
    ctx->pc = 0x3152d8u;
    // NOP
    // 0x3152dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3152dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3152e0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x3152e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3152e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3152e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3152e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3152e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3152ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x3152ECu;
    SET_GPR_U32(ctx, 31, 0x3152F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3152ECu, 0x3152F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152F4u;
label_3152f4:
    // 0x3152f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3152f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3152f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3152f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3152fc: 0x0  nop
    ctx->pc = 0x3152fcu;
    // NOP
    // 0x315300: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315304: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x315304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31530c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x315310: 0xc067648  jal         func_19D920
    ctx->pc = 0x315310u;
    SET_GPR_U32(ctx, 31, 0x315318u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315310u, 0x315318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315318u;
label_315318:
    // 0x315318: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31531c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31531cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315320: 0x0  nop
    ctx->pc = 0x315320u;
    // NOP
    // 0x315324: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315328: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x315328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31532c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31532cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315330: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x315330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x315334: 0xc067648  jal         func_19D920
    ctx->pc = 0x315334u;
    SET_GPR_U32(ctx, 31, 0x31533Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315334u, 0x31533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31533Cu;
label_31533c:
    // 0x31533c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x31533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315344: 0x0  nop
    ctx->pc = 0x315344u;
    // NOP
    // 0x315348: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31534c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x31534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315354: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x315354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x315358: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x315358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x31535c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x31535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x315360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315364: 0x0  nop
    ctx->pc = 0x315364u;
    // NOP
    // 0x315368: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x315368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x31536c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x31536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315370: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x315370u;
    SET_GPR_U32(ctx, 31, 0x315378u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x315370u, 0x315378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315378u;
label_315378:
    // 0x315378: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x31537c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31537cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315380: 0x0  nop
    ctx->pc = 0x315380u;
    // NOP
    // 0x315384: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315388: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x315388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x31538c: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x31538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x315390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315394: 0x0  nop
    ctx->pc = 0x315394u;
    // NOP
    // 0x315398: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x315398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x31539c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x31539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3153a0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x3153A0u;
    SET_GPR_U32(ctx, 31, 0x3153A8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x3153A0u, 0x3153A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153A8u;
label_3153a8:
    // 0x3153a8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3153a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3153ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3153acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3153b0: 0x0  nop
    ctx->pc = 0x3153b0u;
    // NOP
    // 0x3153b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3153b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3153b8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x3153b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x3153bc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3153c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153c4: 0x0  nop
    ctx->pc = 0x3153c4u;
    // NOP
    // 0x3153c8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x3153c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x3153cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3153ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3153d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153d4: 0x0  nop
    ctx->pc = 0x3153d4u;
    // NOP
    // 0x3153d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3153d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3153dc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3153dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3153e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153e4: 0x0  nop
    ctx->pc = 0x3153e4u;
    // NOP
    // 0x3153e8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x3153e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3153ec: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x3153ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x3153f0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3153f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3153f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153f8: 0x0  nop
    ctx->pc = 0x3153f8u;
    // NOP
    // 0x3153fc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x3153fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x315400: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x315400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x315404: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x315404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x315408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31540c: 0x0  nop
    ctx->pc = 0x31540cu;
    // NOP
    // 0x315410: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x315410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x315414: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x315414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x315418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31541c: 0x0  nop
    ctx->pc = 0x31541cu;
    // NOP
    // 0x315420: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x315420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x315424: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x315428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31542c: 0x0  nop
    ctx->pc = 0x31542cu;
    // NOP
    // 0x315430: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x315430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x315434: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x315434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x315438: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x315438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x31543c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315440: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315448: 0x0  nop
    ctx->pc = 0x315448u;
    // NOP
    // 0x31544c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x31544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x315450: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x315450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x315454: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x315454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x315458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31545c: 0x0  nop
    ctx->pc = 0x31545cu;
    // NOP
    // 0x315460: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x315460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x315464: 0xc067648  jal         func_19D920
    ctx->pc = 0x315464u;
    SET_GPR_U32(ctx, 31, 0x31546Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315464u, 0x31546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31546Cu;
label_31546c:
    // 0x31546c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315470: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315478: 0x0  nop
    ctx->pc = 0x315478u;
    // NOP
    // 0x31547c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31547cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315480: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x315480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x315484: 0xc067648  jal         func_19D920
    ctx->pc = 0x315484u;
    SET_GPR_U32(ctx, 31, 0x31548Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315484u, 0x31548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31548Cu;
label_31548c:
    // 0x31548c: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x31548cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x315490: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x315490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x315494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315498: 0x0  nop
    ctx->pc = 0x315498u;
    // NOP
    // 0x31549c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31549cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3154a0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3154a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3154a4: 0x0  nop
    ctx->pc = 0x3154a4u;
    // NOP
    ctx->pc = 0x3154a8u;
}
