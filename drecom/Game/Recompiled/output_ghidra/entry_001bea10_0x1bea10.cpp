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

// Function: entry_001bea10
// Address: 0x1bea10 - 0x1bea58
void entry_001bea10_0x1bea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bea10_0x1bea10");
#endif

    switch (ctx->pc) {
        case 0x1bea50u: goto label_1bea50;
        default: break;
    }

    ctx->pc = 0x1bea10u;

    // 0x1bea10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea14: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1bea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bea18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea1c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bea20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bea24: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bea24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bea28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BEA28u;
    {
        const bool branch_taken_0x1bea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea28) {
            ctx->pc = 0x1BEA58u;
            return;
        }
    }
    ctx->pc = 0x1BEA30u;
    // 0x1bea30: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea38: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bea38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bea3c: 0x24061403  addiu       $a2, $zero, 0x1403
    ctx->pc = 0x1bea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5123));
    // 0x1bea40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bea40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bea44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bea44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bea48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BEA48u;
    SET_GPR_U32(ctx, 31, 0x1BEA50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BEA48u, 0x1BEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA50u;
label_1bea50:
    // 0x1bea50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEA50u;
    {
        const bool branch_taken_0x1bea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea50) {
            ctx->pc = 0x1BEA78u;
            return;
        }
    }
    ctx->pc = 0x1BEA58u;
}
