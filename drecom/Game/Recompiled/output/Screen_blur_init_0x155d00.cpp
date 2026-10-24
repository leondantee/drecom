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

// Function: Screen_blur_init
// Address: 0x155d00 - 0x155d70
void Screen_blur_init_0x155d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Screen_blur_init_0x155d00");
#endif

    switch (ctx->pc) {
        case 0x155d18u: goto label_155d18;
        default: break;
    }

    ctx->pc = 0x155d00u;

    // 0x155d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155d0c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x155d0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155d10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155D10u;
    {
        const bool branch_taken_0x155d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155d10) {
            ctx->pc = 0x155D50u;
            goto label_155d50;
        }
    }
    ctx->pc = 0x155D18u;
label_155d18:
    // 0x155d18: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155d1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155d20: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155d24: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155d28: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155d2c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155d30: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x155d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d34: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x155d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d38: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x155d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x155d3c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x155d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x155d40: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x155d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d44: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x155d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d48: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x155d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x155d4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_155d50:
    // 0x155d50: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x155d50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x155d54: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x155D54u;
    {
        const bool branch_taken_0x155d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155d54) {
            ctx->pc = 0x155D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155d18;
        }
    }
    ctx->pc = 0x155D5Cu;
    // 0x155d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155d64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x155d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x155d68: 0x3e00008  jr          $ra
    ctx->pc = 0x155D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D70u;
}
