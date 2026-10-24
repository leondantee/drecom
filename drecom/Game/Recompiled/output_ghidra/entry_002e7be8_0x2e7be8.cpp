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

// Function: entry_002e7be8
// Address: 0x2e7be8 - 0x2e7c68
void entry_002e7be8_0x2e7be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7be8_0x2e7be8");
#endif

    switch (ctx->pc) {
        case 0x2e7bf4u: goto label_2e7bf4;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c2cu: goto label_2e7c2c;
        default: break;
    }

    ctx->pc = 0x2e7be8u;

    // 0x2e7be8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7bec: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E7BECu;
    SET_GPR_U32(ctx, 31, 0x2E7BF4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E7BECu, 0x2E7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BF4u;
label_2e7bf4:
    // 0x2e7bf4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e7bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7bf8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e7bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7c00: 0x0  nop
    ctx->pc = 0x2e7c00u;
    // NOP
    // 0x2e7c04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7c08: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e7c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e7c0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e7c10: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7c14: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e7c18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e7c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7c1c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C24u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E7C1Cu, 0x2E7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C24u;
label_2e7c24:
    // 0x2e7c24: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7C24u;
    SET_GPR_U32(ctx, 31, 0x2E7C2Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7C24u, 0x2E7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C2Cu;
label_2e7c2c:
    // 0x2e7c2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7c30: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e7c34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7c38: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E7C38u;
    {
        const bool branch_taken_0x2e7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c38) {
            ctx->pc = 0x2E7CC8u;
            return;
        }
    }
    ctx->pc = 0x2E7C40u;
    // 0x2e7c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7c44: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7C44u;
    {
        const bool branch_taken_0x2e7c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c44) {
            ctx->pc = 0x2E7CA4u;
            return;
        }
    }
    ctx->pc = 0x2E7C4Cu;
    // 0x2e7c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7c50: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7C50u;
    {
        const bool branch_taken_0x2e7c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c50) {
            ctx->pc = 0x2E7C80u;
            return;
        }
    }
    ctx->pc = 0x2E7C58u;
    // 0x2e7c58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7C58u;
    {
        const bool branch_taken_0x2e7c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c58) {
            ctx->pc = 0x2E7C68u;
            return;
        }
    }
    ctx->pc = 0x2E7C60u;
    // 0x2e7c60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7C60u;
    {
        const bool branch_taken_0x2e7c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c60) {
            ctx->pc = 0x2E7C68u;
            return;
        }
    }
    ctx->pc = 0x2E7C68u;
}
