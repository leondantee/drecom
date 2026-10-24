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
// Address: 0x1b6920 - 0x1b6978
void caseD_8_0x1b6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1b6920");
#endif

    switch (ctx->pc) {
        case 0x1b6944u: goto label_1b6944;
        default: break;
    }

    ctx->pc = 0x1b6920u;

    // 0x1b6920: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6924: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6928: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b692c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1b6930: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b6930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6934: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6938: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b693c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B693Cu;
    SET_GPR_U32(ctx, 31, 0x1B6944u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B693Cu, 0x1B6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6944u;
label_1b6944:
    // 0x1b6944: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b6944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6948: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b694c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6950: 0x3c04c332  lui         $a0, 0xC332
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49970 << 16));
    // 0x1b6954: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x1b6954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1b6958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b695c: 0x0  nop
    ctx->pc = 0x1b695cu;
    // NOP
    // 0x1b6960: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6964: 0x0  nop
    ctx->pc = 0x1b6964u;
    // NOP
    // 0x1b6968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6968u;
    {
        const bool branch_taken_0x1b6968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6968) {
            ctx->pc = 0x1B6978u;
            return;
        }
    }
    ctx->pc = 0x1B6970u;
    // 0x1b6970: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1B6970u;
    SET_GPR_U32(ctx, 31, 0x1B6978u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1B6970u, 0x1B6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6978u;
}
