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

// Function: entry_0021c6a4
// Address: 0x21c6a4 - 0x21c768
void entry_0021c6a4_0x21c6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c6a4_0x21c6a4");
#endif

    switch (ctx->pc) {
        case 0x21c6bcu: goto label_21c6bc;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c754u: goto label_21c754;
        case 0x21c760u: goto label_21c760;
        default: break;
    }

    ctx->pc = 0x21c6a4u;

    // 0x21c6a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c6a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21c6a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c6ac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x21c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c6b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x21c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x21c6b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C6B4u;
    SET_GPR_U32(ctx, 31, 0x21C6BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C6B4u, 0x21C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6BCu;
label_21c6bc:
    // 0x21c6bc: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x21c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c6c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x21c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c6c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c6cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x21c6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21c6d0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C6D0u;
    SET_GPR_U32(ctx, 31, 0x21C6D8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C6D0u, 0x21C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6D8u;
label_21c6d8:
    // 0x21c6d8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x21c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c6e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x21c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c6e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c6e8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21c6ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C6ECu;
    SET_GPR_U32(ctx, 31, 0x21C6F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C6ECu, 0x21C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6F4u;
label_21c6f4:
    // 0x21c6f4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x21c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c6fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c704: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x21c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21c708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21c70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c710: 0x0  nop
    ctx->pc = 0x21c710u;
    // NOP
    // 0x21c714: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x21c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x21c718: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c71c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21C71Cu;
    {
        const bool branch_taken_0x21c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c71c) {
            ctx->pc = 0x21C768u;
            return;
        }
    }
    ctx->pc = 0x21C724u;
    // 0x21c724: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x21c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x21c728: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21c72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c730: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21c734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c738: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c73c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21c73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21c740: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c740u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c744: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21c744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c748: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c748u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c74c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C74Cu;
    SET_GPR_U32(ctx, 31, 0x21C754u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C74Cu, 0x21C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C754u;
label_21c754:
    // 0x21c754: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c758: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C758u;
    SET_GPR_U32(ctx, 31, 0x21C760u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C758u, 0x21C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C760u;
label_21c760:
    // 0x21c760: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21C760u;
    {
        const bool branch_taken_0x21c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c760) {
            ctx->pc = 0x21C7D0u;
            return;
        }
    }
    ctx->pc = 0x21C768u;
}
