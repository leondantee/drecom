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

// Function: Em0b_R1_mv06
// Address: 0x1eff90 - 0x1f0de0
void Em0b_R1_mv06_0x1eff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv06_0x1eff90");
#endif

    switch (ctx->pc) {
        case 0x1f0008u: goto label_1f0008;
        case 0x1f0068u: goto label_1f0068;
        case 0x1f0158u: goto label_1f0158;
        case 0x1f01b0u: goto label_1f01b0;
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0368u: goto label_1f0368;
        case 0x1f0384u: goto label_1f0384;
        case 0x1f039cu: goto label_1f039c;
        case 0x1f03a8u: goto label_1f03a8;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f05b4u: goto label_1f05b4;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0630u: goto label_1f0630;
        case 0x1f0734u: goto label_1f0734;
        case 0x1f0780u: goto label_1f0780;
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0880u: goto label_1f0880;
        case 0x1f08a4u: goto label_1f08a4;
        case 0x1f0934u: goto label_1f0934;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a8cu: goto label_1f0a8c;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b60u: goto label_1f0b60;
        default: break;
    }

    ctx->pc = 0x1eff90u;

    // 0x1eff90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1eff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1eff94: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1eff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1eff98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eff9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1effa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1effa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1effa4: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x1effa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x1effa8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1effac: 0x24639eb0  addiu       $v1, $v1, -0x6150
    ctx->pc = 0x1effacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942384));
    // 0x1effb0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1effb4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1effb4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x389EB0u));
    // 0x1effb8: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x1effb8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x389EC0u));
    // 0x1effbc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1effbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1effc0: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x1effc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x1effc4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1effc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1effc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1effc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1effcc: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x1effccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1effd0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EFFD0u;
    {
        const bool branch_taken_0x1effd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1effd0) {
            ctx->pc = 0x1F0024u;
            goto label_1f0024;
        }
    }
    ctx->pc = 0x1EFFD8u;
    // 0x1effd8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1effd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1effdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1effe0: 0x8c700060  lw          $s0, 0x60($v1)
    ctx->pc = 0x1effe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1effe4: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x1effe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1effe8: 0x8485005c  lh          $a1, 0x5C($a0)
    ctx->pc = 0x1effe8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1effec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1effecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1efff0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1efff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1efff4: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x1efff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1efff8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1EFFF8u;
    {
        const bool branch_taken_0x1efff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efff8) {
            ctx->pc = 0x1F0024u;
            goto label_1f0024;
        }
    }
    ctx->pc = 0x1F0000u;
    // 0x1f0000: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0000u;
    SET_GPR_U32(ctx, 31, 0x1F0008u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0000u, 0x1F0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0008u;
label_1f0008:
    // 0x1f0008: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f0008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f000c: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x1f000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1f0010: 0x2465001e  addiu       $a1, $v1, 0x1E
    ctx->pc = 0x1f0010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1f0014: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x1f0014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1f0018: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0018u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f001c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f0020: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f0020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_1f0024:
    // 0x1f0024: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0028: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f002c: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f0030: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0030u;
    {
        const bool branch_taken_0x1f0030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0030) {
            ctx->pc = 0x1F0084u;
            goto label_1f0084;
        }
    }
    ctx->pc = 0x1F0038u;
    // 0x1f0038: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f003c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0040: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x1f0040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f0044: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x1f0044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f0048: 0x84a3005c  lh          $v1, 0x5C($a1)
    ctx->pc = 0x1f0048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1f004c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f004cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0050: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0050u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0054: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x1f0054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f0058: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0058u;
    {
        const bool branch_taken_0x1f0058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0058) {
            ctx->pc = 0x1F0084u;
            goto label_1f0084;
        }
    }
    ctx->pc = 0x1F0060u;
    // 0x1f0060: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0060u;
    SET_GPR_U32(ctx, 31, 0x1F0068u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0060u, 0x1F0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0068u;
label_1f0068:
    // 0x1f0068: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f0068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f006c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x1f006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1f0070: 0x2464001e  addiu       $a0, $v1, 0x1E
    ctx->pc = 0x1f0070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1f0074: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1f0074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f0078: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0078u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f007c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f0080: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f0080u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_1f0084:
    // 0x1f0084: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0088: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1f0088u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f008c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1f008cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f0090: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0094: 0x10830172  beq         $a0, $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x1F0094u;
    {
        const bool branch_taken_0x1f0094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f0094) {
            ctx->pc = 0x1F0660u;
            goto label_1f0660;
        }
    }
    ctx->pc = 0x1F009Cu;
    // 0x1f009c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00a0: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F00A0u;
    {
        const bool branch_taken_0x1f00a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f00a0) {
            ctx->pc = 0x1F0248u;
            goto label_1f0248;
        }
    }
    ctx->pc = 0x1F00A8u;
    // 0x1f00a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F00A8u;
    {
        const bool branch_taken_0x1f00a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00a8) {
            ctx->pc = 0x1F00B8u;
            goto label_1f00b8;
        }
    }
    ctx->pc = 0x1F00B0u;
    // 0x1f00b0: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x1F00B0u;
    {
        const bool branch_taken_0x1f00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00b0) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F00B8u;
