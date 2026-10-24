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

// Function: Dest_dir
// Address: 0x1733f0 - 0x173434
void Dest_dir_0x1733f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_dir_0x1733f0");
#endif

    switch (ctx->pc) {
        case 0x173414u: goto label_173414;
        case 0x173424u: goto label_173424;
        default: break;
    }

    ctx->pc = 0x1733f0u;

    // 0x1733f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1733f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1733f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1733f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1733f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1733f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1733fc: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1733fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x173400: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173404: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173408: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x173408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17340c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x17340Cu;
    SET_GPR_U32(ctx, 31, 0x173414u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x17340Cu, 0x173414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173414u;
label_173414:
    // 0x173414: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x173414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173418: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x173418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17341c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x17341Cu;
    SET_GPR_U32(ctx, 31, 0x173424u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x17341Cu, 0x173424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173424u;
label_173424:
    // 0x173424: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173424u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x173428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17342c: 0x3e00008  jr          $ra
    ctx->pc = 0x17342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173434u;
}
