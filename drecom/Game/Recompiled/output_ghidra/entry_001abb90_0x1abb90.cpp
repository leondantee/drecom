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

// Function: entry_001abb90
// Address: 0x1abb90 - 0x1abbe0
void entry_001abb90_0x1abb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abb90_0x1abb90");
#endif

    ctx->pc = 0x1abb90u;

label_1abb90:
    // 0x1abb90: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abb94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abb98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abb9c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abba0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abba4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abba8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abba8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abbac: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abbacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abbb0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abbb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abbb8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABBB8u;
    {
        const bool branch_taken_0x1abbb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abbb8) {
            ctx->pc = 0x1ABB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abb90;
        }
    }
    ctx->pc = 0x1ABBC0u;
    // 0x1abbc0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1abbc4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abbc8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abbcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abbd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abbd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBE0u;
}
