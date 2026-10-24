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

// Function: entry_0012ae90
// Address: 0x12ae90 - 0x12aef8
void entry_0012ae90_0x12ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae90_0x12ae90");
#endif

    switch (ctx->pc) {
        case 0x12aed4u: goto label_12aed4;
        case 0x12aef0u: goto label_12aef0;
        default: break;
    }

    ctx->pc = 0x12ae90u;

    // 0x12ae90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae94: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12ae94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12ae98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ae9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12aea0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12AEA0u;
    {
        const bool branch_taken_0x12aea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aea0) {
            ctx->pc = 0x12AEF8u;
            return;
        }
    }
    ctx->pc = 0x12AEA8u;
    // 0x12aea8: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12aeac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12aeb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12aeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12aeb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aeb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aec0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12aec4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12aec8: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x12aecc: 0xc05c848  jal         func_172120
    ctx->pc = 0x12AECCu;
    SET_GPR_U32(ctx, 31, 0x12AED4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12AECCu, 0x12AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AED4u;
label_12aed4:
    // 0x12aed4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x12aed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x12aed8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aedc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12aee0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x12aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12aee4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12aee4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12aee8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12AEE8u;
    SET_GPR_U32(ctx, 31, 0x12AEF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12AEE8u, 0x12AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEF0u;
label_12aef0:
    // 0x12aef0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12aef4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12aef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x12aef8u;
}
