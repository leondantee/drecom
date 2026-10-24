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

// Function: entry_0031353c
// Address: 0x31353c - 0x313568
void entry_0031353c_0x31353c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031353c_0x31353c");
#endif

    switch (ctx->pc) {
        case 0x313544u: goto label_313544;
        default: break;
    }

    ctx->pc = 0x31353cu;

    // 0x31353c: 0xc067648  jal         func_19D920
    ctx->pc = 0x31353Cu;
    SET_GPR_U32(ctx, 31, 0x313544u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31353Cu, 0x313544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313544u;
label_313544:
    // 0x313544: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x313544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x313548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31354c: 0x0  nop
    ctx->pc = 0x31354cu;
    // NOP
    // 0x313550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x313550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313554: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x313554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x313558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31355c: 0x0  nop
    ctx->pc = 0x31355cu;
    // NOP
    // 0x313560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313564: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x313568u;
}
