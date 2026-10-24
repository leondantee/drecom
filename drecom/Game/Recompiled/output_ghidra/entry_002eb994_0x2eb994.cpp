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

// Function: entry_002eb994
// Address: 0x2eb994 - 0x2ebc18
void entry_002eb994_0x2eb994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb994_0x2eb994");
#endif

    switch (ctx->pc) {
        case 0x2eb9d4u: goto label_2eb9d4;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eba54u: goto label_2eba54;
        case 0x2eba78u: goto label_2eba78;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebac0u: goto label_2ebac0;
        case 0x2ebae8u: goto label_2ebae8;
        case 0x2ebb18u: goto label_2ebb18;
        case 0x2ebbdcu: goto label_2ebbdc;
        case 0x2ebbfcu: goto label_2ebbfc;
        default: break;
    }

    ctx->pc = 0x2eb994u;

    // 0x2eb994: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eb994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb998: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2eb998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eb99c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eb99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eb9a0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2eb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2eb9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb9a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eb9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eb9ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eb9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eb9b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eb9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eb9b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eb9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eb9b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eb9bc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eb9bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb9c0: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x2eb9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2eb9c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eb9c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb9c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2eb9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2eb9cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EB9CCu;
    SET_GPR_U32(ctx, 31, 0x2EB9D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EB9CCu, 0x2EB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9D4u;
label_2eb9d4:
    // 0x2eb9d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2eb9d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb9d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EB9D8u;
    SET_GPR_U32(ctx, 31, 0x2EB9E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EB9D8u, 0x2EB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9E0u;
label_2eb9e0:
    // 0x2eb9e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2eb9e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb9e4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eb9e8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eb9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eb9ec: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2EB9ECu;
    {
        const bool branch_taken_0x2eb9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb9ec) {
            ctx->pc = 0x2EBC18u;
            return;
        }
    }
    ctx->pc = 0x2EB9F4u;
    // 0x2eb9f4: 0x3c0241cf  lui         $v0, 0x41CF
    ctx->pc = 0x2eb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16847 << 16));
    // 0x2eb9f8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eb9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eb9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba00: 0x0  nop
    ctx->pc = 0x2eba00u;
    // NOP
    // 0x2eba04: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eba04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eba08: 0x3c0241cc  lui         $v0, 0x41CC
    ctx->pc = 0x2eba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16844 << 16));
    // 0x2eba0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba10: 0x0  nop
    ctx->pc = 0x2eba10u;
    // NOP
    // 0x2eba14: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eba14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eba18: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2eba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2eba1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba20: 0x0  nop
    ctx->pc = 0x2eba20u;
    // NOP
    // 0x2eba24: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eba28: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2eba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2eba2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba30: 0x0  nop
    ctx->pc = 0x2eba30u;
    // NOP
    // 0x2eba34: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eba38: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eba3c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eba40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba44: 0x0  nop
    ctx->pc = 0x2eba44u;
    // NOP
    // 0x2eba48: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2eba48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2eba4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBA4Cu, 0x2EBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA54u;
