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

// Function: entry_001f39b0
// Address: 0x1f39b0 - 0x1f3a08
void entry_001f39b0_0x1f39b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f39b0_0x1f39b0");
#endif

    ctx->pc = 0x1f39b0u;

    // 0x1f39b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39b4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1f39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f39b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1f39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1f39bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f39bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f39c0: 0x0  nop
    ctx->pc = 0x1f39c0u;
    // NOP
    // 0x1f39c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f39c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f39c8: 0x0  nop
    ctx->pc = 0x1f39c8u;
    // NOP
    // 0x1f39cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F39CCu;
    {
        const bool branch_taken_0x1f39cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f39cc) {
            ctx->pc = 0x1F3A08u;
            return;
        }
    }
    ctx->pc = 0x1F39D4u;
    // 0x1f39d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39d8: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f39d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f39dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f39dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f39e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F39E0u;
    {
        const bool branch_taken_0x1f39e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39e0) {
            ctx->pc = 0x1F3A08u;
            return;
        }
    }
    ctx->pc = 0x1F39E8u;
    // 0x1f39e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f39f4: 0x3406b400  ori         $a2, $zero, 0xB400
    ctx->pc = 0x1f39f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x1f39f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f39f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f39fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f39fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3a00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3A00u;
    SET_GPR_U32(ctx, 31, 0x1F3A08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3A00u, 0x1F3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A08u;
}
