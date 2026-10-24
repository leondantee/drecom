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

// Function: entry_002cfe70
// Address: 0x2cfe70 - 0x2cff04
void entry_002cfe70_0x2cfe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cfe70_0x2cfe70");
#endif

    switch (ctx->pc) {
        case 0x2cfe78u: goto label_2cfe78;
        case 0x2cfefcu: goto label_2cfefc;
        default: break;
    }

    ctx->pc = 0x2cfe70u;

    // 0x2cfe70: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2CFE70u;
    SET_GPR_U32(ctx, 31, 0x2CFE78u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CFE70u, 0x2CFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE78u;
label_2cfe78:
    // 0x2cfe78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cfe7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cfe7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfe80: 0x0  nop
    ctx->pc = 0x2cfe80u;
    // NOP
    // 0x2cfe84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfe84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cfe8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe90: 0x0  nop
    ctx->pc = 0x2cfe90u;
    // NOP
    // 0x2cfe94: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cfe94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cfe98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfe9c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfea0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfea4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfeac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cfeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfeb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cfeb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cfeb4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cfeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cfeb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfebc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfec0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfec4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfed0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2cfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cfed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfed8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cfedc: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2cfedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfee0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2cfee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cfee4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2cfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfee8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2cfee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfeec: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2cfeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfef0: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2cfef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cfef4: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2CFEF4u;
    SET_GPR_U32(ctx, 31, 0x2CFEFCu);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CFEF4u, 0x2CFEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFEFCu;
label_2cfefc:
    // 0x2cfefc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2CFEFCu;
    {
        const bool branch_taken_0x2cfefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfefc) {
            ctx->pc = 0x2D00A0u;
            return;
        }
    }
    ctx->pc = 0x2CFF04u;
}
