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

// Function: entry_0036e980
// Address: 0x36e980 - 0x36ea34
void entry_0036e980_0x36e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e980_0x36e980");
#endif

    switch (ctx->pc) {
        case 0x36e9ccu: goto label_36e9cc;
        case 0x36ea00u: goto label_36ea00;
        default: break;
    }

    ctx->pc = 0x36e980u;

    // 0x36e980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e984: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36e984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36e988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36e98c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36e990: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x36E990u;
    {
        const bool branch_taken_0x36e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e990) {
            ctx->pc = 0x36EA34u;
            return;
        }
    }
    ctx->pc = 0x36E998u;
    // 0x36e998: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x36e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x36e99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36e99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e9a0: 0x0  nop
    ctx->pc = 0x36e9a0u;
    // NOP
    // 0x36e9a4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e9a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9ac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36e9b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9b4: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36e9b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36e9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e9bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36e9c0: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36e9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36e9c4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36E9C4u;
    SET_GPR_U32(ctx, 31, 0x36E9CCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36E9C4u, 0x36E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9CCu;
label_36e9cc:
    // 0x36e9cc: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x36e9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36e9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e9d4: 0x0  nop
    ctx->pc = 0x36e9d4u;
    // NOP
    // 0x36e9d8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36e9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36e9dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36e9e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e9e8: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36e9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36e9ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36e9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e9f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36e9f4: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36e9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36e9f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36E9F8u;
    SET_GPR_U32(ctx, 31, 0x36EA00u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36E9F8u, 0x36EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA00u;
label_36ea00:
    // 0x36ea00: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36ea04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ea04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ea08: 0x0  nop
    ctx->pc = 0x36ea08u;
    // NOP
    // 0x36ea0c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ea10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ea18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea1c: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36ea20: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ea20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ea24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36ea28: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36ea28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36ea2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EA2Cu;
    SET_GPR_U32(ctx, 31, 0x36EA34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EA2Cu, 0x36EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA34u;
}
