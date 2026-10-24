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

// Function: R11c_effect_set
// Address: 0x279430 - 0x2796a0
void R11c_effect_set_0x279430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11c_effect_set_0x279430");
#endif

    switch (ctx->pc) {
        case 0x279454u: goto label_279454;
        case 0x279460u: goto label_279460;
        case 0x27947cu: goto label_27947c;
        case 0x279488u: goto label_279488;
        case 0x2794a4u: goto label_2794a4;
        case 0x2794b0u: goto label_2794b0;
        case 0x2794ccu: goto label_2794cc;
        case 0x2794d8u: goto label_2794d8;
        case 0x2794f4u: goto label_2794f4;
        case 0x279500u: goto label_279500;
        case 0x27951cu: goto label_27951c;
        case 0x279528u: goto label_279528;
        case 0x279544u: goto label_279544;
        case 0x279550u: goto label_279550;
        case 0x27956cu: goto label_27956c;
        case 0x279578u: goto label_279578;
        case 0x279594u: goto label_279594;
        case 0x2795a0u: goto label_2795a0;
        case 0x2795bcu: goto label_2795bc;
        case 0x2795c8u: goto label_2795c8;
        case 0x2795e4u: goto label_2795e4;
        case 0x2795f0u: goto label_2795f0;
        case 0x27960cu: goto label_27960c;
        case 0x279618u: goto label_279618;
        case 0x279634u: goto label_279634;
        case 0x279640u: goto label_279640;
        case 0x27965cu: goto label_27965c;
        case 0x279668u: goto label_279668;
        case 0x279684u: goto label_279684;
        case 0x279690u: goto label_279690;
        default: break;
    }

    ctx->pc = 0x279430u;

    // 0x279430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279434: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x279434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x279438: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x279438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27943c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27943cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279440: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279444: 0x2446efe0  addiu       $a2, $v0, -0x1020
    ctx->pc = 0x279444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963168));
    // 0x279448: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279448u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27944c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27944Cu;
    SET_GPR_U32(ctx, 31, 0x279454u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27944Cu, 0x279454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279454u;
label_279454:
    // 0x279454: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279458: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279458u;
    SET_GPR_U32(ctx, 31, 0x279460u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279458u, 0x279460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279460u;
label_279460:
    // 0x279460: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x279460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x279464: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279464u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279468: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27946c: 0x2446eff0  addiu       $a2, $v0, -0x1010
    ctx->pc = 0x27946cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x279470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279474u;
    SET_GPR_U32(ctx, 31, 0x27947Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279474u, 0x27947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27947Cu;
label_27947c:
    // 0x27947c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27947cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279480: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279480u;
    SET_GPR_U32(ctx, 31, 0x279488u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279480u, 0x279488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279488u;
label_279488:
    // 0x279488: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x279488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27948c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27948cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279490: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279494: 0x2446eff0  addiu       $a2, $v0, -0x1010
    ctx->pc = 0x279494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x279498: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279498u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27949c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27949Cu;
    SET_GPR_U32(ctx, 31, 0x2794A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27949Cu, 0x2794A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794A4u;
label_2794a4:
    // 0x2794a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2794a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2794a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2794A8u;
    SET_GPR_U32(ctx, 31, 0x2794B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2794A8u, 0x2794B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794B0u;
label_2794b0:
    // 0x2794b0: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x2794b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x2794b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2794b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2794b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2794b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2794bc: 0x2446f000  addiu       $a2, $v0, -0x1000
    ctx->pc = 0x2794bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2794c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2794c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2794c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2794C4u;
    SET_GPR_U32(ctx, 31, 0x2794CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2794C4u, 0x2794CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794CCu;
label_2794cc:
    // 0x2794cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2794ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2794d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2794D0u;
    SET_GPR_U32(ctx, 31, 0x2794D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2794D0u, 0x2794D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794D8u;
label_2794d8:
    // 0x2794d8: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x2794d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x2794dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2794dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2794e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2794e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2794e4: 0x2446f000  addiu       $a2, $v0, -0x1000
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2794e8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2794e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2794ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2794ECu;
    SET_GPR_U32(ctx, 31, 0x2794F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2794ECu, 0x2794F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794F4u;
label_2794f4:
    // 0x2794f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2794f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2794f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2794F8u;
    SET_GPR_U32(ctx, 31, 0x279500u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2794F8u, 0x279500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279500u;
label_279500:
    // 0x279500: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x279500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x279504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279508: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27950c: 0x2446f010  addiu       $a2, $v0, -0xFF0
    ctx->pc = 0x27950cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x279510: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279510u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279514: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279514u;
    SET_GPR_U32(ctx, 31, 0x27951Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279514u, 0x27951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27951Cu;
label_27951c:
    // 0x27951c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27951cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279520: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279520u;
    SET_GPR_U32(ctx, 31, 0x279528u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279520u, 0x279528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279528u;
label_279528:
    // 0x279528: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27952c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27952cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279530: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279534: 0x2446f020  addiu       $a2, $v0, -0xFE0
    ctx->pc = 0x279534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
    // 0x279538: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279538u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27953c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27953Cu;
    SET_GPR_U32(ctx, 31, 0x279544u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27953Cu, 0x279544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279544u;
label_279544:
    // 0x279544: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279548: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279548u;
    SET_GPR_U32(ctx, 31, 0x279550u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279548u, 0x279550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279550u;
label_279550:
    // 0x279550: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x279550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x279554: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279554u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279558: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27955c: 0x2446f030  addiu       $a2, $v0, -0xFD0
    ctx->pc = 0x27955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x279560: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279560u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279564: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279564u;
    SET_GPR_U32(ctx, 31, 0x27956Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279564u, 0x27956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27956Cu;
label_27956c:
    // 0x27956c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27956cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279570: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279570u;
    SET_GPR_U32(ctx, 31, 0x279578u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279570u, 0x279578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279578u;
label_279578:
    // 0x279578: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x279578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27957c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27957cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279580: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279584: 0x2446f030  addiu       $a2, $v0, -0xFD0
    ctx->pc = 0x279584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x279588: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279588u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27958c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27958Cu;
    SET_GPR_U32(ctx, 31, 0x279594u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27958Cu, 0x279594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279594u;
label_279594:
    // 0x279594: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279598: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279598u;
    SET_GPR_U32(ctx, 31, 0x2795A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279598u, 0x2795A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795A0u;
label_2795a0:
    // 0x2795a0: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x2795a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x2795a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2795a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2795a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2795a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2795ac: 0x2446f040  addiu       $a2, $v0, -0xFC0
    ctx->pc = 0x2795acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963264));
    // 0x2795b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2795b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2795b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2795B4u;
    SET_GPR_U32(ctx, 31, 0x2795BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2795B4u, 0x2795BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795BCu;
label_2795bc:
    // 0x2795bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2795bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2795c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2795C0u;
    SET_GPR_U32(ctx, 31, 0x2795C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2795C0u, 0x2795C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795C8u;
label_2795c8:
    // 0x2795c8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x2795c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x2795cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2795ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2795d0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2795d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2795d4: 0x2446f050  addiu       $a2, $v0, -0xFB0
    ctx->pc = 0x2795d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x2795d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2795d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2795dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2795DCu;
    SET_GPR_U32(ctx, 31, 0x2795E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2795DCu, 0x2795E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795E4u;
label_2795e4:
    // 0x2795e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2795e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2795e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2795E8u;
    SET_GPR_U32(ctx, 31, 0x2795F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2795E8u, 0x2795F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795F0u;
label_2795f0:
    // 0x2795f0: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x2795f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x2795f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2795f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2795f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2795f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2795fc: 0x2446f060  addiu       $a2, $v0, -0xFA0
    ctx->pc = 0x2795fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x279600: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279600u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279604: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279604u;
    SET_GPR_U32(ctx, 31, 0x27960Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279604u, 0x27960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27960Cu;
label_27960c:
    // 0x27960c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27960cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279610: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279610u;
    SET_GPR_U32(ctx, 31, 0x279618u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279610u, 0x279618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279618u;
label_279618:
    // 0x279618: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x279618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27961c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27961cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279620: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279624: 0x2446f060  addiu       $a2, $v0, -0xFA0
    ctx->pc = 0x279624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x279628: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279628u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27962c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27962Cu;
    SET_GPR_U32(ctx, 31, 0x279634u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27962Cu, 0x279634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279634u;
label_279634:
    // 0x279634: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279638: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279638u;
    SET_GPR_U32(ctx, 31, 0x279640u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279638u, 0x279640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279640u;
label_279640:
    // 0x279640: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x279640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x279644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279648: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27964c: 0x2446f070  addiu       $a2, $v0, -0xF90
    ctx->pc = 0x27964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963312));
    // 0x279650: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279650u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279654: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279654u;
    SET_GPR_U32(ctx, 31, 0x27965Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279654u, 0x27965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27965Cu;
label_27965c:
    // 0x27965c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27965cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279660: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279660u;
    SET_GPR_U32(ctx, 31, 0x279668u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279660u, 0x279668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279668u;
label_279668:
    // 0x279668: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x279668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27966c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27966cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279670: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279674: 0x2446f070  addiu       $a2, $v0, -0xF90
    ctx->pc = 0x279674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963312));
    // 0x279678: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279678u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27967c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27967Cu;
    SET_GPR_U32(ctx, 31, 0x279684u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27967Cu, 0x279684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279684u;
label_279684:
    // 0x279684: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x279684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279688: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279688u;
    SET_GPR_U32(ctx, 31, 0x279690u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279688u, 0x279690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279690u;
label_279690:
    // 0x279690: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x279690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279694: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x279694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279698: 0x3e00008  jr          $ra
    ctx->pc = 0x279698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2796A0u;
}
