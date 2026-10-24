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

// Function: entry_0018ab7c
// Address: 0x18ab7c - 0x18abcc
void entry_0018ab7c_0x18ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab7c_0x18ab7c");
#endif

    switch (ctx->pc) {
        case 0x18ab94u: goto label_18ab94;
        case 0x18abb8u: goto label_18abb8;
        default: break;
    }

    ctx->pc = 0x18ab7cu;

    // 0x18ab7c: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x18ab80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab84: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab8c: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18AB8Cu;
    SET_GPR_U32(ctx, 31, 0x18AB94u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18AB8Cu, 0x18AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB94u;
label_18ab94:
    // 0x18ab94: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18ab94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18ab98: 0x640000c  bltz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x18AB98u;
    {
        const bool branch_taken_0x18ab98 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x18ab98) {
            ctx->pc = 0x18ABCCu;
            return;
        }
    }
    ctx->pc = 0x18ABA0u;
    // 0x18aba0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18aba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x18aba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aba8: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18abac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18abacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18abb0: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18ABB0u;
    SET_GPR_U32(ctx, 31, 0x18ABB8u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18ABB0u, 0x18ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABB8u;
label_18abb8:
    // 0x18abb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18abbc: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18abc0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18abc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18abc8: 0xac23ac50  sw          $v1, -0x53B0($at)
    ctx->pc = 0x18abc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    ctx->pc = 0x18abccu;
}
