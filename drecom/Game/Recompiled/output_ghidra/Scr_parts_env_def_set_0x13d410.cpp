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

// Function: Scr_parts_env_def_set
// Address: 0x13d410 - 0x13d57c
void Scr_parts_env_def_set_0x13d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_env_def_set_0x13d410");
#endif

    switch (ctx->pc) {
        case 0x13d4f4u: goto label_13d4f4;
        case 0x13d510u: goto label_13d510;
        default: break;
    }

    ctx->pc = 0x13d410u;

    // 0x13d410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d414: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x13d414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x13d418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d41c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x13d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x13d420: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13d420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13d424: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13d424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13d428: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13d42c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13d42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13d430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d434: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13d434u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13d438: 0x24030eee  addiu       $v1, $zero, 0xEEE
    ctx->pc = 0x13d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x13d43c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d440: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x13d440u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x13d444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d448: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d44c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13D44Cu;
    {
        const bool branch_taken_0x13d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d44c) {
            ctx->pc = 0x13D4A4u;
            goto label_13d4a4;
        }
    }
    ctx->pc = 0x13D454u;
    // 0x13d454: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d458: 0x3443000d  ori         $v1, $v0, 0xD
    ctx->pc = 0x13d458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x13d45c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d460: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x13d460u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x13d464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d468: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x13d468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d46c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13d470: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D470u;
    {
        const bool branch_taken_0x13d470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13d470) {
            ctx->pc = 0x13D48Cu;
            goto label_13d48c;
        }
    }
    ctx->pc = 0x13D478u;
    // 0x13d478: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d47c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x13d47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d480: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13d484: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13D484u;
    {
        const bool branch_taken_0x13d484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d484) {
            ctx->pc = 0x13D4B4u;
            goto label_13d4b4;
        }
    }
    ctx->pc = 0x13D48Cu;
label_13d48c:
    // 0x13d48c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d490: 0x3443180f  ori         $v1, $v0, 0x180F
    ctx->pc = 0x13d490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x13d494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d498: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x13d498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x13d49c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D49Cu;
    {
        const bool branch_taken_0x13d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d49c) {
            ctx->pc = 0x13D4B4u;
            goto label_13d4b4;
        }
    }
    ctx->pc = 0x13D4A4u;
label_13d4a4:
    // 0x13d4a4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d4a8: 0x3443080b  ori         $v1, $v0, 0x80B
    ctx->pc = 0x13d4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x13d4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4b0: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x13d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
label_13d4b4:
    // 0x13d4b4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x13d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x13d4b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4bc: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x13d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x13d4c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d4c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d4c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13D4C8u;
    {
        const bool branch_taken_0x13d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4c8) {
            ctx->pc = 0x13D4FCu;
            goto label_13d4fc;
        }
    }
    ctx->pc = 0x13D4D0u;
    // 0x13d4d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d4d8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13d4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d4dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13d4e0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x13d4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d4e4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x13d4e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x13d4e8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x13d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13d4ec: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x13D4ECu;
    SET_GPR_U32(ctx, 31, 0x13D4F4u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x13D4ECu, 0x13D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4F4u;
label_13d4f4:
    // 0x13d4f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D4F4u;
    {
        const bool branch_taken_0x13d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4f4) {
            ctx->pc = 0x13D510u;
            goto label_13d510;
        }
    }
    ctx->pc = 0x13D4FCu;
label_13d4fc:
    // 0x13d4fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d500: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13d500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13d504: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13d508: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x13D508u;
    SET_GPR_U32(ctx, 31, 0x13D510u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x13D508u, 0x13D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D510u;
label_13d510:
    // 0x13d510: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x13d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x13d514: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d518: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x13d518u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x13d51c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d520: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x13d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13d524: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D524u;
    {
        const bool branch_taken_0x13d524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d524) {
            ctx->pc = 0x13D550u;
            goto label_13d550;
        }
    }
    ctx->pc = 0x13D52Cu;
    // 0x13d52c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d530: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13d530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d534: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d538: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x13d538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d53c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d540: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d544: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x13d544u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x13d548: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D548u;
    {
        const bool branch_taken_0x13d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d548) {
            ctx->pc = 0x13D560u;
            goto label_13d560;
        }
    }
    ctx->pc = 0x13D550u;
label_13d550:
    // 0x13d550: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d554: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x13d554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d558: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d55c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x13d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
label_13d560:
    // 0x13d560: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x13d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x13d564: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d568: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x13d568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x13d56c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x13d56cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d574: 0x3e00008  jr          $ra
    ctx->pc = 0x13D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D57Cu;
}
