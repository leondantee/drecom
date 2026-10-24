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

// Function: entry_002e0c64
// Address: 0x2e0c64 - 0x2e0cc8
void entry_002e0c64_0x2e0c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0c64_0x2e0c64");
#endif

    switch (ctx->pc) {
        case 0x2e0c94u: goto label_2e0c94;
        case 0x2e0cc0u: goto label_2e0cc0;
        default: break;
    }

    ctx->pc = 0x2e0c64u;

    // 0x2e0c64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c68: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e0c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e0c6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0c70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e0c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e0c74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0C74u;
    {
        const bool branch_taken_0x2e0c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c74) {
            ctx->pc = 0x2E0CC8u;
            return;
        }
    }
    ctx->pc = 0x2E0C7Cu;
    // 0x2e0c7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c80: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e0c84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e0c88: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2e0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2e0c8c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2E0C8Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C94u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2E0C8Cu, 0x2E0C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C94u;
label_2e0c94:
    // 0x2e0c94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0c98: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e0c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e0c9c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e0ca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0ca4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e0ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0ca8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cb0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2e0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0cb4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e0cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0cb8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E0CB8u;
    SET_GPR_U32(ctx, 31, 0x2E0CC0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E0CB8u, 0x2E0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0CC0u;
label_2e0cc0:
    // 0x2e0cc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0cc4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2e0cc8u;
}
