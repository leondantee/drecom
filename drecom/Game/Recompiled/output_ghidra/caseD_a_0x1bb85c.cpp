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

// Function: caseD_a
// Address: 0x1bb85c - 0x1bb8ac
void caseD_a_0x1bb85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1bb85c");
#endif

    switch (ctx->pc) {
        case 0x1bb87cu: goto label_1bb87c;
        default: break;
    }

    ctx->pc = 0x1bb85cu;

    // 0x1bb85c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb860: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb864: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bb864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bb868: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x1bb868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1bb86c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb870: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bb874: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BB874u;
    SET_GPR_U32(ctx, 31, 0x1BB87Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB874u, 0x1BB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB87Cu;
label_1bb87c:
    // 0x1bb87c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb880: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1bb880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb884: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1bb884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x1bb888: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1bb888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1bb88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb890: 0x0  nop
    ctx->pc = 0x1bb890u;
    // NOP
    // 0x1bb894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb898: 0x0  nop
    ctx->pc = 0x1bb898u;
    // NOP
    // 0x1bb89c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB89Cu;
    {
        const bool branch_taken_0x1bb89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb89c) {
            ctx->pc = 0x1BB8ACu;
            return;
        }
    }
    ctx->pc = 0x1BB8A4u;
    // 0x1bb8a4: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1BB8A4u;
    SET_GPR_U32(ctx, 31, 0x1BB8ACu);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BB8A4u, 0x1BB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8ACu;
}
