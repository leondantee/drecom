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

// Function: entry_001e3c78
// Address: 0x1e3c78 - 0x1e3ca4
void entry_001e3c78_0x1e3c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c78_0x1e3c78");
#endif

    switch (ctx->pc) {
        case 0x1e3c9cu: goto label_1e3c9c;
        default: break;
    }

    ctx->pc = 0x1e3c78u;

    // 0x1e3c78: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e3c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e3c7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e3c80: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e3c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3c84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3c88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e3c8c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e3c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e3c90: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e3c90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e3c94: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3C94u;
    SET_GPR_U32(ctx, 31, 0x1E3C9Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3C94u, 0x1E3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C9Cu;
label_1e3c9c:
    // 0x1e3c9c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E3C9Cu;
    {
        const bool branch_taken_0x1e3c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c9c) {
            ctx->pc = 0x1E3DE0u;
            return;
        }
    }
    ctx->pc = 0x1E3CA4u;
}
