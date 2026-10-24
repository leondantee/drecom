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

// Function: caseD_0
// Address: 0x2dfa50 - 0x2dfac8
void caseD_0_0x2dfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2dfa50");
#endif

    switch (ctx->pc) {
        case 0x2dfa70u: goto label_2dfa70;
        case 0x2dfa80u: goto label_2dfa80;
        default: break;
    }

    ctx->pc = 0x2dfa50u;

    // 0x2dfa50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfa54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfa58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dfa5c: 0x24060a30  addiu       $a2, $zero, 0xA30
    ctx->pc = 0x2dfa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2608));
    // 0x2dfa60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dfa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfa64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dfa64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dfa68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DFA68u;
    SET_GPR_U32(ctx, 31, 0x2DFA70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DFA68u, 0x2DFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA70u;
label_2dfa70:
    // 0x2dfa70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfa74: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dfa78: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x2DFA78u;
    SET_GPR_U32(ctx, 31, 0x2DFA80u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x2DFA78u, 0x2DFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA80u;
label_2dfa80:
    // 0x2dfa80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfa84: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2dfa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfa88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfa88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dfa8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dfa90: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2dfa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfa94: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2dfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2dfa98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2dfa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2dfa9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfaa0: 0x0  nop
    ctx->pc = 0x2dfaa0u;
    // NOP
    // 0x2dfaa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfaa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfaa8: 0x0  nop
    ctx->pc = 0x2dfaa8u;
    // NOP
    // 0x2dfaac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFAACu;
    {
        const bool branch_taken_0x2dfaac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfaac) {
            ctx->pc = 0x2DFAC8u;
            return;
        }
    }
    ctx->pc = 0x2DFAB4u;
    // 0x2dfab4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2dfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2dfab8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2dfab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2dfabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfac0: 0x0  nop
    ctx->pc = 0x2dfac0u;
    // NOP
    // 0x2dfac4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x2dfac8u;
}
