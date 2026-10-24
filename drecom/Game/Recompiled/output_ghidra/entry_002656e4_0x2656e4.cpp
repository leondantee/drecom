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

// Function: entry_002656e4
// Address: 0x2656e4 - 0x26570c
void entry_002656e4_0x2656e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002656e4_0x2656e4");
#endif

    switch (ctx->pc) {
        case 0x265704u: goto label_265704;
        default: break;
    }

    ctx->pc = 0x2656e4u;

    // 0x2656e4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2656e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2656e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2656e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2656ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2656ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2656f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656F0u;
    {
        const bool branch_taken_0x2656f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656f0) {
            ctx->pc = 0x26570Cu;
            return;
        }
    }
    ctx->pc = 0x2656F8u;
    // 0x2656f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2656f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2656fc: 0xc077674  jal         func_1DD9D0
    ctx->pc = 0x2656FCu;
    SET_GPR_U32(ctx, 31, 0x265704u);
    ctx->pc = 0x1DD9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9D0u, 0x2656FCu, 0x265704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265704u;
label_265704:
    // 0x265704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x265704u;
    {
        const bool branch_taken_0x265704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265704) {
            ctx->pc = 0x265718u;
            return;
        }
    }
    ctx->pc = 0x26570Cu;
}
