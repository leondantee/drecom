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

// Function: entry_002fb4dc
// Address: 0x2fb4dc - 0x2fb5e4
void entry_002fb4dc_0x2fb4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb4dc_0x2fb4dc");
#endif

    switch (ctx->pc) {
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb53cu: goto label_2fb53c;
        default: break;
    }

    ctx->pc = 0x2fb4dcu;

    // 0x2fb4dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb4e0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2fb4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fb4e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb4e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb4ec: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2fb4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2fb4f0: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x2fb4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fb4f4: 0xc34024  and         $t0, $a2, $v1
    ctx->pc = 0x2fb4f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb4f8: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x2fb4f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2fb4fc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb500: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fb500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb504: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fb504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fb508: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb50c: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x2fb50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x2fb510: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2fb510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb514: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fb514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fb518: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x2fb518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2fb51c: 0x24041900  addiu       $a0, $zero, 0x1900
    ctx->pc = 0x2fb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x2fb520: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb520u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb524: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb524u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb528: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB528u;
    SET_GPR_U32(ctx, 31, 0x2FB530u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB528u, 0x2FB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB530u;
label_2fb530:
    // 0x2fb530: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb530u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb534: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB534u;
    SET_GPR_U32(ctx, 31, 0x2FB53Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB534u, 0x2FB53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB53Cu;
label_2fb53c:
    // 0x2fb53c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb540: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2fb540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x2fb544: 0x868315f0  lh          $v1, 0x15F0($s4)
    ctx->pc = 0x2fb544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb548: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2fb548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb54c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fb54cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fb550: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fb550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fb554: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb554u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb558: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2fb558u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb55c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb560: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x2fb560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2fb564: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb564u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb568: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2fb568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb56c: 0x34c50011  ori         $a1, $a2, 0x11
    ctx->pc = 0x2fb56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x2fb570: 0x12250037  beq         $s1, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FB570u;
    {
        const bool branch_taken_0x2fb570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fb570) {
            ctx->pc = 0x2FB650u;
            return;
        }
    }
    ctx->pc = 0x2FB578u;
    // 0x2fb578: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb57c: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x2fb57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb580: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb584: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x2fb588: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2fb588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb58c: 0xa2250348  sb          $a1, 0x348($s1)
    ctx->pc = 0x2fb58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x2fb590: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2fb590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2fb594: 0xa2240346  sb          $a0, 0x346($s1)
    ctx->pc = 0x2fb594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fb598: 0x3c034332  lui         $v1, 0x4332
    ctx->pc = 0x2fb598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5a0: 0x0  nop
    ctx->pc = 0x2fb5a0u;
    // NOP
    // 0x2fb5a4: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb5a8: 0x3c044332  lui         $a0, 0x4332
    ctx->pc = 0x2fb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb5ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb5acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5b0: 0x0  nop
    ctx->pc = 0x2fb5b0u;
    // NOP
    // 0x2fb5b4: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb5b8: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb5bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb5bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5c0: 0x0  nop
    ctx->pc = 0x2fb5c0u;
    // NOP
    // 0x2fb5c4: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb5c8: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x2fb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb5cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb5ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5d0: 0x0  nop
    ctx->pc = 0x2fb5d0u;
    // NOP
    // 0x2fb5d4: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb5d8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb5d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb5dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB5DCu;
    {
        const bool branch_taken_0x2fb5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb5dc) {
            ctx->pc = 0x2FB640u;
            return;
        }
    }
    ctx->pc = 0x2FB5E4u;
}
