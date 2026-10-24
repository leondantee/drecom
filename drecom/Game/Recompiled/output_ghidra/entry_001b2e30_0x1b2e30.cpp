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

// Function: entry_001b2e30
// Address: 0x1b2e30 - 0x1b2ec0
void entry_001b2e30_0x1b2e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2e30_0x1b2e30");
#endif

    switch (ctx->pc) {
        case 0x1b2e5cu: goto label_1b2e5c;
        case 0x1b2e80u: goto label_1b2e80;
        case 0x1b2e9cu: goto label_1b2e9c;
        case 0x1b2eb4u: goto label_1b2eb4;
        default: break;
    }

    ctx->pc = 0x1b2e30u;

    // 0x1b2e30: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b2e34: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b2e38: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1b2e3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B2E3Cu;
    {
        const bool branch_taken_0x1b2e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e3c) {
            ctx->pc = 0x1B2E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B2E44u;
    // 0x1b2e44: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2e4c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1b2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2e50: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x1b2e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e54: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2E54u;
    SET_GPR_U32(ctx, 31, 0x1B2E5Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2E54u, 0x1B2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E5Cu;
label_1b2e5c:
    // 0x1b2e5c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1b2e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2e60: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1b2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e64: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b2e64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2e68: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b2e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2e6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1b2e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2e74: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b2e74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b2e78: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B2E78u;
    SET_GPR_U32(ctx, 31, 0x1B2E80u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B2E78u, 0x1B2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E80u;
label_1b2e80:
    // 0x1b2e80: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1b2e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1b2e84: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2e8c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1b2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e90: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b2e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2e94: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B2E94u;
    SET_GPR_U32(ctx, 31, 0x1B2E9Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B2E94u, 0x1B2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E9Cu;
label_1b2e9c:
    // 0x1b2e9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2ea0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2ea4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2ea8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2eac: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B2EACu;
    SET_GPR_U32(ctx, 31, 0x1B2EB4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B2EB4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2EB4u) { return; }
    ctx->pc = 0x1B2EB4u;
label_1b2eb4:
    // 0x1b2eb4: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1b2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1b2eb8: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x1B2EB8u;
    {
        const bool branch_taken_0x1b2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2eb8) {
            ctx->pc = 0x1B34A8u;
            return;
        }
    }
    ctx->pc = 0x1B2EC0u;
}
