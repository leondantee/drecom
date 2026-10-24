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

// Function: caseD_2
// Address: 0x14f2c4 - 0x14f2e8
void caseD_2_0x14f2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14f2c4");
#endif

    switch (ctx->pc) {
        case 0x14f2e0u: goto label_14f2e0;
        default: break;
    }

    ctx->pc = 0x14f2c4u;

    // 0x14f2c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f2c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f2cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f2d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14f2d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f2d8: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F2D8u;
    SET_GPR_U32(ctx, 31, 0x14F2E0u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F2D8u, 0x14F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2E0u;
label_14f2e0:
    // 0x14f2e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F2E8u;
}
