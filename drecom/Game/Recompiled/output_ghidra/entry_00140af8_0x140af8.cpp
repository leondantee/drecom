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

// Function: entry_00140af8
// Address: 0x140af8 - 0x140b0c
void entry_00140af8_0x140af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140af8_0x140af8");
#endif

    ctx->pc = 0x140af8u;

    // 0x140af8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140afc: 0x8c225170  lw          $v0, 0x5170($at)
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385170u));
    // 0x140b00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140b04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x140b08: 0xac225170  sw          $v0, 0x5170($at)
    ctx->pc = 0x140b08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385170u, _value); } while (0);
    ctx->pc = 0x140b0cu;
}
