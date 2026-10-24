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

// Function: entry_0037bd04
// Address: 0x37bd04 - 0x37bd58
void entry_0037bd04_0x37bd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bd04_0x37bd04");
#endif

    switch (ctx->pc) {
        case 0x37bd1cu: goto label_37bd1c;
        default: break;
    }

    ctx->pc = 0x37bd04u;

    // 0x37bd04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37bd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37bd08: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37bd0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37bd0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bd10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37bd10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bd14: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37BD14u;
    SET_GPR_U32(ctx, 31, 0x37BD1Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37BD14u, 0x37BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD1Cu;
label_37bd1c:
    // 0x37bd1c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd20: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37bd24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37bd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37bd28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37BD28u;
    {
        const bool branch_taken_0x37bd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd28) {
            ctx->pc = 0x37BD58u;
            return;
        }
    }
    ctx->pc = 0x37BD30u;
    // 0x37bd30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bd34: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    // 0x37bd38: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd3c: 0x8c2405a0  lw          $a0, 0x5A0($at)
    ctx->pc = 0x37bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37bd40: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x37bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x37bd44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bd48: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd4c: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37bd4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37bd50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37BD50u;
    {
        const bool branch_taken_0x37bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd50) {
            ctx->pc = 0x37BD60u;
            return;
        }
    }
    ctx->pc = 0x37BD58u;
}
