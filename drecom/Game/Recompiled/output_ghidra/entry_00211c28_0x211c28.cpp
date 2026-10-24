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

// Function: entry_00211c28
// Address: 0x211c28 - 0x211c60
void entry_00211c28_0x211c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211c28_0x211c28");
#endif

    switch (ctx->pc) {
        case 0x211c44u: goto label_211c44;
        case 0x211c4cu: goto label_211c4c;
        default: break;
    }

    ctx->pc = 0x211c28u;

    // 0x211c28: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x211c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x211c2c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x211C2Cu;
    {
        const bool branch_taken_0x211c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211c2c) {
            ctx->pc = 0x211BC0u;
            return;
        }
    }
    ctx->pc = 0x211C34u;
    // 0x211c34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x211c38: 0xa02095a0  sb          $zero, -0x6A60($at)
    ctx->pc = 0x211c38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x211c3c: 0xc084758  jal         func_211D60
    ctx->pc = 0x211C3Cu;
    SET_GPR_U32(ctx, 31, 0x211C44u);
    ctx->pc = 0x211D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211D60u, 0x211C3Cu, 0x211C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C44u;
label_211c44:
    // 0x211c44: 0xc084818  jal         func_212060
    ctx->pc = 0x211C44u;
    SET_GPR_U32(ctx, 31, 0x211C4Cu);
    ctx->pc = 0x212060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212060u, 0x211C44u, 0x211C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C4Cu;
label_211c4c:
    // 0x211c4c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x211c50: 0x247195d0  addiu       $s1, $v1, -0x6A30
    ctx->pc = 0x211c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940112));
    // 0x211c54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x211c54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211c58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x211C58u;
    {
        const bool branch_taken_0x211c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211c58) {
            ctx->pc = 0x211C70u;
            return;
        }
    }
    ctx->pc = 0x211C60u;
}
