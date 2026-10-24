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

// Function: entry_0026ad70
// Address: 0x26ad70 - 0x26ada4
void entry_0026ad70_0x26ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ad70_0x26ad70");
#endif

    switch (ctx->pc) {
        case 0x26ad84u: goto label_26ad84;
        default: break;
    }

    ctx->pc = 0x26ad70u;

    // 0x26ad70: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x26ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad74: 0xc6001b54  lwc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ad78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x26ad78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ad7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x26AD7Cu;
    SET_GPR_U32(ctx, 31, 0x26AD84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x26AD7Cu, 0x26AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD84u;
label_26ad84:
    // 0x26ad84: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x26ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x26ad88: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26ad88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ad8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ad8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ad90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ad90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ad94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ad94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ad98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x26AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ADA4u;
}
