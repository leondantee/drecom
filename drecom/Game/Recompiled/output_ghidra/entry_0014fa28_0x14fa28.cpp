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

// Function: entry_0014fa28
// Address: 0x14fa28 - 0x14fa5c
void entry_0014fa28_0x14fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa28_0x14fa28");
#endif

    switch (ctx->pc) {
        case 0x14fa34u: goto label_14fa34;
        default: break;
    }

    ctx->pc = 0x14fa28u;

    // 0x14fa28: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14fa28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14fa2c: 0xc054188  jal         func_150620
    ctx->pc = 0x14FA2Cu;
    SET_GPR_U32(ctx, 31, 0x14FA34u);
    ctx->pc = 0x150620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150620u, 0x14FA2Cu, 0x14FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA34u;
label_14fa34:
    // 0x14fa34: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14fa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14fa38: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14fa3c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FA3Cu;
    {
        const bool branch_taken_0x14fa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa3c) {
            ctx->pc = 0x14FA5Cu;
            return;
        }
    }
    ctx->pc = 0x14FA44u;
    // 0x14fa44: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x14fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14fa48: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x14fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14fa4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14fa50: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x14fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x14fa54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA54u;
    {
        const bool branch_taken_0x14fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa54) {
            ctx->pc = 0x14FA68u;
            return;
        }
    }
    ctx->pc = 0x14FA5Cu;
}
