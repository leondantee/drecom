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

// Function: entry_002ef0a0
// Address: 0x2ef0a0 - 0x2ef218
void entry_002ef0a0_0x2ef0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef0a0_0x2ef0a0");
#endif

    switch (ctx->pc) {
        case 0x2ef0a8u: goto label_2ef0a8;
        case 0x2ef0ccu: goto label_2ef0cc;
        case 0x2ef0f0u: goto label_2ef0f0;
        case 0x2ef118u: goto label_2ef118;
        case 0x2ef148u: goto label_2ef148;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1fcu: goto label_2ef1fc;
        default: break;
    }

    ctx->pc = 0x2ef0a0u;

    // 0x2ef0a0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF0A0u;
    SET_GPR_U32(ctx, 31, 0x2EF0A8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF0A0u, 0x2EF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0A8u;
label_2ef0a8:
    // 0x2ef0a8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ef0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ef0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef0b0: 0x0  nop
    ctx->pc = 0x2ef0b0u;
    // NOP
    // 0x2ef0b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef0b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef0b8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef0bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef0c0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef0c4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF0C4u;
    SET_GPR_U32(ctx, 31, 0x2EF0CCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF0C4u, 0x2EF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0CCu;
label_2ef0cc:
    // 0x2ef0cc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ef0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ef0d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef0d4: 0x0  nop
    ctx->pc = 0x2ef0d4u;
    // NOP
    // 0x2ef0d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef0dc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef0e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef0e4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef0e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF0E8u;
    SET_GPR_U32(ctx, 31, 0x2EF0F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF0E8u, 0x2EF0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0F0u;
label_2ef0f0:
    // 0x2ef0f0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ef0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ef0f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef0f8: 0x0  nop
    ctx->pc = 0x2ef0f8u;
    // NOP
    // 0x2ef0fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef100: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef108: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef10c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2ef10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ef110: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EF110u;
    SET_GPR_U32(ctx, 31, 0x2EF118u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EF110u, 0x2EF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF118u;
label_2ef118:
    // 0x2ef118: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ef11c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef120: 0x0  nop
    ctx->pc = 0x2ef120u;
    // NOP
    // 0x2ef124: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef128: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ef128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ef12c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ef12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ef130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef134: 0x0  nop
    ctx->pc = 0x2ef134u;
    // NOP
    // 0x2ef138: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ef138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ef13c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2ef13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ef140: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EF140u;
    SET_GPR_U32(ctx, 31, 0x2EF148u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EF140u, 0x2EF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF148u;
label_2ef148:
    // 0x2ef148: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ef14c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef150: 0x0  nop
    ctx->pc = 0x2ef150u;
    // NOP
    // 0x2ef154: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef158: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ef158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ef15c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ef15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ef160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef164: 0x0  nop
    ctx->pc = 0x2ef164u;
    // NOP
    // 0x2ef168: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ef168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ef16c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ef16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ef170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef174: 0x0  nop
    ctx->pc = 0x2ef174u;
    // NOP
    // 0x2ef178: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ef178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ef17c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ef17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ef180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef184: 0x0  nop
    ctx->pc = 0x2ef184u;
    // NOP
    // 0x2ef188: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ef188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ef18c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ef18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef190: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ef190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ef194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef198: 0x0  nop
    ctx->pc = 0x2ef198u;
    // NOP
    // 0x2ef19c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ef19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ef1a0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ef1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef1a4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ef1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ef1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef1ac: 0x0  nop
    ctx->pc = 0x2ef1acu;
    // NOP
    // 0x2ef1b0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ef1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ef1b4: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
    // 0x2ef1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef1bc: 0x0  nop
    ctx->pc = 0x2ef1bcu;
    // NOP
    // 0x2ef1c0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ef1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ef1c4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2ef1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef1c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ef1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ef1cc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2ef1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ef1d0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2ef1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2ef1d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF1D4u;
    SET_GPR_U32(ctx, 31, 0x2EF1DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF1D4u, 0x2EF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1DCu;
label_2ef1dc:
    // 0x2ef1dc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ef1e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ef1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ef1e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef1e8: 0x0  nop
    ctx->pc = 0x2ef1e8u;
    // NOP
    // 0x2ef1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef1f0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ef1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ef1f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF1F4u;
    SET_GPR_U32(ctx, 31, 0x2EF1FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF1F4u, 0x2EF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1FCu;
label_2ef1fc:
    // 0x2ef1fc: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ef1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ef200: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ef200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ef204: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef208: 0x0  nop
    ctx->pc = 0x2ef208u;
    // NOP
    // 0x2ef20c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef210: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ef210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ef214: 0x0  nop
    ctx->pc = 0x2ef214u;
    // NOP
    ctx->pc = 0x2ef218u;
}
