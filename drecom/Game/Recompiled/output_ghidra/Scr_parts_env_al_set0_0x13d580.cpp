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

// Function: Scr_parts_env_al_set0
// Address: 0x13d580 - 0x13d614
void Scr_parts_env_al_set0_0x13d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_env_al_set0_0x13d580");
#endif

    switch (ctx->pc) {
        case 0x13d5c4u: goto label_13d5c4;
        default: break;
    }

    ctx->pc = 0x13d580u;

    // 0x13d580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d584: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x13d584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x13d588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d58c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x13d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x13d590: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13d590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13d594: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x13d594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x13d598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13d59c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d5a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x13d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d5a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d5a8: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x13d5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13d5ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d5b0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x13d5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d5b4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x13d5b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x13d5b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x13d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13d5bc: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x13D5BCu;
    SET_GPR_U32(ctx, 31, 0x13D5C4u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x13D5BCu, 0x13D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5C4u;
label_13d5c4:
    // 0x13d5c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d5c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13d5cc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D5CCu;
    {
        const bool branch_taken_0x13d5cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d5cc) {
            ctx->pc = 0x13D5E8u;
            goto label_13d5e8;
        }
    }
    ctx->pc = 0x13D5D4u;
    // 0x13d5d4: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d5d8: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x13d5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d5dc: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x13d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x13d5e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D5E0u;
    {
        const bool branch_taken_0x13d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5e0) {
            ctx->pc = 0x13D600u;
            goto label_13d600;
        }
    }
    ctx->pc = 0x13D5E8u;
label_13d5e8:
    // 0x13d5e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d5ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13d5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d5f0: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d5f4: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x13d5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d5f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d5fc: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x13d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
label_13d600:
    // 0x13d600: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x13d600u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d60c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D614u;
}
