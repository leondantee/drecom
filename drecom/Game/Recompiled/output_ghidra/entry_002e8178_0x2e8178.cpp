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

// Function: entry_002e8178
// Address: 0x2e8178 - 0x2e83f0
void entry_002e8178_0x2e8178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8178_0x2e8178");
#endif

    switch (ctx->pc) {
        case 0x2e81dcu: goto label_2e81dc;
        case 0x2e8200u: goto label_2e8200;
        case 0x2e8224u: goto label_2e8224;
        case 0x2e8248u: goto label_2e8248;
        case 0x2e8284u: goto label_2e8284;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83d4u: goto label_2e83d4;
        default: break;
    }

    ctx->pc = 0x2e8178u;

    // 0x2e8178: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e817c: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2e817cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8180: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2e8180u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8184: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8188: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e818c: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2E818Cu;
    {
        const bool branch_taken_0x2e818c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e818c) {
            ctx->pc = 0x2E83F0u;
            return;
        }
    }
    ctx->pc = 0x2E8194u;
    // 0x2e8194: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e8194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e8198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e819c: 0x0  nop
    ctx->pc = 0x2e819cu;
    // NOP
    // 0x2e81a0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e81a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e81a4: 0x3c024224  lui         $v0, 0x4224
    ctx->pc = 0x2e81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16932 << 16));
    // 0x2e81a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e81a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81ac: 0x0  nop
    ctx->pc = 0x2e81acu;
    // NOP
    // 0x2e81b0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e81b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e81b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e81b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e81b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81bc: 0x0  nop
    ctx->pc = 0x2e81bcu;
    // NOP
    // 0x2e81c0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e81c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e81c4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2e81c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e81c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81cc: 0x0  nop
    ctx->pc = 0x2e81ccu;
    // NOP
    // 0x2e81d0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e81d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e81d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E81D4u;
    SET_GPR_U32(ctx, 31, 0x2E81DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E81D4u, 0x2E81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81DCu;
label_2e81dc:
    // 0x2e81dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e81e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e81e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e81e4: 0x0  nop
    ctx->pc = 0x2e81e4u;
    // NOP
    // 0x2e81e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e81e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e81ec: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e81f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e81f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e81f4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e81f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e81f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E81F8u;
    SET_GPR_U32(ctx, 31, 0x2E8200u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E81F8u, 0x2E8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8200u;
label_2e8200:
    // 0x2e8200: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8208: 0x0  nop
    ctx->pc = 0x2e8208u;
    // NOP
    // 0x2e820c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e820cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8210: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8218: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e821c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E821Cu;
    SET_GPR_U32(ctx, 31, 0x2E8224u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E821Cu, 0x2E8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8224u;
label_2e8224:
    // 0x2e8224: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e822c: 0x0  nop
    ctx->pc = 0x2e822cu;
    // NOP
    // 0x2e8230: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8234: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e823c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e823cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e8240: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8240u;
    SET_GPR_U32(ctx, 31, 0x2E8248u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8240u, 0x2E8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8248u;
label_2e8248:
    // 0x2e8248: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e8248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e824c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8250: 0x0  nop
    ctx->pc = 0x2e8250u;
    // NOP
    // 0x2e8254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8258: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e825c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e825cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8260: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8264: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x2e8264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x2e8268: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2e8268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2e826c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e826cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8270: 0x0  nop
    ctx->pc = 0x2e8270u;
    // NOP
    // 0x2e8274: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e8274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e8278: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e827c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E827Cu;
    SET_GPR_U32(ctx, 31, 0x2E8284u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E827Cu, 0x2E8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8284u;
label_2e8284:
    // 0x2e8284: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e8284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e8288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e828c: 0x0  nop
    ctx->pc = 0x2e828cu;
    // NOP
    // 0x2e8290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8294: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e829c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e829cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82a0: 0x0  nop
    ctx->pc = 0x2e82a0u;
    // NOP
    // 0x2e82a4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e82a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e82a8: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e82ac: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E82ACu;
    SET_GPR_U32(ctx, 31, 0x2E82B4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E82ACu, 0x2E82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82B4u;
label_2e82b4:
    // 0x2e82b4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e82b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e82b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e82bc: 0x0  nop
    ctx->pc = 0x2e82bcu;
    // NOP
    // 0x2e82c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e82c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e82c4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e82c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e82c8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e82cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e82ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82d0: 0x0  nop
    ctx->pc = 0x2e82d0u;
    // NOP
    // 0x2e82d4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e82d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e82dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e82dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82e0: 0x0  nop
    ctx->pc = 0x2e82e0u;
    // NOP
    // 0x2e82e4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e82e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e82e8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e82ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e82ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e82f0: 0x0  nop
    ctx->pc = 0x2e82f0u;
    // NOP
    // 0x2e82f4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e82f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e82f8: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e82fc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e82fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8304: 0x0  nop
    ctx->pc = 0x2e8304u;
    // NOP
    // 0x2e8308: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e830c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2e830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2e8310: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8318: 0x0  nop
    ctx->pc = 0x2e8318u;
    // NOP
    // 0x2e831c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e8320: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8328: 0x0  nop
    ctx->pc = 0x2e8328u;
    // NOP
    // 0x2e832c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e832cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8330: 0x3c024081  lui         $v0, 0x4081
    ctx->pc = 0x2e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16513 << 16));
    // 0x2e8334: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e8334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e8338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e833c: 0x0  nop
    ctx->pc = 0x2e833cu;
    // NOP
    // 0x2e8340: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e8340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e8344: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x2e8348: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x2e8348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x2e834c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8350: 0x0  nop
    ctx->pc = 0x2e8350u;
    // NOP
    // 0x2e8354: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e8354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e8358: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e8358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e835c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e8360: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e8360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e8364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e8364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e836c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e8370: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2e8370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e8374: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e8374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e8378: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e8378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e837c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2e837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e8380: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e8380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8388: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e8388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e838c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2e838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e8390: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e8390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e8394: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e8394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e8398: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2e8398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2e839c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e83a0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2e83a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2e83a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e83a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e83a8: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e83a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e83ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E83ACu;
    SET_GPR_U32(ctx, 31, 0x2E83B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E83ACu, 0x2E83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83B4u;
label_2e83b4:
    // 0x2e83b4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e83b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e83bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e83bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e83c0: 0x0  nop
    ctx->pc = 0x2e83c0u;
    // NOP
    // 0x2e83c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e83c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e83c8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e83c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e83cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E83CCu;
    SET_GPR_U32(ctx, 31, 0x2E83D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E83CCu, 0x2E83D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83D4u;
label_2e83d4:
    // 0x2e83d4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e83d8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e83d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e83dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e83dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e83e0: 0x0  nop
    ctx->pc = 0x2e83e0u;
    // NOP
    // 0x2e83e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e83e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e83e8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e83e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e83ec: 0x0  nop
    ctx->pc = 0x2e83ecu;
    // NOP
    ctx->pc = 0x2e83f0u;
}
