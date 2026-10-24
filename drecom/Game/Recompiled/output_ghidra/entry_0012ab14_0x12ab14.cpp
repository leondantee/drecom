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

// Function: entry_0012ab14
// Address: 0x12ab14 - 0x12ab7c
void entry_0012ab14_0x12ab14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ab14_0x12ab14");
#endif

    switch (ctx->pc) {
        case 0x12ab58u: goto label_12ab58;
        case 0x12ab74u: goto label_12ab74;
        default: break;
    }

    ctx->pc = 0x12ab14u;

    // 0x12ab14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab18: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12ab18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12ab1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ab1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ab20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12ab24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12AB24u;
    {
        const bool branch_taken_0x12ab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab24) {
            ctx->pc = 0x12AB7Cu;
            return;
        }
    }
    ctx->pc = 0x12AB2Cu;
    // 0x12ab2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab30: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab38: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12ab3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12ab40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12ab40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12ab44: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12ab48: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x12ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ab4c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x12ab50: 0xc05c848  jal         func_172120
    ctx->pc = 0x12AB50u;
    SET_GPR_U32(ctx, 31, 0x12AB58u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12AB50u, 0x12AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB58u;
label_12ab58:
    // 0x12ab58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x12ab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x12ab5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab60: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ab64: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x12ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ab68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12ab68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ab6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12AB6Cu;
    SET_GPR_U32(ctx, 31, 0x12AB74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12AB6Cu, 0x12AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB74u;
label_12ab74:
    // 0x12ab74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab78: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12ab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x12ab7cu;
}
