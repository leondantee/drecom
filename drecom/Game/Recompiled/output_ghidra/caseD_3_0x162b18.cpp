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

// Function: caseD_3
// Address: 0x162b18 - 0x162b44
void caseD_3_0x162b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x162b18");
#endif

    switch (ctx->pc) {
        case 0x162b38u: goto label_162b38;
        default: break;
    }

    ctx->pc = 0x162b18u;

    // 0x162b18: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162b1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x162b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x162b20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b28: 0x0  nop
    ctx->pc = 0x162b28u;
    // NOP
    // 0x162b2c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162b2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162b30: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162B30u;
    SET_GPR_U32(ctx, 31, 0x162B38u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B30u, 0x162B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B38u;
label_162b38:
    // 0x162b38: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x162b3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x162B3Cu;
    {
        const bool branch_taken_0x162b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b3c) {
            ctx->pc = 0x162B90u;
            return;
        }
    }
    ctx->pc = 0x162B44u;
}
