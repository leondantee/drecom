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

// Function: entry_0033a018
// Address: 0x33a018 - 0x33a068
void entry_0033a018_0x33a018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a018_0x33a018");
#endif

    ctx->pc = 0x33a018u;

    // 0x33a018: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x33a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x33a01c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a020: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33a020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33a024: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33a024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33a028: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a02c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a034: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33a034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33a038: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a03c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33a040: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a044: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a048: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x33a048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33a04c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33a050: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x33a050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x33a054: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A054u;
    {
        const bool branch_taken_0x33a054 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x33a054) {
            ctx->pc = 0x33A068u;
            return;
        }
    }
    ctx->pc = 0x33A05Cu;
    // 0x33a05c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A05Cu;
    {
        const bool branch_taken_0x33a05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a05c) {
            ctx->pc = 0x33A068u;
            return;
        }
    }
    ctx->pc = 0x33A064u;
    // 0x33a064: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x33a068u;
}
