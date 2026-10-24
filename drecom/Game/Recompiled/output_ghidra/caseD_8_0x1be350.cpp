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

// Function: caseD_8
// Address: 0x1be350 - 0x1be3a4
void caseD_8_0x1be350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1be350");
#endif

    switch (ctx->pc) {
        case 0x1be374u: goto label_1be374;
        default: break;
    }

    ctx->pc = 0x1be350u;

    // 0x1be350: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be354: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be358: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1be35c: 0x24120099  addiu       $s2, $zero, 0x99
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1be360: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1be360u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1be364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be368: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be36c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE36Cu;
    SET_GPR_U32(ctx, 31, 0x1BE374u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE36Cu, 0x1BE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE374u;
label_1be374:
    // 0x1be374: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be378: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1be378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be37c: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1be37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x1be380: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x1be380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1be384: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1be384u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be388: 0x0  nop
    ctx->pc = 0x1be388u;
    // NOP
    // 0x1be38c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be390: 0x0  nop
    ctx->pc = 0x1be390u;
    // NOP
    // 0x1be394: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE394u;
    {
        const bool branch_taken_0x1be394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be394) {
            ctx->pc = 0x1BE3A4u;
            return;
        }
    }
    ctx->pc = 0x1BE39Cu;
    // 0x1be39c: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1BE39Cu;
    SET_GPR_U32(ctx, 31, 0x1BE3A4u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1BE39Cu, 0x1BE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3A4u;
}
