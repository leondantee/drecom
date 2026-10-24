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

// Function: entry_00104ef4
// Address: 0x104ef4 - 0x104f3c
void entry_00104ef4_0x104ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ef4_0x104ef4");
#endif

    ctx->pc = 0x104ef4u;

    // 0x104ef4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x104ef4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x104ef8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x104ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x104efc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x104efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104f00: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x104f04: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x104f04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x104f08: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x104F08u;
    {
        const bool branch_taken_0x104f08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F08u;
        // 0x104f0c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f08) {
            ctx->pc = 0x104EB8u;
            return;
        }
    }
    ctx->pc = 0x104F10u;
    // 0x104f10: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x104f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x104f14: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x104f18: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104f1c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x104f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x104f20: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x104f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x104f24: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x104f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x104f28: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x104f28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x104f2c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x104F2Cu;
    {
        const bool branch_taken_0x104f2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F2Cu;
        // 0x104f30: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f2c) {
            ctx->pc = 0x104E98u;
            return;
        }
    }
    ctx->pc = 0x104F34u;
    // 0x104f34: 0x3e00008  jr          $ra
    ctx->pc = 0x104F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104F3Cu;
}
