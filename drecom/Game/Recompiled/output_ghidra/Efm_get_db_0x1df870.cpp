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

// Function: Efm_get_db
// Address: 0x1df870 - 0x1df938
void Efm_get_db_0x1df870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_get_db_0x1df870");
#endif

    switch (ctx->pc) {
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8c4u: goto label_1df8c4;
        case 0x1df8e4u: goto label_1df8e4;
        case 0x1df904u: goto label_1df904;
        case 0x1df928u: goto label_1df928;
        default: break;
    }

    ctx->pc = 0x1df870u;

    // 0x1df870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df874: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1df874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1df878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1df878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1df87c: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x1df87cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df880: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df884: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df888: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1df888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1df88c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF88Cu;
    {
        const bool branch_taken_0x1df88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df88c) {
            ctx->pc = 0x1DF8A0u;
            goto label_1df8a0;
        }
    }
    ctx->pc = 0x1DF894u;
    // 0x1df894: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df898: 0xc077bd4  jal         func_1DEF50
    ctx->pc = 0x1DF898u;
    SET_GPR_U32(ctx, 31, 0x1DF8A0u);
    ctx->pc = 0x1DEF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF50u, 0x1DF898u, 0x1DF8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8A0u;
label_1df8a0:
    // 0x1df8a0: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df8a8: 0x30630012  andi        $v1, $v1, 0x12
    ctx->pc = 0x1df8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)18);
    // 0x1df8ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8C4u;
            goto label_1df8c4;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df8b8: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x1df8b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8bc: 0xc077c44  jal         func_1DF110
    ctx->pc = 0x1DF8BCu;
    SET_GPR_U32(ctx, 31, 0x1DF8C4u);
    ctx->pc = 0x1DF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF110u, 0x1DF8BCu, 0x1DF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8C4u;
label_1df8c4:
    // 0x1df8c4: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df8cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1df8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1df8d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8D0u;
    {
        const bool branch_taken_0x1df8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8d0) {
            ctx->pc = 0x1DF8E4u;
            goto label_1df8e4;
        }
    }
    ctx->pc = 0x1DF8D8u;
    // 0x1df8d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df8dc: 0xc077cc8  jal         func_1DF320
    ctx->pc = 0x1DF8DCu;
    SET_GPR_U32(ctx, 31, 0x1DF8E4u);
    ctx->pc = 0x1DF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF320u, 0x1DF8DCu, 0x1DF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8E4u;
label_1df8e4:
    // 0x1df8e4: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df8ec: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1df8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1df8f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8F0u;
    {
        const bool branch_taken_0x1df8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8f0) {
            ctx->pc = 0x1DF904u;
            goto label_1df904;
        }
    }
    ctx->pc = 0x1DF8F8u;
    // 0x1df8f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df8fc: 0xc077d34  jal         func_1DF4D0
    ctx->pc = 0x1DF8FCu;
    SET_GPR_U32(ctx, 31, 0x1DF904u);
    ctx->pc = 0x1DF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF4D0u, 0x1DF8FCu, 0x1DF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF904u;
label_1df904:
    // 0x1df904: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x1df904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df908: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df90c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1df90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1df910: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF910u;
    {
        const bool branch_taken_0x1df910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df910) {
            ctx->pc = 0x1DF928u;
            goto label_1df928;
        }
    }
    ctx->pc = 0x1DF918u;
    // 0x1df918: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df91c: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x1df91cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df920: 0xc077da4  jal         func_1DF690
    ctx->pc = 0x1DF920u;
    SET_GPR_U32(ctx, 31, 0x1DF928u);
    ctx->pc = 0x1DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF690u, 0x1DF920u, 0x1DF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF928u;
label_1df928:
    // 0x1df928: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1df928u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df92c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1df92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1df930: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF938u;
}
