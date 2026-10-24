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

// Function: entry_0010374c
// Address: 0x10374c - 0x103770
void entry_0010374c_0x10374c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010374c_0x10374c");
#endif

    switch (ctx->pc) {
        case 0x103754u: goto label_103754;
        default: break;
    }

    ctx->pc = 0x10374cu;

    // 0x10374c: 0xc040c32  jal         func_1030C8
    ctx->pc = 0x10374Cu;
    SET_GPR_U32(ctx, 31, 0x103754u);
    ctx->pc = 0x103750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10374Cu;
    // 0x103750: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1030C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1030C8u, 0x10374Cu, 0x103754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103754u;
label_103754:
    // 0x103754: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x103754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103758: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x103758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10375c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10375cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x103760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103764: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x103764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103768: 0x3e00008  jr          $ra
    ctx->pc = 0x103768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103768u;
        // 0x10376c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103770u;
}
