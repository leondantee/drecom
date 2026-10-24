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

// Function: EffScr_work_init
// Address: 0x29c870 - 0x29c8e8
void EffScr_work_init_0x29c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffScr_work_init_0x29c870");
#endif

    switch (ctx->pc) {
        case 0x29c890u: goto label_29c890;
        default: break;
    }

    ctx->pc = 0x29c870u;

    // 0x29c870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c87c: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
    // 0x29c880: 0x24703590  addiu       $s0, $v1, 0x3590
    ctx->pc = 0x29c880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
    // 0x29c884: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29c884u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29c888: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29C888u;
    {
        const bool branch_taken_0x29c888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c888) {
            ctx->pc = 0x29C8C8u;
            goto label_29c8c8;
        }
    }
    ctx->pc = 0x29C890u;
label_29c890:
    // 0x29c890: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29c894: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x29c894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29c898: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x29c898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29c89c: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
    // 0x29c8a0: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x29c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
    // 0x29c8a4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29c8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c8a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c8ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c8b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C8B0u;
    {
        const bool branch_taken_0x29c8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c8b0) {
            ctx->pc = 0x29C8C0u;
            goto label_29c8c0;
        }
    }
    ctx->pc = 0x29C8B8u;
    // 0x29c8b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c8bc: 0x0  nop
    ctx->pc = 0x29c8bcu;
    // NOP
label_29c8c0:
    // 0x29c8c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29c8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29c8c4: 0x0  nop
    ctx->pc = 0x29c8c4u;
    // NOP
label_29c8c8:
    // 0x29c8c8: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x29c8c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x29c8cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29C8CCu;
    {
        const bool branch_taken_0x29c8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c8cc) {
            ctx->pc = 0x29C890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c890;
        }
    }
    ctx->pc = 0x29C8D4u;
    // 0x29c8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c8dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c8dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8E8u;
}
