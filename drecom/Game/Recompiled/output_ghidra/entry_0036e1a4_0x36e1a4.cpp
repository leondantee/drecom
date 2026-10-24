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

// Function: entry_0036e1a4
// Address: 0x36e1a4 - 0x36e218
void entry_0036e1a4_0x36e1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e1a4_0x36e1a4");
#endif

    switch (ctx->pc) {
        case 0x36e1c4u: goto label_36e1c4;
        case 0x36e1f8u: goto label_36e1f8;
        default: break;
    }

    ctx->pc = 0x36e1a4u;

    // 0x36e1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e1b0: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x36e1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x36e1b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e1b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e1bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E1BCu;
    SET_GPR_U32(ctx, 31, 0x36E1C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E1BCu, 0x36E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1C4u;
label_36e1c4:
    // 0x36e1c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x36e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36e1cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36E1CCu;
    {
        const bool branch_taken_0x36e1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e1cc) {
            ctx->pc = 0x36E218u;
            return;
        }
    }
    ctx->pc = 0x36E1D4u;
    // 0x36e1d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e1dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36e1e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36e1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36e1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e1e8: 0x0  nop
    ctx->pc = 0x36e1e8u;
    // NOP
    // 0x36e1ec: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36e1ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36e1f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36E1F0u;
    SET_GPR_U32(ctx, 31, 0x36E1F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36E1F0u, 0x36E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1F8u;
label_36e1f8:
    // 0x36e1f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1fc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36e200: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x36e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x36e204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36e208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36e208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36e20c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e210: 0xc0db724  jal         func_36DC90
    ctx->pc = 0x36E210u;
    SET_GPR_U32(ctx, 31, 0x36E218u);
    ctx->pc = 0x36DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC90u, 0x36E210u, 0x36E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E218u;
}