label_1f00b8:
    // 0x1f00b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00bc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00c0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f00c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f00c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f00c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00c8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00cc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f00ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f00d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f00d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00d4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f00dc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f00dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f00e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f00e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f00ec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f00ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f00f0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x1f00f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f00f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f00fc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0100: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f0100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f0104: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1f0104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0108: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f0108u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f010c: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f010cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0110: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f0110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f0114: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x1f0114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x1f0118: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f011c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1f011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0120: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1f0120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1f0124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0128: 0x0  nop
    ctx->pc = 0x1f0128u;
    // NOP
    // 0x1f012c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f012cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0130: 0x0  nop
    ctx->pc = 0x1f0130u;
    // NOP
    // 0x1f0134: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0134u;
    {
        const bool branch_taken_0x1f0134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0134) {
            ctx->pc = 0x1F0150u;
            goto label_1f0150;
        }
    }
    ctx->pc = 0x1F013Cu;
    // 0x1f013c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f0140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0144: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0148: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f0148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f014c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1f0150:
    // 0x1f0150: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0150u;
    SET_GPR_U32(ctx, 31, 0x1F0158u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0150u, 0x1F0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0158u;
label_1f0158:
    // 0x1f0158: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f015c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1f015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1f0160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0164: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f0164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f016c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0170: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1f0170u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0174: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1f0178: 0x3462fa35  ori         $v0, $v1, 0xFA35
    ctx->pc = 0x1f0178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f017c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0180: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0188: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f0188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f018c: 0x3c033b3e  lui         $v1, 0x3B3E
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15166 << 16));
    // 0x1f0190: 0x3463a2f1  ori         $v1, $v1, 0xA2F1
    ctx->pc = 0x1f0190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41713);
    // 0x1f0194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0198: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f019c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f01a0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1f01a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1f01a4: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1f01a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f01a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F01A8u;
    SET_GPR_U32(ctx, 31, 0x1F01B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F01A8u, 0x1F01B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01B0u;
label_1f01b0:
    // 0x1f01b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f01b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f01b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f01b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f01b8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1f01b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f01bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F01BCu;
    {
        const bool branch_taken_0x1f01bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01bc) {
            ctx->pc = 0x1F01C8u;
            goto label_1f01c8;
        }
    }
    ctx->pc = 0x1F01C4u;
    // 0x1f01c4: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1f01c8:
    // 0x1f01c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01cc: 0x36263c00  ori         $a2, $s1, 0x3C00
    ctx->pc = 0x1f01ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15360);
    // 0x1f01d0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01d4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f01d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f01d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f01dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f01dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f01e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F01E0u;
    SET_GPR_U32(ctx, 31, 0x1F01E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F01E0u, 0x1F01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01E8u;
label_1f01e8:
    // 0x1f01e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f01e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f01ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01f0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f01f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f01f4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f01fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f01fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f0200: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0204: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1f0204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f0208: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f0208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f020c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f020cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0210: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F0210u;
    SET_GPR_U32(ctx, 31, 0x1F0218u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F0210u, 0x1F0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0218u;
label_1f0218:
    // 0x1f0218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f0218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f021c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f0220: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f0220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f0224: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x1f0224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1f0228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f0228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f022c: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f022cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f0230: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0234: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0238: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f023c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f0240: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f0244: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f0244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1f0248:
    // 0x1f0248: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f024c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0250: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1f0250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1f0254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0258: 0x0  nop
    ctx->pc = 0x1f0258u;
    // NOP
    // 0x1f025c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f025cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0260: 0x0  nop
    ctx->pc = 0x1f0260u;
    // NOP
    // 0x1f0264: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0264u;
    {
        const bool branch_taken_0x1f0264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0264) {
            ctx->pc = 0x1F0288u;
            goto label_1f0288;
        }
    }
    ctx->pc = 0x1F026Cu;
    // 0x1f026c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1f026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1f0270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0274: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0278: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f027c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f0280: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0280u;
    {
        const bool branch_taken_0x1f0280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0280) {
            ctx->pc = 0x1F02D8u;
            goto label_1f02d8;
        }
    }
    ctx->pc = 0x1F0288u;
label_1f0288:
    // 0x1f0288: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f028c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0290: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1f0290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x1f0294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0298: 0x0  nop
    ctx->pc = 0x1f0298u;
    // NOP
    // 0x1f029c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f029cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f02a0: 0x0  nop
    ctx->pc = 0x1f02a0u;
    // NOP
    // 0x1f02a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F02A4u;
    {
        const bool branch_taken_0x1f02a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f02a4) {
            ctx->pc = 0x1F02C8u;
            goto label_1f02c8;
        }
    }
    ctx->pc = 0x1F02ACu;
    // 0x1f02ac: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x1f02acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x1f02b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f02b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f02b4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02b8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f02bc: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f02bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f02c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F02C0u;
    {
        const bool branch_taken_0x1f02c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02c0) {
            ctx->pc = 0x1F02D8u;
            goto label_1f02d8;
        }
    }
    ctx->pc = 0x1F02C8u;
