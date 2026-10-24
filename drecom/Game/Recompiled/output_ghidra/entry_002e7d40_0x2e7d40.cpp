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

// Function: entry_002e7d40
// Address: 0x2e7d40 - 0x2e7dc0
void entry_002e7d40_0x2e7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7d40_0x2e7d40");
#endif

    switch (ctx->pc) {
        case 0x2e7d4cu: goto label_2e7d4c;
        case 0x2e7d7cu: goto label_2e7d7c;
        case 0x2e7d84u: goto label_2e7d84;
        default: break;
    }

    ctx->pc = 0x2e7d40u;

    // 0x2e7d40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7d44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E7D44u;
    SET_GPR_U32(ctx, 31, 0x2E7D4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E7D44u, 0x2E7D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D4Cu;
label_2e7d4c:
    // 0x2e7d4c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7d50: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e7d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7d58: 0x0  nop
    ctx->pc = 0x2e7d58u;
    // NOP
    // 0x2e7d5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7d60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e7d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e7d64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e7d68: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7d6c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e7d70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e7d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7d74: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E7D74u;
    SET_GPR_U32(ctx, 31, 0x2E7D7Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E7D74u, 0x2E7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D7Cu;
label_2e7d7c:
    // 0x2e7d7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7D7Cu, 0x2E7D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D84u;
label_2e7d84:
    // 0x2e7d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7d88: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e7d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e7d8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7d90: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E7D90u;
    {
        const bool branch_taken_0x2e7d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7d90) {
            ctx->pc = 0x2E7E20u;
            return;
        }
    }
    ctx->pc = 0x2E7D98u;
    // 0x2e7d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7d9c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7D9Cu;
    {
        const bool branch_taken_0x2e7d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7d9c) {
            ctx->pc = 0x2E7DFCu;
            return;
        }
    }
    ctx->pc = 0x2E7DA4u;
    // 0x2e7da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7da8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7DA8u;
    {
        const bool branch_taken_0x2e7da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7da8) {
            ctx->pc = 0x2E7DD8u;
            return;
        }
    }
    ctx->pc = 0x2E7DB0u;
    // 0x2e7db0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7DB0u;
    {
        const bool branch_taken_0x2e7db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7db0) {
            ctx->pc = 0x2E7DC0u;
            return;
        }
    }
    ctx->pc = 0x2E7DB8u;
    // 0x2e7db8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7DB8u;
    {
        const bool branch_taken_0x2e7db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7db8) {
            ctx->pc = 0x2E7DC0u;
            return;
        }
    }
    ctx->pc = 0x2E7DC0u;
}
