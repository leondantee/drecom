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

// Function: caseD_4
// Address: 0x162b44 - 0x162b6c
void caseD_4_0x162b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x162b44");
#endif

    switch (ctx->pc) {
        case 0x162b60u: goto label_162b60;
        default: break;
    }

    ctx->pc = 0x162b44u;

    // 0x162b44: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x162b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x162b48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162b4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162b50: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162b54: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x162b54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162b58: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162B58u;
    SET_GPR_U32(ctx, 31, 0x162B60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B58u, 0x162B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B60u;
label_162b60:
    // 0x162b60: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x162b64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x162B64u;
    {
        const bool branch_taken_0x162b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b64) {
            ctx->pc = 0x162B90u;
            return;
        }
    }
    ctx->pc = 0x162B6Cu;
}
