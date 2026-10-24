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

// Function: Gauge_trans
// Address: 0x32e030 - 0x32e3fc
void Gauge_trans_0x32e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gauge_trans_0x32e030");
#endif

    switch (ctx->pc) {
        case 0x32e078u: goto label_32e078;
        case 0x32e080u: goto label_32e080;
        case 0x32e088u: goto label_32e088;
        case 0x32e0d4u: goto label_32e0d4;
        case 0x32e110u: goto label_32e110;
        case 0x32e154u: goto label_32e154;
        case 0x32e190u: goto label_32e190;
        case 0x32e1e4u: goto label_32e1e4;
        case 0x32e238u: goto label_32e238;
        case 0x32e274u: goto label_32e274;
        case 0x32e2b0u: goto label_32e2b0;
        case 0x32e2ecu: goto label_32e2ec;
        case 0x32e334u: goto label_32e334;
        case 0x32e358u: goto label_32e358;
        case 0x32e37cu: goto label_32e37c;
        case 0x32e3a0u: goto label_32e3a0;
        case 0x32e3d8u: goto label_32e3d8;
        default: break;
    }

    ctx->pc = 0x32e030u;

    // 0x32e030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32e034: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x32e034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x32e038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32e038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32e03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32e040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32e040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32e044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e04c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32e050: 0x2452c2f0  addiu       $s2, $v0, -0x3D10
    ctx->pc = 0x32e050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x32e054: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32e058: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x32e058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x32e05c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32e060: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x32e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x32e064: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x32e064u;
    SET_GPR_S32(ctx, 19, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x32e068: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32e06c: 0x2450c2b0  addiu       $s0, $v0, -0x3D50
    ctx->pc = 0x32e06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x32e070: 0xc0cad0c  jal         func_32B430
    ctx->pc = 0x32E070u;
    SET_GPR_U32(ctx, 31, 0x32E078u);
    ctx->pc = 0x32B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B430u, 0x32E070u, 0x32E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E078u;
label_32e078:
    // 0x32e078: 0xc0cb060  jal         func_32C180
    ctx->pc = 0x32E078u;
    SET_GPR_U32(ctx, 31, 0x32E080u);
    ctx->pc = 0x32C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C180u, 0x32E078u, 0x32E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E080u;
label_32e080:
    // 0x32e080: 0xc0cb3ec  jal         func_32CFB0
    ctx->pc = 0x32E080u;
    SET_GPR_U32(ctx, 31, 0x32E088u);
    ctx->pc = 0x32CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFB0u, 0x32E080u, 0x32E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E088u;
label_32e088:
    // 0x32e088: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32e088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32e08c: 0x8c22a230  lw          $v0, -0x5DD0($at)
    ctx->pc = 0x32e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x39A230u));
    // 0x32e090: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32E090u;
    {
        const bool branch_taken_0x32e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e090) {
            ctx->pc = 0x32E0D8u;
            goto label_32e0d8;
        }
    }
    ctx->pc = 0x32E098u;
    // 0x32e098: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e09c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e0a0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e0a4: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x32e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x32e0a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e0ac: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32e0b0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x32e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x32e0b4: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e0b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E0B8u;
    {
        const bool branch_taken_0x32e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e0b8) {
            ctx->pc = 0x32E0D4u;
            goto label_32e0d4;
        }
    }
    ctx->pc = 0x32E0C0u;
    // 0x32e0c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e0c4: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e0c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e0c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e0cc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E0CCu;
    SET_GPR_U32(ctx, 31, 0x32E0D4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E0CCu, 0x32E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0D4u;
label_32e0d4:
    // 0x32e0d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32e0d8:
    // 0x32e0d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e0dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e0e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e0e4: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x32e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x32e0e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e0ec: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x32e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x32e0f0: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e0f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E0F4u;
    {
        const bool branch_taken_0x32e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e0f4) {
            ctx->pc = 0x32E110u;
            goto label_32e110;
        }
    }
    ctx->pc = 0x32E0FCu;
    // 0x32e0fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e100: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e104: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e108: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E108u;
    SET_GPR_U32(ctx, 31, 0x32E110u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E108u, 0x32E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E110u;
label_32e110:
    // 0x32e110: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32e114: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e118: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e11c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e120: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x32e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x32e124: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e128: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x32e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x32e12c: 0x3442080a  ori         $v0, $v0, 0x80A
    ctx->pc = 0x32e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2058);
    // 0x32e130: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x32e130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x32e134: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e138: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E138u;
    {
        const bool branch_taken_0x32e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e138) {
            ctx->pc = 0x32E154u;
            goto label_32e154;
        }
    }
    ctx->pc = 0x32E140u;
    // 0x32e140: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e144: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e148: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e14c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E14Cu;
    SET_GPR_U32(ctx, 31, 0x32E154u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E14Cu, 0x32E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E154u;
label_32e154:
    // 0x32e154: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32e158: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e15c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e160: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e164: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x32e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x32e168: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e16c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x32e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x32e170: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E174u;
    {
        const bool branch_taken_0x32e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e174) {
            ctx->pc = 0x32E190u;
            goto label_32e190;
        }
    }
    ctx->pc = 0x32E17Cu;
    // 0x32e17c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e180: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e184: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e188: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E188u;
    SET_GPR_U32(ctx, 31, 0x32E190u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E188u, 0x32E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E190u;
label_32e190:
    // 0x32e190: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32e194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32e198: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x32e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x32e19c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x32e19cu;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x32e1a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e1a4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32e1a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32e1ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32e1b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32E1B0u;
    {
        const bool branch_taken_0x32e1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e1b0) {
            ctx->pc = 0x32E1E4u;
            goto label_32e1e4;
        }
    }
    ctx->pc = 0x32E1B8u;
    // 0x32e1b8: 0x2933023  subu        $a2, $s4, $s3
    ctx->pc = 0x32e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x32e1bc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x32e1c0: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x32e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x32e1c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e1c8: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e1cc: 0x34420205  ori         $v0, $v0, 0x205
    ctx->pc = 0x32e1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)517);
    // 0x32e1d0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e1d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e1d8: 0x24451f50  addiu       $a1, $v0, 0x1F50
    ctx->pc = 0x32e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8016));
    // 0x32e1dc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E1DCu;
    SET_GPR_U32(ctx, 31, 0x32E1E4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E1DCu, 0x32E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E1E4u;
label_32e1e4:
    // 0x32e1e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e1e8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32e1ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32e1f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32e1f4: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x32E1F4u;
    {
        const bool branch_taken_0x32e1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e1f4) {
            ctx->pc = 0x32E37Cu;
            goto label_32e37c;
        }
    }
    ctx->pc = 0x32E1FCu;
    // 0x32e1fc: 0x862213a8  lh          $v0, 0x13A8($s1)
    ctx->pc = 0x32e1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5032)));
    // 0x32e200: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e204: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e204u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e208: 0x862213aa  lh          $v0, 0x13AA($s1)
    ctx->pc = 0x32e208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5034)));
    // 0x32e20c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e20cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e210: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e210u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e214: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e218: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e21c: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e220: 0x34420714  ori         $v0, $v0, 0x714
    ctx->pc = 0x32e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1812);
    // 0x32e224: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e228: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e22c: 0x24451f70  addiu       $a1, $v0, 0x1F70
    ctx->pc = 0x32e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8048));
    // 0x32e230: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E230u;
    SET_GPR_U32(ctx, 31, 0x32E238u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E230u, 0x32E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E238u;
label_32e238:
    // 0x32e238: 0x862213ac  lh          $v0, 0x13AC($s1)
    ctx->pc = 0x32e238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5036)));
    // 0x32e23c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e240: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e240u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e244: 0x862213ae  lh          $v0, 0x13AE($s1)
    ctx->pc = 0x32e244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5038)));
    // 0x32e248: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e24c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e24cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e250: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e254: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e258: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e25c: 0x34420715  ori         $v0, $v0, 0x715
    ctx->pc = 0x32e25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1813);
    // 0x32e260: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e264: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e268: 0x24451f90  addiu       $a1, $v0, 0x1F90
    ctx->pc = 0x32e268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8080));
    // 0x32e26c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E26Cu;
    SET_GPR_U32(ctx, 31, 0x32E274u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E26Cu, 0x32E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E274u;
label_32e274:
    // 0x32e274: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e278: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32e278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32e27c: 0x30468000  andi        $a2, $v0, 0x8000
    ctx->pc = 0x32e27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32e280: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32e284: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32e284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32e288: 0x30472000  andi        $a3, $v0, 0x2000
    ctx->pc = 0x32e288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x32e28c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e294: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e298: 0x34420716  ori         $v0, $v0, 0x716
    ctx->pc = 0x32e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1814);
    // 0x32e29c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e2a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e2a4: 0x24451fb0  addiu       $a1, $v0, 0x1FB0
    ctx->pc = 0x32e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8112));
    // 0x32e2a8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E2A8u;
    SET_GPR_U32(ctx, 31, 0x32E2B0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E2A8u, 0x32E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2B0u;
label_32e2b0:
    // 0x32e2b0: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x32e2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x32e2b4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e2b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e2b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e2bc: 0x8622138c  lh          $v0, 0x138C($s1)
    ctx->pc = 0x32e2bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5004)));
    // 0x32e2c0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e2c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e2c4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e2c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e2c8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e2cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e2d0: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e2d4: 0x34420710  ori         $v0, $v0, 0x710
    ctx->pc = 0x32e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1808);
    // 0x32e2d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e2dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e2e0: 0x24451ff0  addiu       $a1, $v0, 0x1FF0
    ctx->pc = 0x32e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
    // 0x32e2e4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E2E4u;
    SET_GPR_U32(ctx, 31, 0x32E2ECu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E2E4u, 0x32E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2ECu;
label_32e2ec:
    // 0x32e2ec: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x32e2ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x32e2f0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e2f4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e2f4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e2f8: 0x8622138c  lh          $v0, 0x138C($s1)
    ctx->pc = 0x32e2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5004)));
    // 0x32e2fc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e2fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e300: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e300u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e304: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x32e304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x32e308: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x32e308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e30c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x32e30cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x32e310: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e314: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e318: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32e31c: 0x34420714  ori         $v0, $v0, 0x714
    ctx->pc = 0x32e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1812);
    // 0x32e320: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e324: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e328: 0x24452010  addiu       $a1, $v0, 0x2010
    ctx->pc = 0x32e328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
    // 0x32e32c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E32Cu;
    SET_GPR_U32(ctx, 31, 0x32E334u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E32Cu, 0x32E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E334u;
label_32e334:
    // 0x32e334: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e338: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e33c: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e340: 0x34420219  ori         $v0, $v0, 0x219
    ctx->pc = 0x32e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x32e344: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e348: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e34c: 0x24452030  addiu       $a1, $v0, 0x2030
    ctx->pc = 0x32e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x32e350: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E350u;
    SET_GPR_U32(ctx, 31, 0x32E358u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E350u, 0x32E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E358u;
label_32e358:
    // 0x32e358: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e35c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e360: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e364: 0x3442021a  ori         $v0, $v0, 0x21A
    ctx->pc = 0x32e364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)538);
    // 0x32e368: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e36c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e370: 0x24452040  addiu       $a1, $v0, 0x2040
    ctx->pc = 0x32e370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
    // 0x32e374: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E374u;
    SET_GPR_U32(ctx, 31, 0x32E37Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E374u, 0x32E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E37Cu;
label_32e37c:
    // 0x32e37c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e384: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e388: 0x34421a18  ori         $v0, $v0, 0x1A18
    ctx->pc = 0x32e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6680);
    // 0x32e38c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e390: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e394: 0x24452048  addiu       $a1, $v0, 0x2048
    ctx->pc = 0x32e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8264));
    // 0x32e398: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E398u;
    SET_GPR_U32(ctx, 31, 0x32E3A0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E398u, 0x32E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E3A0u;
label_32e3a0:
    // 0x32e3a0: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32e3a4: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x32e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x32e3a8: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x32e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32e3ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32e3b0: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x32e3b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x32e3b4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32e3b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e3bc: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32e3c0: 0x34421a1a  ori         $v0, $v0, 0x1A1A
    ctx->pc = 0x32e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6682);
    // 0x32e3c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32e3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e3c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32e3cc: 0x24451f00  addiu       $a1, $v0, 0x1F00
    ctx->pc = 0x32e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x32e3d0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32E3D0u;
    SET_GPR_U32(ctx, 31, 0x32E3D8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32E3D0u, 0x32E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E3D8u;
label_32e3d8:
    // 0x32e3d8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x32e3d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e3dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e3dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e3e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e3f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x32e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32e3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E3FCu;
}
