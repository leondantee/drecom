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

// Function: entry_0021b688
// Address: 0x21b688 - 0x21b8b8
void entry_0021b688_0x21b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b688_0x21b688");
#endif

    switch (ctx->pc) {
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b708u: goto label_21b708;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b750u: goto label_21b750;
        case 0x21b78cu: goto label_21b78c;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b880u: goto label_21b880;
        case 0x21b8a0u: goto label_21b8a0;
        default: break;
    }

    ctx->pc = 0x21b688u;

    // 0x21b688: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21b688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21b68c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21b68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21b690: 0x12030089  beq         $s0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x21B690u;
    {
        const bool branch_taken_0x21b690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b690) {
            ctx->pc = 0x21B8B8u;
            return;
        }
    }
    ctx->pc = 0x21B698u;
    // 0x21b698: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21b69c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6a4: 0x0  nop
    ctx->pc = 0x21b6a4u;
    // NOP
    // 0x21b6a8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b6ac: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x21b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x21b6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6b4: 0x0  nop
    ctx->pc = 0x21b6b4u;
    // NOP
    // 0x21b6b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b6bc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21b6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6c4: 0x0  nop
    ctx->pc = 0x21b6c4u;
    // NOP
    // 0x21b6c8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b6cc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21b6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b6d4: 0x0  nop
    ctx->pc = 0x21b6d4u;
    // NOP
    // 0x21b6d8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b6dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B6DCu;
    SET_GPR_U32(ctx, 31, 0x21B6E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B6DCu, 0x21B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6E4u;
label_21b6e4:
    // 0x21b6e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b6e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b6ec: 0x0  nop
    ctx->pc = 0x21b6ecu;
    // NOP
    // 0x21b6f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b6f4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b6f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b6fc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b700: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B700u;
    SET_GPR_U32(ctx, 31, 0x21B708u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B700u, 0x21B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B708u;
label_21b708:
    // 0x21b708: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b70c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b710: 0x0  nop
    ctx->pc = 0x21b710u;
    // NOP
    // 0x21b714: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b718: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b71c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b720: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b724: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B724u;
    SET_GPR_U32(ctx, 31, 0x21B72Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B724u, 0x21B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B72Cu;
label_21b72c:
    // 0x21b72c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b734: 0x0  nop
    ctx->pc = 0x21b734u;
    // NOP
    // 0x21b738: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b73c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b744: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b748: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B748u;
    SET_GPR_U32(ctx, 31, 0x21B750u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B748u, 0x21B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B750u;
label_21b750:
    // 0x21b750: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x21b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x21b754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b758: 0x0  nop
    ctx->pc = 0x21b758u;
    // NOP
    // 0x21b75c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b760: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21b764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21b768: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21b76c: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x21b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x21b770: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x21b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x21b774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b778: 0x0  nop
    ctx->pc = 0x21b778u;
    // NOP
    // 0x21b77c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21b77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21b780: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b784: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21B784u;
    SET_GPR_U32(ctx, 31, 0x21B78Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21B784u, 0x21B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B78Cu;
label_21b78c:
    // 0x21b78c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x21b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x21b790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b794: 0x0  nop
    ctx->pc = 0x21b794u;
    // NOP
    // 0x21b798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b79c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21b79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21b7a0: 0x3c02421c  lui         $v0, 0x421C
    ctx->pc = 0x21b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16924 << 16));
    // 0x21b7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7a8: 0x0  nop
    ctx->pc = 0x21b7a8u;
    // NOP
    // 0x21b7ac: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21b7b0: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b7b4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21B7B4u;
    SET_GPR_U32(ctx, 31, 0x21B7BCu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21B7B4u, 0x21B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7BCu;
label_21b7bc:
    // 0x21b7bc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x21b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x21b7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21b7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b7c4: 0x0  nop
    ctx->pc = 0x21b7c4u;
    // NOP
    // 0x21b7c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b7cc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21b7d0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7d8: 0x0  nop
    ctx->pc = 0x21b7d8u;
    // NOP
    // 0x21b7dc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21b7e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21b7e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7e8: 0x0  nop
    ctx->pc = 0x21b7e8u;
    // NOP
    // 0x21b7ec: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21b7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21b7f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21b7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b7f8: 0x0  nop
    ctx->pc = 0x21b7f8u;
    // NOP
    // 0x21b7fc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x21b7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21b800: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b804: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b80c: 0x0  nop
    ctx->pc = 0x21b80cu;
    // NOP
    // 0x21b810: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x21b810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21b814: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x21b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x21b818: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x21b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x21b81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b820: 0x0  nop
    ctx->pc = 0x21b820u;
    // NOP
    // 0x21b824: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21b828: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x21b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x21b82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b830: 0x0  nop
    ctx->pc = 0x21b830u;
    // NOP
    // 0x21b834: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21b834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21b838: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x21b83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b840: 0x0  nop
    ctx->pc = 0x21b840u;
    // NOP
    // 0x21b844: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21b844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21b848: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x21b84c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x21b850: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21b850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21b854: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21b854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21b858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b85c: 0x0  nop
    ctx->pc = 0x21b85cu;
    // NOP
    // 0x21b860: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21b860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21b864: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21b868: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21b868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21b86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b870: 0x0  nop
    ctx->pc = 0x21b870u;
    // NOP
    // 0x21b874: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x21b878: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B878u;
    SET_GPR_U32(ctx, 31, 0x21B880u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B878u, 0x21B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B880u;
label_21b880:
    // 0x21b880: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21b880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21b884: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b888: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b88c: 0x0  nop
    ctx->pc = 0x21b88cu;
    // NOP
    // 0x21b890: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b894: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x21b894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21b898: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21B898u;
    SET_GPR_U32(ctx, 31, 0x21B8A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21B898u, 0x21B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8A0u;
label_21b8a0:
    // 0x21b8a0: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x21b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x21b8a4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b8a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21b8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21b8ac: 0x0  nop
    ctx->pc = 0x21b8acu;
    // NOP
    // 0x21b8b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b8b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x21b8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x21b8b8u;
}
