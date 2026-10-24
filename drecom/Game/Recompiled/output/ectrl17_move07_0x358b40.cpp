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

// Function: ectrl17_move07
// Address: 0x358b40 - 0x358cc4
void ectrl17_move07_0x358b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl17_move07_0x358b40");
#endif

    switch (ctx->pc) {
        case 0x358bf8u: goto label_358bf8;
        case 0x358c04u: goto label_358c04;
        case 0x358c3cu: goto label_358c3c;
        case 0x358c54u: goto label_358c54;
        case 0x358c68u: goto label_358c68;
        case 0x358c7cu: goto label_358c7c;
        default: break;
    }

    ctx->pc = 0x358b40u;

    // 0x358b40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x358b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x358b44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x358b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x358b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x358b4c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x358b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x358b50: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x358b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x358b54: 0x2463a710  addiu       $v1, $v1, -0x58F0
    ctx->pc = 0x358b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
    // 0x358b58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x358b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x358b5c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x358b5cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA710u));
    // 0x358b60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x358b60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x358b64: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x358b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x358b68: 0x2463a720  addiu       $v1, $v1, -0x58E0
    ctx->pc = 0x358b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944544));
    // 0x358b6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x358b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358b70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x358b70u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA720u));
    // 0x358b74: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x358b74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x358b78: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358b7c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x358b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x358b80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x358b84: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x358B84u;
    {
        const bool branch_taken_0x358b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x358b84) {
            ctx->pc = 0x358C8Cu;
            goto label_358c8c;
        }
    }
    ctx->pc = 0x358B8Cu;
    // 0x358b8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358B8Cu;
    {
        const bool branch_taken_0x358b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b8c) {
            ctx->pc = 0x358B9Cu;
            goto label_358b9c;
        }
    }
    ctx->pc = 0x358B94u;
    // 0x358b94: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x358B94u;
    {
        const bool branch_taken_0x358b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358b94) {
            ctx->pc = 0x358CB0u;
            goto label_358cb0;
        }
    }
    ctx->pc = 0x358B9Cu;
label_358b9c:
    // 0x358b9c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358ba0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358ba4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358ba8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358bac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358bb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358bb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358bb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358bbc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x358bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358bc0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358bc4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358bc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358bcc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358bd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358bd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358bd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358bdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358be0: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x358be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x358be4: 0x24041601  addiu       $a0, $zero, 0x1601
    ctx->pc = 0x358be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
    // 0x358be8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358be8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358bec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358becu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358bf0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x358BF0u;
    SET_GPR_U32(ctx, 31, 0x358BF8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358BF0u, 0x358BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BF8u;
label_358bf8:
    // 0x358bf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358bfc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358BFCu;
    SET_GPR_U32(ctx, 31, 0x358C04u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358BFCu, 0x358C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C04u;
label_358c04:
    // 0x358c04: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358c04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358c08: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358c0c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358c10: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x358C10u;
    {
        const bool branch_taken_0x358c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358c10) {
            ctx->pc = 0x358C7Cu;
            goto label_358c7c;
        }
    }
    ctx->pc = 0x358C18u;
    // 0x358c18: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c1c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358c20: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x358c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x358c24: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c28: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358c2c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x358c30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c34: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x358C34u;
    SET_GPR_U32(ctx, 31, 0x358C3Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358C3Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C3Cu) { return; }
    ctx->pc = 0x358C3Cu;
label_358c3c:
    // 0x358c3c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c48: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x358c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x358c4c: 0xc040d62  jal         func_103588
    ctx->pc = 0x358C4Cu;
    SET_GPR_U32(ctx, 31, 0x358C54u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358C54u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C54u) { return; }
    ctx->pc = 0x358C54u;
label_358c54:
    // 0x358c54: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x358c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x358c58: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c5c: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x358c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x358c60: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358C60u;
    SET_GPR_U32(ctx, 31, 0x358C68u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358C68u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C68u) { return; }
    ctx->pc = 0x358C68u;
label_358c68:
    // 0x358c68: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x358c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358c6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358c70: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358c74: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358C74u;
    SET_GPR_U32(ctx, 31, 0x358C7Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358C7Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358C7Cu) { return; }
    ctx->pc = 0x358C7Cu;
label_358c7c:
    // 0x358c7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c80: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358c88: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_358c8c:
    // 0x358c8c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c90: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358c98: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358c9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358ca0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358ca4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358ca8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358cac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_358cb0:
    // 0x358cb0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x358cb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358cb8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x358cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x358cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x358CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358CC4u;
}
