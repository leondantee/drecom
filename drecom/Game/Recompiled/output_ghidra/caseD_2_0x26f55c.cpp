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
// Address: 0x26f55c - 0x26f5a0
void caseD_2_0x26f55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x26f55c");
#endif

    switch (ctx->pc) {
        case 0x26f57cu: goto label_26f57c;
        default: break;
    }

    ctx->pc = 0x26f55cu;

    // 0x26f55c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f564: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f568: 0x2406051b  addiu       $a2, $zero, 0x51B
    ctx->pc = 0x26f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1307));
    // 0x26f56c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f570: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f574: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F574u;
    SET_GPR_U32(ctx, 31, 0x26F57Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F574u, 0x26F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F57Cu;
label_26f57c:
    // 0x26f57c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f580: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26f584: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x26f588: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f58c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F58Cu;
    {
        const bool branch_taken_0x26f58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f58c) {
            ctx->pc = 0x26F5A0u;
            return;
        }
    }
    ctx->pc = 0x26F594u;
    // 0x26f594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f59c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x26f5a0u;
}
