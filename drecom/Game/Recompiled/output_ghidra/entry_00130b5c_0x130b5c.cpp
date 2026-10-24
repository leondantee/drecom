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

// Function: entry_00130b5c
// Address: 0x130b5c - 0x130b88
void entry_00130b5c_0x130b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b5c_0x130b5c");
#endif

    switch (ctx->pc) {
        case 0x130b80u: goto label_130b80;
        default: break;
    }

    ctx->pc = 0x130b5cu;

    // 0x130b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b60: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x130b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130b68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b70: 0x0  nop
    ctx->pc = 0x130b70u;
    // NOP
    // 0x130b74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x130b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130b78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x130B78u;
    SET_GPR_U32(ctx, 31, 0x130B80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x130B78u, 0x130B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B80u;
label_130b80:
    // 0x130b80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b84: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x130b88u;
}
