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

// Function: entry_001ef818
// Address: 0x1ef818 - 0x1ef85c
void entry_001ef818_0x1ef818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef818_0x1ef818");
#endif

    switch (ctx->pc) {
        case 0x1ef820u: goto label_1ef820;
        case 0x1ef854u: goto label_1ef854;
        default: break;
    }

    ctx->pc = 0x1ef818u;

    // 0x1ef818: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF818u;
    SET_GPR_U32(ctx, 31, 0x1EF820u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF818u, 0x1EF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF820u;
label_1ef820:
    // 0x1ef820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef828: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF828u;
    {
        const bool branch_taken_0x1ef828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef828) {
            ctx->pc = 0x1EF85Cu;
            return;
        }
    }
    ctx->pc = 0x1EF830u;
    // 0x1ef830: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef834: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ef834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ef838: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef83c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef840: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x1ef840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x1ef844: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1ef844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ef848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef84c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF84Cu;
    SET_GPR_U32(ctx, 31, 0x1EF854u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF84Cu, 0x1EF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF854u;
label_1ef854:
    // 0x1ef854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EF854u;
    {
        const bool branch_taken_0x1ef854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef854) {
            ctx->pc = 0x1EF880u;
            return;
        }
    }
    ctx->pc = 0x1EF85Cu;
}
