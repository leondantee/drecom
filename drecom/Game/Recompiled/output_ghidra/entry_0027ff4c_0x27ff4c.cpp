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

// Function: entry_0027ff4c
// Address: 0x27ff4c - 0x280010
void entry_0027ff4c_0x27ff4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ff4c_0x27ff4c");
#endif

    switch (ctx->pc) {
        case 0x27ff80u: goto label_27ff80;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ff94u: goto label_27ff94;
        case 0x27ffc8u: goto label_27ffc8;
        case 0x27ffd4u: goto label_27ffd4;
        case 0x27fff8u: goto label_27fff8;
        default: break;
    }

    ctx->pc = 0x27ff4cu;

    // 0x27ff4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27ff50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ff54: 0x24422050  addiu       $v0, $v0, 0x2050
    ctx->pc = 0x27ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8272));
    // 0x27ff58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ff5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27ff5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ff60: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ff64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27ff68: 0x24042100  addiu       $a0, $zero, 0x2100
    ctx->pc = 0x27ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    // 0x27ff6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ff6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ff70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27ff70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ff74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ff74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ff78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27FF78u;
    SET_GPR_U32(ctx, 31, 0x27FF80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27FF78u, 0x27FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF80u;
label_27ff80:
    // 0x27ff80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ff80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ff84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27FF84u;
    SET_GPR_U32(ctx, 31, 0x27FF8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27FF84u, 0x27FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF8Cu;
label_27ff8c:
    // 0x27ff8c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27FF8Cu;
    SET_GPR_U32(ctx, 31, 0x27FF94u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27FF8Cu, 0x27FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF94u;
label_27ff94:
    // 0x27ff94: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27ff98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ff98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ff9c: 0x0  nop
    ctx->pc = 0x27ff9cu;
    // NOP
    // 0x27ffa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27ffa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27ffa4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x27ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ffa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27ffa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27ffac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27ffb0: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x27ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x27ffb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27ffb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ffb8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ffbc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ffbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ffc0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27FFC0u;
    SET_GPR_U32(ctx, 31, 0x27FFC8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27FFC0u, 0x27FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFC8u;
label_27ffc8:
    // 0x27ffc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27ffc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27ffcc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27FFCCu;
    SET_GPR_U32(ctx, 31, 0x27FFD4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27FFCCu, 0x27FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFD4u;
label_27ffd4:
    // 0x27ffd4: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x27ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x27ffd8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27ffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27ffdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27ffdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ffe0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x27ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x27ffe4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27ffe8: 0x24450409  addiu       $a1, $v0, 0x409
    ctx->pc = 0x27ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1033));
    // 0x27ffec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27fff0: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x27FFF0u;
    SET_GPR_U32(ctx, 31, 0x27FFF8u);
    ctx->pc = 0x1A03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03A0u, 0x27FFF0u, 0x27FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFF8u;
label_27fff8:
    // 0x27fff8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x27fff8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27fffc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x27fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x280000: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x280000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x280004: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x280004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x280008: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x280008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x28000c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28000cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x280010u;
}
