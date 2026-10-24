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

// Function: entry_0028d890
// Address: 0x28d890 - 0x28d8b8
void entry_0028d890_0x28d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d890_0x28d890");
#endif

    ctx->pc = 0x28d890u;

    // 0x28d890: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d894: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d89c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d8a0: 0xac2362e0  sw          $v1, 0x62E0($at)
    ctx->pc = 0x28d8a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d8a8: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x28d8ac: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28d8b0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x28d8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x28d8b4: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    ctx->pc = 0x28d8b8u;
}
