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

// Function: entry_001ab774
// Address: 0x1ab774 - 0x1ab7f8
void entry_001ab774_0x1ab774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab774_0x1ab774");
#endif

    ctx->pc = 0x1ab774u;

label_1ab774:
    // 0x1ab774: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1ab774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1ab778: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab77c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab780: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab784: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab788: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab78c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab78cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab790: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1ab790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1ab794: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1ab794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1ab798: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ab798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ab79c: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AB79Cu;
    {
        const bool branch_taken_0x1ab79c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab79c) {
            ctx->pc = 0x1AB774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab774;
        }
    }
    ctx->pc = 0x1AB7A4u;
    // 0x1ab7a4: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1ab7a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab7a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab7ac: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1ab7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1ab7b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab7b4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ab7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab7b8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1ab7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1ab7bc: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
    // 0x1ab7c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab7c4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1ab7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1ab7c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab7cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab7d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ab7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab7d4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ab7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab7d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab7dc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ab7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ab7e0: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1ab7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1ab7e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab7e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab7ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ab7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ab7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB7F8u;
}
