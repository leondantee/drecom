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

// Function: entry_002661c0
// Address: 0x2661c0 - 0x26620c
void entry_002661c0_0x2661c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002661c0_0x2661c0");
#endif

    ctx->pc = 0x2661c0u;

    // 0x2661c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2661c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2661c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2661c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2661c8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2661c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2661cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2661ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2661d0: 0x8c22fca8  lw          $v0, -0x358($at)
    ctx->pc = 0x2661d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCA8u));
    // 0x2661d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2661d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2661d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2661d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2661dc: 0xac22fca8  sw          $v0, -0x358($at)
    ctx->pc = 0x2661dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FCA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCA8u, _value); } while (0);
    // 0x2661e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2661e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2661e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2661e8: 0x2442b898  addiu       $v0, $v0, -0x4768
    ctx->pc = 0x2661e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949016));
    // 0x2661ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2661ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2661f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2661f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2661f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2661f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2661f8: 0x38420027  xori        $v0, $v0, 0x27
    ctx->pc = 0x2661f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)39);
    // 0x2661fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2661fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x266200: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x266200u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266204: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x266204u;
    {
        const bool branch_taken_0x266204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266204) {
            ctx->pc = 0x266320u;
            return;
        }
    }
    ctx->pc = 0x26620Cu;
}
