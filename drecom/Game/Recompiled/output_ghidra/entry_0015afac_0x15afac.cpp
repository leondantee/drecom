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

// Function: entry_0015afac
// Address: 0x15afac - 0x15afd4
void entry_0015afac_0x15afac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015afac_0x15afac");
#endif

    switch (ctx->pc) {
        case 0x15afccu: goto label_15afcc;
        default: break;
    }

    ctx->pc = 0x15afacu;

    // 0x15afac: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x15afacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15afb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15afb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15afb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AFB8u;
    {
        const bool branch_taken_0x15afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afb8) {
            ctx->pc = 0x15AFD4u;
            return;
        }
    }
    ctx->pc = 0x15AFC0u;
    // 0x15afc0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15afc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15afc4: 0xc05c40c  jal         func_171030
    ctx->pc = 0x15AFC4u;
    SET_GPR_U32(ctx, 31, 0x15AFCCu);
    ctx->pc = 0x171030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171030u, 0x15AFC4u, 0x15AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFCCu;
label_15afcc:
    // 0x15afcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AFCCu;
    {
        const bool branch_taken_0x15afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afcc) {
            ctx->pc = 0x15AFE0u;
            return;
        }
    }
    ctx->pc = 0x15AFD4u;
}
