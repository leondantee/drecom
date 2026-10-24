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

// Function: entry_002778e0
// Address: 0x2778e0 - 0x27793c
void entry_002778e0_0x2778e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002778e0_0x2778e0");
#endif

    ctx->pc = 0x2778e0u;

    // 0x2778e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2778e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2778e4: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x2778e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x2778e8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2778e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2778ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2778ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2778f0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2778F0u;
    {
        const bool branch_taken_0x2778f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778f0) {
            ctx->pc = 0x27793Cu;
            return;
        }
    }
    ctx->pc = 0x2778F8u;
    // 0x2778f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2778f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2778fc: 0x8c231a20  lw          $v1, 0x1A20($at)
    ctx->pc = 0x2778fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A20u));
    // 0x277900: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x277900u;
    {
        const bool branch_taken_0x277900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x277900) {
            ctx->pc = 0x27793Cu;
            return;
        }
    }
    ctx->pc = 0x277908u;
    // 0x277908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27790c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27790cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277910: 0xac221a20  sw          $v0, 0x1A20($at)
    ctx->pc = 0x277910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    // 0x277914: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x277914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x277918: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x277918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x27791c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27791cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277920: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x277920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x277924: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x277924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277928: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x277928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27792c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x27792cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x277930: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x277934: 0xc065644  jal         func_195910
    ctx->pc = 0x277934u;
    SET_GPR_U32(ctx, 31, 0x27793Cu);
    ctx->pc = 0x195910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195910u, 0x277934u, 0x27793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27793Cu;
}
