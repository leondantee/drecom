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

// Function: entry_00313594
// Address: 0x313594 - 0x3135c0
void entry_00313594_0x313594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313594_0x313594");
#endif

    switch (ctx->pc) {
        case 0x31359cu: goto label_31359c;
        default: break;
    }

    ctx->pc = 0x313594u;

    // 0x313594: 0xc067648  jal         func_19D920
    ctx->pc = 0x313594u;
    SET_GPR_U32(ctx, 31, 0x31359Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x313594u, 0x31359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31359Cu;
label_31359c:
    // 0x31359c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x31359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3135a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135a4: 0x0  nop
    ctx->pc = 0x3135a4u;
    // NOP
    // 0x3135a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3135a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3135ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3135b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135b4: 0x0  nop
    ctx->pc = 0x3135b4u;
    // NOP
    // 0x3135b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3135b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3135bc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3135bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x3135c0u;
}
