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

// Function: Em10_flying_weapon
// Address: 0x136020 - 0x1362e8
void Em10_flying_weapon_0x136020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_flying_weapon_0x136020");
#endif

    switch (ctx->pc) {
        case 0x1360a4u: goto label_1360a4;
        case 0x1360d0u: goto label_1360d0;
        case 0x136110u: goto label_136110;
        case 0x136120u: goto label_136120;
        case 0x136144u: goto label_136144;
        case 0x136188u: goto label_136188;
        case 0x1361f4u: goto label_1361f4;
        case 0x136220u: goto label_136220;
        case 0x13625cu: goto label_13625c;
        case 0x13626cu: goto label_13626c;
        case 0x136290u: goto label_136290;
        case 0x1362d4u: goto label_1362d4;
        default: break;
    }

    ctx->pc = 0x136020u;

    // 0x136020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136024: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x136024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x136028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13602c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x13602cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x136030: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136034: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x136034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x136038: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13603c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x13603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x136040: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x136040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x136044: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136048: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x136048u;
    {
        const bool branch_taken_0x136048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136048) {
            ctx->pc = 0x136188u;
            goto label_136188;
        }
    }
    ctx->pc = 0x136050u;
    // 0x136050: 0x92030097  lbu         $v1, 0x97($s0)
    ctx->pc = 0x136050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x136054: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x136054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136058: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x136058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13605c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x13605Cu;
    {
        const bool branch_taken_0x13605c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13605c) {
            ctx->pc = 0x136170u;
            goto label_136170;
        }
    }
    ctx->pc = 0x136064u;
    // 0x136064: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136068: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x136068u;
    {
        const bool branch_taken_0x136068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136068) {
            ctx->pc = 0x1360D8u;
            goto label_1360d8;
        }
    }
    ctx->pc = 0x136070u;
    // 0x136070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136074: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x136074u;
    {
        const bool branch_taken_0x136074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136074) {
            ctx->pc = 0x1360B8u;
            goto label_1360b8;
        }
    }
    ctx->pc = 0x13607Cu;
    // 0x13607c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13607Cu;
    {
        const bool branch_taken_0x13607c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13607c) {
            ctx->pc = 0x13608Cu;
            goto label_13608c;
        }
    }
    ctx->pc = 0x136084u;
    // 0x136084: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x136084u;
    {
        const bool branch_taken_0x136084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136084) {
            ctx->pc = 0x136188u;
            goto label_136188;
        }
    }
    ctx->pc = 0x13608Cu;
label_13608c:
    // 0x13608c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x13608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136090: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x136090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x136094: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x136094u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136098: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x136098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13609c: 0xc04d470  jal         func_1351C0
    ctx->pc = 0x13609Cu;
    SET_GPR_U32(ctx, 31, 0x1360A4u);
    ctx->pc = 0x1351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351C0u, 0x13609Cu, 0x1360A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360A4u;
label_1360a4:
    // 0x1360a4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1360a8: 0xa6020086  sh          $v0, 0x86($s0)
    ctx->pc = 0x1360a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x1360ac: 0x92020097  lbu         $v0, 0x97($s0)
    ctx->pc = 0x1360acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x1360b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1360b4: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x1360b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
label_1360b8:
    // 0x1360b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1360b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1360bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1360c0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1360c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1360c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1360c8: 0xc04d5a0  jal         func_135680
    ctx->pc = 0x1360C8u;
    SET_GPR_U32(ctx, 31, 0x1360D0u);
    ctx->pc = 0x135680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135680u, 0x1360C8u, 0x1360D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360D0u;
label_1360d0:
    // 0x1360d0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1360D0u;
    {
        const bool branch_taken_0x1360d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1360d0) {
            ctx->pc = 0x136188u;
            goto label_136188;
        }
    }
    ctx->pc = 0x1360D8u;
