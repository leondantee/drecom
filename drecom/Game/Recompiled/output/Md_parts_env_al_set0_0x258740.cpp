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

// Function: Md_parts_env_al_set0
// Address: 0x258740 - 0x258828
void Md_parts_env_al_set0_0x258740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_al_set0_0x258740");
#endif

    switch (ctx->pc) {
        case 0x2587f0u: goto label_2587f0;
        case 0x258814u: goto label_258814;
        default: break;
    }

    ctx->pc = 0x258740u;

    // 0x258740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258744: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x258744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x258748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25874c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x25874cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x258750: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x258750u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x258754: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x258754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x258758: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x258758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25875c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258760: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x258760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258768: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x258768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x25876c: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x25876cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x258770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258774: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x258774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x258778: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x258778u;
    {
        const bool branch_taken_0x258778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258778) {
            ctx->pc = 0x2587F8u;
            goto label_2587f8;
        }
    }
    ctx->pc = 0x258780u;
    // 0x258780: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x258780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258784: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x258784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258788: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x258788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25878c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x258790: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x258790u;
    {
        const bool branch_taken_0x258790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258790) {
            ctx->pc = 0x2587ACu;
            goto label_2587ac;
        }
    }
    ctx->pc = 0x258798u;
    // 0x258798: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x258798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25879c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25879Cu;
    {
        const bool branch_taken_0x25879c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25879c) {
            ctx->pc = 0x2587ACu;
            goto label_2587ac;
        }
    }
    ctx->pc = 0x2587A4u;
    // 0x2587a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2587A4u;
    {
        const bool branch_taken_0x2587a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587a4) {
            ctx->pc = 0x2587C0u;
            goto label_2587c0;
        }
    }
    ctx->pc = 0x2587ACu;
label_2587ac:
    // 0x2587ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2587acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2587b0: 0x3442180f  ori         $v0, $v0, 0x180F
    ctx->pc = 0x2587b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x2587b4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x2587b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2587b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2587CCu;
            goto label_2587cc;
        }
    }
    ctx->pc = 0x2587C0u;
label_2587c0:
    // 0x2587c0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2587c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2587c4: 0x3442010d  ori         $v0, $v0, 0x10D
    ctx->pc = 0x2587c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x2587c8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x2587c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_2587cc:
    // 0x2587cc: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x2587ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2587d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2587d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2587d4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2587d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2587d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2587d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2587dc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2587dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2587e0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2587e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2587e4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2587e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2587e8: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x2587E8u;
    SET_GPR_U32(ctx, 31, 0x2587F0u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x2587E8u, 0x2587F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587F0u;
label_2587f0:
    // 0x2587f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2587F0u;
    {
        const bool branch_taken_0x2587f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587f0) {
            ctx->pc = 0x258814u;
            goto label_258814;
        }
    }
    ctx->pc = 0x2587F8u;
label_2587f8:
    // 0x2587f8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2587f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2587fc: 0x3442010d  ori         $v0, $v0, 0x10D
    ctx->pc = 0x2587fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x258800: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x258800u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x258804: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x258804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x258808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x258808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25880c: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x25880Cu;
    SET_GPR_U32(ctx, 31, 0x258814u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x25880Cu, 0x258814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258814u;
label_258814:
    // 0x258814: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258814u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25881c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25881cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258820: 0x3e00008  jr          $ra
    ctx->pc = 0x258820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258828u;
}
