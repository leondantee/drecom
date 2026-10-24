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

// Function: entry_002e67a4
// Address: 0x2e67a4 - 0x2e6808
void entry_002e67a4_0x2e67a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e67a4_0x2e67a4");
#endif

    switch (ctx->pc) {
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67dcu: goto label_2e67dc;
        default: break;
    }

    ctx->pc = 0x2e67a4u;

    // 0x2e67a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e67acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e67b0: 0x2406050b  addiu       $a2, $zero, 0x50B
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x2e67b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e67b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e67b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e67b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e67bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E67BCu;
    SET_GPR_U32(ctx, 31, 0x2E67C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E67BCu, 0x2E67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67C4u;
label_2e67c4:
    // 0x2e67c4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2e67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2e67c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e67c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e67cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67d0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e67d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e67d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E67D4u;
    SET_GPR_U32(ctx, 31, 0x2E67DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E67D4u, 0x2E67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67DCu;
label_2e67dc:
    // 0x2e67dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e67e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e67e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e67e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E67E4u;
    {
        const bool branch_taken_0x2e67e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e67e4) {
            ctx->pc = 0x2E6808u;
            return;
        }
    }
    ctx->pc = 0x2E67ECu;
    // 0x2e67ec: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e67f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e67f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e67f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e67f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e67f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67fc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e6800: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6800u;
    {
        const bool branch_taken_0x2e6800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6800) {
            ctx->pc = 0x2E681Cu;
            return;
        }
    }
    ctx->pc = 0x2E6808u;
}
