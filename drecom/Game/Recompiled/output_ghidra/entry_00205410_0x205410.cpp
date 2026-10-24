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

// Function: entry_00205410
// Address: 0x205410 - 0x2056a0
void entry_00205410_0x205410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205410_0x205410");
#endif

    switch (ctx->pc) {
        case 0x20549cu: goto label_20549c;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054ecu: goto label_2054ec;
        case 0x205514u: goto label_205514;
        case 0x20553cu: goto label_20553c;
        case 0x205564u: goto label_205564;
        case 0x20558cu: goto label_20558c;
        case 0x2055b4u: goto label_2055b4;
        case 0x20561cu: goto label_20561c;
        case 0x205650u: goto label_205650;
        default: break;
    }

    ctx->pc = 0x205410u;

    // 0x205410: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x205410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x205414: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x205414u;
    {
        const bool branch_taken_0x205414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205414) {
            ctx->pc = 0x2053F8u;
            return;
        }
    }
    ctx->pc = 0x20541Cu;
    // 0x20541c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205420: 0xac401370  sw          $zero, 0x1370($v0)
    ctx->pc = 0x205420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4976), GPR_U32(ctx, 0));
    // 0x205424: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205428: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20542c: 0x24530c60  addiu       $s3, $v0, 0xC60
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x205430: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205430u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205434: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205438: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20543c: 0x24530d80  addiu       $s3, $v0, 0xD80
    ctx->pc = 0x20543cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x205440: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205440u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205444: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205448: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20544c: 0x24530e10  addiu       $s3, $v0, 0xE10
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3600));
    // 0x205450: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205450u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205454: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205458: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20545c: 0x24530cf0  addiu       $s3, $v0, 0xCF0
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x205460: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205460u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205464: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205468: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x205468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20546c: 0x24530ea0  addiu       $s3, $v0, 0xEA0
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x205470: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x205470u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x205474: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x205474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x205478: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x205478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x20547c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205480: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205484: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x205484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x205488: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205488u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20548c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20548cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205490: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205494: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205494u;
    SET_GPR_U32(ctx, 31, 0x20549Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205494u, 0x20549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20549Cu;
label_20549c:
    // 0x20549c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x20549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2054a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2054a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2054a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2054a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2054a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2054a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2054ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2054acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2054b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2054b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2054b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2054b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2054b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2054b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2054bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2054BCu;
    SET_GPR_U32(ctx, 31, 0x2054C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2054BCu, 0x2054C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054C4u;
label_2054c4:
    // 0x2054c4: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x2054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x2054c8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2054c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2054cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2054ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2054d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2054d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2054d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2054d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2054d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2054d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2054dc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2054dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2054e0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2054e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2054e4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2054E4u;
    SET_GPR_U32(ctx, 31, 0x2054ECu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2054E4u, 0x2054ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054ECu;
label_2054ec:
    // 0x2054ec: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x2054f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2054f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2054f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2054f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2054f8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2054f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2054fc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2054fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x205500: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205500u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205504: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x205504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205508: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20550c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20550Cu;
    SET_GPR_U32(ctx, 31, 0x205514u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20550Cu, 0x205514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205514u;
label_205514:
    // 0x205514: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x205518: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x205518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20551c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205520: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205524: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x205524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x205528: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205528u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20552c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205530: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205534: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205534u;
    SET_GPR_U32(ctx, 31, 0x20553Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205534u, 0x20553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20553Cu;
label_20553c:
    // 0x20553c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x205540: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x205540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x205544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205548: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20554c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x205550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205554: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205558: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20555c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20555Cu;
    SET_GPR_U32(ctx, 31, 0x205564u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20555Cu, 0x205564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205564u;
label_205564:
    // 0x205564: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x205568: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x205568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x20556c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20556cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205570: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205574: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x205574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x205578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20557c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205580: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x205580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205584: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205584u;
    SET_GPR_U32(ctx, 31, 0x20558Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205584u, 0x20558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20558Cu;
label_20558c:
    // 0x20558c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x205590: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x205590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x205594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205598: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20559c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x20559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2055a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2055a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2055a4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2055a8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2055ac: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2055ACu;
    SET_GPR_U32(ctx, 31, 0x2055B4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2055ACu, 0x2055B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055B4u;
label_2055b4:
    // 0x2055b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2055b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2055b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055c0: 0xe420937c  swc1        $f0, -0x6C84($at)
    ctx->pc = 0x2055c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61937Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61937Cu, _value); } while (0); }
    // 0x2055c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2055c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2055c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055d0: 0xe420935c  swc1        $f0, -0x6CA4($at)
    ctx->pc = 0x2055d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61935Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61935Cu, _value); } while (0); }
    // 0x2055d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2055d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055dc: 0xe4209368  swc1        $f0, -0x6C98($at)
    ctx->pc = 0x2055dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619368u, _value); } while (0); }
    // 0x2055e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055e4: 0xe4209364  swc1        $f0, -0x6C9C($at)
    ctx->pc = 0x2055e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619364u, _value); } while (0); }
    // 0x2055e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055ec: 0xe4209360  swc1        $f0, -0x6CA0($at)
    ctx->pc = 0x2055ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619360u, _value); } while (0); }
    // 0x2055f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2055f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2055f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2055f8: 0xe4209378  swc1        $f0, -0x6C88($at)
    ctx->pc = 0x2055f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619378u, _value); } while (0); }
    // 0x2055fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2055fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205600: 0xe4209374  swc1        $f0, -0x6C8C($at)
    ctx->pc = 0x205600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619374u, _value); } while (0); }
    // 0x205604: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x205604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205608: 0xe4209370  swc1        $f0, -0x6C90($at)
    ctx->pc = 0x205608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619370u, _value); } while (0); }
    // 0x20560c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x205610: 0x24449350  addiu       $a0, $v0, -0x6CB0
    ctx->pc = 0x205610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
    // 0x205614: 0xc05da88  jal         func_176A20
    ctx->pc = 0x205614u;
    SET_GPR_U32(ctx, 31, 0x20561Cu);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x205614u, 0x20561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20561Cu;
label_20561c:
    // 0x20561c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205620: 0xac229380  sw          $v0, -0x6C80($at)
    ctx->pc = 0x205620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619380u, _value); } while (0);
    // 0x205624: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x205624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x205628: 0x2442a160  addiu       $v0, $v0, -0x5EA0
    ctx->pc = 0x205628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943072));
    // 0x20562c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x20562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x205630: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x205630u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A160u));
    // 0x205634: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x205634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x205638: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x205638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20563c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x20563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205640: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x205644: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x205648: 0xc0bb950  jal         func_2EE540
    ctx->pc = 0x205648u;
    SET_GPR_U32(ctx, 31, 0x205650u);
    ctx->pc = 0x2EE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE540u, 0x205648u, 0x205650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205650u;
label_205650:
    // 0x205650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x205650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x205654: 0xac229310  sw          $v0, -0x6CF0($at)
    ctx->pc = 0x205654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619310u, _value); } while (0);
    // 0x205658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x205658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20565c: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x205660: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x205660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x205664: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x205664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x205668: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x205668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20566c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20566cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x205670: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x205670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205674: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x205674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x205678: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x205678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x20567c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x20567cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x205680: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x205680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x205684: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x205684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x205688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20568c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205690: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x205690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x205694: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x205694u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x205698u;
    {
        const bool branch_taken_0x205698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205698) {
            ctx->pc = 0x2056C0u;
            return;
        }
    }
    ctx->pc = 0x2056A0u;
}
