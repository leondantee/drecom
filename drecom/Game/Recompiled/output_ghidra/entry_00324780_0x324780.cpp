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

// Function: entry_00324780
// Address: 0x324780 - 0x3247a4
void entry_00324780_0x324780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324780_0x324780");
#endif

    ctx->pc = 0x324780u;

    // 0x324780: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x324780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x324784: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x324784u;
    {
        const bool branch_taken_0x324784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324784) {
            ctx->pc = 0x32468Cu;
            return;
        }
    }
    ctx->pc = 0x32478Cu;
    // 0x32478c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x32478cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324790: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324794: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x324794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x324798: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x324798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x32479c: 0x3e00008  jr          $ra
    ctx->pc = 0x32479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3247A4u;
}
