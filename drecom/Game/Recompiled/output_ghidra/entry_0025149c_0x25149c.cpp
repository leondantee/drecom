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

// Function: entry_0025149c
// Address: 0x25149c - 0x25163c
void entry_0025149c_0x25149c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025149c_0x25149c");
#endif

    switch (ctx->pc) {
        case 0x2514d4u: goto label_2514d4;
        case 0x2514e0u: goto label_2514e0;
        case 0x251518u: goto label_251518;
        case 0x251524u: goto label_251524;
        case 0x25155cu: goto label_25155c;
        case 0x251568u: goto label_251568;
        case 0x2515a0u: goto label_2515a0;
        case 0x2515acu: goto label_2515ac;
        case 0x2515e4u: goto label_2515e4;
        case 0x2515f0u: goto label_2515f0;
        case 0x251628u: goto label_251628;
        case 0x251634u: goto label_251634;
        default: break;
    }

    ctx->pc = 0x25149cu;

    // 0x25149c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x25149cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2514a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2514a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2514a4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2514a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2514a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2514ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2514acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2514b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2514b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2514b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2514b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2514b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2514b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2514bc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2514bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2514c0: 0x24046101  addiu       $a0, $zero, 0x6101
    ctx->pc = 0x2514c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24833));
    // 0x2514c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2514c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2514c8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2514c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2514cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2514CCu;
    SET_GPR_U32(ctx, 31, 0x2514D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2514CCu, 0x2514D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514D4u;
label_2514d4:
    // 0x2514d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2514d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2514d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2514D8u;
    SET_GPR_U32(ctx, 31, 0x2514E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2514D8u, 0x2514E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514E0u;
label_2514e0:
    // 0x2514e0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2514e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2514e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2514e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2514e8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2514e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2514ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2514ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2514f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2514f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2514f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2514f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2514f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2514f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2514fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2514fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251500: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251504: 0x24046201  addiu       $a0, $zero, 0x6201
    ctx->pc = 0x251504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25089));
    // 0x251508: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251508u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25150c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x25150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251510: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251510u;
    SET_GPR_U32(ctx, 31, 0x251518u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251510u, 0x251518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251518u;
label_251518:
    // 0x251518: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25151c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25151Cu;
    SET_GPR_U32(ctx, 31, 0x251524u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25151Cu, 0x251524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251524u;
label_251524:
    // 0x251524: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x251524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25152c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251530: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251534: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251538: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25153c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251544: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251544u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251548: 0x24045804  addiu       $a0, $zero, 0x5804
    ctx->pc = 0x251548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22532));
    // 0x25154c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x25154cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251550: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x251550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251554: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251554u;
    SET_GPR_U32(ctx, 31, 0x25155Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251554u, 0x25155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25155Cu;
label_25155c:
    // 0x25155c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25155cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251560: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251560u;
    SET_GPR_U32(ctx, 31, 0x251568u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251560u, 0x251568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251568u;
label_251568:
    // 0x251568: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x251568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25156c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251570: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251574: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251578: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25157c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25157cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251580: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251584: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251588: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25158c: 0x24045805  addiu       $a0, $zero, 0x5805
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22533));
    // 0x251590: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251594: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x251594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251598: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251598u;
    SET_GPR_U32(ctx, 31, 0x2515A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251598u, 0x2515A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515A0u;
label_2515a0:
    // 0x2515a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2515a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2515a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2515A4u;
    SET_GPR_U32(ctx, 31, 0x2515ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2515A4u, 0x2515ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515ACu;
label_2515ac:
    // 0x2515ac: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2515acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2515b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2515b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2515b4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2515b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2515b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2515b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2515bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2515bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2515c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2515c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2515c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2515c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2515c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2515c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2515cc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2515ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2515d0: 0x24045806  addiu       $a0, $zero, 0x5806
    ctx->pc = 0x2515d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22534));
    // 0x2515d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2515d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2515d8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2515d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2515dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2515DCu;
    SET_GPR_U32(ctx, 31, 0x2515E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2515DCu, 0x2515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515E4u;
label_2515e4:
    // 0x2515e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2515e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2515e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2515E8u;
    SET_GPR_U32(ctx, 31, 0x2515F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2515E8u, 0x2515F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515F0u;
label_2515f0:
    // 0x2515f0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2515f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2515f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2515f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2515f8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2515f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2515fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2515fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251600: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251604: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251608: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25160c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251610: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251614: 0x24045807  addiu       $a0, $zero, 0x5807
    ctx->pc = 0x251614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22535));
    // 0x251618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25161c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x25161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251620: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251620u;
    SET_GPR_U32(ctx, 31, 0x251628u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251620u, 0x251628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251628u;
label_251628:
    // 0x251628: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25162c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25162Cu;
    SET_GPR_U32(ctx, 31, 0x251634u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25162Cu, 0x251634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251634u;
label_251634:
    // 0x251634: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x251634u;
    {
        const bool branch_taken_0x251634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251634) {
            ctx->pc = 0x251694u;
            return;
        }
    }
    ctx->pc = 0x25163Cu;
}
