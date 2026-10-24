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

// Function: entry_002fb650
// Address: 0x2fb650 - 0x2fb75c
void entry_002fb650_0x2fb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb650_0x2fb650");
#endif

    switch (ctx->pc) {
        case 0x2fb6a4u: goto label_2fb6a4;
        case 0x2fb6b0u: goto label_2fb6b0;
        default: break;
    }

    ctx->pc = 0x2fb650u;

    // 0x2fb650: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb654: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2fb654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb658: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb65c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb660: 0x3bc38  dsll        $s7, $v1, 16
    ctx->pc = 0x2fb660u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << 16);
    // 0x2fb664: 0x36e3ffff  ori         $v1, $s7, 0xFFFF
    ctx->pc = 0x2fb664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2fb668: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2fb668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fb66c: 0x4b83c  dsll32      $s7, $a0, 0
    ctx->pc = 0x2fb66cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb670: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb674: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2fb674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb678: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb67c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb680: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fb680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fb684: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2fb684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb688: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2fb688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2fb68c: 0x2e32825  or          $a1, $s7, $v1
    ctx->pc = 0x2fb68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x2fb690: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x2fb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x2fb694: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb698: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb698u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb69c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB69Cu;
    SET_GPR_U32(ctx, 31, 0x2FB6A4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB69Cu, 0x2FB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6A4u;
label_2fb6a4:
    // 0x2fb6a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb6a8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB6A8u;
    SET_GPR_U32(ctx, 31, 0x2FB6B0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB6A8u, 0x2FB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6B0u;
label_2fb6b0:
    // 0x2fb6b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fb6b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb6b4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb6b8: 0xac660104  sw          $a2, 0x104($v1)
    ctx->pc = 0x2fb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 6));
    // 0x2fb6bc: 0x868315f0  lh          $v1, 0x15F0($s4)
    ctx->pc = 0x2fb6bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb6c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fb6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb6c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb6c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb6c8: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x2fb6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb6cc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2fb6ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2fb6d0: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x2fb6d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fb6d4: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb6d8: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x2fb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x2fb6dc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb6dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb6e0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2fb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb6e4: 0x34870011  ori         $a3, $a0, 0x11
    ctx->pc = 0x2fb6e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2fb6e8: 0x12270037  beq         $s1, $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FB6E8u;
    {
        const bool branch_taken_0x2fb6e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x2fb6e8) {
            ctx->pc = 0x2FB7C8u;
            return;
        }
    }
    ctx->pc = 0x2FB6F0u;
    // 0x2fb6f0: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb6f4: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x2fb6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb6f8: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x2fb6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2fb6fc: 0xae240b18  sw          $a0, 0xB18($s1)
    ctx->pc = 0x2fb6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 4));
    // 0x2fb700: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fb700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb704: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fb704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb708: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2fb708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fb70c: 0xa2240346  sb          $a0, 0x346($s1)
    ctx->pc = 0x2fb70cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fb710: 0x3c044332  lui         $a0, 0x4332
    ctx->pc = 0x2fb710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb718: 0x0  nop
    ctx->pc = 0x2fb718u;
    // NOP
    // 0x2fb71c: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb720: 0x3c074332  lui         $a3, 0x4332
    ctx->pc = 0x2fb720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb724: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2fb724u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb728: 0x0  nop
    ctx->pc = 0x2fb728u;
    // NOP
    // 0x2fb72c: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb730: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb734: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb734u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb738: 0x0  nop
    ctx->pc = 0x2fb738u;
    // NOP
    // 0x2fb73c: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb740: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb744: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb744u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb748: 0x0  nop
    ctx->pc = 0x2fb748u;
    // NOP
    // 0x2fb74c: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb750: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb750u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb754: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB754u;
    {
        const bool branch_taken_0x2fb754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb754) {
            ctx->pc = 0x2FB7B8u;
            return;
        }
    }
    ctx->pc = 0x2FB75Cu;
}
