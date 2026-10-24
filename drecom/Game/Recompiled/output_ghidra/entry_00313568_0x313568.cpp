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

// Function: entry_00313568
// Address: 0x313568 - 0x313594
void entry_00313568_0x313568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313568_0x313568");
#endif

    switch (ctx->pc) {
        case 0x313570u: goto label_313570;
        default: break;
    }

    ctx->pc = 0x313568u;

    // 0x313568: 0xc067648  jal         func_19D920
    ctx->pc = 0x313568u;
    SET_GPR_U32(ctx, 31, 0x313570u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x313568u, 0x313570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313570u;
label_313570:
    // 0x313570: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x313570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x313574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313578: 0x0  nop
    ctx->pc = 0x313578u;
    // NOP
    // 0x31357c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31357cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313580: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x313584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313588: 0x0  nop
    ctx->pc = 0x313588u;
    // NOP
    // 0x31358c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31358cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313590: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x313594u;
}