label_1f02c8:
    // 0x1f02c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f02c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f02cc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f02ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02d0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1f02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f02d4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f02d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1f02d8:
    // 0x1f02d8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f02e0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f02e4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f02e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f02e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F02E8u;
    {
        const bool branch_taken_0x1f02e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f02e8) {
            ctx->pc = 0x1F0328u;
            goto label_1f0328;
        }
    }
    ctx->pc = 0x1F02F0u;
    // 0x1f02f0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02f4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f02f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02fc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0300: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f0304: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0308: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f0308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f030c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f0310: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0314: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F0314u;
    SET_GPR_U32(ctx, 31, 0x1F031Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F0314u, 0x1F031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F031Cu;
label_1f031c:
    // 0x1f031c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f031cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1f0320: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0320u;
    {
        const bool branch_taken_0x1f0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0320) {
            ctx->pc = 0x1F036Cu;
            goto label_1f036c;
        }
    }
    ctx->pc = 0x1F0328u;
label_1f0328:
    // 0x1f0328: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f032c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0330: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0334: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1f0334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1f0338: 0x34a20fdb  ori         $v0, $a1, 0xFDB
    ctx->pc = 0x1f0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1f033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0340: 0x0  nop
    ctx->pc = 0x1f0340u;
    // NOP
    // 0x1f0344: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f0344u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f0348: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f0348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f034c: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x1f034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f0350: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f0354: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f0354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f0358: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x1f0358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1f035c: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x1f035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0360: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F0360u;
    SET_GPR_U32(ctx, 31, 0x1F0368u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F0360u, 0x1F0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0368u;
label_1f0368:
    // 0x1f0368: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f036c:
    // 0x1f036c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0370: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f0370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0374: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0378: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f0378u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f037c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F037Cu;
    SET_GPR_U32(ctx, 31, 0x1F0384u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F037Cu, 0x1F0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0384u;
label_1f0384:
    // 0x1f0384: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0388: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f0388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f038c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0390: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0394: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F0394u;
    SET_GPR_U32(ctx, 31, 0x1F039Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F0394u, 0x1F039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F039Cu;
label_1f039c:
    // 0x1f039c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f03a0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F03A0u;
    SET_GPR_U32(ctx, 31, 0x1F03A8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F03A0u, 0x1F03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03A8u;
label_1f03a8:
    // 0x1f03a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f03ac: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1f03acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1f03b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f03b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f03b4: 0x30650080  andi        $a1, $v1, 0x80
    ctx->pc = 0x1f03b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f03b8: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1F03B8u;
    {
        const bool branch_taken_0x1f03b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f03b8) {
            ctx->pc = 0x1F05C4u;
            goto label_1f05c4;
        }
    }
    ctx->pc = 0x1F03C0u;
    // 0x1f03c0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f03c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f03c4: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1f03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1f03c8: 0x24440880  addiu       $a0, $v0, 0x880
    ctx->pc = 0x1f03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f03cc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1f03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1f03d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f03d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03d4: 0x0  nop
    ctx->pc = 0x1f03d4u;
    // NOP
    // 0x1f03d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f03d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f03dc: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x1f03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x1f03e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f03e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03e4: 0x0  nop
    ctx->pc = 0x1f03e4u;
    // NOP
    // 0x1f03e8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f03e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f03ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f03ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03f0: 0x0  nop
    ctx->pc = 0x1f03f0u;
    // NOP
    // 0x1f03f4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f03f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f03f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f03fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f03fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0400: 0x0  nop
    ctx->pc = 0x1f0400u;
    // NOP
    // 0x1f0404: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f0404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f0408: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1f0408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1f040c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f040cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0410: 0x0  nop
    ctx->pc = 0x1f0410u;
    // NOP
    // 0x1f0414: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f0414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f0418: 0xa7a00084  sh          $zero, 0x84($sp)
    ctx->pc = 0x1f0418u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f041c: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x1f041cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0420: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x1f0420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0424: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0428: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1f0428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f042c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f0430: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F0430u;
    SET_GPR_U32(ctx, 31, 0x1F0438u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F0430u, 0x1F0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0438u;
label_1f0438:
    // 0x1f0438: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F0438u;
    {
        const bool branch_taken_0x1f0438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0438) {
            ctx->pc = 0x1F05C4u;
            goto label_1f05c4;
        }
    }
    ctx->pc = 0x1F0440u;
    // 0x1f0440: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0444: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f0444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f0448: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F0448u;
    {
        const bool branch_taken_0x1f0448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0448) {
            ctx->pc = 0x1F05C4u;
            goto label_1f05c4;
        }
    }
    ctx->pc = 0x1F0450u;
    // 0x1f0450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0454: 0x0  nop
    ctx->pc = 0x1f0454u;
    // NOP
    // 0x1f0458: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f0458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f045c: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1f0460: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0460u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0464: 0x0  nop
    ctx->pc = 0x1f0464u;
    // NOP
    // 0x1f0468: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f0468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f046c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f046cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0470: 0x0  nop
    ctx->pc = 0x1f0470u;
    // NOP
    // 0x1f0474: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f0474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f0478: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f0478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1f047c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f047cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0480: 0x0  nop
    ctx->pc = 0x1f0480u;
    // NOP
    // 0x1f0484: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f0484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f0488: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f048c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1f048cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f0490: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f0490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f0494: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f0494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0498: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f0498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f049c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1f049cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f04a0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1f04a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f04a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f04a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f04a8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f04ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f04acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f04b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f04b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f04b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f04b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f04b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f04bc: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f04bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f04c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f04c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f04c4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F04C4u;
    SET_GPR_U32(ctx, 31, 0x1F04CCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F04C4u, 0x1F04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04CCu;
label_1f04cc:
    // 0x1f04cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f04ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f04d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F04D0u;
    SET_GPR_U32(ctx, 31, 0x1F04D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F04D0u, 0x1F04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04D8u;
label_1f04d8:
    // 0x1f04d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f04d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f04dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F04DCu;
    {
        const bool branch_taken_0x1f04dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f04dc) {
            ctx->pc = 0x1F04F8u;
            goto label_1f04f8;
        }
    }
    ctx->pc = 0x1F04E4u;
    // 0x1f04e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f04e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f04e8: 0x0  nop
    ctx->pc = 0x1f04e8u;
    // NOP
    // 0x1f04ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f04ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f04f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F04F0u;
    {
        const bool branch_taken_0x1f04f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f04f0) {
            ctx->pc = 0x1F0514u;
            goto label_1f0514;
        }
    }
    ctx->pc = 0x1F04F8u;
label_1f04f8:
    // 0x1f04f8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1f04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1f04fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f04fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f0500: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f0500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f0504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0508: 0x0  nop
    ctx->pc = 0x1f0508u;
    // NOP
    // 0x1f050c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f050cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0510: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f0510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f0514:
    // 0x1f0514: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f051c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f0520: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0524: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1f0524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f0528: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f0528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f052c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0530: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1f0530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1f0534: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1f0534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f0538: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1f0538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f053c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f0540: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x1f0540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f0544: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0548: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f054c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f0550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0554: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f0554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f0558: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f0558u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f055c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F055Cu;
    SET_GPR_U32(ctx, 31, 0x1F0564u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F055Cu, 0x1F0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0564u;
label_1f0564:
    // 0x1f0564: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f0564u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0568: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f056c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1f0570: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0570u;
    SET_GPR_U32(ctx, 31, 0x1F0578u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0570u, 0x1F0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0578u;
label_1f0578:
    // 0x1f0578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f0578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f057c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f057cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f0580: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1f0580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1f0584: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0584u;
    SET_GPR_U32(ctx, 31, 0x1F058Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0584u, 0x1F058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F058Cu;
label_1f058c:
    // 0x1f058c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f058cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0590: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1f0590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1f0594: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1f0594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1f0598: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f059c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05a0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f05a4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f05a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f05a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f05ac: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F05ACu;
    SET_GPR_U32(ctx, 31, 0x1F05B4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F05ACu, 0x1F05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05B4u;
label_1f05b4:
    // 0x1f05b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f05b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f05b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f05bc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05c0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f05c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_1f05c4:
    // 0x1f05c4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05c8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f05c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f05cc: 0x1060016b  beqz        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x1F05CCu;
    {
        const bool branch_taken_0x1f05cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05cc) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F05D4u;
    // 0x1f05d4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05d8: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x1f05d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f05dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f05e0: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f05e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f05e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05e8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1f05e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1f05ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f05ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f05f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f05f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f05f4: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x1F05F4u;
    {
        const bool branch_taken_0x1f05f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05f4) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F05FCu;
    // 0x1f05fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F05FCu;
    SET_GPR_U32(ctx, 31, 0x1F0604u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F05FCu, 0x1F0604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0604u;
label_1f0604:
    // 0x1f0604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f060c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x1f060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x1f0610: 0x34461400  ori         $a2, $v0, 0x1400
    ctx->pc = 0x1f0610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1f0614: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0618: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f061c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f061cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f0620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f0620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0624: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f0628: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F0628u;
    SET_GPR_U32(ctx, 31, 0x1F0630u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F0628u, 0x1F0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0630u;
label_1f0630:
    // 0x1f0630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f0630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0634: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0638: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f0638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f063c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0644: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0648: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f064c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f0650: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0654: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f0654u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f0658: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1F0658u;
    {
        const bool branch_taken_0x1f0658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0658) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F0660u;
label_1f0660:
    // 0x1f0660: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0664: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0668: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1f066c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0670: 0x0  nop
    ctx->pc = 0x1f0670u;
    // NOP
    // 0x1f0674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0678: 0x0  nop
    ctx->pc = 0x1f0678u;
    // NOP
    // 0x1f067c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F067Cu;
    {
        const bool branch_taken_0x1f067c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f067c) {
            ctx->pc = 0x1F06A0u;
            goto label_1f06a0;
        }
    }
    ctx->pc = 0x1F0684u;
    // 0x1f0684: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1f0684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1f0688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f068c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0690: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0694: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f0694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f0698: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0698u;
    {
        const bool branch_taken_0x1f0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0698) {
            ctx->pc = 0x1F06F0u;
            goto label_1f06f0;
        }
    }
    ctx->pc = 0x1F06A0u;
label_1f06a0:
    // 0x1f06a0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f06a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f06a8: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x1f06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x1f06ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f06acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06b0: 0x0  nop
    ctx->pc = 0x1f06b0u;
    // NOP
    // 0x1f06b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f06b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f06b8: 0x0  nop
    ctx->pc = 0x1f06b8u;
    // NOP
    // 0x1f06bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F06BCu;
    {
        const bool branch_taken_0x1f06bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f06bc) {
            ctx->pc = 0x1F06E0u;
            goto label_1f06e0;
        }
    }
    ctx->pc = 0x1F06C4u;
    // 0x1f06c4: 0x3c05c100  lui         $a1, 0xC100
    ctx->pc = 0x1f06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49408 << 16));
    // 0x1f06c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f06c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06cc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06d0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f06d4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f06d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f06d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F06D8u;
    {
        const bool branch_taken_0x1f06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06d8) {
            ctx->pc = 0x1F06F0u;
            goto label_1f06f0;
        }
    }
    ctx->pc = 0x1F06E0u;
label_1f06e0:
    // 0x1f06e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f06e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f06ec: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f06ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f06f0:
    // 0x1f06f0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f06f8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f06fc: 0x30701000  andi        $s0, $v1, 0x1000
    ctx->pc = 0x1f06fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f0700: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0700u;
    {
        const bool branch_taken_0x1f0700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0700) {
            ctx->pc = 0x1F0740u;
            goto label_1f0740;
        }
    }
    ctx->pc = 0x1F0708u;
    // 0x1f0708: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f070c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0710: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0714: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f0714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0718: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f071c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0720: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f0720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f0724: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1f0728: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x1f0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f072c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F072Cu;
    SET_GPR_U32(ctx, 31, 0x1F0734u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F072Cu, 0x1F0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0734u;
label_1f0734:
    // 0x1f0734: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1f0738: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0738u;
    {
        const bool branch_taken_0x1f0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0738) {
            ctx->pc = 0x1F0784u;
            goto label_1f0784;
        }
    }
    ctx->pc = 0x1F0740u;
label_1f0740:
    // 0x1f0740: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0744: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x1f0744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0748: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1f0748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1f074c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f074cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0754: 0x0  nop
    ctx->pc = 0x1f0754u;
    // NOP
    // 0x1f0758: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f0758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f075c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0760: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0764: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0768: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f076c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x1f076cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x1f0770: 0x2605dce0  addiu       $a1, $s0, -0x2320
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x1f0774: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0778: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F0778u;
    SET_GPR_U32(ctx, 31, 0x1F0780u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F0778u, 0x1F0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0780u;
label_1f0780:
    // 0x1f0780: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f0784:
    // 0x1f0784: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0788: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1f0788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f078c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0790: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f0790u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0794: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F0794u;
    SET_GPR_U32(ctx, 31, 0x1F079Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F0794u, 0x1F079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F079Cu;
label_1f079c:
    // 0x1f079c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07a0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f07a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f07a4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f07a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f07ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f07acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f07b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F07B0u;
    SET_GPR_U32(ctx, 31, 0x1F07B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F07B0u, 0x1F07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07B8u;
label_1f07b8:
    // 0x1f07b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f07b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f07bc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F07C0u;
    SET_GPR_U32(ctx, 31, 0x1F07C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F07C0u, 0x1F07C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07C8u;
label_1f07c8:
    // 0x1f07c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f07c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f07cc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f07d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f07d4: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F07D4u;
    {
        const bool branch_taken_0x1f07d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07d4) {
            ctx->pc = 0x1F08FCu;
            goto label_1f08fc;
        }
    }
    ctx->pc = 0x1F07DCu;
    // 0x1f07dc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07e0: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x1f07e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f07e4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f07e8: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f07e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f07ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07f0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f07f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f07f4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f07f8: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1f07f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1f07fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f07fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0800: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f0800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f0804: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0804u;
    {
        const bool branch_taken_0x1f0804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f0804) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F080Cu;
    // 0x1f080c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F080Cu;
    SET_GPR_U32(ctx, 31, 0x1F0814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F080Cu, 0x1F0814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0814u;
label_1f0814:
    // 0x1f0814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f081c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x1f081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x1f0820: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x1f0820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x1f0824: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0828: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f082c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f082cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f0830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f0830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0834: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f0834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f0838: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F0838u;
    SET_GPR_U32(ctx, 31, 0x1F0840u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F0838u, 0x1F0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0840u;
label_1f0840:
    // 0x1f0840: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1F0840u;
    {
        const bool branch_taken_0x1f0840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0840) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F0848u;
label_1f0848:
    // 0x1f0848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f084c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0850: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f0850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f0854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0858: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f085c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f085cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0860: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0864: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f0864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0868: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f086c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f086cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0870: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0874: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f0874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f0878: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0878u;
    SET_GPR_U32(ctx, 31, 0x1F0880u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0878u, 0x1F0880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0880u;
label_1f0880:
    // 0x1f0880: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0884: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f0888: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f0888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f088c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0890: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0890u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0894: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0898: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f0898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f089c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F089Cu;
    SET_GPR_U32(ctx, 31, 0x1F08A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F089Cu, 0x1F08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08A4u;
label_1f08a4:
    // 0x1f08a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f08a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f08a8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f08a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f08ac: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f08b0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f08b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f08b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f08b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f08b8: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f08bc: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f08c0: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f08c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f08c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f08c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f08c8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f08c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f08cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1f08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1f08d0: 0x36237fff  ori         $v1, $s1, 0x7FFF
    ctx->pc = 0x1f08d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32767);
    // 0x1f08d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f08d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f08d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f08dc: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1f08dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f08e0: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f08e4: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x1f08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1f08e8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f08ec: 0x3c08fffb  lui         $t0, 0xFFFB
    ctx->pc = 0x1f08ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65531 << 16));
    // 0x1f08f0: 0x3507ffff  ori         $a3, $t0, 0xFFFF
    ctx->pc = 0x1f08f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1f08f4: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x1f08f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1f08f8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1f08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_1f08fc:
    // 0x1f08fc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f0900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0904: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0908: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x1f0908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f090c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f0910: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0914: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1f0914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1f0918: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1f0918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f091c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x1f091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1f0920: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1F0920u;
    {
        const bool branch_taken_0x1f0920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0920) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F0928u;
    // 0x1f0928: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f092c: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x1F092Cu;
    SET_GPR_U32(ctx, 31, 0x1F0934u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x1F092Cu, 0x1F0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0934u;
label_1f0934:
    // 0x1f0934: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1f0934u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0938: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1f0938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1f093c: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1F093Cu;
    {
        const bool branch_taken_0x1f093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f093c) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F0944u;
    // 0x1f0944: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0948: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f094c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0950: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f0950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1f0954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0958: 0x0  nop
    ctx->pc = 0x1f0958u;
    // NOP
    // 0x1f095c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f095cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0960: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f0964: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f0964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f0968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f096c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0970: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0974: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f0974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f0978: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f097c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f0980: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f0984: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1f0988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f098c: 0x0  nop
    ctx->pc = 0x1f098cu;
    // NOP
    // 0x1f0990: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f0990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f0994: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1f0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1f0998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f099c: 0x0  nop
    ctx->pc = 0x1f099cu;
    // NOP
    // 0x1f09a0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f09a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f09a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f09a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09a8: 0x0  nop
    ctx->pc = 0x1f09a8u;
    // NOP
    // 0x1f09ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f09acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f09b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f09b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f09b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09b8: 0x0  nop
    ctx->pc = 0x1f09b8u;
    // NOP
    // 0x1f09bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f09c0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f09c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f09c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09c8: 0x0  nop
    ctx->pc = 0x1f09c8u;
    // NOP
    // 0x1f09cc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f09ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f09d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f09d4: 0xa7a200c4  sh          $v0, 0xC4($sp)
    ctx->pc = 0x1f09d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f09d8: 0xa3a000c6  sb          $zero, 0xC6($sp)
    ctx->pc = 0x1f09d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 198), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f09dc: 0xa3a000c7  sb          $zero, 0xC7($sp)
    ctx->pc = 0x1f09dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f09e0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f09e4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1f09e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f09e8: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F09E8u;
    SET_GPR_U32(ctx, 31, 0x1F09F0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F09E8u, 0x1F09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09F0u;
label_1f09f0:
    // 0x1f09f0: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F09F0u;
    {
        const bool branch_taken_0x1f09f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09f0) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F09F8u;
    // 0x1f09f8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f09fc: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f09fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f0a00: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F0A00u;
    {
        const bool branch_taken_0x1f0a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a00) {
            ctx->pc = 0x1F0B7Cu;
            goto label_1f0b7c;
        }
    }
    ctx->pc = 0x1F0A08u;
    // 0x1f0a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a0c: 0x0  nop
    ctx->pc = 0x1f0a0cu;
    // NOP
    // 0x1f0a10: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f0a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f0a14: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f0a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a1c: 0x0  nop
    ctx->pc = 0x1f0a1cu;
    // NOP
    // 0x1f0a20: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1f0a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a28: 0x0  nop
    ctx->pc = 0x1f0a28u;
    // NOP
    // 0x1f0a2c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f0a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1f0a30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a38: 0x0  nop
    ctx->pc = 0x1f0a38u;
    // NOP
    // 0x1f0a3c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1f0a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1f0a40: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0a44: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1f0a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f0a48: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f0a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f0a4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f0a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0a50: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1f0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1f0a54: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1f0a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f0a58: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x1f0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f0a5c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1f0a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f0a60: 0x34a40006  ori         $a0, $a1, 0x6
    ctx->pc = 0x1f0a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1f0a64: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0a68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f0a6c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f0a70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0a70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0a74: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f0a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f0a78: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f0a78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0a7c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F0A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A84u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F0A7Cu, 0x1F0A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A84u;
label_1f0a84:
    // 0x1f0a84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0A84u;
    SET_GPR_U32(ctx, 31, 0x1F0A8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0A84u, 0x1F0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A8Cu;
label_1f0a8c:
    // 0x1f0a8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f0a8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0a90: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0A90u;
    {
        const bool branch_taken_0x1f0a90 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1f0a90) {
            ctx->pc = 0x1F0AACu;
            goto label_1f0aac;
        }
    }
    ctx->pc = 0x1F0A98u;
    // 0x1f0a98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a9c: 0x0  nop
    ctx->pc = 0x1f0a9cu;
    // NOP
    // 0x1f0aa0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f0aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0aa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0AA4u;
    {
        const bool branch_taken_0x1f0aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0aa4) {
            ctx->pc = 0x1F0AC8u;
            goto label_1f0ac8;
        }
    }
    ctx->pc = 0x1F0AACu;
label_1f0aac:
    // 0x1f0aac: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1f0ab0: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x1f0ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f0ab4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1f0ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f0ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0abc: 0x0  nop
    ctx->pc = 0x1f0abcu;
    // NOP
    // 0x1f0ac0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f0ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0ac4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f0ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f0ac8:
    // 0x1f0ac8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f0ad0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1f0ad4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0ad8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f0ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f0adc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f0adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f0ae0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1f0ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0ae4: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x1f0ae8: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x1f0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1f0aec: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1f0aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f0af0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1f0af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f0af4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f0af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f0af8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0afc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f0b00: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f0b04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0b04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0b08: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f0b0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f0b0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0b10: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F0B10u;
    SET_GPR_U32(ctx, 31, 0x1F0B18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F0B10u, 0x1F0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B18u;
label_1f0b18:
    // 0x1f0b18: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f0b1c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1f0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1f0b20: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0B20u;
    SET_GPR_U32(ctx, 31, 0x1F0B28u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0B20u, 0x1F0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B28u;
label_1f0b28:
    // 0x1f0b28: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f0b2c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1f0b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1f0b30: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0B30u;
    SET_GPR_U32(ctx, 31, 0x1F0B38u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0B30u, 0x1F0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B38u;
label_1f0b38:
    // 0x1f0b38: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f0b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0b3c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b40: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f0b44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f0b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f0b48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0b4c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f0b50: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f0b54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0b54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0b58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F0B58u;
    SET_GPR_U32(ctx, 31, 0x1F0B60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F0B58u, 0x1F0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B60u;
label_1f0b60:
    // 0x1f0b60: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b64: 0x84a3127c  lh          $v1, 0x127C($a1)
    ctx->pc = 0x1f0b64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f0b68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f0b6c: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f0b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0b74: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b78: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f0b78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_1f0b7c:
    // 0x1f0b7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b80: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0b84: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0b8c: 0x0  nop
    ctx->pc = 0x1f0b8cu;
    // NOP
    // 0x1f0b90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f0b90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0b94: 0x0  nop
    ctx->pc = 0x1f0b94u;
    // NOP
    // 0x1f0b98: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1F0B98u;
    {
        const bool branch_taken_0x1f0b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0b98) {
            ctx->pc = 0x1F0C7Cu;
            goto label_1f0c7c;
        }
    }
    ctx->pc = 0x1F0BA0u;
    // 0x1f0ba0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0ba4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0ba8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bb0: 0x0  nop
    ctx->pc = 0x1f0bb0u;
    // NOP
    // 0x1f0bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0bb8: 0x0  nop
    ctx->pc = 0x1f0bb8u;
    // NOP
    // 0x1f0bbc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F0BBCu;
    {
        const bool branch_taken_0x1f0bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0bbc) {
            ctx->pc = 0x1F0C24u;
            goto label_1f0c24;
        }
    }
    ctx->pc = 0x1F0BC4u;
    // 0x1f0bc4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0bc8: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f0bcc: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1f0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bd0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f0bd4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f0bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bdc: 0x0  nop
    ctx->pc = 0x1f0bdcu;
    // NOP
    // 0x1f0be0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0be0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0be4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1f0be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1f0be8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0bec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0bf0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bf8: 0x0  nop
    ctx->pc = 0x1f0bf8u;
    // NOP
    // 0x1f0bfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f0bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0c00: 0x0  nop
    ctx->pc = 0x1f0c00u;
    // NOP
    // 0x1f0c04: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F0C04u;
    {
        const bool branch_taken_0x1f0c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c04) {
            ctx->pc = 0x1F0C7Cu;
            goto label_1f0c7c;
        }
    }
    ctx->pc = 0x1F0C0Cu;
    // 0x1f0c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c10: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c14: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c18: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1f0c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1f0c1c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0C1Cu;
    {
        const bool branch_taken_0x1f0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c1c) {
            ctx->pc = 0x1F0C7Cu;
            goto label_1f0c7c;
        }
    }
    ctx->pc = 0x1F0C24u;
label_1f0c24:
    // 0x1f0c24: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c28: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c2c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0c30: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f0c34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c3c: 0x0  nop
    ctx->pc = 0x1f0c3cu;
    // NOP
    // 0x1f0c40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0c44: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f0c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f0c48: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c50: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c58: 0x0  nop
    ctx->pc = 0x1f0c58u;
    // NOP
    // 0x1f0c5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0c60: 0x0  nop
    ctx->pc = 0x1f0c60u;
    // NOP
    // 0x1f0c64: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0C64u;
    {
        const bool branch_taken_0x1f0c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c64) {
            ctx->pc = 0x1F0C7Cu;
            goto label_1f0c7c;
        }
    }
    ctx->pc = 0x1F0C6Cu;
    // 0x1f0c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c70: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0c78: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f0c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f0c7c:
    // 0x1f0c7c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c80: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f0c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f0c84: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f0c88: 0x30641000  andi        $a0, $v1, 0x1000
    ctx->pc = 0x1f0c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f0c8c: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F0C8Cu;
    {
        const bool branch_taken_0x1f0c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c8c) {
            ctx->pc = 0x1F0D2Cu;
            goto label_1f0d2c;
        }
    }
    ctx->pc = 0x1F0C94u;
    // 0x1f0c94: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0c98: 0xc4a20124  lwc1        $f2, 0x124($a1)
    ctx->pc = 0x1f0c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0c9c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1f0ca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0ca4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0ca8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0ca8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0cac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0cb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f0cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0cb4: 0x0  nop
    ctx->pc = 0x1f0cb4u;
    // NOP
    // 0x1f0cb8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0CB8u;
    {
        const bool branch_taken_0x1f0cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0cb8) {
            ctx->pc = 0x1F0CDCu;
            goto label_1f0cdc;
        }
    }
    ctx->pc = 0x1F0CC0u;
    // 0x1f0cc0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0cc4: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0cc8: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0ccc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f0cccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0cd0: 0x0  nop
    ctx->pc = 0x1f0cd0u;
    // NOP
    // 0x1f0cd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0cd8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1f0cdc:
    // 0x1f0cdc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0ce0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f0ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0ce4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f0ce8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0cec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0cf0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0cf0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0cf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0cf8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f0cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0cfc: 0x0  nop
    ctx->pc = 0x1f0cfcu;
    // NOP
    // 0x1f0d00: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1F0D00u;
    {
        const bool branch_taken_0x1f0d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0d00) {
            ctx->pc = 0x1F0DC4u;
            goto label_1f0dc4;
        }
    }
    ctx->pc = 0x1F0D08u;
    // 0x1f0d08: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d0c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0d10: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d18: 0x0  nop
    ctx->pc = 0x1f0d18u;
    // NOP
    // 0x1f0d1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d20: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1f0d24: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0DC4u;
            goto label_1f0dc4;
        }
    }
    ctx->pc = 0x1F0D2Cu;
