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

// Function: entry_002e2940
// Address: 0x2e2940 - 0x2e29c0
void entry_002e2940_0x2e2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2940_0x2e2940");
#endif

    switch (ctx->pc) {
        case 0x2e294cu: goto label_2e294c;
        case 0x2e297cu: goto label_2e297c;
        case 0x2e2984u: goto label_2e2984;
        default: break;
    }

    ctx->pc = 0x2e2940u;

    // 0x2e2940: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e2944: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E2944u;
    SET_GPR_U32(ctx, 31, 0x2E294Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E2944u, 0x2E294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E294Cu;
label_2e294c:
    // 0x2e294c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2950: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e2950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e2954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2958: 0x0  nop
    ctx->pc = 0x2e2958u;
    // NOP
    // 0x2e295c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e295cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e2960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e2964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e2964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e2968: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e2968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e296c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e2970: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e2970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e2974: 0xc05db20  jal         func_176C80
    ctx->pc = 0x2E2974u;
    SET_GPR_U32(ctx, 31, 0x2E297Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x2E2974u, 0x2E297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E297Cu;
label_2e297c:
    // 0x2e297c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E297Cu;
    SET_GPR_U32(ctx, 31, 0x2E2984u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E297Cu, 0x2E2984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2984u;
label_2e2984:
    // 0x2e2984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e2984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2988: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e2988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e298c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2990: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E2990u;
    {
        const bool branch_taken_0x2e2990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2990) {
            ctx->pc = 0x2E2A20u;
            return;
        }
    }
    ctx->pc = 0x2E2998u;
    // 0x2e2998: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e299c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E299Cu;
    {
        const bool branch_taken_0x2e299c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e299c) {
            ctx->pc = 0x2E29FCu;
            return;
        }
    }
    ctx->pc = 0x2E29A4u;
    // 0x2e29a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e29a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E29A8u;
    {
        const bool branch_taken_0x2e29a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e29a8) {
            ctx->pc = 0x2E29D8u;
            return;
        }
    }
    ctx->pc = 0x2E29B0u;
    // 0x2e29b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E29B0u;
    {
        const bool branch_taken_0x2e29b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29b0) {
            ctx->pc = 0x2E29C0u;
            return;
        }
    }
    ctx->pc = 0x2E29B8u;
    // 0x2e29b8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E29B8u;
    {
        const bool branch_taken_0x2e29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29b8) {
            ctx->pc = 0x2E29C0u;
            return;
        }
    }
    ctx->pc = 0x2E29C0u;
}
