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

// Function: entry_00105254
// Address: 0x105254 - 0x10529c
void entry_00105254_0x105254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105254_0x105254");
#endif

    ctx->pc = 0x105254u;

    // 0x105254: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x105254u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x105258: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x10525c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x10525cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105260: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x105260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x105264: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x105264u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x105268: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x105268u;
    {
        const bool branch_taken_0x105268 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105268u;
        // 0x10526c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105268) {
            ctx->pc = 0x105200u;
            return;
        }
    }
    ctx->pc = 0x105270u;
    // 0x105270: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x105274: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105278: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10527c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x105280: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x105280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x105284: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x105284u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x105288: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x105288u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x10528c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10528Cu;
        // 0x105290: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10528c) {
            ctx->pc = 0x1051C8u;
            return;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0x3e00008  jr          $ra
    ctx->pc = 0x105294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10529Cu;
}
