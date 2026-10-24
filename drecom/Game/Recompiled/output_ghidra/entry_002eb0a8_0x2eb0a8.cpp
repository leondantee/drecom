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

// Function: entry_002eb0a8
// Address: 0x2eb0a8 - 0x2eb310
void entry_002eb0a8_0x2eb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb0a8_0x2eb0a8");
#endif

    switch (ctx->pc) {
        case 0x2eb0e8u: goto label_2eb0e8;
        case 0x2eb0f4u: goto label_2eb0f4;
        case 0x2eb154u: goto label_2eb154;
        case 0x2eb178u: goto label_2eb178;
        case 0x2eb19cu: goto label_2eb19c;
        case 0x2eb1c0u: goto label_2eb1c0;
        case 0x2eb224u: goto label_2eb224;
        case 0x2eb254u: goto label_2eb254;
        default: break;
    }

    ctx->pc = 0x2eb0a8u;

    // 0x2eb0a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb0ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2eb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eb0b0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eb0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eb0b4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2eb0b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb0bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eb0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eb0c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eb0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eb0c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eb0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eb0c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eb0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eb0cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eb0d0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eb0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb0d4: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2eb0d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eb0d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb0dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2eb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2eb0e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EB0E0u;
    SET_GPR_U32(ctx, 31, 0x2EB0E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EB0E0u, 0x2EB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0E8u;
label_2eb0e8:
    // 0x2eb0e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2eb0e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb0ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EB0ECu;
    SET_GPR_U32(ctx, 31, 0x2EB0F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EB0ECu, 0x2EB0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0F4u;
label_2eb0f4:
    // 0x2eb0f4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2eb0f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb0f8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eb0fc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eb0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eb100: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2EB100u;
    {
        const bool branch_taken_0x2eb100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb100) {
            ctx->pc = 0x2EB310u;
            return;
        }
    }
    ctx->pc = 0x2EB108u;
    // 0x2eb108: 0x3c0241c7  lui         $v0, 0x41C7
    ctx->pc = 0x2eb108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16839 << 16));
    // 0x2eb10c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eb10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eb110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb114: 0x0  nop
    ctx->pc = 0x2eb114u;
    // NOP
    // 0x2eb118: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eb11c: 0x3c0241c4  lui         $v0, 0x41C4
    ctx->pc = 0x2eb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16836 << 16));
    // 0x2eb120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb124: 0x0  nop
    ctx->pc = 0x2eb124u;
    // NOP
    // 0x2eb128: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eb12c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2eb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2eb130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb134: 0x0  nop
    ctx->pc = 0x2eb134u;
    // NOP
    // 0x2eb138: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eb13c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2eb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2eb140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb144: 0x0  nop
    ctx->pc = 0x2eb144u;
    // NOP
    // 0x2eb148: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eb14c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB14Cu;
    SET_GPR_U32(ctx, 31, 0x2EB154u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB14Cu, 0x2EB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB154u;
label_2eb154:
    // 0x2eb154: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb15c: 0x0  nop
    ctx->pc = 0x2eb15cu;
    // NOP
    // 0x2eb160: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb164: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb16c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eb170: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB170u;
    SET_GPR_U32(ctx, 31, 0x2EB178u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB170u, 0x2EB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB178u;
label_2eb178:
    // 0x2eb178: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb17c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb180: 0x0  nop
    ctx->pc = 0x2eb180u;
    // NOP
    // 0x2eb184: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb188: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb18c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb190: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eb194: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB194u;
    SET_GPR_U32(ctx, 31, 0x2EB19Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB194u, 0x2EB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB19Cu;
label_2eb19c:
    // 0x2eb19c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb1a4: 0x0  nop
    ctx->pc = 0x2eb1a4u;
    // NOP
    // 0x2eb1a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb1a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb1ac: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb1b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb1b4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eb1b8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB1B8u;
    SET_GPR_U32(ctx, 31, 0x2EB1C0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB1B8u, 0x2EB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1C0u;
label_2eb1c0:
    // 0x2eb1c0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eb1c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb1c8: 0x0  nop
    ctx->pc = 0x2eb1c8u;
    // NOP
    // 0x2eb1cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb1d0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb1d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb1d8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eb1dc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eb1e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb1e8: 0x0  nop
    ctx->pc = 0x2eb1e8u;
    // NOP
    // 0x2eb1ec: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2eb1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2eb1f0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eb1f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb1fc: 0x0  nop
    ctx->pc = 0x2eb1fcu;
    // NOP
    // 0x2eb200: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2eb200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2eb204: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eb208: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb210: 0x0  nop
    ctx->pc = 0x2eb210u;
    // NOP
    // 0x2eb214: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2eb214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2eb218: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2eb218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb21c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EB21Cu;
    SET_GPR_U32(ctx, 31, 0x2EB224u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EB21Cu, 0x2EB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB224u;
label_2eb224:
    // 0x2eb224: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2eb224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2eb228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb22c: 0x0  nop
    ctx->pc = 0x2eb22cu;
    // NOP
    // 0x2eb230: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb234: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eb234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eb238: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2eb238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2eb23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb240: 0x0  nop
    ctx->pc = 0x2eb240u;
    // NOP
    // 0x2eb244: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eb244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eb248: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2eb248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb24c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EB24Cu;
    SET_GPR_U32(ctx, 31, 0x2EB254u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EB24Cu, 0x2EB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB254u;
label_2eb254:
    // 0x2eb254: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2eb254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2eb258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eb258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb25c: 0x0  nop
    ctx->pc = 0x2eb25cu;
    // NOP
    // 0x2eb260: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb264: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eb264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eb268: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2eb268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2eb26c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb270: 0x0  nop
    ctx->pc = 0x2eb270u;
    // NOP
    // 0x2eb274: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eb274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eb278: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2eb27c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb280: 0x0  nop
    ctx->pc = 0x2eb280u;
    // NOP
    // 0x2eb284: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eb284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eb288: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2eb288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2eb28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb290: 0x0  nop
    ctx->pc = 0x2eb290u;
    // NOP
    // 0x2eb294: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eb294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eb298: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eb298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eb29c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eb29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eb2a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb2a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2a4: 0x0  nop
    ctx->pc = 0x2eb2a4u;
    // NOP
    // 0x2eb2a8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eb2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eb2ac: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eb2b0: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eb2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eb2b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2b8: 0x0  nop
    ctx->pc = 0x2eb2b8u;
    // NOP
    // 0x2eb2bc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eb2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eb2c0: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x2eb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x2eb2c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2c8: 0x0  nop
    ctx->pc = 0x2eb2c8u;
    // NOP
    // 0x2eb2cc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eb2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eb2d0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2eb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2eb2d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2d8: 0x0  nop
    ctx->pc = 0x2eb2d8u;
    // NOP
    // 0x2eb2dc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eb2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eb2e0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2eb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2eb2e4: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2eb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2eb2e8: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x2eb2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x2eb2ec: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2eb2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2eb2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2f4: 0x0  nop
    ctx->pc = 0x2eb2f4u;
    // NOP
    // 0x2eb2f8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2eb2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2eb2fc: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2eb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2eb300: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2eb300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2eb304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb308: 0x0  nop
    ctx->pc = 0x2eb308u;
    // NOP
    // 0x2eb30c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eb30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    ctx->pc = 0x2eb310u;
}
