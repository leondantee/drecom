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

// Function: Om18_pl_dm
// Address: 0x31ae60 - 0x31b190
void Om18_pl_dm_0x31ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_pl_dm_0x31ae60");
#endif

    switch (ctx->pc) {
        case 0x31aef0u: goto label_31aef0;
        case 0x31af60u: goto label_31af60;
        case 0x31af6cu: goto label_31af6c;
        case 0x31af98u: goto label_31af98;
        case 0x31b008u: goto label_31b008;
        case 0x31b014u: goto label_31b014;
        case 0x31b04cu: goto label_31b04c;
        case 0x31b058u: goto label_31b058;
        case 0x31b074u: goto label_31b074;
        case 0x31b080u: goto label_31b080;
        case 0x31b09cu: goto label_31b09c;
        case 0x31b0a8u: goto label_31b0a8;
        case 0x31b0c4u: goto label_31b0c4;
        case 0x31b0d0u: goto label_31b0d0;
        case 0x31b0e4u: goto label_31b0e4;
        case 0x31b154u: goto label_31b154;
        case 0x31b160u: goto label_31b160;
        default: break;
    }

    ctx->pc = 0x31ae60u;

    // 0x31ae60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31ae64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31ae68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ae6c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x31ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x31ae70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x31ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x31ae74: 0x24639ca0  addiu       $v1, $v1, -0x6360
    ctx->pc = 0x31ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941856));
    // 0x31ae78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31ae7c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31ae7cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399CA0u));
    // 0x31ae80: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x31ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x31ae84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ae88: 0x8c6412a0  lw          $a0, 0x12A0($v1)
    ctx->pc = 0x31ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4768)));
    // 0x31ae8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ae90: 0x108300ba  beq         $a0, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x31AE90u;
    {
        const bool branch_taken_0x31ae90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31ae90) {
            ctx->pc = 0x31B17Cu;
            goto label_31b17c;
        }
    }
    ctx->pc = 0x31AE98u;
    // 0x31ae98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ae9c: 0x1083008e  beq         $a0, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x31AE9Cu;
    {
        const bool branch_taken_0x31ae9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31ae9c) {
            ctx->pc = 0x31B0D8u;
            goto label_31b0d8;
        }
    }
    ctx->pc = 0x31AEA4u;
    // 0x31aea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31aea8: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x31AEA8u;
    {
        const bool branch_taken_0x31aea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31aea8) {
            ctx->pc = 0x31B030u;
            goto label_31b030;
        }
    }
    ctx->pc = 0x31AEB0u;
    // 0x31aeb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aeb4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AEB4u;
    {
        const bool branch_taken_0x31aeb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31aeb4) {
            ctx->pc = 0x31AECCu;
            goto label_31aecc;
        }
    }
    ctx->pc = 0x31AEBCu;
    // 0x31aebc: 0x108000af  beqz        $a0, . + 4 + (0xAF << 2)
    ctx->pc = 0x31AEBCu;
    {
        const bool branch_taken_0x31aebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aebc) {
            ctx->pc = 0x31B17Cu;
            goto label_31b17c;
        }
    }
    ctx->pc = 0x31AEC4u;
    // 0x31aec4: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x31AEC4u;
    {
        const bool branch_taken_0x31aec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aec4) {
            ctx->pc = 0x31B17Cu;
            goto label_31b17c;
        }
    }
    ctx->pc = 0x31AECCu;
label_31aecc:
    // 0x31aecc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31aeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31aed0: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31aed0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31aed4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31aed8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31aed8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31aedc: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x31AEDCu;
    {
        const bool branch_taken_0x31aedc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31aedc) {
            ctx->pc = 0x31AF8Cu;
            goto label_31af8c;
        }
    }
    ctx->pc = 0x31AEE4u;
    // 0x31aee4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31aee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aee8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31AEE8u;
    {
        const bool branch_taken_0x31aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aee8) {
            ctx->pc = 0x31AF70u;
            goto label_31af70;
        }
    }
    ctx->pc = 0x31AEF0u;