label_1360d8:
    // 0x1360d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1360d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1360dc: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x1360dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x1360e0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1360e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1360e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1360e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1360e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1360e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1360ec: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x1360ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x1360f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1360f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1360f4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1360f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1360f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1360f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1360fc: 0x24452290  addiu       $a1, $v0, 0x2290
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8848));
    // 0x136100: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x136100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x136104: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x136104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x136108: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x136108u;
    SET_GPR_U32(ctx, 31, 0x136110u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x136108u, 0x136110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136110u;
label_136110:
    // 0x136110: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x136110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136114: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x136114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136118: 0xc040c24  jal         func_103090
    ctx->pc = 0x136118u;
    SET_GPR_U32(ctx, 31, 0x136120u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x136120u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136120u) { return; }
    ctx->pc = 0x136120u;
label_136120:
    // 0x136120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136124: 0x0  nop
    ctx->pc = 0x136124u;
    // NOP
    // 0x136128: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x13612c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x13612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x136130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x136130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x136134: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x136134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136138: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x136138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13613c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13613Cu;
    SET_GPR_U32(ctx, 31, 0x136144u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x136144u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136144u) { return; }
    ctx->pc = 0x136144u;
label_136144:
    // 0x136144: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x136144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x136148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13614c: 0x0  nop
    ctx->pc = 0x13614cu;
    // NOP
    // 0x136150: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x136154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x136158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13615c: 0x0  nop
    ctx->pc = 0x13615cu;
    // NOP
    // 0x136160: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x136160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x136164: 0x92020097  lbu         $v0, 0x97($s0)
    ctx->pc = 0x136164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x136168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13616c: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x13616cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
label_136170:
    // 0x136170: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x136170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136174: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x136174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x136178: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x136178u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13617c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13617cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136180: 0xc04d72c  jal         func_135CB0
    ctx->pc = 0x136180u;
    SET_GPR_U32(ctx, 31, 0x136188u);
    ctx->pc = 0x135CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135CB0u, 0x136180u, 0x136188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136188u;
label_136188:
    // 0x136188: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13618c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x13618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x136190: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x136190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x136194: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136198: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x136198u;
    {
        const bool branch_taken_0x136198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136198) {
            ctx->pc = 0x1362D4u;
            goto label_1362d4;
        }
    }
    ctx->pc = 0x1361A0u;
    // 0x1361a0: 0x92030098  lbu         $v1, 0x98($s0)
    ctx->pc = 0x1361a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1361a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1361a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1361a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1361a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1361ac: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1361ACu;
    {
        const bool branch_taken_0x1361ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361ac) {
            ctx->pc = 0x1362BCu;
            goto label_1362bc;
        }
    }
    ctx->pc = 0x1361B4u;
    // 0x1361b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1361b8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1361B8u;
    {
        const bool branch_taken_0x1361b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361b8) {
            ctx->pc = 0x136228u;
            goto label_136228;
        }
    }
    ctx->pc = 0x1361C0u;
    // 0x1361c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1361c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1361c4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1361C4u;
    {
        const bool branch_taken_0x1361c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361c4) {
            ctx->pc = 0x136208u;
            goto label_136208;
        }
    }
    ctx->pc = 0x1361CCu;
    // 0x1361cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1361CCu;
    {
        const bool branch_taken_0x1361cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361cc) {
            ctx->pc = 0x1361DCu;
            goto label_1361dc;
        }
    }
    ctx->pc = 0x1361D4u;
    // 0x1361d4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1361D4u;
    {
        const bool branch_taken_0x1361d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361d4) {
            ctx->pc = 0x1362D4u;
            goto label_1362d4;
        }
    }
    ctx->pc = 0x1361DCu;
label_1361dc:
    // 0x1361dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1361dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1361e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1361e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1361e4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1361e8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1361e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1361ec: 0xc04d470  jal         func_1351C0
    ctx->pc = 0x1361ECu;
    SET_GPR_U32(ctx, 31, 0x1361F4u);
    ctx->pc = 0x1351C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351C0u, 0x1361ECu, 0x1361F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361F4u;
label_1361f4:
    // 0x1361f4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1361f8: 0xa6020088  sh          $v0, 0x88($s0)
    ctx->pc = 0x1361f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x1361fc: 0x92020098  lbu         $v0, 0x98($s0)
    ctx->pc = 0x1361fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x136200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x136204: 0xa2020098  sb          $v0, 0x98($s0)
    ctx->pc = 0x136204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 2));
label_136208:
    // 0x136208: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x136208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13620c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x136210: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x136210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136214: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x136214u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136218: 0xc04d5a0  jal         func_135680
    ctx->pc = 0x136218u;
    SET_GPR_U32(ctx, 31, 0x136220u);
    ctx->pc = 0x135680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135680u, 0x136218u, 0x136220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136220u;
label_136220:
    // 0x136220: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136220u;
    {
        const bool branch_taken_0x136220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136220) {
            ctx->pc = 0x1362D4u;
            goto label_1362d4;
        }
    }
    ctx->pc = 0x136228u;
label_136228:
    // 0x136228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13622c: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x13622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x136230: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x136230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x136234: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x136234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x136238: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x136238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x13623c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136240: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x136240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x136244: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x136244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136248: 0x24452100  addiu       $a1, $v0, 0x2100
    ctx->pc = 0x136248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
    // 0x13624c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x136250: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x136250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x136254: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x136254u;
    SET_GPR_U32(ctx, 31, 0x13625Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x136254u, 0x13625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13625Cu;
label_13625c:
    // 0x13625c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x13625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136260: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136264: 0xc040c24  jal         func_103090
    ctx->pc = 0x136264u;
    SET_GPR_U32(ctx, 31, 0x13626Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x13626Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13626Cu) { return; }
    ctx->pc = 0x13626Cu;
label_13626c:
    // 0x13626c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13626cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136270: 0x0  nop
    ctx->pc = 0x136270u;
    // NOP
    // 0x136274: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x136274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x136278: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x136278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x13627c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13627cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x136280: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x136280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136284: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x136284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136288: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x136288u;
    SET_GPR_U32(ctx, 31, 0x136290u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x136290u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136290u) { return; }
    ctx->pc = 0x136290u;
label_136290:
    // 0x136290: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x136294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136298: 0x0  nop
    ctx->pc = 0x136298u;
    // NOP
    // 0x13629c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x13629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1362a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1362a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1362a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1362a8: 0x0  nop
    ctx->pc = 0x1362a8u;
    // NOP
    // 0x1362ac: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1362acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1362b0: 0x92020098  lbu         $v0, 0x98($s0)
    ctx->pc = 0x1362b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1362b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1362b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1362b8: 0xa2020098  sb          $v0, 0x98($s0)
    ctx->pc = 0x1362b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 2));
label_1362bc:
    // 0x1362bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1362bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1362c0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1362c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1362c4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1362c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1362c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1362cc: 0xc04d72c  jal         func_135CB0
    ctx->pc = 0x1362CCu;
    SET_GPR_U32(ctx, 31, 0x1362D4u);
    ctx->pc = 0x135CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135CB0u, 0x1362CCu, 0x1362D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362D4u;
label_1362d4:
    // 0x1362d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1362d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1362d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1362d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1362dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1362dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1362e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1362E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1362E8u;
}
