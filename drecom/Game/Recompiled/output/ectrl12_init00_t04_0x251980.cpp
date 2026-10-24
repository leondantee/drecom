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

// Function: ectrl12_init00_t04
// Address: 0x251980 - 0x251c48
void ectrl12_init00_t04_0x251980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl12_init00_t04_0x251980");
#endif

    switch (ctx->pc) {
        case 0x251a70u: goto label_251a70;
        case 0x251a7cu: goto label_251a7c;
        case 0x251ab0u: goto label_251ab0;
        case 0x251abcu: goto label_251abc;
        case 0x251af0u: goto label_251af0;
        case 0x251afcu: goto label_251afc;
        case 0x251b30u: goto label_251b30;
        case 0x251b3cu: goto label_251b3c;
        case 0x251b70u: goto label_251b70;
        case 0x251b7cu: goto label_251b7c;
        case 0x251bb0u: goto label_251bb0;
        case 0x251bbcu: goto label_251bbc;
        case 0x251c2cu: goto label_251c2c;
        case 0x251c38u: goto label_251c38;
        default: break;
    }

    ctx->pc = 0x251980u;

    // 0x251980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251984: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x251988: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x251988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x25198c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251990: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x251990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x251994: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x251994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x251998: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x251998u;
    {
        const bool branch_taken_0x251998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251998) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519A0u;
    // 0x2519a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2519a4: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2519A4u;
    {
        const bool branch_taken_0x2519a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519a4) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519ACu;
    // 0x2519ac: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2519acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2519b0: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2519B0u;
    {
        const bool branch_taken_0x2519b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519b0) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519B8u;
    // 0x2519b8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2519b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2519bc: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2519BCu;
    {
        const bool branch_taken_0x2519bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519bc) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519C4u;
    // 0x2519c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2519c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2519c8: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2519C8u;
    {
        const bool branch_taken_0x2519c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519c8) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519D0u;
    // 0x2519d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2519d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2519d4: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x2519D4u;
    {
        const bool branch_taken_0x2519d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519d4) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519DCu;
    // 0x2519dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2519dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2519e0: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x2519E0u;
    {
        const bool branch_taken_0x2519e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519e0) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519E8u;
    // 0x2519e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2519e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2519ec: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x2519ECu;
    {
        const bool branch_taken_0x2519ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519ec) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x2519F4u;
    // 0x2519f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2519f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2519f8: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2519F8u;
    {
        const bool branch_taken_0x2519f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2519f8) {
            ctx->pc = 0x251BD8u;
            goto label_251bd8;
        }
    }
    ctx->pc = 0x251A00u;
    // 0x251a00: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x251a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x251a04: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x251A04u;
    {
        const bool branch_taken_0x251a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251a04) {
            ctx->pc = 0x251BC4u;
            goto label_251bc4;
        }
    }
    ctx->pc = 0x251A0Cu;
    // 0x251a0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251A0Cu;
    {
        const bool branch_taken_0x251a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a0c) {
            ctx->pc = 0x251A1Cu;
            goto label_251a1c;
        }
    }
    ctx->pc = 0x251A14u;
    // 0x251a14: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x251A14u;
    {
        const bool branch_taken_0x251a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a14) {
            ctx->pc = 0x251C38u;
            goto label_251c38;
        }
    }
    ctx->pc = 0x251A1Cu;
