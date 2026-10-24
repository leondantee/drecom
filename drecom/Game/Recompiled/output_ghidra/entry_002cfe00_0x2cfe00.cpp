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

// Function: entry_002cfe00
// Address: 0x2cfe00 - 0x2cfe70
void entry_002cfe00_0x2cfe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cfe00_0x2cfe00");
#endif

    switch (ctx->pc) {
        case 0x2cfe18u: goto label_2cfe18;
        default: break;
    }

    ctx->pc = 0x2cfe00u;

    // 0x2cfe00: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cfe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe08: 0x0  nop
    ctx->pc = 0x2cfe08u;
    // NOP
    // 0x2cfe0c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cfe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cfe10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2CFE10u;
    SET_GPR_U32(ctx, 31, 0x2CFE18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CFE10u, 0x2CFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE18u;
label_2cfe18:
    // 0x2cfe18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2cfe1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cfe1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfe20: 0x0  nop
    ctx->pc = 0x2cfe20u;
    // NOP
    // 0x2cfe24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfe24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe28: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2cfe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2cfe2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe30: 0x0  nop
    ctx->pc = 0x2cfe30u;
    // NOP
    // 0x2cfe34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cfe34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cfe38: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cfe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cfe3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfe40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfe44: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfe48: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfe4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfe50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfe54: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cfe58: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFE58u;
    {
        const bool branch_taken_0x2cfe58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfe58) {
            ctx->pc = 0x2CFE70u;
            return;
        }
    }
    ctx->pc = 0x2CFE60u;
    // 0x2cfe60: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x2cfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x2cfe64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe68: 0x0  nop
    ctx->pc = 0x2cfe68u;
    // NOP
    // 0x2cfe6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2cfe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2cfe70u;
}
