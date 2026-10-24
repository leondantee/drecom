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

// Function: entry_001868fc
// Address: 0x1868fc - 0x186920
void entry_001868fc_0x1868fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001868fc_0x1868fc");
#endif

    switch (ctx->pc) {
        case 0x186918u: goto label_186918;
        default: break;
    }

    ctx->pc = 0x1868fcu;

    // 0x1868fc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1868fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x186900: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186908: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18690c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18690cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186910: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x186910u;
    SET_GPR_U32(ctx, 31, 0x186918u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186910u, 0x186918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186918u;
label_186918:
    // 0x186918: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18691c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x186920u;
}
