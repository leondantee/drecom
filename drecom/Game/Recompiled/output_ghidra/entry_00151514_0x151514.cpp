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

// Function: entry_00151514
// Address: 0x151514 - 0x151564
void entry_00151514_0x151514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151514_0x151514");
#endif

    switch (ctx->pc) {
        case 0x151544u: goto label_151544;
        case 0x151560u: goto label_151560;
        default: break;
    }

    ctx->pc = 0x151514u;

    // 0x151514: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x151514u;
    {
        const bool branch_taken_0x151514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151514) {
            ctx->pc = 0x151564u;
            return;
        }
    }
    ctx->pc = 0x15151Cu;
    // 0x15151c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x15151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x151520: 0xaee419e8  sw          $a0, 0x19E8($s7)
    ctx->pc = 0x151520u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6632), GPR_U32(ctx, 4));
    // 0x151524: 0x32260001  andi        $a2, $s1, 0x1
    ctx->pc = 0x151524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x151528: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x151528u;
    {
        const bool branch_taken_0x151528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x151528) {
            ctx->pc = 0x151564u;
            return;
        }
    }
    ctx->pc = 0x151530u;
    // 0x151530: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x151530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x151534: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151538: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x15153c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15153Cu;
    SET_GPR_U32(ctx, 31, 0x151544u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15153Cu, 0x151544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151544u;
label_151544:
    // 0x151544: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x151544u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151548: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x15154c: 0x3467ff80  ori         $a3, $v1, 0xFF80
    ctx->pc = 0x15154cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x151550: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x151550u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151554: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x151554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x151558: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x151558u;
    SET_GPR_U32(ctx, 31, 0x151560u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x151558u, 0x151560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151560u;
label_151560:
    // 0x151560: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151560u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x151564u;
}