label_31aef0:
    // 0x31aef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aef4: 0x0  nop
    ctx->pc = 0x31aef4u;
    // NOP
    // 0x31aef8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31aefc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aefcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af00: 0x0  nop
    ctx->pc = 0x31af00u;
    // NOP
    // 0x31af04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31af08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31af08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af0c: 0x0  nop
    ctx->pc = 0x31af0cu;
    // NOP
    // 0x31af10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31af14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31af18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31af18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af1c: 0x0  nop
    ctx->pc = 0x31af1cu;
    // NOP
    // 0x31af20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31af24: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x31af24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x31af28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31af28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31af2c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31af30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31af34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31af34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31af38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31af38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31af3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31af40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31af40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31af44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31af48: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31af48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31af4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x31af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31af50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31af50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31af54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31af54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31af58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31AF58u;
    SET_GPR_U32(ctx, 31, 0x31AF60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31AF58u, 0x31AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF60u;
label_31af60:
    // 0x31af60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31af60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31af64: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31AF64u;
    SET_GPR_U32(ctx, 31, 0x31AF6Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31AF64u, 0x31AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF6Cu;
label_31af6c:
    // 0x31af6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31af6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31af70:
    // 0x31af70: 0x2e02001d  sltiu       $v0, $s0, 0x1D
    ctx->pc = 0x31af70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x31af74: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31AF74u;
    {
        const bool branch_taken_0x31af74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31af74) {
            ctx->pc = 0x31AEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aef0;
        }
    }
    ctx->pc = 0x31AF7Cu;
    // 0x31af7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31af80: 0xac4012a0  sw          $zero, 0x12A0($v0)
    ctx->pc = 0x31af80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4768), GPR_U32(ctx, 0));
    // 0x31af84: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31AF84u;
    {
        const bool branch_taken_0x31af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af84) {
            ctx->pc = 0x31B030u;
            goto label_31b030;
        }
    }
    ctx->pc = 0x31AF8Cu;
label_31af8c:
    // 0x31af8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31af8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31af90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31AF90u;
    {
        const bool branch_taken_0x31af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af90) {
            ctx->pc = 0x31B018u;
            goto label_31b018;
        }
    }
    ctx->pc = 0x31AF98u;
label_31af98:
    // 0x31af98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31af98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af9c: 0x0  nop
    ctx->pc = 0x31af9cu;
    // NOP
    // 0x31afa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31afa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31afa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31afa8: 0x0  nop
    ctx->pc = 0x31afa8u;
    // NOP
    // 0x31afac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31afb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31afb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31afb4: 0x0  nop
    ctx->pc = 0x31afb4u;
    // NOP
    // 0x31afb8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31afb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31afbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31afc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31afc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31afc4: 0x0  nop
    ctx->pc = 0x31afc4u;
    // NOP
    // 0x31afc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31afcc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x31afccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x31afd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31afd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31afd4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31afd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31afdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31afe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31afe4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31afe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31afec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31afecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31aff0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31aff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31aff4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x31aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x31aff8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31aff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31affc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31affcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31b000: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B000u;
    SET_GPR_U32(ctx, 31, 0x31B008u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B000u, 0x31B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B008u;
label_31b008:
    // 0x31b008: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b00c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B00Cu;
    SET_GPR_U32(ctx, 31, 0x31B014u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B00Cu, 0x31B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B014u;
label_31b014:
    // 0x31b014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31b014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31b018:
    // 0x31b018: 0x2e02001d  sltiu       $v0, $s0, 0x1D
    ctx->pc = 0x31b018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x31b01c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31B01Cu;
    {
        const bool branch_taken_0x31b01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b01c) {
            ctx->pc = 0x31AF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af98;
        }
    }
    ctx->pc = 0x31B024u;
    // 0x31b024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31b02c: 0xac4312a0  sw          $v1, 0x12A0($v0)
    ctx->pc = 0x31b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4768), GPR_U32(ctx, 3));
