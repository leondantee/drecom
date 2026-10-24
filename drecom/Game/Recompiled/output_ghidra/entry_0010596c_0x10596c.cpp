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

// Function: entry_0010596c
// Address: 0x10596c - 0x1059b4
void entry_0010596c_0x10596c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010596c_0x10596c");
#endif

    ctx->pc = 0x10596cu;

    // 0x10596c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10596cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x105970: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x105970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x105974: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x105974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105978: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10597c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x105980: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x105980u;
    {
        const bool branch_taken_0x105980 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x105984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105980u;
        // 0x105984: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105980) {
            ctx->pc = 0x105900u;
            return;
        }
    }
    ctx->pc = 0x105988u;
    // 0x105988: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10598c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10598cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105990: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x105990u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105994: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x105994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x105998: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x105998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10599c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x10599cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1059a0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1059a4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1059A4u;
    {
        const bool branch_taken_0x1059a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1059A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059A4u;
        // 0x1059a8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059a4) {
            ctx->pc = 0x1058C8u;
            return;
        }
    }
    ctx->pc = 0x1059ACu;
    // 0x1059ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1059ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1059B4u;
}
