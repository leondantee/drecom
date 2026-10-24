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

// Function: entry_002ed288
// Address: 0x2ed288 - 0x2ed4a0
void entry_002ed288_0x2ed288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed288_0x2ed288");
#endif

    switch (ctx->pc) {
        case 0x2ed2f8u: goto label_2ed2f8;
        case 0x2ed30cu: goto label_2ed30c;
        case 0x2ed320u: goto label_2ed320;
        case 0x2ed338u: goto label_2ed338;
        case 0x2ed370u: goto label_2ed370;
        case 0x2ed464u: goto label_2ed464;
        case 0x2ed484u: goto label_2ed484;
        default: break;
    }

    ctx->pc = 0x2ed288u;

    // 0x2ed288: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed28c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed290: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2ED290u;
    {
        const bool branch_taken_0x2ed290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed290) {
            ctx->pc = 0x2ED4A0u;
            return;
        }
    }
    ctx->pc = 0x2ED298u;
    // 0x2ed298: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ed298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ed29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2a0: 0x0  nop
    ctx->pc = 0x2ed2a0u;
    // NOP
    // 0x2ed2a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ed2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ed2a8: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ed2ac: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ed2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ed2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2b4: 0x0  nop
    ctx->pc = 0x2ed2b4u;
    // NOP
    // 0x2ed2b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ed2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ed2bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ed2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ed2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2c4: 0x0  nop
    ctx->pc = 0x2ed2c4u;
    // NOP
    // 0x2ed2c8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ed2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ed2cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ed2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2d4: 0x0  nop
    ctx->pc = 0x2ed2d4u;
    // NOP
    // 0x2ed2d8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ed2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ed2dc: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x2ed2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x2ed2e0: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2ed2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2ed2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2e8: 0x0  nop
    ctx->pc = 0x2ed2e8u;
    // NOP
    // 0x2ed2ec: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ed2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ed2f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED2F0u;
    SET_GPR_U32(ctx, 31, 0x2ED2F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED2F0u, 0x2ED2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2F8u;
label_2ed2f8:
    // 0x2ed2f8: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2ed2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed2fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed300: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ed300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ed304: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED304u;
    SET_GPR_U32(ctx, 31, 0x2ED30Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED304u, 0x2ED30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED30Cu;
label_2ed30c:
    // 0x2ed30c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2ed30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed314: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ed314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ed318: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED318u;
    SET_GPR_U32(ctx, 31, 0x2ED320u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED318u, 0x2ED320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED320u;
label_2ed320:
    // 0x2ed320: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2ed320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed328: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ed328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ed32c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2ed32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed330: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2ED330u;
    SET_GPR_U32(ctx, 31, 0x2ED338u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2ED330u, 0x2ED338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED338u;
label_2ed338:
    // 0x2ed338: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ed338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ed33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed340: 0x0  nop
    ctx->pc = 0x2ed340u;
    // NOP
    // 0x2ed344: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ed344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed348: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2ed348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed34c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ed34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ed350: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ed350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ed354: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ed354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ed358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed35c: 0x0  nop
    ctx->pc = 0x2ed35cu;
    // NOP
    // 0x2ed360: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ed360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ed364: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2ed364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed368: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2ED368u;
    SET_GPR_U32(ctx, 31, 0x2ED370u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2ED368u, 0x2ED370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED370u;
label_2ed370:
    // 0x2ed370: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ed370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ed374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed378: 0x0  nop
    ctx->pc = 0x2ed378u;
    // NOP
    // 0x2ed37c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ed37cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed380: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ed380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ed384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ed388: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ed388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ed38c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ed38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ed390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed394: 0x0  nop
    ctx->pc = 0x2ed394u;
    // NOP
    // 0x2ed398: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ed398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ed39c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ed39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ed3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3a4: 0x0  nop
    ctx->pc = 0x2ed3a4u;
    // NOP
    // 0x2ed3a8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ed3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ed3ac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ed3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ed3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3b4: 0x0  nop
    ctx->pc = 0x2ed3b4u;
    // NOP
    // 0x2ed3b8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ed3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ed3bc: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2ed3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2ed3c0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2ed3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2ed3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3c8: 0x0  nop
    ctx->pc = 0x2ed3c8u;
    // NOP
    // 0x2ed3cc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ed3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ed3d0: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2ed3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2ed3d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2ed3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2ed3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3dc: 0x0  nop
    ctx->pc = 0x2ed3dcu;
    // NOP
    // 0x2ed3e0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ed3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ed3e4: 0x3c024357  lui         $v0, 0x4357
    ctx->pc = 0x2ed3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17239 << 16));
    // 0x2ed3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed3ec: 0x0  nop
    ctx->pc = 0x2ed3ecu;
    // NOP
    // 0x2ed3f0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ed3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ed3f4: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2ed3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2ed3f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ed3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ed3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed400: 0x0  nop
    ctx->pc = 0x2ed400u;
    // NOP
    // 0x2ed404: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ed404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ed408: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ed40c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ed40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ed410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ed410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ed414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed41c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed420: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ed420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ed424: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ed424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ed428: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ed428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ed42c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ed42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ed430: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ed430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed438: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ed438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ed43c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ed43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ed440: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ed440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ed444: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ed444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ed448: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ed448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ed44c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed450: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2ed450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ed454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed458: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ed458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ed45c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED45Cu;
    SET_GPR_U32(ctx, 31, 0x2ED464u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED45Cu, 0x2ED464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED464u;
label_2ed464:
    // 0x2ed464: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ed464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ed468: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ed468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ed46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed470: 0x0  nop
    ctx->pc = 0x2ed470u;
    // NOP
    // 0x2ed474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed478: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ed478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ed47c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ED47Cu;
    SET_GPR_U32(ctx, 31, 0x2ED484u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ED47Cu, 0x2ED484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED484u;
label_2ed484:
    // 0x2ed484: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ed484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ed488: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ed488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ed48c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ed48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed490: 0x0  nop
    ctx->pc = 0x2ed490u;
    // NOP
    // 0x2ed494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed498: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ed498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ed49c: 0x0  nop
    ctx->pc = 0x2ed49cu;
    // NOP
    ctx->pc = 0x2ed4a0u;
}
