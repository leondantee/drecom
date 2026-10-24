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

// Function: entry_00101990
// Address: 0x101990 - 0x1019b4
void entry_00101990_0x101990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101990_0x101990");
#endif

    switch (ctx->pc) {
        case 0x1019a0u: goto label_1019a0;
        default: break;
    }

    ctx->pc = 0x101990u;

    // 0x101990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101998: 0xc040156  jal         func_100558
    ctx->pc = 0x101998u;
    SET_GPR_U32(ctx, 31, 0x1019A0u);
    ctx->pc = 0x10199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101998u;
    // 0x10199c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100558u;
    {
        ctx->pc = 0x1019A0u;
        ps2_stubs::sceGszbufaddr(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1019A0u) { return; }
    ctx->pc = 0x1019A0u;
label_1019a0:
    // 0x1019a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1019a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1019a4: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x1019a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x1019a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1019a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1019ac: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1019acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1019b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x1019b4u;
}
