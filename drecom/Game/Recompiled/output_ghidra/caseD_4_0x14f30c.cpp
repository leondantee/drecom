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

// Function: caseD_4
// Address: 0x14f30c - 0x14f330
void caseD_4_0x14f30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14f30c");
#endif

    switch (ctx->pc) {
        case 0x14f328u: goto label_14f328;
        default: break;
    }

    ctx->pc = 0x14f30cu;

    // 0x14f30c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f314: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f318: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14f31c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f320: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F320u;
    SET_GPR_U32(ctx, 31, 0x14F328u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F320u, 0x14F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F328u;
label_14f328:
    // 0x14f328: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F330u;
}
