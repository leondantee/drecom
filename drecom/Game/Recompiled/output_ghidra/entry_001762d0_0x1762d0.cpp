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

// Function: entry_001762d0
// Address: 0x1762d0 - 0x176310
void entry_001762d0_0x1762d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001762d0_0x1762d0");
#endif

    ctx->pc = 0x1762d0u;

    // 0x1762d0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1762d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1762d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1762d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1762d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1762d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1762dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1762dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1762e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1762e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1762e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1762e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1762e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1762e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1762ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1762ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1762f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1762f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1762f4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1762f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1762f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1762f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1762fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1762fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x176300: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x176300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176304: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x176304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x176308: 0x3e00008  jr          $ra
    ctx->pc = 0x176308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176310u;
}
