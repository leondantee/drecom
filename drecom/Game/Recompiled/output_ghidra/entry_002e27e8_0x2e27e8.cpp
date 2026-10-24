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

// Function: entry_002e27e8
// Address: 0x2e27e8 - 0x2e2868
void entry_002e27e8_0x2e27e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e27e8_0x2e27e8");
#endif

    switch (ctx->pc) {
        case 0x2e27f4u: goto label_2e27f4;
        case 0x2e2824u: goto label_2e2824;
        case 0x2e282cu: goto label_2e282c;
        default: break;
    }

    ctx->pc = 0x2e27e8u;

    // 0x2e27e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e27ec: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E27ECu;
    SET_GPR_U32(ctx, 31, 0x2E27F4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E27ECu, 0x2E27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27F4u;
label_2e27f4:
    // 0x2e27f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e27f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e27fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2800: 0x0  nop
    ctx->pc = 0x2e2800u;
    // NOP
    // 0x2e2804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2808: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e2808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e280c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e2810: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e2814: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e2814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e2818: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e2818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e281c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E281Cu;
    SET_GPR_U32(ctx, 31, 0x2E2824u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E281Cu, 0x2E2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2824u;
label_2e2824:
    // 0x2e2824: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E2824u;
    SET_GPR_U32(ctx, 31, 0x2E282Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E2824u, 0x2E282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E282Cu;
label_2e282c:
    // 0x2e282c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2830: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e2830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e2834: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2838: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2838u;
    {
        const bool branch_taken_0x2e2838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2838) {
            ctx->pc = 0x2E28C8u;
            return;
        }
    }
    ctx->pc = 0x2E2840u;
    // 0x2e2840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2844: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2844u;
    {
        const bool branch_taken_0x2e2844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2844) {
            ctx->pc = 0x2E28A4u;
            return;
        }
    }
    ctx->pc = 0x2E284Cu;
    // 0x2e284c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2850: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2850u;
    {
        const bool branch_taken_0x2e2850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2850) {
            ctx->pc = 0x2E2880u;
            return;
        }
    }
    ctx->pc = 0x2E2858u;
    // 0x2e2858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2858u;
    {
        const bool branch_taken_0x2e2858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2858) {
            ctx->pc = 0x2E2868u;
            return;
        }
    }
    ctx->pc = 0x2E2860u;
    // 0x2e2860: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2860u;
    {
        const bool branch_taken_0x2e2860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2860) {
            ctx->pc = 0x2E2868u;
            return;
        }
    }
    ctx->pc = 0x2E2868u;
}
