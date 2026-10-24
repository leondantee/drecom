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

// Function: entry_002cff04
// Address: 0x2cff04 - 0x2cffc0
void entry_002cff04_0x2cff04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cff04_0x2cff04");
#endif

    switch (ctx->pc) {
        case 0x2cff0cu: goto label_2cff0c;
        case 0x2cff90u: goto label_2cff90;
        default: break;
    }

    ctx->pc = 0x2cff04u;

    // 0x2cff04: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2CFF04u;
    SET_GPR_U32(ctx, 31, 0x2CFF0Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CFF04u, 0x2CFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF0Cu;
label_2cff0c:
    // 0x2cff0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cff10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cff10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cff14: 0x0  nop
    ctx->pc = 0x2cff14u;
    // NOP
    // 0x2cff18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cff18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cff1c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cff20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cff20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cff24: 0x0  nop
    ctx->pc = 0x2cff24u;
    // NOP
    // 0x2cff28: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cff28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cff2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cff30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cff30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cff34: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cff38: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cff3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cff44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cff48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cff4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cff50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cff54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cff58: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cff5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cff64: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cff68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cff70: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2cff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cff78: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2cff78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff7c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2cff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cff80: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2cff80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cff84: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2cff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cff88: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2CFF88u;
    SET_GPR_U32(ctx, 31, 0x2CFF90u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CFF88u, 0x2CFF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF90u;
label_2cff90:
    // 0x2cff90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cff94: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2cff94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cff98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFF98u;
    {
        const bool branch_taken_0x2cff98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff98) {
            ctx->pc = 0x2CFFC0u;
            return;
        }
    }
    ctx->pc = 0x2CFFA0u;
    // 0x2cffa0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2cffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cffa4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2cffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2cffa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cffa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cffac: 0x0  nop
    ctx->pc = 0x2cffacu;
    // NOP
    // 0x2cffb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cffb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cffb4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cffb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cffb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFFB8u;
    {
        const bool branch_taken_0x2cffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cffb8) {
            ctx->pc = 0x2CFFD8u;
            return;
        }
    }
    ctx->pc = 0x2CFFC0u;
}
