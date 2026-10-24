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
// Address: 0x1ba994 - 0x1ba9ec
void caseD_a_0x1ba994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1ba994");
#endif

    switch (ctx->pc) {
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9e8u: goto label_1ba9e8;
        default: break;
    }

    ctx->pc = 0x1ba994u;

    // 0x1ba994: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba99c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ba99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ba9a0: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1ba9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1ba9a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ba9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba9a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ba9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ba9ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BA9ACu;
    SET_GPR_U32(ctx, 31, 0x1BA9B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BA9ACu, 0x1BA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9B4u;
label_1ba9b4:
    // 0x1ba9b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba9b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba9b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba9bc: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1ba9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba9c0: 0x3c05c332  lui         $a1, 0xC332
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49970 << 16));
    // 0x1ba9c4: 0x34a28000  ori         $v0, $a1, 0x8000
    ctx->pc = 0x1ba9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ba9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9cc: 0x0  nop
    ctx->pc = 0x1ba9ccu;
    // NOP
    // 0x1ba9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba9d4: 0x0  nop
    ctx->pc = 0x1ba9d4u;
    // NOP
    // 0x1ba9d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA9D8u;
    {
        const bool branch_taken_0x1ba9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba9d8) {
            ctx->pc = 0x1BA9ECu;
            return;
        }
    }
    ctx->pc = 0x1BA9E0u;
    // 0x1ba9e0: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1BA9E0u;
    SET_GPR_U32(ctx, 31, 0x1BA9E8u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BA9E0u, 0x1BA9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9E8u;
label_1ba9e8:
    // 0x1ba9e8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ba9e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ba9ecu;
}
