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

// Function: entry_00186b04
// Address: 0x186b04 - 0x186b28
void entry_00186b04_0x186b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186b04_0x186b04");
#endif

    switch (ctx->pc) {
        case 0x186b20u: goto label_186b20;
        default: break;
    }

    ctx->pc = 0x186b04u;

    // 0x186b04: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x186b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x186b08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186b10: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x186b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186b14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x186b14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186b18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x186B18u;
    SET_GPR_U32(ctx, 31, 0x186B20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186B18u, 0x186B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B20u;
label_186b20:
    // 0x186b20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x186b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x186b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x186b28u;
}
