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

// Function: ectrl02_init00
// Address: 0x24b710 - 0x24b83c
void ectrl02_init00_0x24b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl02_init00_0x24b710");
#endif

    switch (ctx->pc) {
        case 0x24b820u: goto label_24b820;
        case 0x24b82cu: goto label_24b82c;
        default: break;
    }

    ctx->pc = 0x24b710u;

    // 0x24b710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x24b718: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24b718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24b71c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b720: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24b724: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x24b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24b728: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x24B728u;
    {
        const bool branch_taken_0x24b728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b728) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B730u;
    // 0x24b730: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24b734: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x24B734u;
    {
        const bool branch_taken_0x24b734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b734) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B73Cu;
    // 0x24b73c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x24b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x24b740: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x24B740u;
    {
        const bool branch_taken_0x24b740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b740) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B748u;
    // 0x24b748: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24b74c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x24B74Cu;
    {
        const bool branch_taken_0x24b74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b74c) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B754u;
    // 0x24b754: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x24b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b758: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x24B758u;
    {
        const bool branch_taken_0x24b758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b758) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B760u;
    // 0x24b760: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x24b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24b764: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24B764u;
    {
        const bool branch_taken_0x24b764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b764) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B76Cu;
    // 0x24b76c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b770: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24B770u;
    {
        const bool branch_taken_0x24b770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b770) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B778u;
    // 0x24b778: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b77c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24B77Cu;
    {
        const bool branch_taken_0x24b77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b77c) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B784u;
    // 0x24b784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b788: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24B788u;
    {
        const bool branch_taken_0x24b788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b788) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B790u;
    // 0x24b790: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B790u;
    {
        const bool branch_taken_0x24b790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b790) {
            ctx->pc = 0x24B7C0u;
            goto label_24b7c0;
        }
    }
    ctx->pc = 0x24B798u;
    // 0x24b798: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x24b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24b79c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B79Cu;
    {
        const bool branch_taken_0x24b79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b79c) {
            ctx->pc = 0x24B7ACu;
            goto label_24b7ac;
        }
    }
    ctx->pc = 0x24B7A4u;
    // 0x24b7a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x24B7A4u;
    {
        const bool branch_taken_0x24b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b7a4) {
            ctx->pc = 0x24B82Cu;
            goto label_24b82c;
        }
    }
    ctx->pc = 0x24B7ACu;
label_24b7ac:
    // 0x24b7ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b7b4: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24b7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24b7b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24b7c0:
    // 0x24b7c0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x24b7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7c8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24b7cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b7d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b7d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b7d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b7dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b7e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b7e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24b7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b7e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7ec: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24b7f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b7f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b7f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b7fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b808: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24b808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b80c: 0x24045900  addiu       $a0, $zero, 0x5900
    ctx->pc = 0x24b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22784));
    // 0x24b810: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24b810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24b814: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24b814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24b818: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24B818u;
    SET_GPR_U32(ctx, 31, 0x24B820u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24B818u, 0x24B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B820u;
label_24b820:
    // 0x24b820: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24b820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b824: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24B824u;
    SET_GPR_U32(ctx, 31, 0x24B82Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24B824u, 0x24B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B82Cu;
label_24b82c:
    // 0x24b82c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24b82cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b830: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24b834: 0x3e00008  jr          $ra
    ctx->pc = 0x24B834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B83Cu;
}
