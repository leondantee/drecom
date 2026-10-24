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

// Function: entry_0018683c
// Address: 0x18683c - 0x186860
void entry_0018683c_0x18683c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018683c_0x18683c");
#endif

    switch (ctx->pc) {
        case 0x186858u: goto label_186858;
        default: break;
    }

    ctx->pc = 0x18683cu;

    // 0x18683c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x18683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x186840: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186848: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18684c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18684cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186850: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x186850u;
    SET_GPR_U32(ctx, 31, 0x186858u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186850u, 0x186858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186858u;
label_186858:
    // 0x186858: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18685c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18685cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x186860u;
}
