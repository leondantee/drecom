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

// Function: entry_0037a0e0
// Address: 0x37a0e0 - 0x37a12c
void entry_0037a0e0_0x37a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a0e0_0x37a0e0");
#endif

    switch (ctx->pc) {
        case 0x37a110u: goto label_37a110;
        default: break;
    }

    ctx->pc = 0x37a0e0u;

    // 0x37a0e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37a0e4: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x37a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x37a0e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x37a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x37a0ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37a0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37a0f0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x37A0F0u;
    {
        const bool branch_taken_0x37a0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a0f0) {
            ctx->pc = 0x37A12Cu;
            return;
        }
    }
    ctx->pc = 0x37A0F8u;
    // 0x37a0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a0fc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x37a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x37a100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a104: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a104u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a108: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A108u;
    SET_GPR_U32(ctx, 31, 0x37A110u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A108u, 0x37A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A110u;
label_37a110:
    // 0x37a110: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a114: 0xac200588  sw          $zero, 0x588($at)
    ctx->pc = 0x37a114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37a118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a11c: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x37a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x37a120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a124: 0xae035dcc  sw          $v1, 0x5DCC($s0)
    ctx->pc = 0x37a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 3));
    // 0x37a128: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x37a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    ctx->pc = 0x37a12cu;
}
