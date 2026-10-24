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

// Function: entry_001e1e48
// Address: 0x1e1e48 - 0x1e1e74
void entry_001e1e48_0x1e1e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1e48_0x1e1e48");
#endif

    switch (ctx->pc) {
        case 0x1e1e6cu: goto label_1e1e6c;
        default: break;
    }

    ctx->pc = 0x1e1e48u;

    // 0x1e1e48: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e1e4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e1e50: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e1e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e1e54: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e1e58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e1e5c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e1e60: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1e1e60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e1e64: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E1E64u;
    SET_GPR_U32(ctx, 31, 0x1E1E6Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E1E64u, 0x1E1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E6Cu;
label_1e1e6c:
    // 0x1e1e6c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1E1E6Cu;
    {
        const bool branch_taken_0x1e1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e6c) {
            ctx->pc = 0x1E2080u;
            return;
        }
    }
    ctx->pc = 0x1E1E74u;
}
