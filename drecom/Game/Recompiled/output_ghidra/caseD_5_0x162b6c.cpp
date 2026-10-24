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

// Function: caseD_5
// Address: 0x162b6c - 0x162b90
void caseD_5_0x162b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x162b6c");
#endif

    switch (ctx->pc) {
        case 0x162b8cu: goto label_162b8c;
        default: break;
    }

    ctx->pc = 0x162b6cu;

    // 0x162b6c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162b70: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x162b74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b7c: 0x0  nop
    ctx->pc = 0x162b7cu;
    // NOP
    // 0x162b80: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162b80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162b84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162B84u;
    SET_GPR_U32(ctx, 31, 0x162B8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B84u, 0x162B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B8Cu;
label_162b8c:
    // 0x162b8c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x162b90u;
}
