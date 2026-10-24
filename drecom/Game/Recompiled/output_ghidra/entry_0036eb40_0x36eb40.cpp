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

// Function: entry_0036eb40
// Address: 0x36eb40 - 0x36ebf4
void entry_0036eb40_0x36eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036eb40_0x36eb40");
#endif

    switch (ctx->pc) {
        case 0x36eb8cu: goto label_36eb8c;
        case 0x36ebc0u: goto label_36ebc0;
        default: break;
    }

    ctx->pc = 0x36eb40u;

    // 0x36eb40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb44: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36eb44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36eb48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36eb4c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36eb50: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x36EB50u;
    {
        const bool branch_taken_0x36eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eb50) {
            ctx->pc = 0x36EBF4u;
            return;
        }
    }
    ctx->pc = 0x36EB58u;
    // 0x36eb58: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x36eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x36eb5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36eb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eb60: 0x0  nop
    ctx->pc = 0x36eb60u;
    // NOP
    // 0x36eb64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36eb68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36eb70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb74: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36eb78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36eb7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36eb80: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36eb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36eb84: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EB84u;
    SET_GPR_U32(ctx, 31, 0x36EB8Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EB84u, 0x36EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB8Cu;
label_36eb8c:
    // 0x36eb8c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x36eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x36eb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36eb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eb94: 0x0  nop
    ctx->pc = 0x36eb94u;
    // NOP
    // 0x36eb98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36eb9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eba0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36eba4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eba8: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36ebac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ebb0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36ebb4: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36ebb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36ebb8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EBB8u;
    SET_GPR_U32(ctx, 31, 0x36EBC0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EBB8u, 0x36EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EBC0u;
label_36ebc0:
    // 0x36ebc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36ebc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ebc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ebc8: 0x0  nop
    ctx->pc = 0x36ebc8u;
    // NOP
    // 0x36ebcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ebd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ebd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ebd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ebdc: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36ebe0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ebe4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36ebe8: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36ebe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36ebec: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EBECu;
    SET_GPR_U32(ctx, 31, 0x36EBF4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EBECu, 0x36EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EBF4u;
}