label_31b030:
    // 0x31b030: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b034: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b038: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b03c: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b040: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B044u;
    SET_GPR_U32(ctx, 31, 0x31B04Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B044u, 0x31B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B04Cu;
label_31b04c:
    // 0x31b04c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b04cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B050u;
    SET_GPR_U32(ctx, 31, 0x31B058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B050u, 0x31B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B058u;
label_31b058:
    // 0x31b058: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b05c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b060: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b064: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b06c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B06Cu;
    SET_GPR_U32(ctx, 31, 0x31B074u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B06Cu, 0x31B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B074u;
label_31b074:
    // 0x31b074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b078: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B078u;
    SET_GPR_U32(ctx, 31, 0x31B080u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B078u, 0x31B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B080u;
label_31b080:
    // 0x31b080: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b088: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b08c: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b090: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b090u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b094: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B094u;
    SET_GPR_U32(ctx, 31, 0x31B09Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B094u, 0x31B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B09Cu;
label_31b09c:
    // 0x31b09c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b09cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b0a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B0A0u;
    SET_GPR_U32(ctx, 31, 0x31B0A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B0A0u, 0x31B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0A8u;
label_31b0a8:
    // 0x31b0a8: 0x24044801  addiu       $a0, $zero, 0x4801
    ctx->pc = 0x31b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18433));
    // 0x31b0ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b0acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b0b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31b0b4: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x31b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31b0b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31b0b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b0bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B0BCu;
    SET_GPR_U32(ctx, 31, 0x31B0C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B0BCu, 0x31B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0C4u;
label_31b0c4:
    // 0x31b0c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b0c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b0c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B0C8u;
    SET_GPR_U32(ctx, 31, 0x31B0D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B0C8u, 0x31B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0D0u;
label_31b0d0:
    // 0x31b0d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31B0D0u;
    {
        const bool branch_taken_0x31b0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b0d0) {
            ctx->pc = 0x31B17Cu;
            goto label_31b17c;
        }
    }
    ctx->pc = 0x31B0D8u;
label_31b0d8:
    // 0x31b0d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31b0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b0dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31B0DCu;
    {
        const bool branch_taken_0x31b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b0dc) {
            ctx->pc = 0x31B168u;
            goto label_31b168;
        }
    }
    ctx->pc = 0x31B0E4u;
label_31b0e4:
    // 0x31b0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0e8: 0x0  nop
    ctx->pc = 0x31b0e8u;
    // NOP
    // 0x31b0ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31b0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31b0f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0f4: 0x0  nop
    ctx->pc = 0x31b0f4u;
    // NOP
    // 0x31b0f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31b0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31b0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b100: 0x0  nop
    ctx->pc = 0x31b100u;
    // NOP
    // 0x31b104: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31b104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31b108: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x31b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x31b10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b110: 0x0  nop
    ctx->pc = 0x31b110u;
    // NOP
    // 0x31b114: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31b118: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x31b118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x31b11c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31b120: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31b120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31b124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b128: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31b12c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31b12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31b130: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31b134: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31b134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31b138: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31b13c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31b13cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31b140: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x31b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b144: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b144u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b148: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31b14c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B14Cu;
    SET_GPR_U32(ctx, 31, 0x31B154u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B14Cu, 0x31B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B154u;
label_31b154:
    // 0x31b154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b158: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B158u;
    SET_GPR_U32(ctx, 31, 0x31B160u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B158u, 0x31B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B160u;
label_31b160:
    // 0x31b160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31b160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31b164: 0x0  nop
    ctx->pc = 0x31b164u;
    // NOP
label_31b168:
    // 0x31b168: 0x2e03001d  sltiu       $v1, $s0, 0x1D
    ctx->pc = 0x31b168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x31b16c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31B16Cu;
    {
        const bool branch_taken_0x31b16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b16c) {
            ctx->pc = 0x31B0E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b0e4;
        }
    }
    ctx->pc = 0x31B174u;
    // 0x31b174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31b178: 0xac6012a0  sw          $zero, 0x12A0($v1)
    ctx->pc = 0x31b178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 0));
label_31b17c:
    // 0x31b17c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31b17cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b184: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31b184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31b188: 0x3e00008  jr          $ra
    ctx->pc = 0x31B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B190u;
}
