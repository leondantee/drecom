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

// Function: entry_00297f54
// Address: 0x297f54 - 0x297fa0
void entry_00297f54_0x297f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297f54_0x297f54");
#endif

    switch (ctx->pc) {
        case 0x297f9cu: goto label_297f9c;
        default: break;
    }

    ctx->pc = 0x297f54u;

    // 0x297f54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297f58: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x297f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x297f5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297f64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x297f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297f68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x297f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x297f6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x297f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297f74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x297f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f78: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x297f78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297f7c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x297f80: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297f84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297f88: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x297f88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x297f8c: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x297f8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x297f90: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x297f90u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297f94: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x297F94u;
    SET_GPR_U32(ctx, 31, 0x297F9Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x297F94u, 0x297F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F9Cu;
label_297f9c:
    // 0x297f9c: 0x0  nop
    ctx->pc = 0x297f9cu;
    // NOP
    ctx->pc = 0x297fa0u;
}
