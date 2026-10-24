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

// Function: entry_00197424
// Address: 0x197424 - 0x1975f0
void entry_00197424_0x197424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197424_0x197424");
#endif

    switch (ctx->pc) {
        case 0x197450u: goto label_197450;
        case 0x197480u: goto label_197480;
        case 0x1974b4u: goto label_1974b4;
        case 0x1974e8u: goto label_1974e8;
        case 0x197518u: goto label_197518;
        case 0x197544u: goto label_197544;
        case 0x19757cu: goto label_19757c;
        case 0x1975acu: goto label_1975ac;
        case 0x1975e4u: goto label_1975e4;
        default: break;
    }

    ctx->pc = 0x197424u;

    // 0x197424: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x197428: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19742c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19742cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197430: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197434: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x197434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x197438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19743c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19743cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197440: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x197440u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197444: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197444u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197448: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197448u;
    SET_GPR_U32(ctx, 31, 0x197450u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197448u, 0x197450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197450u;
label_197450:
    // 0x197450: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197454: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197458: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19745c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19745cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197460: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197464: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197468: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19746c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19746cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197470: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197474: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197474u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197478: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197478u;
    SET_GPR_U32(ctx, 31, 0x197480u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197478u, 0x197480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197480u;
label_197480:
    // 0x197480: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197484: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x197484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x197488: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x197488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x19748c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19748cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197490: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197494: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197498: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19749c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19749cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1974a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1974a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1974a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1974a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1974ac: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1974ACu;
    SET_GPR_U32(ctx, 31, 0x1974B4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1974ACu, 0x1974B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974B4u;
label_1974b4:
    // 0x1974b4: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x1974b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x1974b8: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x1974b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1974bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1974bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1974c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1974c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1974c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1974c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1974cc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1974ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1974d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1974d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1974d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1974d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1974dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1974dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1974e0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1974E0u;
    SET_GPR_U32(ctx, 31, 0x1974E8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1974E0u, 0x1974E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974E8u;
label_1974e8:
    // 0x1974e8: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1974ec: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1974ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1974f0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1974f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1974f4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1974f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1974f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1974f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1974fc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1974fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x197500: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197504: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197508: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19750c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19750cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197510: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197510u;
    SET_GPR_U32(ctx, 31, 0x197518u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197510u, 0x197518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197518u;
label_197518:
    // 0x197518: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x197518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x19751c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x19751cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x197520: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197524: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197528: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19752c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19752cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197530: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x197530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197534: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197538: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197538u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19753c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19753Cu;
    SET_GPR_U32(ctx, 31, 0x197544u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19753Cu, 0x197544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197544u;
label_197544:
    // 0x197544: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x197548: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x197548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x19754c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19754cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197550: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197554: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197558: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x197558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19755c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x19755cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197560: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197564: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x197564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19756c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x19756cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197570: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197570u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197574: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197574u;
    SET_GPR_U32(ctx, 31, 0x19757Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197574u, 0x19757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19757Cu;
label_19757c:
    // 0x19757c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x19757cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197580: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197584: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197588: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19758c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19758cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197590: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197594: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197598: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x197598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19759c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1975a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1975a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1975a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1975A4u;
    SET_GPR_U32(ctx, 31, 0x1975ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1975A4u, 0x1975ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975ACu;
label_1975ac:
    // 0x1975ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1975acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1975b0: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x1975b4: 0x34e5d70a  ori         $a1, $a3, 0xD70A
    ctx->pc = 0x1975b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x1975b8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1975b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1975bc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1975c0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1975c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1975c4: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1975c8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1975c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1975cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1975d0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1975d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1975d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1975d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1975d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1975dc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1975DCu;
    SET_GPR_U32(ctx, 31, 0x1975E4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1975DCu, 0x1975E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975E4u;
label_1975e4:
    // 0x1975e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1975e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1975e8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1975E8u;
    {
        const bool branch_taken_0x1975e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1975e8) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x1975F0u;
}
