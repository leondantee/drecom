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

// Function: entry_001910c0
// Address: 0x1910c0 - 0x1910d8
void entry_001910c0_0x1910c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001910c0_0x1910c0");
#endif

    ctx->pc = 0x1910c0u;

    // 0x1910c0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1910c4: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1910c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1910cc: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1910d0: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x1910d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x1910d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1910d8u;
}
