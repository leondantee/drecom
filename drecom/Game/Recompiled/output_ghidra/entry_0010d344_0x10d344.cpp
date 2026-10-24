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

// Function: entry_0010d344
// Address: 0x10d344 - 0x10d354
void entry_0010d344_0x10d344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d344_0x10d344");
#endif

    switch (ctx->pc) {
        case 0x10d350u: goto label_10d350;
        default: break;
    }

    ctx->pc = 0x10d344u;

    // 0x10d344: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d348: 0xc084a2c  jal         func_2128B0
    ctx->pc = 0x10D348u;
    SET_GPR_U32(ctx, 31, 0x10D350u);
    ctx->pc = 0x10D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D348u;
    // 0x10d34c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2128B0u;
    {
        ctx->pc = 0x10D350u;
        ps2_syscalls::ChangeThreadPriority(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D350u) { return; }
    ctx->pc = 0x10D350u;
label_10d350:
    // 0x10d350: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x10d350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10d354u;
}
