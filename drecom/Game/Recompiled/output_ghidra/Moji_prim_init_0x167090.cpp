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

// Function: Moji_prim_init
// Address: 0x167090 - 0x1670e4
void Moji_prim_init_0x167090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Moji_prim_init_0x167090");
#endif

    switch (ctx->pc) {
        case 0x1670a8u: goto label_1670a8;
        default: break;
    }

    ctx->pc = 0x167090u;

    // 0x167090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16709c: 0x24113000  addiu       $s1, $zero, 0x3000
    ctx->pc = 0x16709cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x1670a0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1670a4: 0x24705ab0  addiu       $s0, $v1, 0x5AB0
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23216));
label_1670a8:
    // 0x1670a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1670ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1670acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1670b0: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1670b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1670b4: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1670b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1670b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1670b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1670bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1670bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1670c0: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x1670c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1670c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1670c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1670c8: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1670C8u;
    {
        const bool branch_taken_0x1670c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1670c8) {
            ctx->pc = 0x1670A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1670a8;
        }
    }
    ctx->pc = 0x1670D0u;
    // 0x1670d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1670d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1670d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1670d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1670d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1670d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1670dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1670DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1670DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1670E4u;
}
