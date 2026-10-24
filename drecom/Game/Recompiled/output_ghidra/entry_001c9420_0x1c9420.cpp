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

// Function: entry_001c9420
// Address: 0x1c9420 - 0x1c9478
void entry_001c9420_0x1c9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9420_0x1c9420");
#endif

    switch (ctx->pc) {
        case 0x1c944cu: goto label_1c944c;
        case 0x1c9470u: goto label_1c9470;
        default: break;
    }

    ctx->pc = 0x1c9420u;

    // 0x1c9420: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9424: 0x8c8213e8  lw          $v0, 0x13E8($a0)
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c9428: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C9428u;
    {
        const bool branch_taken_0x1c9428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9428) {
            ctx->pc = 0x1C9478u;
            return;
        }
    }
    ctx->pc = 0x1C9430u;
    // 0x1c9430: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9434: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9438: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1c943c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1c943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1c9440: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c9440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c9444: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1C9444u;
    SET_GPR_U32(ctx, 31, 0x1C944Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C9444u, 0x1C944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C944Cu;
label_1c944c:
    // 0x1c944c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c944cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c9450: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9454: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x1c9454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
    // 0x1c9458: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1c9458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1c945c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9460: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1c9460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9464: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1c9464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9468: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C9468u;
    SET_GPR_U32(ctx, 31, 0x1C9470u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C9468u, 0x1C9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9470u;
label_1c9470:
    // 0x1c9470: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9474: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x1c9474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    ctx->pc = 0x1c9478u;
}
