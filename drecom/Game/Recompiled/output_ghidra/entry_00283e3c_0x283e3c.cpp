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

// Function: entry_00283e3c
// Address: 0x283e3c - 0x283e70
void entry_00283e3c_0x283e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283e3c_0x283e3c");
#endif

    switch (ctx->pc) {
        case 0x283e44u: goto label_283e44;
        default: break;
    }

    ctx->pc = 0x283e3cu;

    // 0x283e3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283E3Cu;
    SET_GPR_U32(ctx, 31, 0x283E44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283E3Cu, 0x283E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E44u;
label_283e44:
    // 0x283e44: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x283e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x283e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283e4c: 0x0  nop
    ctx->pc = 0x283e4cu;
    // NOP
    // 0x283e50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283e54: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x283e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x283e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283e5c: 0x0  nop
    ctx->pc = 0x283e5cu;
    // NOP
    // 0x283e60: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x283e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e64: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x283e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x283e6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x283e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x283e70u;
}
