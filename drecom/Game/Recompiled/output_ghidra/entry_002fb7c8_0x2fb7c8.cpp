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

// Function: entry_002fb7c8
// Address: 0x2fb7c8 - 0x2fb8d8
void entry_002fb7c8_0x2fb7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb7c8_0x2fb7c8");
#endif

    switch (ctx->pc) {
        case 0x2fb81cu: goto label_2fb81c;
        case 0x2fb82cu: goto label_2fb82c;
        default: break;
    }

    ctx->pc = 0x2fb7c8u;

    // 0x2fb7c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb7cc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2fb7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb7d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fb7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fb7d4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb7d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb7d8: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x2fb7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x2fb7dc: 0x34a7ffff  ori         $a3, $a1, 0xFFFF
    ctx->pc = 0x2fb7dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fb7e0: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x2fb7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2fb7e4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fb7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb7e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fb7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb7ec: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2fb7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fb7f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb7f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb7f8: 0x33438  dsll        $a2, $v1, 16
    ctx->pc = 0x2fb7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 16);
    // 0x2fb7fc: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x2fb7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fb800: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fb800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fb804: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2fb804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2fb808: 0x24041903  addiu       $a0, $zero, 0x1903
    ctx->pc = 0x2fb808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6403));
    // 0x2fb80c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb810: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb810u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb814: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB814u;
    SET_GPR_U32(ctx, 31, 0x2FB81Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB814u, 0x2FB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB81Cu;
label_2fb81c:
    // 0x2fb81c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fb81cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb820: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2fb820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fb824: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB824u;
    SET_GPR_U32(ctx, 31, 0x2FB82Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB824u, 0x2FB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB82Cu;
label_2fb82c:
    // 0x2fb82c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb82cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb830: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fb830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb834: 0xacc30108  sw          $v1, 0x108($a2)
    ctx->pc = 0x2fb834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 3));
    // 0x2fb838: 0x868715f0  lh          $a3, 0x15F0($s4)
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb83c: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2fb840: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb840u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb844: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x2fb844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb848: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2fb848u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2fb84c: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x2fb84cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fb850: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb854: 0x8c850108  lw          $a1, 0x108($a0)
    ctx->pc = 0x2fb854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x2fb858: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x2fb858u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fb85c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb860: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fb860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fb864: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2FB864u;
    {
        const bool branch_taken_0x2fb864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb864) {
            ctx->pc = 0x2FB948u;
            return;
        }
    }
    ctx->pc = 0x2FB86Cu;
    // 0x2fb86c: 0x8e260b18  lw          $a2, 0xB18($s1)
    ctx->pc = 0x2fb86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb870: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x2fb870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb874: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2fb874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fb878: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x2fb87c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb880: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fb880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb884: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2fb884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fb888: 0xa2230346  sb          $v1, 0x346($s1)
    ctx->pc = 0x2fb888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb88c: 0x3c03431e  lui         $v1, 0x431E
    ctx->pc = 0x2fb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17182 << 16));
    // 0x2fb890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb894: 0x0  nop
    ctx->pc = 0x2fb894u;
    // NOP
    // 0x2fb898: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb89c: 0x3c044328  lui         $a0, 0x4328
    ctx->pc = 0x2fb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17192 << 16));
    // 0x2fb8a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb8a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb8a4: 0x0  nop
    ctx->pc = 0x2fb8a4u;
    // NOP
    // 0x2fb8a8: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb8ac: 0x3c0642d8  lui         $a2, 0x42D8
    ctx->pc = 0x2fb8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17112 << 16));
    // 0x2fb8b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb8b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb8b4: 0x0  nop
    ctx->pc = 0x2fb8b4u;
    // NOP
    // 0x2fb8b8: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb8bc: 0x3c0742b0  lui         $a3, 0x42B0
    ctx->pc = 0x2fb8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17072 << 16));
    // 0x2fb8c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2fb8c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb8c4: 0x0  nop
    ctx->pc = 0x2fb8c4u;
    // NOP
    // 0x2fb8c8: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb8cc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb8ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb8d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB8D0u;
    {
        const bool branch_taken_0x2fb8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb8d0) {
            ctx->pc = 0x2FB938u;
            return;
        }
    }
    ctx->pc = 0x2FB8D8u;
}
