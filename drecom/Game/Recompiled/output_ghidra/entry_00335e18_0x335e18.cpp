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

// Function: entry_00335e18
// Address: 0x335e18 - 0x335e64
void entry_00335e18_0x335e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335e18_0x335e18");
#endif

    switch (ctx->pc) {
        case 0x335e2cu: goto label_335e2c;
        default: break;
    }

    ctx->pc = 0x335e18u;

    // 0x335e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335e1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e20: 0xe4203428  swc1        $f0, 0x3428($at)
    ctx->pc = 0x335e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893428u, _value); } while (0); }
    // 0x335e24: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x335E24u;
    SET_GPR_U32(ctx, 31, 0x335E2Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x335E24u, 0x335E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E2Cu;
label_335e2c:
    // 0x335e2c: 0x1440022a  bnez        $v0, . + 4 + (0x22A << 2)
    ctx->pc = 0x335E2Cu;
    {
        const bool branch_taken_0x335e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335e2c) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x335E34u;
    // 0x335e34: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x335e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x335e38: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x335e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x335e3c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x335e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x335e40: 0xae04685c  sw          $a0, 0x685C($s0)
    ctx->pc = 0x335e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 4));
    // 0x335e44: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x335e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x335e48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x335e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x335e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335E4Cu;
    {
        const bool branch_taken_0x335e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e4c) {
            ctx->pc = 0x335E64u;
            return;
        }
    }
    ctx->pc = 0x335E54u;
    // 0x335e54: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x335e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x335e58: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x335e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x335e5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x335e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x335e60: 0xae036870  sw          $v1, 0x6870($s0)
    ctx->pc = 0x335e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 3));
    ctx->pc = 0x335e64u;
}
