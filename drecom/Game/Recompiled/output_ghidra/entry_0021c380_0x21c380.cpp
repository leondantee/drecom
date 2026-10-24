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

// Function: entry_0021c380
// Address: 0x21c380 - 0x21c3a4
void entry_0021c380_0x21c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c380_0x21c380");
#endif

    ctx->pc = 0x21c380u;

    // 0x21c380: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x21c380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21c384: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x21C384u;
    {
        const bool branch_taken_0x21c384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c384) {
            ctx->pc = 0x21C28Cu;
            return;
        }
    }
    ctx->pc = 0x21C38Cu;
    // 0x21c38c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21c38cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c390: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21c390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c394: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x21c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21c398: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x21c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21c39c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C3A4u;
}
