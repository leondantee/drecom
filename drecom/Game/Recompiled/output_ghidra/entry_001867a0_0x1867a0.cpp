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

// Function: entry_001867a0
// Address: 0x1867a0 - 0x1867c8
void entry_001867a0_0x1867a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001867a0_0x1867a0");
#endif

    switch (ctx->pc) {
        case 0x1867c0u: goto label_1867c0;
        default: break;
    }

    ctx->pc = 0x1867a0u;

    // 0x1867a0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1867a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1867a4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1867a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867b0: 0x0  nop
    ctx->pc = 0x1867b0u;
    // NOP
    // 0x1867b4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1867b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1867b8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1867B8u;
    SET_GPR_U32(ctx, 31, 0x1867C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1867B8u, 0x1867C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867C0u;
label_1867c0:
    // 0x1867c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1867c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1867c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1867c8u;
}