label_251a1c:
    // 0x251a1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251a20: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x251a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x251a24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x251a24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251a28: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x251a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251a2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x251a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x251a30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251a34: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x251a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251a38: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x251a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x251a3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251a40: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251a44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251a48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251a4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251a50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251a54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251a58: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251a5c: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x251a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x251a60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251a60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251a64: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251a68: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251A68u;
    SET_GPR_U32(ctx, 31, 0x251A70u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251A68u, 0x251A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A70u;
label_251a70:
    // 0x251a70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251a70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251a74: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251A74u;
    SET_GPR_U32(ctx, 31, 0x251A7Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251A74u, 0x251A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A7Cu;
label_251a7c:
    // 0x251a7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251a80: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251a84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251a88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251a8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251a90: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251a94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251a98: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251a9c: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x251a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x251aa0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251aa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251aa4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251aa8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251AA8u;
    SET_GPR_U32(ctx, 31, 0x251AB0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251AA8u, 0x251AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AB0u;
label_251ab0:
    // 0x251ab0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251ab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251ab4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251AB4u;
    SET_GPR_U32(ctx, 31, 0x251ABCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251AB4u, 0x251ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251ABCu;
label_251abc:
    // 0x251abc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251ac0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251ac4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251ac8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251acc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251ad0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251ad4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251ad8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251adc: 0x24045808  addiu       $a0, $zero, 0x5808
    ctx->pc = 0x251adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22536));
    // 0x251ae0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251ae4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251ae8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251AE8u;
    SET_GPR_U32(ctx, 31, 0x251AF0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251AE8u, 0x251AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AF0u;
label_251af0:
    // 0x251af0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251af4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251AF4u;
    SET_GPR_U32(ctx, 31, 0x251AFCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251AF4u, 0x251AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AFCu;
label_251afc:
    // 0x251afc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251b00: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251b04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251b08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251b0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251b10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251b14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251b18: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251b18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251b1c: 0x24045809  addiu       $a0, $zero, 0x5809
    ctx->pc = 0x251b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22537));
    // 0x251b20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251b24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251b28: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251B28u;
    SET_GPR_U32(ctx, 31, 0x251B30u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251B28u, 0x251B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B30u;
label_251b30:
    // 0x251b30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251b30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251b34: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251B34u;
    SET_GPR_U32(ctx, 31, 0x251B3Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251B34u, 0x251B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B3Cu;
label_251b3c:
    // 0x251b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251b40: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251b44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251b48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251b4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251b50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251b54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251b58: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251b5c: 0x2404580a  addiu       $a0, $zero, 0x580A
    ctx->pc = 0x251b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22538));
    // 0x251b60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251b64: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251b68: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251B68u;
    SET_GPR_U32(ctx, 31, 0x251B70u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251B68u, 0x251B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B70u;
label_251b70:
    // 0x251b70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251b70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251b74: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251B74u;
    SET_GPR_U32(ctx, 31, 0x251B7Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251B74u, 0x251B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B7Cu;
label_251b7c:
    // 0x251b7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251b80: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251b84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251b88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251b8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251b90: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251b94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251b98: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251b9c: 0x2404580b  addiu       $a0, $zero, 0x580B
    ctx->pc = 0x251b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22539));
    // 0x251ba0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251ba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251ba4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251ba8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251BA8u;
    SET_GPR_U32(ctx, 31, 0x251BB0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251BA8u, 0x251BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BB0u;
label_251bb0:
    // 0x251bb0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251bb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251bb4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251BB4u;
    SET_GPR_U32(ctx, 31, 0x251BBCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251BB4u, 0x251BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BBCu;
label_251bbc:
    // 0x251bbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x251BBCu;
    {
        const bool branch_taken_0x251bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251bbc) {
            ctx->pc = 0x251C38u;
            goto label_251c38;
        }
    }
    ctx->pc = 0x251BC4u;
label_251bc4:
    // 0x251bc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251bcc: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x251bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x251bd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x251bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_251bd8:
    // 0x251bd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bdc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x251bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x251be0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x251be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251be4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x251be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251be8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x251be8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x251bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bf0: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x251bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251bf4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x251bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x251bf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251bfc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251c00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251c04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251c08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251c0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251c10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251c14: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251c18: 0x24045808  addiu       $a0, $zero, 0x5808
    ctx->pc = 0x251c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22536));
    // 0x251c1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251c1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251c20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251c24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251C24u;
    SET_GPR_U32(ctx, 31, 0x251C2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251C24u, 0x251C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C2Cu;
label_251c2c:
    // 0x251c2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251c30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251C30u;
    SET_GPR_U32(ctx, 31, 0x251C38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251C30u, 0x251C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C38u;
label_251c38:
    // 0x251c38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251c38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251c3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x251c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x251c40: 0x3e00008  jr          $ra
    ctx->pc = 0x251C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251C48u;
}
