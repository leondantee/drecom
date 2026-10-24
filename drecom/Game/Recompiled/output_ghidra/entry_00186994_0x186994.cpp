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

// Function: entry_00186994
// Address: 0x186994 - 0x1869c0
void entry_00186994_0x186994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186994_0x186994");
#endif

    switch (ctx->pc) {
        case 0x1869b4u: goto label_1869b4;
        default: break;
    }

    ctx->pc = 0x186994u;

    // 0x186994: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x186994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186998: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x18699c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1869a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1869a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1869a4: 0x0  nop
    ctx->pc = 0x1869a4u;
    // NOP
    // 0x1869a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1869a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1869ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1869ACu;
    SET_GPR_U32(ctx, 31, 0x1869B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1869ACu, 0x1869B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869B4u;
label_1869b4:
    // 0x1869b4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1869b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1869b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1869b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1869bc: 0x0  nop
    ctx->pc = 0x1869bcu;
    // NOP
    ctx->pc = 0x1869c0u;
}
