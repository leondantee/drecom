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

// Function: entry_001fbe98
// Address: 0x1fbe98 - 0x1fbf50
void entry_001fbe98_0x1fbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbe98_0x1fbe98");
#endif

    switch (ctx->pc) {
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbec4u: goto label_1fbec4;
        case 0x1fbee8u: goto label_1fbee8;
        case 0x1fbf2cu: goto label_1fbf2c;
        default: break;
    }

    ctx->pc = 0x1fbe98u;

    // 0x1fbe98: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBE98u;
    SET_GPR_U32(ctx, 31, 0x1FBEA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBE98u, 0x1FBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEA0u;
label_1fbea0:
    // 0x1fbea0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbea4: 0xc4410280  lwc1        $f1, 0x280($v0)
    ctx->pc = 0x1fbea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbea8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbeb0: 0xc4400270  lwc1        $f0, 0x270($v0)
    ctx->pc = 0x1fbeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbeb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbeb8: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x1fbeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x1fbebc: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBEBCu;
    SET_GPR_U32(ctx, 31, 0x1FBEC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBEBCu, 0x1FBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEC4u;
label_1fbec4:
    // 0x1fbec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbec8: 0xc4410284  lwc1        $f1, 0x284($v0)
    ctx->pc = 0x1fbec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbecc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbeccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbed4: 0xc4400274  lwc1        $f0, 0x274($v0)
    ctx->pc = 0x1fbed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbedc: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x1fbedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1fbee0: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBEE0u;
    SET_GPR_U32(ctx, 31, 0x1FBEE8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBEE0u, 0x1FBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEE8u;
label_1fbee8:
    // 0x1fbee8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbeec: 0xc4410288  lwc1        $f1, 0x288($v0)
    ctx->pc = 0x1fbeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbef4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbef8: 0xc4400278  lwc1        $f0, 0x278($v0)
    ctx->pc = 0x1fbef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbf00: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x1fbf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1fbf04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf08: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbf08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbf0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbf10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fbf14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf18: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fbf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbf1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbf20: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fbf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf24: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FBF24u;
    SET_GPR_U32(ctx, 31, 0x1FBF2Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FBF24u, 0x1FBF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF2Cu;
label_1fbf2c:
    // 0x1fbf2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf30: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbf34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBF34u;
    {
        const bool branch_taken_0x1fbf34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fbf34) {
            ctx->pc = 0x1FBF50u;
            return;
        }
    }
    ctx->pc = 0x1FBF3Cu;
    // 0x1fbf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbf40: 0x0  nop
    ctx->pc = 0x1fbf40u;
    // NOP
    // 0x1fbf44: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fbf44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fbf48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBF48u;
    {
        const bool branch_taken_0x1fbf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf48) {
            ctx->pc = 0x1FBF6Cu;
            return;
        }
    }
    ctx->pc = 0x1FBF50u;
}
