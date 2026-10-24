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

// Function: entry_002dc1b0
// Address: 0x2dc1b0 - 0x2dc214
void entry_002dc1b0_0x2dc1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc1b0_0x2dc1b0");
#endif

    switch (ctx->pc) {
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc20cu: goto label_2dc20c;
        default: break;
    }

    ctx->pc = 0x2dc1b0u;

    // 0x2dc1b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1b4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dc1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dc1b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dc1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc1bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dc1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dc1c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC1C0u;
    {
        const bool branch_taken_0x2dc1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc1c0) {
            ctx->pc = 0x2DC214u;
            return;
        }
    }
    ctx->pc = 0x2DC1C8u;
    // 0x2dc1c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1cc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dc1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dc1d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dc1d4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dc1d8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DC1D8u;
    SET_GPR_U32(ctx, 31, 0x2DC1E0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DC1D8u, 0x2DC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1E0u;
label_2dc1e0:
    // 0x2dc1e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1e4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dc1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dc1e8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dc1ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc1f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dc1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc1f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc1fc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2dc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc200: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dc200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc204: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DC204u;
    SET_GPR_U32(ctx, 31, 0x2DC20Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DC204u, 0x2DC20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC20Cu;
label_2dc20c:
    // 0x2dc20c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc210: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dc210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2dc214u;
}
