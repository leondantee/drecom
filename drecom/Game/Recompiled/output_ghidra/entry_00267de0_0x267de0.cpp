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

// Function: entry_00267de0
// Address: 0x267de0 - 0x267e40
void entry_00267de0_0x267de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267de0_0x267de0");
#endif

    ctx->pc = 0x267de0u;

    // 0x267de0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267de4: 0x8c23fcf8  lw          $v1, -0x308($at)
    ctx->pc = 0x267de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCF8u));
    // 0x267de8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x267de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x267dec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267df0: 0xac23fcf8  sw          $v1, -0x308($at)
    ctx->pc = 0x267df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCF8u, _value); } while (0);
    // 0x267df4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267df8: 0x8c23fcf8  lw          $v1, -0x308($at)
    ctx->pc = 0x267df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCF8u));
    // 0x267dfc: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x267DFCu;
    {
        const bool branch_taken_0x267dfc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267dfc) {
            ctx->pc = 0x267E40u;
            return;
        }
    }
    ctx->pc = 0x267E04u;
    // 0x267e04: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x267e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x267e08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e0c: 0xac23fcf8  sw          $v1, -0x308($at)
    ctx->pc = 0x267e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCF8u, _value); } while (0);
    // 0x267e10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e14: 0x8c23fd00  lw          $v1, -0x300($at)
    ctx->pc = 0x267e14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FD00u));
    // 0x267e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x267e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x267e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e20: 0xac23fd00  sw          $v1, -0x300($at)
    ctx->pc = 0x267e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD00u, _value); } while (0);
    // 0x267e24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e28: 0x8c24fd00  lw          $a0, -0x300($at)
    ctx->pc = 0x267e28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD00u));
    // 0x267e2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x267e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267e30: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267E30u;
    {
        const bool branch_taken_0x267e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x267e30) {
            ctx->pc = 0x267E40u;
            return;
        }
    }
    ctx->pc = 0x267E38u;
    // 0x267e38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267e3c: 0xac20fd00  sw          $zero, -0x300($at)
    ctx->pc = 0x267e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61FD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD00u, _value); } while (0);
    ctx->pc = 0x267e40u;
}
