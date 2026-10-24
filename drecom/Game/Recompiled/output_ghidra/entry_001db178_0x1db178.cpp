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

// Function: entry_001db178
// Address: 0x1db178 - 0x1db1a4
void entry_001db178_0x1db178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db178_0x1db178");
#endif

    ctx->pc = 0x1db178u;

    // 0x1db178: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x1db178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db180: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB180u;
    {
        const bool branch_taken_0x1db180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db180) {
            ctx->pc = 0x1DB1A4u;
            return;
        }
    }
    ctx->pc = 0x1DB188u;
    // 0x1db188: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db18c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db190: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1db194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db198: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db198u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db19c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB19Cu;
    {
        const bool branch_taken_0x1db19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db19c) {
            ctx->pc = 0x1DB1C0u;
            return;
        }
    }
    ctx->pc = 0x1DB1A4u;
}