label_2eba54:
    // 0x2eba54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eba54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eba58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eba58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eba5c: 0x0  nop
    ctx->pc = 0x2eba5cu;
    // NOP
    // 0x2eba60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eba60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eba64: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eba68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eba68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eba6c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eba6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eba70: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBA70u;
    SET_GPR_U32(ctx, 31, 0x2EBA78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBA70u, 0x2EBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA78u;
label_2eba78:
    // 0x2eba78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eba7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eba7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eba80: 0x0  nop
    ctx->pc = 0x2eba80u;
    // NOP
    // 0x2eba84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eba84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eba88: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eba8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eba8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eba90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eba94: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBA94u;
    SET_GPR_U32(ctx, 31, 0x2EBA9Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBA94u, 0x2EBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA9Cu;
label_2eba9c:
    // 0x2eba9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebaa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebaa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebaa4: 0x0  nop
    ctx->pc = 0x2ebaa4u;
    // NOP
    // 0x2ebaa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebaa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebaac: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebab4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ebab8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBAB8u;
    SET_GPR_U32(ctx, 31, 0x2EBAC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBAB8u, 0x2EBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAC0u;
label_2ebac0:
    // 0x2ebac0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ebac4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebac8: 0x0  nop
    ctx->pc = 0x2ebac8u;
    // NOP
    // 0x2ebacc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebaccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebad0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebad8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ebadc: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2ebadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ebae0: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EBAE0u;
    SET_GPR_U32(ctx, 31, 0x2EBAE8u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EBAE0u, 0x2EBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAE8u;
label_2ebae8:
    // 0x2ebae8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ebae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ebaec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebaf0: 0x0  nop
    ctx->pc = 0x2ebaf0u;
    // NOP
    // 0x2ebaf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebaf8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ebaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ebafc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ebafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ebb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb04: 0x0  nop
    ctx->pc = 0x2ebb04u;
    // NOP
    // 0x2ebb08: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ebb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ebb0c: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2ebb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ebb10: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EBB10u;
    SET_GPR_U32(ctx, 31, 0x2EBB18u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EBB10u, 0x2EBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB18u;
label_2ebb18:
    // 0x2ebb18: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ebb1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebb20: 0x0  nop
    ctx->pc = 0x2ebb20u;
    // NOP
    // 0x2ebb24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebb28: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ebb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ebb2c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ebb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ebb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb34: 0x0  nop
    ctx->pc = 0x2ebb34u;
    // NOP
    // 0x2ebb38: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ebb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ebb3c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ebb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ebb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb44: 0x0  nop
    ctx->pc = 0x2ebb44u;
    // NOP
    // 0x2ebb48: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ebb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ebb4c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ebb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ebb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb54: 0x0  nop
    ctx->pc = 0x2ebb54u;
    // NOP
    // 0x2ebb58: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ebb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ebb5c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ebb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ebb60: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ebb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ebb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb68: 0x0  nop
    ctx->pc = 0x2ebb68u;
    // NOP
    // 0x2ebb6c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ebb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ebb70: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ebb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ebb74: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ebb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ebb78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb7c: 0x0  nop
    ctx->pc = 0x2ebb7cu;
    // NOP
    // 0x2ebb80: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ebb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ebb84: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2ebb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb8c: 0x0  nop
    ctx->pc = 0x2ebb8cu;
    // NOP
    // 0x2ebb90: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ebb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ebb94: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ebb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ebb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb9c: 0x0  nop
    ctx->pc = 0x2ebb9cu;
    // NOP
    // 0x2ebba0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ebba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ebba4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ebba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ebba8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2ebba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2ebbac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2ebbb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ebbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ebbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebbb8: 0x0  nop
    ctx->pc = 0x2ebbb8u;
    // NOP
    // 0x2ebbbc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ebbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ebbc0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ebbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ebbc4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ebbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ebbc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebbcc: 0x0  nop
    ctx->pc = 0x2ebbccu;
    // NOP
    // 0x2ebbd0: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ebbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ebbd4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBBD4u;
    SET_GPR_U32(ctx, 31, 0x2EBBDCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBBD4u, 0x2EBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBDCu;
label_2ebbdc:
    // 0x2ebbdc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ebbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ebbe0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ebbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ebbe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebbe8: 0x0  nop
    ctx->pc = 0x2ebbe8u;
    // NOP
    // 0x2ebbec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebbf0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ebbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ebbf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBBF4u;
    SET_GPR_U32(ctx, 31, 0x2EBBFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBBF4u, 0x2EBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBFCu;
label_2ebbfc:
    // 0x2ebbfc: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ebbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ebc00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ebc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ebc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ebc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebc08: 0x0  nop
    ctx->pc = 0x2ebc08u;
    // NOP
    // 0x2ebc0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebc10: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ebc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ebc14: 0x0  nop
    ctx->pc = 0x2ebc14u;
    // NOP
    ctx->pc = 0x2ebc18u;
}
