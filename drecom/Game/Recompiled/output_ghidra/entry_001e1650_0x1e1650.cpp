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

// Function: entry_001e1650
// Address: 0x1e1650 - 0x1e167c
void entry_001e1650_0x1e1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1650_0x1e1650");
#endif

    switch (ctx->pc) {
        case 0x1e1674u: goto label_1e1674;
        default: break;
    }

    ctx->pc = 0x1e1650u;

    // 0x1e1650: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e1654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e1658: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e1658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e165c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e1660: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e1660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e1664: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e1664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e1668: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x1e1668u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1e166c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E166Cu;
    SET_GPR_U32(ctx, 31, 0x1E1674u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E166Cu, 0x1E1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1674u;
label_1e1674:
    // 0x1e1674: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1E1674u;
    {
        const bool branch_taken_0x1e1674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1674) {
            ctx->pc = 0x1E17C0u;
            return;
        }
    }
    ctx->pc = 0x1E167Cu;
}
