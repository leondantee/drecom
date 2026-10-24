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

// Function: entry_00379dd4
// Address: 0x379dd4 - 0x379e58
void entry_00379dd4_0x379dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379dd4_0x379dd4");
#endif

    switch (ctx->pc) {
        case 0x379e30u: goto label_379e30;
        default: break;
    }

    ctx->pc = 0x379dd4u;

    // 0x379dd4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379dd8: 0xac2005a0  sw          $zero, 0x5A0($at)
    ctx->pc = 0x379dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x379ddc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379de0: 0xac200590  sw          $zero, 0x590($at)
    ctx->pc = 0x379de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0590u, _value); } while (0);
    // 0x379de4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379de8: 0xac200580  sw          $zero, 0x580($at)
    ctx->pc = 0x379de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x379dec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379df0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379df4: 0xac220598  sw          $v0, 0x598($at)
    ctx->pc = 0x379df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0598u, _value); } while (0);
    // 0x379df8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379dfc: 0xac220588  sw          $v0, 0x588($at)
    ctx->pc = 0x379dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x379e00: 0xae006870  sw          $zero, 0x6870($s0)
    ctx->pc = 0x379e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 0));
    // 0x379e04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379e08: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x379e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x379e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379e10: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x379e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x379e14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x379e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x379e18: 0xae020520  sw          $v0, 0x520($s0)
    ctx->pc = 0x379e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    // 0x379e1c: 0x8e0565a0  lw          $a1, 0x65A0($s0)
    ctx->pc = 0x379e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x379e20: 0x240400a6  addiu       $a0, $zero, 0xA6
    ctx->pc = 0x379e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x379e24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379e28: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x379E28u;
    SET_GPR_U32(ctx, 31, 0x379E30u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x379E28u, 0x379E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E30u;
label_379e30:
    // 0x379e30: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x379e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x379e34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x379e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x379e38: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x379e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x379e3c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379e40: 0x8c2305a8  lw          $v1, 0x5A8($at)
    ctx->pc = 0x379e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A8u));
    // 0x379e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379e48: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x379e4c: 0xac2305a8  sw          $v1, 0x5A8($at)
    ctx->pc = 0x379e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A8u, _value); } while (0);
    // 0x379e50: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x379E50u;
    {
        const bool branch_taken_0x379e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379e50) {
            ctx->pc = 0x379FA8u;
            return;
        }
    }
    ctx->pc = 0x379E58u;
}
