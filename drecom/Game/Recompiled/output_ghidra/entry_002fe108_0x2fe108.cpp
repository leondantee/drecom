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

// Function: entry_002fe108
// Address: 0x2fe108 - 0x2fe1f0
void entry_002fe108_0x2fe108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe108_0x2fe108");
#endif

    switch (ctx->pc) {
        case 0x2fe120u: goto label_2fe120;
        case 0x2fe12cu: goto label_2fe12c;
        case 0x2fe148u: goto label_2fe148;
        case 0x2fe164u: goto label_2fe164;
        case 0x2fe190u: goto label_2fe190;
        default: break;
    }

    ctx->pc = 0x2fe108u;

    // 0x2fe108: 0x24043b00  addiu       $a0, $zero, 0x3B00
    ctx->pc = 0x2fe108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2fe10c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe110: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe114: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe114u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe118: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE118u;
    SET_GPR_U32(ctx, 31, 0x2FE120u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE118u, 0x2FE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE120u;
label_2fe120:
    // 0x2fe120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe124: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE124u;
    SET_GPR_U32(ctx, 31, 0x2FE12Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE124u, 0x2FE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE12Cu;
label_2fe12c:
    // 0x2fe12c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fe12cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe130: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2fe130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe134: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2fe134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2fe138: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FE138u;
    {
        const bool branch_taken_0x2fe138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe138) {
            ctx->pc = 0x2FE1F0u;
            return;
        }
    }
    ctx->pc = 0x2FE140u;
    // 0x2fe140: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE140u;
    SET_GPR_U32(ctx, 31, 0x2FE148u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE140u, 0x2FE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE148u;
label_2fe148:
    // 0x2fe148: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe14c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe150: 0x0  nop
    ctx->pc = 0x2fe150u;
    // NOP
    // 0x2fe154: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe158: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2fe15c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE15Cu;
    SET_GPR_U32(ctx, 31, 0x2FE164u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE15Cu, 0x2FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE164u;
label_2fe164:
    // 0x2fe164: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2fe164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2fe168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe16c: 0x0  nop
    ctx->pc = 0x2fe16cu;
    // NOP
    // 0x2fe170: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe174: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x2fe174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x2fe178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe17c: 0x0  nop
    ctx->pc = 0x2fe17cu;
    // NOP
    // 0x2fe180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe184: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2fe188: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE188u;
    SET_GPR_U32(ctx, 31, 0x2FE190u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE188u, 0x2FE190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE190u;
label_2fe190:
    // 0x2fe190: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe198: 0x0  nop
    ctx->pc = 0x2fe198u;
    // NOP
    // 0x2fe19c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe1a0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2fe1a4: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe1a8: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2fe1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2fe1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1b0: 0x0  nop
    ctx->pc = 0x2fe1b0u;
    // NOP
    // 0x2fe1b4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2fe1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2fe1b8: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2fe1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe1bc: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2fe1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2fe1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1c4: 0x0  nop
    ctx->pc = 0x2fe1c4u;
    // NOP
    // 0x2fe1c8: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe1cc: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2fe1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe1d0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2fe1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2fe1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1d8: 0x0  nop
    ctx->pc = 0x2fe1d8u;
    // NOP
    // 0x2fe1dc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fe1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2fe1e0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x2fe1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x2fe1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1e8: 0x0  nop
    ctx->pc = 0x2fe1e8u;
    // NOP
    // 0x2fe1ec: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fe1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->pc = 0x2fe1f0u;
}
