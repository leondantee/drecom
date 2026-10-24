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

// Function: entry_0032f020
// Address: 0x32f020 - 0x32f15c
void entry_0032f020_0x32f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f020_0x32f020");
#endif

    switch (ctx->pc) {
        case 0x32f0a4u: goto label_32f0a4;
        case 0x32f124u: goto label_32f124;
        default: break;
    }

    ctx->pc = 0x32f020u;

    // 0x32f020: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x32f020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32f024: 0x24827000  addiu       $v0, $a0, 0x7000
    ctx->pc = 0x32f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x32f028: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32f028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f02c: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x32f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x32f030: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f034: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f038: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32f038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f03c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x32f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f040: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32f044: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f048: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x32f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f04c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f050: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x32f050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x32f054: 0x24a27000  addiu       $v0, $a1, 0x7000
    ctx->pc = 0x32f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32f058: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f05c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x32f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32f060: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32f064: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x32f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f068: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x32f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f06c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f070: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x32f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f078: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x32f078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f07c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x32f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f080: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f084: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32f088: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x32f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x32f08c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32f090: 0x26f4001c  addiu       $s4, $s7, 0x1C
    ctx->pc = 0x32f090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f094: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32f094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32f098: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f09c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F09Cu;
    SET_GPR_U32(ctx, 31, 0x32F0A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F09Cu, 0x32F0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F0A4u;
label_32f0a4:
    // 0x32f0a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32f0a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x32f0ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32f0b0: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x32f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x32f0b4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32f0b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f0bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f0c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f0c8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x32f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x32f0cc: 0x3454000a  ori         $s4, $v0, 0xA
    ctx->pc = 0x32f0ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x32f0d0: 0x8e36000c  lw          $s6, 0xC($s1)
    ctx->pc = 0x32f0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f0d4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x32f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x32f0d8: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x32f0d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0dc: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x32f0dcu;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x32f0e0: 0x1e13b8  dsll        $v0, $fp, 14
    ctx->pc = 0x32f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << 14);
    // 0x32f0e4: 0x2821825  or          $v1, $s4, $v0
    ctx->pc = 0x32f0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x32f0e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f0ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f0f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f0f4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x32f0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x32f0f8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32f0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f0fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f104: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f108: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x32f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32f10c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f110: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32f110u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32f114: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f118: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f11c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F11Cu;
    SET_GPR_U32(ctx, 31, 0x32F124u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F11Cu, 0x32F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F124u;
label_32f124:
    // 0x32f124: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f128: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32f128u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f12c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f130: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32f130u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f134: 0x26630008  addiu       $v1, $s3, 0x8
    ctx->pc = 0x32f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x32f138: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x32f138u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f13c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32f140: 0x8c22ec18  lw          $v0, -0x13E8($at)
    ctx->pc = 0x32f140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32f144: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F144u;
    {
        const bool branch_taken_0x32f144 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f144) {
            ctx->pc = 0x32F15Cu;
            return;
        }
    }
    ctx->pc = 0x32F14Cu;
    // 0x32f14c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f150: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32f154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F154u;
    {
        const bool branch_taken_0x32f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f154) {
            ctx->pc = 0x32F168u;
            return;
        }
    }
    ctx->pc = 0x32F15Cu;
}