label_1f0d2c:
    // 0x1f0d2c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d30: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1f0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0d34: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x1f0d38: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x1f0d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f0d3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1f0d3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0d44: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0d44u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d4c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f0d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0d50: 0x0  nop
    ctx->pc = 0x1f0d50u;
    // NOP
    // 0x1f0d54: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0D54u;
    {
        const bool branch_taken_0x1f0d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0d54) {
            ctx->pc = 0x1F0D78u;
            goto label_1f0d78;
        }
    }
    ctx->pc = 0x1F0D5Cu;
    // 0x1f0d5c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d60: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0d64: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d6c: 0x0  nop
    ctx->pc = 0x1f0d6cu;
    // NOP
    // 0x1f0d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d74: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1f0d78:
    // 0x1f0d78: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d7c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f0d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0d80: 0x3c0544bb  lui         $a1, 0x44BB
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17595 << 16));
    // 0x1f0d84: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x1f0d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1f0d88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0d90: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0d90u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d98: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f0d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0d9c: 0x0  nop
    ctx->pc = 0x1f0d9cu;
    // NOP
    // 0x1f0da0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0DA0u;
    {
        const bool branch_taken_0x1f0da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0da0) {
            ctx->pc = 0x1F0DC4u;
            goto label_1f0dc4;
        }
    }
    ctx->pc = 0x1F0DA8u;
    // 0x1f0da8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0dac: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0db0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0db8: 0x0  nop
    ctx->pc = 0x1f0db8u;
    // NOP
    // 0x1f0dbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0dc0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1f0dc4:
    // 0x1f0dc4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1f0dc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0dd4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1f0dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1f0dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0DE0u;
}
