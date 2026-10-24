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

// Function: caseD_4
// Address: 0x148388 - 0x1483e0
void caseD_4_0x148388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x148388");
#endif

    switch (ctx->pc) {
        case 0x1483d0u: goto label_1483d0;
        case 0x1483d8u: goto label_1483d8;
        default: break;
    }

    ctx->pc = 0x148388u;

    // 0x148388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14838c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148390: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x148390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x148394: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x148394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x148398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14839c: 0x0  nop
    ctx->pc = 0x14839cu;
    // NOP
    // 0x1483a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1483a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1483a4: 0x0  nop
    ctx->pc = 0x1483a4u;
    // NOP
    // 0x1483a8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1483A8u;
    {
        const bool branch_taken_0x1483a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1483a8) {
            ctx->pc = 0x1483E0u;
            return;
        }
    }
    ctx->pc = 0x1483B0u;
    // 0x1483b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1483b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1483b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1483b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1483bc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1483bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1483c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1483c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1483c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1483c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1483c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1483C8u;
    SET_GPR_U32(ctx, 31, 0x1483D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1483C8u, 0x1483D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D0u;
label_1483d0:
    // 0x1483d0: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1483D0u;
    SET_GPR_U32(ctx, 31, 0x1483D8u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1483D0u, 0x1483D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D8u;
label_1483d8:
    // 0x1483d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1483D8u;
    {
        const bool branch_taken_0x1483d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1483d8) {
            ctx->pc = 0x148424u;
            return;
        }
    }
    ctx->pc = 0x1483E0u;
}
