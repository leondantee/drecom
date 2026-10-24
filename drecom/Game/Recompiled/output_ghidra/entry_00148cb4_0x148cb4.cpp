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

// Function: entry_00148cb4
// Address: 0x148cb4 - 0x148d0c
void entry_00148cb4_0x148cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148cb4_0x148cb4");
#endif

    switch (ctx->pc) {
        case 0x148cfcu: goto label_148cfc;
        case 0x148d04u: goto label_148d04;
        default: break;
    }

    ctx->pc = 0x148cb4u;

    // 0x148cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148cb8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x148cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148cbc: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x148cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x148cc0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x148cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x148cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148cc8: 0x0  nop
    ctx->pc = 0x148cc8u;
    // NOP
    // 0x148ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148cd0: 0x0  nop
    ctx->pc = 0x148cd0u;
    // NOP
    // 0x148cd4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x148CD4u;
    {
        const bool branch_taken_0x148cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148cd4) {
            ctx->pc = 0x148D0Cu;
            return;
        }
    }
    ctx->pc = 0x148CDCu;
    // 0x148cdc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ce4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148ce8: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x148ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x148cec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148cf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148cf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148CF4u;
    SET_GPR_U32(ctx, 31, 0x148CFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148CF4u, 0x148CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CFCu;
label_148cfc:
    // 0x148cfc: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x148CFCu;
    SET_GPR_U32(ctx, 31, 0x148D04u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x148CFCu, 0x148D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D04u;
label_148d04:
    // 0x148d04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x148D04u;
    {
        const bool branch_taken_0x148d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d04) {
            ctx->pc = 0x148D50u;
            return;
        }
    }
    ctx->pc = 0x148D0Cu;
}
