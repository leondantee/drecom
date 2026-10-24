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

// Function: entry_0018de64
// Address: 0x18de64 - 0x18de94
void entry_0018de64_0x18de64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de64_0x18de64");
#endif

    switch (ctx->pc) {
        case 0x18de7cu: goto label_18de7c;
        default: break;
    }

    ctx->pc = 0x18de64u;

    // 0x18de64: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x18de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x18de68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18DE94u;
            return;
        }
    }
    ctx->pc = 0x18DE70u;
    // 0x18de70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de74: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18DE74u;
    SET_GPR_U32(ctx, 31, 0x18DE7Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18DE74u, 0x18DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE7Cu;
label_18de7c:
    // 0x18de7c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de84: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18de88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18de88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18de8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18DE8Cu;
    {
        const bool branch_taken_0x18de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de8c) {
            ctx->pc = 0x18DEB4u;
            return;
        }
    }
    ctx->pc = 0x18DE94u;
}
