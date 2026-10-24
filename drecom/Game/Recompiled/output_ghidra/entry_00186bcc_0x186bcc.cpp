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

// Function: entry_00186bcc
// Address: 0x186bcc - 0x186bf0
void entry_00186bcc_0x186bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186bcc_0x186bcc");
#endif

    switch (ctx->pc) {
        case 0x186be8u: goto label_186be8;
        default: break;
    }

    ctx->pc = 0x186bccu;

    // 0x186bcc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x186bd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186bd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186bd8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186bdc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x186bdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186be0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x186BE0u;
    SET_GPR_U32(ctx, 31, 0x186BE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186BE0u, 0x186BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BE8u;
label_186be8:
    // 0x186be8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186bec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x186bf0u;
}
