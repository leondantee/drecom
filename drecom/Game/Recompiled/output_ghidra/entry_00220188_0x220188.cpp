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

// Function: entry_00220188
// Address: 0x220188 - 0x220380
void entry_00220188_0x220188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220188_0x220188");
#endif

    switch (ctx->pc) {
        case 0x2201e0u: goto label_2201e0;
        case 0x220204u: goto label_220204;
        case 0x220228u: goto label_220228;
        case 0x22024cu: goto label_22024c;
        case 0x220288u: goto label_220288;
        case 0x2202b4u: goto label_2202b4;
        case 0x220350u: goto label_220350;
        default: break;
    }

    ctx->pc = 0x220188u;

    // 0x220188: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x220188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x22018c: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x220190: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x220194: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x220198: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x220198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x22019c: 0x12020078  beq         $s0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x22019Cu;
    {
        const bool branch_taken_0x22019c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22019c) {
            ctx->pc = 0x220380u;
            return;
        }
    }
    ctx->pc = 0x2201A4u;
    // 0x2201a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2201a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201a8: 0x0  nop
    ctx->pc = 0x2201a8u;
    // NOP
    // 0x2201ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2201acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2201b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2201b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201b4: 0x0  nop
    ctx->pc = 0x2201b4u;
    // NOP
    // 0x2201b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2201b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2201bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2201bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201c0: 0x0  nop
    ctx->pc = 0x2201c0u;
    // NOP
    // 0x2201c4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2201c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2201c8: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2201c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2201cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2201ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201d0: 0x0  nop
    ctx->pc = 0x2201d0u;
    // NOP
    // 0x2201d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2201d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2201d8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2201D8u;
    SET_GPR_U32(ctx, 31, 0x2201E0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2201D8u, 0x2201E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201E0u;
label_2201e0:
    // 0x2201e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2201e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2201e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2201e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2201e8: 0x0  nop
    ctx->pc = 0x2201e8u;
    // NOP
    // 0x2201ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2201ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2201f0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2201f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2201f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2201f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2201f8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2201f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2201fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2201FCu;
    SET_GPR_U32(ctx, 31, 0x220204u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2201FCu, 0x220204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x220208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22020c: 0x0  nop
    ctx->pc = 0x22020cu;
    // NOP
    // 0x220210: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220214: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x220214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22021c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x22021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x220220: 0xc067654  jal         func_19D950
    ctx->pc = 0x220220u;
    SET_GPR_U32(ctx, 31, 0x220228u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x220220u, 0x220228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220228u;
label_220228:
    // 0x220228: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x220228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22022c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220230: 0x0  nop
    ctx->pc = 0x220230u;
    // NOP
    // 0x220234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220238: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x220238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22023c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22023cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220240: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x220240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x220244: 0xc067648  jal         func_19D920
    ctx->pc = 0x220244u;
    SET_GPR_U32(ctx, 31, 0x22024Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x220244u, 0x22024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22024Cu;
label_22024c:
    // 0x22024c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x220250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220254: 0x0  nop
    ctx->pc = 0x220254u;
    // NOP
    // 0x220258: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22025c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x22025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220260: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220264: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x220264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x220268: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x220268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x22026c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x22026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x220270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220274: 0x0  nop
    ctx->pc = 0x220274u;
    // NOP
    // 0x220278: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x220278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x22027c: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x22027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220280: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x220280u;
    SET_GPR_U32(ctx, 31, 0x220288u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x220280u, 0x220288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220288u;
label_220288:
    // 0x220288: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22028c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220290: 0x0  nop
    ctx->pc = 0x220290u;
    // NOP
    // 0x220294: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x220294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220298: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x220298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x22029c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22029cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202a0: 0x0  nop
    ctx->pc = 0x2202a0u;
    // NOP
    // 0x2202a4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2202a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2202a8: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2202a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2202ac: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2202ACu;
    SET_GPR_U32(ctx, 31, 0x2202B4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2202ACu, 0x2202B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202B4u;
label_2202b4:
    // 0x2202b4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2202b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2202b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2202b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2202bc: 0x0  nop
    ctx->pc = 0x2202bcu;
    // NOP
    // 0x2202c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2202c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2202c4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2202c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2202c8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2202c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2202cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2202ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202d0: 0x0  nop
    ctx->pc = 0x2202d0u;
    // NOP
    // 0x2202d4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2202d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2202d8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2202d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2202dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2202dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202e0: 0x0  nop
    ctx->pc = 0x2202e0u;
    // NOP
    // 0x2202e4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2202e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2202e8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2202ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2202ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202f0: 0x0  nop
    ctx->pc = 0x2202f0u;
    // NOP
    // 0x2202f4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2202f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2202f8: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2202f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2202fc: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2202fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x220300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220304: 0x0  nop
    ctx->pc = 0x220304u;
    // NOP
    // 0x220308: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x220308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x22030c: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x22030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x220310: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x220310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x220314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220318: 0x0  nop
    ctx->pc = 0x220318u;
    // NOP
    // 0x22031c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x22031cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x220320: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x220324: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x220324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x220328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22032c: 0x0  nop
    ctx->pc = 0x22032cu;
    // NOP
    // 0x220330: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x220330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x220334: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x220334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x220338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22033c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x22033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x220340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220344: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x220344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x220348: 0xc067648  jal         func_19D920
    ctx->pc = 0x220348u;
    SET_GPR_U32(ctx, 31, 0x220350u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x220348u, 0x220350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220350u;
label_220350:
    // 0x220350: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x220350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x220354: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x220354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x220358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22035c: 0x0  nop
    ctx->pc = 0x22035cu;
    // NOP
    // 0x220360: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220364: 0x3c023c4c  lui         $v0, 0x3C4C
    ctx->pc = 0x220364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15436 << 16));
    // 0x220368: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x220368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22036c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22036cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220370: 0x0  nop
    ctx->pc = 0x220370u;
    // NOP
    // 0x220374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220378: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x220378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x22037c: 0x0  nop
    ctx->pc = 0x22037cu;
    // NOP
    ctx->pc = 0x220380u;
}
