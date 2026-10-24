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

// Function: entry_00191ab8
// Address: 0x191ab8 - 0x191aec
void entry_00191ab8_0x191ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191ab8_0x191ab8");
#endif

    ctx->pc = 0x191ab8u;

    // 0x191ab8: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x191ab8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191abc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x191abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191ac0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x191ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191ac4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x191ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191ac8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x191ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191acc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x191accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191ad0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x191ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191ad4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191ad8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x191ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x191adc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x191adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191ae0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x191ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x191AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191AECu;
}
