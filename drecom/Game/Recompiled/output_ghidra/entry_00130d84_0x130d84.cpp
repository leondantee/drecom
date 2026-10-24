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

// Function: entry_00130d84
// Address: 0x130d84 - 0x130db0
void entry_00130d84_0x130d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d84_0x130d84");
#endif

    switch (ctx->pc) {
        case 0x130da8u: goto label_130da8;
        default: break;
    }

    ctx->pc = 0x130d84u;

    // 0x130d84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d88: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x130d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d8c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130d90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d98: 0x0  nop
    ctx->pc = 0x130d98u;
    // NOP
    // 0x130d9c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x130d9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130da0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x130DA0u;
    SET_GPR_U32(ctx, 31, 0x130DA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x130DA0u, 0x130DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DA8u;
label_130da8:
    // 0x130da8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130dac: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x130db0u;
}
