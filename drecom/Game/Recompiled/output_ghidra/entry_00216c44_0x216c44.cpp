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

// Function: entry_00216c44
// Address: 0x216c44 - 0x216c64
void entry_00216c44_0x216c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216c44_0x216c44");
#endif

    switch (ctx->pc) {
        case 0x216c60u: goto label_216c60;
        default: break;
    }

    ctx->pc = 0x216c44u;

    // 0x216c44: 0x3c142000  lui         $s4, 0x2000
    ctx->pc = 0x216c44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8192 << 16));
    // 0x216c48: 0x941024  and         $v0, $a0, $s4
    ctx->pc = 0x216c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x216c4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x216C4Cu;
    {
        const bool branch_taken_0x216c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c4c) {
            ctx->pc = 0x216C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C4Cu;
            // 0x216c50: 0x2148025  or          $s0, $s0, $s4 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C64u;
            return;
        }
    }
    ctx->pc = 0x216C54u;
    // 0x216c54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c58: 0xc0854a6  jal         func_215298
    ctx->pc = 0x216C58u;
    SET_GPR_U32(ctx, 31, 0x216C60u);
    ctx->pc = 0x216C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216C58u;
    // 0x216c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x216C60u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216C60u) { return; }
    ctx->pc = 0x216C60u;
label_216c60:
    // 0x216c60: 0x2148025  or          $s0, $s0, $s4
    ctx->pc = 0x216c60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
    ctx->pc = 0x216c64u;
}
