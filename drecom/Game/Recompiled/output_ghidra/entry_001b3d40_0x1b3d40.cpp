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

// Function: entry_001b3d40
// Address: 0x1b3d40 - 0x1b3d6c
void entry_001b3d40_0x1b3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d40_0x1b3d40");
#endif

    switch (ctx->pc) {
        case 0x1b3d60u: goto label_1b3d60;
        default: break;
    }

    ctx->pc = 0x1b3d40u;

    // 0x1b3d40: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3d44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d50: 0x0  nop
    ctx->pc = 0x1b3d50u;
    // NOP
    // 0x1b3d54: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b3d54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3d58: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B3D58u;
    SET_GPR_U32(ctx, 31, 0x1B3D60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B3D58u, 0x1B3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D60u;
label_1b3d60:
    // 0x1b3d60: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3d64: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B3D64u;
    {
        const bool branch_taken_0x1b3d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d64) {
            ctx->pc = 0x1B3DC0u;
            return;
        }
    }
    ctx->pc = 0x1B3D6Cu;
}
