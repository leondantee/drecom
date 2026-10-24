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

// Function: entry_0011fb38
// Address: 0x11fb38 - 0x11fb64
void entry_0011fb38_0x11fb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb38_0x11fb38");
#endif

    ctx->pc = 0x11fb38u;

    // 0x11fb38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11fb3c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x11fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fb40: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11fb44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fb48: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11fb48u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11fb4c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FB4Cu;
    {
        const bool branch_taken_0x11fb4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB4Cu;
        // 0x11fb50: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb4c) {
            ctx->pc = 0x11FB64u;
            return;
        }
    }
    ctx->pc = 0x11FB54u;
    // 0x11fb54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11fb58: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x11fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x11fb5c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x11fb60: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11fb60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x11fb64u;
}
