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

// Function: entry_00272bd0
// Address: 0x272bd0 - 0x272bf8
void entry_00272bd0_0x272bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272bd0_0x272bd0");
#endif

    ctx->pc = 0x272bd0u;

    // 0x272bd0: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272bd4: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x272bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x272bd8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272BD8u;
    {
        const bool branch_taken_0x272bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272bd8) {
            ctx->pc = 0x272BF8u;
            return;
        }
    }
    ctx->pc = 0x272BE0u;
    // 0x272be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272be4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272be4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272be8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x272be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x272bec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x272becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272bf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272bf4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x272bf8u;
}
