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

// Function: entry_002ea088
// Address: 0x2ea088 - 0x2ea2b8
void entry_002ea088_0x2ea088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea088_0x2ea088");
#endif

    switch (ctx->pc) {
        case 0x2ea0fcu: goto label_2ea0fc;
        case 0x2ea120u: goto label_2ea120;
        case 0x2ea144u: goto label_2ea144;
        case 0x2ea168u: goto label_2ea168;
        case 0x2ea1a4u: goto label_2ea1a4;
        case 0x2ea1d4u: goto label_2ea1d4;
        case 0x2ea280u: goto label_2ea280;
        case 0x2ea2a0u: goto label_2ea2a0;
        default: break;
    }

    ctx->pc = 0x2ea088u;

    // 0x2ea088: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ea088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ea08c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ea08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ea090: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2ea090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2ea094: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2ea094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ea098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ea098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea09c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2ea09cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ea0a0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea0a4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea0a8: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2EA0A8u;
    {
        const bool branch_taken_0x2ea0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea0a8) {
            ctx->pc = 0x2EA2B8u;
            return;
        }
    }
    ctx->pc = 0x2EA0B0u;
    // 0x2ea0b0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2ea0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0b8: 0x0  nop
    ctx->pc = 0x2ea0b8u;
    // NOP
    // 0x2ea0bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea0c0: 0x3c034133  lui         $v1, 0x4133
    ctx->pc = 0x2ea0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16691 << 16));
    // 0x2ea0c4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ea0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ea0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0cc: 0x0  nop
    ctx->pc = 0x2ea0ccu;
    // NOP
    // 0x2ea0d0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea0d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ea0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0dc: 0x0  nop
    ctx->pc = 0x2ea0dcu;
    // NOP
    // 0x2ea0e0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea0e4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ea0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea0e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0ec: 0x0  nop
    ctx->pc = 0x2ea0ecu;
    // NOP
    // 0x2ea0f0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea0f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA0F4u;
    SET_GPR_U32(ctx, 31, 0x2EA0FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA0F4u, 0x2EA0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA0FCu;
label_2ea0fc:
    // 0x2ea0fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea104: 0x0  nop
    ctx->pc = 0x2ea104u;
    // NOP
    // 0x2ea108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea10c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea110: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea114: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea118: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA118u;
    SET_GPR_U32(ctx, 31, 0x2EA120u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA118u, 0x2EA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA120u;
label_2ea120:
    // 0x2ea120: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea128: 0x0  nop
    ctx->pc = 0x2ea128u;
    // NOP
    // 0x2ea12c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea130: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea138: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea13c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA13Cu;
    SET_GPR_U32(ctx, 31, 0x2EA144u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA13Cu, 0x2EA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA144u;
label_2ea144:
    // 0x2ea144: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ea144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea14c: 0x0  nop
    ctx->pc = 0x2ea14cu;
    // NOP
    // 0x2ea150: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea154: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea15c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea160: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA160u;
    SET_GPR_U32(ctx, 31, 0x2EA168u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA160u, 0x2EA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA168u;
label_2ea168:
    // 0x2ea168: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea170: 0x0  nop
    ctx->pc = 0x2ea170u;
    // NOP
    // 0x2ea174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea178: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea17c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea180: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea184: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ea184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ea188: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ea188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ea18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea190: 0x0  nop
    ctx->pc = 0x2ea190u;
    // NOP
    // 0x2ea194: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ea194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ea198: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea19c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EA19Cu;
    SET_GPR_U32(ctx, 31, 0x2EA1A4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EA19Cu, 0x2EA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1A4u;
label_2ea1a4:
    // 0x2ea1a4: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ea1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ea1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea1ac: 0x0  nop
    ctx->pc = 0x2ea1acu;
    // NOP
    // 0x2ea1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea1b4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ea1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ea1b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea1c0: 0x0  nop
    ctx->pc = 0x2ea1c0u;
    // NOP
    // 0x2ea1c4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ea1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ea1c8: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ea1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ea1cc: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EA1CCu;
    SET_GPR_U32(ctx, 31, 0x2EA1D4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EA1CCu, 0x2EA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1D4u;
label_2ea1d4:
    // 0x2ea1d4: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2ea1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2ea1d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea1dc: 0x0  nop
    ctx->pc = 0x2ea1dcu;
    // NOP
    // 0x2ea1e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea1e4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ea1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ea1e8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea1f0: 0x0  nop
    ctx->pc = 0x2ea1f0u;
    // NOP
    // 0x2ea1f4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ea1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ea1f8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ea1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea200: 0x0  nop
    ctx->pc = 0x2ea200u;
    // NOP
    // 0x2ea204: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ea204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ea208: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ea20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea210: 0x0  nop
    ctx->pc = 0x2ea210u;
    // NOP
    // 0x2ea214: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ea214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ea218: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea21c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ea21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ea220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea224: 0x0  nop
    ctx->pc = 0x2ea224u;
    // NOP
    // 0x2ea228: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ea228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ea22c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ea22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ea230: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ea230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ea234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea238: 0x0  nop
    ctx->pc = 0x2ea238u;
    // NOP
    // 0x2ea23c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ea23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ea240: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2ea240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea244: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ea244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ea248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea24c: 0x0  nop
    ctx->pc = 0x2ea24cu;
    // NOP
    // 0x2ea250: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ea250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ea254: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x2ea258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea25c: 0x0  nop
    ctx->pc = 0x2ea25cu;
    // NOP
    // 0x2ea260: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ea260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ea264: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ea264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ea268: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ea268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ea26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea270: 0x0  nop
    ctx->pc = 0x2ea270u;
    // NOP
    // 0x2ea274: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ea274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ea278: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA278u;
    SET_GPR_U32(ctx, 31, 0x2EA280u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA278u, 0x2EA280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA280u;
label_2ea280:
    // 0x2ea280: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ea280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ea284: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ea284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ea288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea28c: 0x0  nop
    ctx->pc = 0x2ea28cu;
    // NOP
    // 0x2ea290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea294: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ea294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ea298: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA298u;
    SET_GPR_U32(ctx, 31, 0x2EA2A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA298u, 0x2EA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2A0u;
label_2ea2a0:
    // 0x2ea2a0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ea2a4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ea2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ea2a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea2ac: 0x0  nop
    ctx->pc = 0x2ea2acu;
    // NOP
    // 0x2ea2b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ea2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea2b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ea2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2ea2b8u;
}
