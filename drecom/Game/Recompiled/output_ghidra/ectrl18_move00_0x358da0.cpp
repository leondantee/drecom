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

// Function: ectrl18_move00
// Address: 0x358da0 - 0x359038
void ectrl18_move00_0x358da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl18_move00_0x358da0");
#endif

    switch (ctx->pc) {
        case 0x358e14u: goto label_358e14;
        case 0x358e20u: goto label_358e20;
        case 0x358e3cu: goto label_358e3c;
        case 0x358e7cu: goto label_358e7c;
        case 0x358e88u: goto label_358e88;
        case 0x358ec0u: goto label_358ec0;
        case 0x358eccu: goto label_358ecc;
        case 0x358f74u: goto label_358f74;
        case 0x358f80u: goto label_358f80;
        default: break;
    }

    ctx->pc = 0x358da0u;

    // 0x358da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x358da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x358da4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x358da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x358da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x358db0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x358db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x358db4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x358db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x358db8: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x358db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
    // 0x358dbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x358dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358dc0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x358dc0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA760u));
    // 0x358dc4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x358dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x358dc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358dcc: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x358dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x358dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x358dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358dd4: 0x1083008d  beq         $a0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x358DD4u;
    {
        const bool branch_taken_0x358dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x358dd4) {
            ctx->pc = 0x35900Cu;
            goto label_35900c;
        }
    }
    ctx->pc = 0x358DDCu;
    // 0x358ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358de0: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x358DE0u;
    {
        const bool branch_taken_0x358de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x358de0) {
            ctx->pc = 0x358FF4u;
            goto label_358ff4;
        }
    }
    ctx->pc = 0x358DE8u;
    // 0x358de8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358DE8u;
    {
        const bool branch_taken_0x358de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358de8) {
            ctx->pc = 0x358DF8u;
            goto label_358df8;
        }
    }
    ctx->pc = 0x358DF0u;
    // 0x358df0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x358DF0u;
    {
        const bool branch_taken_0x358df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358df0) {
            ctx->pc = 0x359020u;
            goto label_359020;
        }
    }
    ctx->pc = 0x358DF8u;
label_358df8:
    // 0x358df8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x358df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358dfc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x358dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x358e00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358e04: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x358e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358e08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x358e08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358e0c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358E0Cu;
    SET_GPR_U32(ctx, 31, 0x358E14u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358E0Cu, 0x358E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E14u;
label_358e14:
    // 0x358e14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358e14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358e18: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358E18u;
    SET_GPR_U32(ctx, 31, 0x358E20u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358E18u, 0x358E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E20u;
label_358e20:
    // 0x358e20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358e20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358e24: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358e28: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358e2c: 0x1203006a  beq         $s0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x358E2Cu;
    {
        const bool branch_taken_0x358e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358e2c) {
            ctx->pc = 0x358FD8u;
            goto label_358fd8;
        }
    }
    ctx->pc = 0x358E34u;
    // 0x358e34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x358E34u;
    SET_GPR_U32(ctx, 31, 0x358E3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x358E34u, 0x358E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E3Cu;
label_358e3c:
    // 0x358e3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358e40: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x358e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x358e44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x358E44u;
    {
        const bool branch_taken_0x358e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e44) {
            ctx->pc = 0x358E90u;
            goto label_358e90;
        }
    }
    ctx->pc = 0x358E4Cu;
    // 0x358e4c: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358e50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358e54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358e58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358e5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358e64: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x358e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358e68: 0x24041302  addiu       $a0, $zero, 0x1302
    ctx->pc = 0x358e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4866));
    // 0x358e6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358e6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358e70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x358e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358e74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358E74u;
    SET_GPR_U32(ctx, 31, 0x358E7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358E74u, 0x358E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E7Cu;
label_358e7c:
    // 0x358e7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358e80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358E80u;
    SET_GPR_U32(ctx, 31, 0x358E88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358E80u, 0x358E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E88u;
label_358e88:
    // 0x358e88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358E88u;
    {
        const bool branch_taken_0x358e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e88) {
            ctx->pc = 0x358ECCu;
            goto label_358ecc;
        }
    }
    ctx->pc = 0x358E90u;
label_358e90:
    // 0x358e90: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358e94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358e98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358ea0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358ea8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x358ea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358eac: 0x24044502  addiu       $a0, $zero, 0x4502
    ctx->pc = 0x358eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17666));
    // 0x358eb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358eb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358eb4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x358eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358eb8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358EB8u;
    SET_GPR_U32(ctx, 31, 0x358EC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358EB8u, 0x358EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358EC0u;
label_358ec0:
    // 0x358ec0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358ec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358ec4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358EC4u;
    SET_GPR_U32(ctx, 31, 0x358ECCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358EC4u, 0x358ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358ECCu;
label_358ecc:
    // 0x358ecc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x358eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358ed0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x358ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x358ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x358ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358ed8: 0x0  nop
    ctx->pc = 0x358ed8u;
    // NOP
    // 0x358edc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x358edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x358ee0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x358ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x358ee4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x358ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358ee8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358eec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358ef0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358ef4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358ef8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358efc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f00: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x358f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f04: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x358f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358f08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358f10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358f14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358f18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358f1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f20: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x358f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x358f24: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358f28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358f30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358f34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358f38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358f3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f40: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x358f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f44: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358f48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358f4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358f50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358f54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358f58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358f5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358f60: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x358f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x358f64: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x358f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x358f68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358f68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358f6c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x358F6Cu;
    SET_GPR_U32(ctx, 31, 0x358F74u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358F6Cu, 0x358F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F74u;
label_358f74:
    // 0x358f74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358f74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358f78: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358F78u;
    SET_GPR_U32(ctx, 31, 0x358F80u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358F78u, 0x358F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358F80u;
label_358f80:
    // 0x358f80: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x358f80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358f84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358f88: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358f8c: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x358F8Cu;
    {
        const bool branch_taken_0x358f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x358f8c) {
            ctx->pc = 0x358FBCu;
            goto label_358fbc;
        }
    }
    ctx->pc = 0x358F94u;
    // 0x358f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358f98: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x358f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 16));
    // 0x358f9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fa0: 0xac710104  sw          $s1, 0x104($v1)
    ctx->pc = 0x358fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 17));
    // 0x358fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x358fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fa8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358fac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358fb0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358fb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x358FB4u;
    {
        const bool branch_taken_0x358fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358fb4) {
            ctx->pc = 0x358FF4u;
            goto label_358ff4;
        }
    }
    ctx->pc = 0x358FBCu;
label_358fbc:
    // 0x358fbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358fc4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fcc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x358fd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x358FD0u;
    {
        const bool branch_taken_0x358fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358fd0) {
            ctx->pc = 0x359020u;
            goto label_359020;
        }
    }
    ctx->pc = 0x358FD8u;
label_358fd8:
    // 0x358fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358fe0: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fe8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x358fec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x358FECu;
    {
        const bool branch_taken_0x358fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358fec) {
            ctx->pc = 0x359020u;
            goto label_359020;
        }
    }
    ctx->pc = 0x358FF4u;
label_358ff4:
    // 0x358ff4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x358ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358ff8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359000: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x359004u;
    {
        const bool branch_taken_0x359004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359004) {
            ctx->pc = 0x359020u;
            goto label_359020;
        }
    }
    ctx->pc = 0x35900Cu;
label_35900c:
    // 0x35900c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359010: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x359010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359014: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x359014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x359018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35901c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35901cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_359020:
    // 0x359020: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x359020u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35902c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35902cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x359030: 0x3e00008  jr          $ra
    ctx->pc = 0x359030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359038u;
}
