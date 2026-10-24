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

// Function: entry_001ff618
// Address: 0x1ff618 - 0x1ff8ec
void entry_001ff618_0x1ff618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff618_0x1ff618");
#endif

    switch (ctx->pc) {
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff648u: goto label_1ff648;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff7d8u: goto label_1ff7d8;
        default: break;
    }

    ctx->pc = 0x1ff618u;

    // 0x1ff618: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff61c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ff620: 0x246502c0  addiu       $a1, $v1, 0x2C0
    ctx->pc = 0x1ff620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1ff624: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FF624u;
    SET_GPR_U32(ctx, 31, 0x1FF62Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FF62Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF62Cu) { return; }
    ctx->pc = 0x1FF62Cu;
label_1ff62c:
    // 0x1ff62c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff62cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff630: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff634: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff638: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x1ff638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x1ff63c: 0x246502c0  addiu       $a1, $v1, 0x2C0
    ctx->pc = 0x1ff63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1ff640: 0xc067594  jal         func_19D650
    ctx->pc = 0x1FF640u;
    SET_GPR_U32(ctx, 31, 0x1FF648u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x1FF640u, 0x1FF648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF648u;
label_1ff648:
    // 0x1ff648: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff64c: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x1ff64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x1ff650: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1ff650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ff654: 0xc4610270  lwc1        $f1, 0x270($v1)
    ctx->pc = 0x1ff654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff658: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1ff658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ff65c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff660: 0x3c033989  lui         $v1, 0x3989
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14729 << 16));
    // 0x1ff664: 0x3465f874  ori         $a1, $v1, 0xF874
    ctx->pc = 0x1ff664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63604);
    // 0x1ff668: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ff668u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff66c: 0x0  nop
    ctx->pc = 0x1ff66cu;
    // NOP
    // 0x1ff670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ff670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ff674: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ff674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1ff678: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FF678u;
    SET_GPR_U32(ctx, 31, 0x1FF680u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FF678u, 0x1FF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF680u;
label_1ff680:
    // 0x1ff680: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1ff680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff684: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff688: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ff688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff68c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ff68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ff690: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ff690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ff694: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FF694u;
    SET_GPR_U32(ctx, 31, 0x1FF69Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FF694u, 0x1FF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF69Cu;
label_1ff69c:
    // 0x1ff69c: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1ff69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff6a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff6a4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ff6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff6a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ff6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ff6ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ff6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ff6b0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff6b4: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x1ff6b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1ff6b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff6bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff6c0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1ff6c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1ff6c4: 0x70802e28  paddub      $a1, $a0, $zero
    ctx->pc = 0x1ff6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff6c8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1ff6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff6cc: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x1ff6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ff6d0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1ff6d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ff6d4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1ff6d8: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x1ff6dc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff6e0: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x1ff6e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff6e8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ff6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff6ec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1ff6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1ff6f0: 0x32440003  andi        $a0, $s2, 0x3
    ctx->pc = 0x1ff6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x1ff6f4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1ff6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff6f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ff6f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ff6fc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1ff6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1ff700: 0xa3f025  or          $fp, $a1, $v1
    ctx->pc = 0x1ff700u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ff704: 0xde2825  or          $a1, $a2, $fp
    ctx->pc = 0x1ff704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 30));
    // 0x1ff708: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1ff708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1ff70c: 0x2831825  or          $v1, $s4, $v1
    ctx->pc = 0x1ff70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x1ff710: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ff714: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ff714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff718: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ff718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ff71c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff720: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x1ff720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ff724: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff728: 0x24a302b0  addiu       $v1, $a1, 0x2B0
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x1ff72c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff72cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff730: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff734: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1ff734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff738: 0x38438  dsll        $s0, $v1, 16
    ctx->pc = 0x1ff738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << 16);
    // 0x1ff73c: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x1ff73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1ff740: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ff740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ff744: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x1ff744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ff748: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1ff748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ff74c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff750: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff754: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x1ff754u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff758: 0x1e2c38  dsll        $a1, $fp, 16
    ctx->pc = 0x1ff758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << 16);
    // 0x1ff75c: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1ff75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ff760: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1ff760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ff764: 0xe3b825  or          $s7, $a3, $v1
    ctx->pc = 0x1ff764u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1ff768: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff76c: 0x8ca30320  lw          $v1, 0x320($a1)
    ctx->pc = 0x1ff76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x1ff770: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff774: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff778: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ff778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff77c: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1ff77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1ff780: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ff784: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1ff784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ff788: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1ff788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ff78c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff790: 0x8c630324  lw          $v1, 0x324($v1)
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1ff794: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff798: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff79c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ff79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff7a0: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1ff7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1ff7a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ff7a8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1ff7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ff7ac: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x1ff7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1ff7b0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff7b4: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1ff7b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff7b8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ff7b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff7bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff7c0: 0x74043  sra         $t0, $a3, 1
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1ff7c4: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1ff7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1ff7c8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1ff7c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1ff7cc: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1ff7ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1ff7d0: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x1FF7D0u;
    SET_GPR_U32(ctx, 31, 0x1FF7D8u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x1FF7D0u, 0x1FF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7D8u;
label_1ff7d8:
    // 0x1ff7d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ff7d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff7dc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1ff7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1ff7e0: 0x34850011  ori         $a1, $a0, 0x11
    ctx->pc = 0x1ff7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x1ff7e4: 0x122501e6  beq         $s1, $a1, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1FF7E4u;
    {
        const bool branch_taken_0x1ff7e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff7e4) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FF7ECu;
    // 0x1ff7ec: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff7f0: 0x8cc30328  lw          $v1, 0x328($a2)
    ctx->pc = 0x1ff7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 808)));
    // 0x1ff7f4: 0xae230328  sw          $v1, 0x328($s1)
    ctx->pc = 0x1ff7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 3));
    // 0x1ff7f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff7fc: 0x8c64032c  lw          $a0, 0x32C($v1)
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x1ff800: 0xae24032c  sw          $a0, 0x32C($s1)
    ctx->pc = 0x1ff800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 4));
    // 0x1ff804: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff808: 0x906602aa  lbu         $a2, 0x2AA($v1)
    ctx->pc = 0x1ff808u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1ff80c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1ff80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ff810: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x1ff810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ff814: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff818: 0xa22302aa  sb          $v1, 0x2AA($s1)
    ctx->pc = 0x1ff818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff81c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff820: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x1ff820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x1ff824: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff828: 0x92030344  lbu         $v1, 0x344($s0)
    ctx->pc = 0x1ff828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x1ff82c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff830: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff834: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x1ff834u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1ff838: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ff838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff83c: 0x70803628  paddub      $a2, $a0, $zero
    ctx->pc = 0x1ff83cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff840: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff844: 0x90640290  lbu         $a0, 0x290($v1)
    ctx->pc = 0x1ff844u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1ff848: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff84c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ff850: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff854: 0xa22302a9  sb          $v1, 0x2A9($s1)
    ctx->pc = 0x1ff854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 681), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff858: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff85c: 0x90a302a8  lbu         $v1, 0x2A8($a1)
    ctx->pc = 0x1ff85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x1ff860: 0xa22302a8  sb          $v1, 0x2A8($s1)
    ctx->pc = 0x1ff860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff864: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff868: 0xc4c002d0  lwc1        $f0, 0x2D0($a2)
    ctx->pc = 0x1ff868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff86c: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x1ff86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x1ff870: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff874: 0xc4a002d4  lwc1        $f0, 0x2D4($a1)
    ctx->pc = 0x1ff874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff878: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x1ff878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x1ff87c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff880: 0xc46002d8  lwc1        $f0, 0x2D8($v1)
    ctx->pc = 0x1ff880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff884: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x1ff884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x1ff888: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff88c: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1ff88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff890: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x1ff890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x1ff894: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff898: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1ff898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff89c: 0x3c04477f  lui         $a0, 0x477F
    ctx->pc = 0x1ff89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18303 << 16));
    // 0x1ff8a0: 0x3483ff00  ori         $v1, $a0, 0xFF00
    ctx->pc = 0x1ff8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x1ff8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff8a8: 0x0  nop
    ctx->pc = 0x1ff8a8u;
    // NOP
    // 0x1ff8ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ff8acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff8b0: 0x0  nop
    ctx->pc = 0x1ff8b0u;
    // NOP
    // 0x1ff8b4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1FF8B4u;
    {
        const bool branch_taken_0x1ff8b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ff8b4) {
            ctx->pc = 0x1FF8ECu;
            return;
        }
    }
    ctx->pc = 0x1FF8BCu;
    // 0x1ff8bc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8c0: 0xc4610338  lwc1        $f1, 0x338($v1)
    ctx->pc = 0x1ff8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff8c4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8c8: 0xc4a0033c  lwc1        $f0, 0x33C($a1)
    ctx->pc = 0x1ff8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff8cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ff8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ff8d0: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1ff8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1ff8d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ff8d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff8d8: 0x0  nop
    ctx->pc = 0x1ff8d8u;
    // NOP
    // 0x1ff8dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ff8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ff8e0: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x1ff8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    // 0x1ff8e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF8E4u;
    {
        const bool branch_taken_0x1ff8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8e4) {
            ctx->pc = 0x1FF8F8u;
            return;
        }
    }
    ctx->pc = 0x1FF8ECu;
}
