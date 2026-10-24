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

// Function: caseD_3
// Address: 0x3515a0 - 0x3517a0
void caseD_3_0x3515a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x3515a0");
#endif

    switch (ctx->pc) {
        case 0x3515b0u: goto label_3515b0;
        case 0x3515c0u: goto label_3515c0;
        case 0x3515d4u: goto label_3515d4;
        case 0x3515e4u: goto label_3515e4;
        default: break;
    }

    ctx->pc = 0x3515a0u;

    // 0x3515a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3515a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3515a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3515a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3515A8u;
    SET_GPR_U32(ctx, 31, 0x3515B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3515A8u, 0x3515B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515B0u;
label_3515b0:
    // 0x3515b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3515b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3515b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3515b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3515B8u;
    SET_GPR_U32(ctx, 31, 0x3515C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3515B8u, 0x3515C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515C0u;
label_3515c0:
    // 0x3515c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3515c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3515c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3515c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3515c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3515cc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3515CCu;
    SET_GPR_U32(ctx, 31, 0x3515D4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3515CCu, 0x3515D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515D4u;
label_3515d4:
    // 0x3515d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3515d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3515d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3515dc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3515DCu;
    SET_GPR_U32(ctx, 31, 0x3515E4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3515DCu, 0x3515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515E4u;
label_3515e4:
    // 0x3515e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3515e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3515e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3515e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3515ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3515ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3515f0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3515f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3515f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3515f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3515f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3515f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3515fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3515fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351600: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351604: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351608: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x35160c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351610: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x351614: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x351614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x351618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35161c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x35161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x351624: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x351624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x351628: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35162c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x35162cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351630: 0x920300c4  lbu         $v1, 0xC4($s0)
    ctx->pc = 0x351630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x351634: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x351634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351638: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x351638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x35163c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x35163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351640: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x351640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351644: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x351644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x351648: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x35164c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x35164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351650: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x351654: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x351654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x351658: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x351658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35165c: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x35165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x351664: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x351664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x351668: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35166c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351670: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351674: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351678: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35167c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351680: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x351680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x351684: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x351684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x351688: 0x24c7bd00  addiu       $a3, $a2, -0x4300
    ctx->pc = 0x351688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x35168c: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x35168cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x351690: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x351694: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x351694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x351698: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35169c: 0xc5000078  lwc1        $f0, 0x78($t0)
    ctx->pc = 0x35169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3516a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3516a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3516a4: 0xe5000078  swc1        $f0, 0x78($t0)
    ctx->pc = 0x3516a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 120), bits); }
    // 0x3516a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3516a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3516ac: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3516b0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3516b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3516b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3516b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3516b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3516bc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3516bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3516c0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x3516c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3516c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3516c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3516c8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x3516c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x3516cc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3516ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3516d0: 0x3c133f4c  lui         $s3, 0x3F4C
    ctx->pc = 0x3516d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16204 << 16));
    // 0x3516d4: 0x3663cccd  ori         $v1, $s3, 0xCCCD
    ctx->pc = 0x3516d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)52429);
    // 0x3516d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3516d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3516dc: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x3516dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3516e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3516e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3516e4: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x3516e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x3516e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3516e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3516ec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3516f0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3516f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3516f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3516f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3516f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3516fc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3516fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351700: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x351700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x351704: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351708: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x351708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x35170c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x35170cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351710: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x351710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x351714: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x351714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x351718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35171c: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x35171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x351724: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x351724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x351728: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x351728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35172c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x35172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x351730: 0x908300c4  lbu         $v1, 0xC4($a0)
    ctx->pc = 0x351730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x351734: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351738: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35173c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351740: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x351740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x351744: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351748: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x35174c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x35174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351750: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x351754: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x351754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x351758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35175c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x35175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x351764: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x351764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x351768: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35176c: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x35176cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x351770: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x351770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x351774: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x351774u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x351778: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x351778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x35177c: 0x10c70008  beq         $a2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x35177Cu;
    {
        const bool branch_taken_0x35177c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x35177c) {
            ctx->pc = 0x3517A0u;
            return;
        }
    }
    ctx->pc = 0x351784u;
    // 0x351784: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x351784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351788: 0x85031278  lh          $v1, 0x1278($t0)
    ctx->pc = 0x351788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4728)));
    // 0x35178c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35178cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x351790: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x351790u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x351794: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x351794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x351798: 0x14640081  bne         $v1, $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x351798u;
    {
        const bool branch_taken_0x351798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x351798) {
            ctx->pc = 0x3519A0u;
            return;
        }
    }
    ctx->pc = 0x3517A0u;
}
