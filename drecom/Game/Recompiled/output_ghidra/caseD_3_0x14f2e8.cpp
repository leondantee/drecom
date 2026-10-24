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

// Function: caseD_3
// Address: 0x14f2e8 - 0x14f30c
void caseD_3_0x14f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14f2e8");
#endif

    switch (ctx->pc) {
        case 0x14f304u: goto label_14f304;
        default: break;
    }

    ctx->pc = 0x14f2e8u;

    // 0x14f2e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f2ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f2f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f2f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14f2f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f2fc: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F2FCu;
    SET_GPR_U32(ctx, 31, 0x14F304u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F2FCu, 0x14F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F304u;
label_14f304:
    // 0x14f304: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x14F304u;
    {
        const bool branch_taken_0x14f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f304) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F30Cu;
}
