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

// Function: entry_0014c848
// Address: 0x14c848 - 0x14c8a4
void entry_0014c848_0x14c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c848_0x14c848");
#endif

    switch (ctx->pc) {
        case 0x14c88cu: goto label_14c88c;
        default: break;
    }

    ctx->pc = 0x14c848u;

    // 0x14c848: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c84c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14c850: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c858: 0x0  nop
    ctx->pc = 0x14c858u;
    // NOP
    // 0x14c85c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14c85cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c860: 0x0  nop
    ctx->pc = 0x14c860u;
    // NOP
    // 0x14c864: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x14C864u;
    {
        const bool branch_taken_0x14c864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c864) {
            ctx->pc = 0x14C8A4u;
            return;
        }
    }
    ctx->pc = 0x14C86Cu;
    // 0x14c86c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c874: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c878: 0x24060057  addiu       $a2, $zero, 0x57
    ctx->pc = 0x14c878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x14c87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c880: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c884: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C884u;
    SET_GPR_U32(ctx, 31, 0x14C88Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C884u, 0x14C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C88Cu;
label_14c88c:
    // 0x14c88c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c890: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x14c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c898: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14c898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x14c89c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14C89Cu;
    {
        const bool branch_taken_0x14c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c89c) {
            ctx->pc = 0x14C8F0u;
            return;
        }
    }
    ctx->pc = 0x14C8A4u;
}
