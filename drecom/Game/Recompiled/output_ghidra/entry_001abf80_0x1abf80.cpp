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

// Function: entry_001abf80
// Address: 0x1abf80 - 0x1abfd0
void entry_001abf80_0x1abf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abf80_0x1abf80");
#endif

    ctx->pc = 0x1abf80u;

label_1abf80:
    // 0x1abf80: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abf84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abf8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf90: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abf94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abf98: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abf9c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abfa0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abfa4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abfa8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABFA8u;
    {
        const bool branch_taken_0x1abfa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abfa8) {
            ctx->pc = 0x1ABF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abf80;
        }
    }
    ctx->pc = 0x1ABFB0u;
    // 0x1abfb0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1abfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1abfb4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abfb8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abfbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abfc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abfc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1abfc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1abfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABFD0u;
}
