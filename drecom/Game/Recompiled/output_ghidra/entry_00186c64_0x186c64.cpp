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

// Function: entry_00186c64
// Address: 0x186c64 - 0x186c90
void entry_00186c64_0x186c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186c64_0x186c64");
#endif

    switch (ctx->pc) {
        case 0x186c84u: goto label_186c84;
        default: break;
    }

    ctx->pc = 0x186c64u;

    // 0x186c64: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x186c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186c68: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x186c6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c74: 0x0  nop
    ctx->pc = 0x186c74u;
    // NOP
    // 0x186c78: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x186c78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186c7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x186C7Cu;
    SET_GPR_U32(ctx, 31, 0x186C84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186C7Cu, 0x186C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C84u;
label_186c84:
    // 0x186c84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186c88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186c8c: 0x0  nop
    ctx->pc = 0x186c8cu;
    // NOP
    ctx->pc = 0x186c90u;
}
