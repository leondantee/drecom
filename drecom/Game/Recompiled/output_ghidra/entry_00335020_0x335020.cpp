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

// Function: entry_00335020
// Address: 0x335020 - 0x33504c
void entry_00335020_0x335020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335020_0x335020");
#endif

    ctx->pc = 0x335020u;

    // 0x335020: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335024: 0x8c2232d0  lw          $v0, 0x32D0($at)
    ctx->pc = 0x335024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932D0u));
    // 0x335028: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x335028u;
    {
        const bool branch_taken_0x335028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335028) {
            ctx->pc = 0x33504Cu;
            return;
        }
    }
    ctx->pc = 0x335030u;
    // 0x335030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335034: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x335034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
    // 0x335038: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33503c: 0xac2032d0  sw          $zero, 0x32D0($at)
    ctx->pc = 0x33503cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8932D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D0u, _value); } while (0);
    // 0x335040: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x335040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x335044: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x335048: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x335048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    ctx->pc = 0x33504cu;
}
