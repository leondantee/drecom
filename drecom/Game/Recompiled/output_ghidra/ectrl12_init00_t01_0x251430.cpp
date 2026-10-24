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

// Function: ectrl12_init00_t01
// Address: 0x251430 - 0x2516a4
void ectrl12_init00_t01_0x251430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl12_init00_t01_0x251430");
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
        case 0x251688u: goto label_251688;
        case 0x251694u: goto label_251694;
        default: break;
    }

    ctx->pc = 0x251430u;

    // 0x251430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251434: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x251438: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x251438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25143c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251440: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x251440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x251444: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x251444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x251448: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x251448u;
    {
        const bool branch_taken_0x251448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251448) {
            ctx->pc = 0x251650u;
            goto label_251650;
        }
    }
    ctx->pc = 0x251450u;
    // 0x251450: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x251450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x251454: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x251454u;
    {
        const bool branch_taken_0x251454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251454) {
            ctx->pc = 0x251650u;
            goto label_251650;
        }
    }
    ctx->pc = 0x25145Cu;
    // 0x25145c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x251460: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x251460u;
    {
        const bool branch_taken_0x251460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251460) {
            ctx->pc = 0x251650u;
            goto label_251650;
        }
    }
    ctx->pc = 0x251468u;
    // 0x251468: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x251468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25146c: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x25146Cu;
    {
        const bool branch_taken_0x25146c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25146c) {
            ctx->pc = 0x251650u;
            goto label_251650;
        }
    }
    ctx->pc = 0x251474u;
    // 0x251474: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x251474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251478: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x251478u;
    {
        const bool branch_taken_0x251478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251478) {
            ctx->pc = 0x251650u;
            goto label_251650;
        }
    }
    ctx->pc = 0x251480u;
    // 0x251480: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x251480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x251484: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x251484u;
    {
        const bool branch_taken_0x251484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251484) {
            ctx->pc = 0x25163Cu;
            goto label_25163c;
        }
    }
    ctx->pc = 0x25148Cu;
    // 0x25148c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25148Cu;
    {
        const bool branch_taken_0x25148c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25148c) {
            ctx->pc = 0x25149Cu;
            goto label_25149c;
        }
    }
    ctx->pc = 0x251494u;
    // 0x251494: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x251494u;
    {
        const bool branch_taken_0x251494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251494) {
            ctx->pc = 0x251694u;
            goto label_251694;
        }
    }
    ctx->pc = 0x25149Cu;
label_25149c:
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
            goto label_251694;
        }
    }
    ctx->pc = 0x25163Cu;
label_25163c:
    // 0x25163c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251644: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x251644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x251648: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25164c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25164cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_251650:
    // 0x251650: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x251650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251658: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25165c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25166c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251670: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251670u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251674: 0x24045804  addiu       $a0, $zero, 0x5804
    ctx->pc = 0x251674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22532));
    // 0x251678: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25167c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x25167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251680: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251680u;
    SET_GPR_U32(ctx, 31, 0x251688u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251680u, 0x251688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251688u;
label_251688:
    // 0x251688: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25168c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25168Cu;
    SET_GPR_U32(ctx, 31, 0x251694u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25168Cu, 0x251694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251694u;
label_251694:
    // 0x251694: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251698: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x251698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25169c: 0x3e00008  jr          $ra
    ctx->pc = 0x25169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2516A4u;
}
