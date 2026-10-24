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

// Function: entry_001b4354
// Address: 0x1b4354 - 0x1b4378
void entry_001b4354_0x1b4354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4354_0x1b4354");
#endif

    switch (ctx->pc) {
        case 0x1b4374u: goto label_1b4374;
        default: break;
    }

    ctx->pc = 0x1b4354u;

    // 0x1b4354: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4358: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b435c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b4360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4364: 0x0  nop
    ctx->pc = 0x1b4364u;
    // NOP
    // 0x1b4368: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b4368u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b436c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B436Cu;
    SET_GPR_U32(ctx, 31, 0x1B4374u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B436Cu, 0x1B4374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4374u;
label_1b4374:
    // 0x1b4374: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b4374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    ctx->pc = 0x1b4378u;
}
