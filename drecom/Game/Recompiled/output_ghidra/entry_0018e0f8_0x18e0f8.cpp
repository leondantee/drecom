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

// Function: entry_0018e0f8
// Address: 0x18e0f8 - 0x18e138
void entry_0018e0f8_0x18e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e0f8_0x18e0f8");
#endif

    switch (ctx->pc) {
        case 0x18e11cu: goto label_18e11c;
        default: break;
    }

    ctx->pc = 0x18e0f8u;

label_18e0f8:
    // 0x18e0f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e0f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e0fc:
    // 0x18e0fc: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x18e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_18e100:
    // 0x18e100: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e104:
    // 0x18e104: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e108:
    // 0x18e108: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
label_18e10c:
    // 0x18e10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e110:
    // 0x18e110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e114:
    // 0x18e114: 0x40f809  jalr        $v0
label_18e118:
    if (ctx->pc == 0x18E118u) {
        ctx->pc = 0x18E11Cu;
        goto label_18e11c;
    }
    ctx->pc = 0x18E114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E11Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E114u, 0x18E11Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E11Cu;
label_18e11c:
    // 0x18e11c: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_18e120:
    // 0x18e120: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e124:
    // 0x18e124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_18e128:
    if (ctx->pc == 0x18E128u) {
        ctx->pc = 0x18E12Cu;
        goto label_18e12c;
    }
    ctx->pc = 0x18E124u;
    {
        const bool branch_taken_0x18e124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e124) {
            ctx->pc = 0x18E138u;
            return;
        }
    }
    ctx->pc = 0x18E12Cu;
label_18e12c:
    // 0x18e12c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e12cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e130:
    // 0x18e130: 0xc0c977c  jal         func_325DF0
label_18e134:
    if (ctx->pc == 0x18E134u) {
        ctx->pc = 0x18E138u;
        goto label_fallthrough_0x18e130;
    }
    ctx->pc = 0x18E130u;
    SET_GPR_U32(ctx, 31, 0x18E138u);
    ctx->pc = 0x325DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DF0u, 0x18E130u, 0x18E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x18e130:
    ctx->pc = 0x18E138u;
}
