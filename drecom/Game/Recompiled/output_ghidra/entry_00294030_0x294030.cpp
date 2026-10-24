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

// Function: entry_00294030
// Address: 0x294030 - 0x2941bc
void entry_00294030_0x294030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294030_0x294030");
#endif

    switch (ctx->pc) {
        case 0x294078u: goto label_294078;
        case 0x2940b8u: goto label_2940b8;
        case 0x29410cu: goto label_29410c;
        case 0x294148u: goto label_294148;
        case 0x29417cu: goto label_29417c;
        default: break;
    }

    ctx->pc = 0x294030u;

    // 0x294030: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x294030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x294034: 0x1440ff41  bnez        $v0, . + 4 + (-0xBF << 2)
    ctx->pc = 0x294034u;
    {
        const bool branch_taken_0x294034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294034) {
            ctx->pc = 0x293D3Cu;
            return;
        }
    }
    ctx->pc = 0x29403Cu;
    // 0x29403c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x294040: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x294040u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x294044: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294048: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x294048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x29404c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29404cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x294050: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x294054: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x294054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x294058: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x294058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29405c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x294060: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x294060u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x294064: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x294064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x294068: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x294068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29406c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x29406cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x294070: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x294070u;
    SET_GPR_U32(ctx, 31, 0x294078u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294070u, 0x294078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294078u;
label_294078:
    // 0x294078: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x294078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x29407c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x29407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x294080: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x294080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x294084: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x294088: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x294088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x29408c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294090: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x294090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x294094: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x294094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x294098: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x294098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29409c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x29409cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x2940a0: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2940a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2940a4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2940a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2940a8: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2940a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2940ac: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2940acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2940b0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2940B0u;
    SET_GPR_U32(ctx, 31, 0x2940B8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2940B0u, 0x2940B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940B8u;
label_2940b8:
    // 0x2940b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2940b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2940bc: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2940bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2940c0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2940c0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2940c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2940c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2940c8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2940c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x2940cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2940ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2940d0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2940d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2940d4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2940d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2940d8: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x2940d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x2940dc: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2940dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2940e0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2940e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2940e4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2940e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2940e8: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x2940e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2940ec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2940ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2940f0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x2940f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x2940f4: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2940f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2940f8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2940f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2940fc: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2940fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x294100: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x294100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x294104: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x294104u;
    SET_GPR_U32(ctx, 31, 0x29410Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294104u, 0x29410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29410Cu;
label_29410c:
    // 0x29410c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29410cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x294110: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x294110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x294114: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x294114u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x294118: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x294118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x29411c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x29411cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x294120: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x294124: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x294124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x294128: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x294128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29412c: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x29412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x294130: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x294130u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x294134: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x294134u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x294138: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x294138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x29413c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x29413cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x294140: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x294140u;
    SET_GPR_U32(ctx, 31, 0x294148u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294140u, 0x294148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294148u;
label_294148:
    // 0x294148: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x294148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x29414c: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x29414cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x294150: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x294150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x294154: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x294154u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x294158: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x294158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x29415c: 0x3482103f  ori         $v0, $a0, 0x103F
    ctx->pc = 0x29415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4159);
    // 0x294160: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x294160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x294164: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x294164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x294168: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x294168u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x29416c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x29416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x294170: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x294170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x294174: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x294174u;
    SET_GPR_U32(ctx, 31, 0x29417Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294174u, 0x29417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29417Cu;
label_29417c:
    // 0x29417c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29417cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x294180: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x294180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x294184: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x294184u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x294188: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x294188u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29418c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29418cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294190: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x294190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294194: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x294194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294198: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x294198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29419c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29419cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2941a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2941a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2941a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2941a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2941a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2941a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2941ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2941acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2941b0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x2941b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2941b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2941B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2941BCu;
}
