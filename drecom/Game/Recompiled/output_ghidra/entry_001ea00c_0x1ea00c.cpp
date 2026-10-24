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

// Function: entry_001ea00c
// Address: 0x1ea00c - 0x1ea028
void entry_001ea00c_0x1ea00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea00c_0x1ea00c");
#endif

    ctx->pc = 0x1ea00cu;

    // 0x1ea00c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea010: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ea014: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ea018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA018u;
    {
        const bool branch_taken_0x1ea018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea018) {
            ctx->pc = 0x1EA028u;
            return;
        }
    }
    ctx->pc = 0x1EA020u;
    // 0x1ea020: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea024: 0xac200aa8  sw          $zero, 0xAA8($at)
    ctx->pc = 0x1ea024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600AA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA8u, _value); } while (0);
    ctx->pc = 0x1ea028u;
}
