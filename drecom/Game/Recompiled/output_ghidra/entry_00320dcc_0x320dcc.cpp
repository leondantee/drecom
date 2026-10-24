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

// Function: entry_00320dcc
// Address: 0x320dcc - 0x320e88
void entry_00320dcc_0x320dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320dcc_0x320dcc");
#endif

    switch (ctx->pc) {
        case 0x320dd4u: goto label_320dd4;
        case 0x320e10u: goto label_320e10;
        case 0x320e4cu: goto label_320e4c;
        default: break;
    }

    ctx->pc = 0x320dccu;

    // 0x320dcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x320DCCu;
    SET_GPR_U32(ctx, 31, 0x320DD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x320DCCu, 0x320DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DD4u;
label_320dd4:
    // 0x320dd4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x320dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x320dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320ddc: 0x0  nop
    ctx->pc = 0x320ddcu;
    // NOP
    // 0x320de0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320de4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320de8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320dec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x320df0: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x320df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x320df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x320df8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e04: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x320e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x320e08: 0xc067648  jal         func_19D920
    ctx->pc = 0x320E08u;
    SET_GPR_U32(ctx, 31, 0x320E10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x320E08u, 0x320E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E10u;
label_320e10:
    // 0x320e10: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x320e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x320e14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320e18: 0x0  nop
    ctx->pc = 0x320e18u;
    // NOP
    // 0x320e1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320e1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320e20: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e28: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x320e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e2c: 0xc4a00484  lwc1        $f0, 0x484($a1)
    ctx->pc = 0x320e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320e30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x320e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x320e34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e40: 0xe4600484  swc1        $f0, 0x484($v1)
    ctx->pc = 0x320e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1156), bits); }
    // 0x320e44: 0xc067648  jal         func_19D920
    ctx->pc = 0x320E44u;
    SET_GPR_U32(ctx, 31, 0x320E4Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x320E44u, 0x320E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E4Cu;
label_320e4c:
    // 0x320e4c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x320e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x320e50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320e54: 0x0  nop
    ctx->pc = 0x320e54u;
    // NOP
    // 0x320e58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320e58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320e5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e68: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x320e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x320e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x320e70: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320e74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320e78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x320e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320e7c: 0xe4800488  swc1        $f0, 0x488($a0)
    ctx->pc = 0x320e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1160), bits); }
    // 0x320e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320e84: 0x0  nop
    ctx->pc = 0x320e84u;
    // NOP
    ctx->pc = 0x320e88u;
}
