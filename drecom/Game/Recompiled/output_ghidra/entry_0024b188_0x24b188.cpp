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

// Function: entry_0024b188
// Address: 0x24b188 - 0x24b1ec
void entry_0024b188_0x24b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b188_0x24b188");
#endif

    switch (ctx->pc) {
        case 0x24b1dcu: goto label_24b1dc;
        default: break;
    }

    ctx->pc = 0x24b188u;

    // 0x24b188: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b18c: 0x84830018  lh          $v1, 0x18($a0)
    ctx->pc = 0x24b18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24b190: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24b194: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x24b194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x24b198: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b19c: 0x84630018  lh          $v1, 0x18($v1)
    ctx->pc = 0x24b19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x24b1a0: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x24B1A0u;
    {
        const bool branch_taken_0x24b1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b1a0) {
            ctx->pc = 0x24B574u;
            return;
        }
    }
    ctx->pc = 0x24B1A8u;
    // 0x24b1a8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24b1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b1b0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1b4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24b1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24b1b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b1bc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1c0: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x24b1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b1c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b1cc: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b1d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24b1d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b1d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B1D4u;
    SET_GPR_U32(ctx, 31, 0x24B1DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B1D4u, 0x24B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1DCu;
label_24b1dc:
    // 0x24b1dc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1e0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x24b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24b1e4: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x24B1E4u;
    {
        const bool branch_taken_0x24b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b1e4) {
            ctx->pc = 0x24B574u;
            return;
        }
    }
    ctx->pc = 0x24B1ECu;
}
