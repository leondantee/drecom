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

// Function: entry_0012b0a0
// Address: 0x12b0a0 - 0x12b13c
void entry_0012b0a0_0x12b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b0a0_0x12b0a0");
#endif

    switch (ctx->pc) {
        case 0x12b0d4u: goto label_12b0d4;
        case 0x12b0ecu: goto label_12b0ec;
        case 0x12b118u: goto label_12b118;
        case 0x12b134u: goto label_12b134;
        default: break;
    }

    ctx->pc = 0x12b0a0u;

    // 0x12b0a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12b0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12b0a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b0ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12b0b0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12B0B0u;
    {
        const bool branch_taken_0x12b0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b0b0) {
            ctx->pc = 0x12B13Cu;
            return;
        }
    }
    ctx->pc = 0x12B0B8u;
    // 0x12b0b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0c0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b0c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12b0c8: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x12b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12b0cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12B0CCu;
    SET_GPR_U32(ctx, 31, 0x12B0D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12B0CCu, 0x12B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0D4u;
label_12b0d4:
    // 0x12b0d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0dc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b0e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b0e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x12B0E4u;
    SET_GPR_U32(ctx, 31, 0x12B0ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x12B0E4u, 0x12B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0ECu;
label_12b0ec:
    // 0x12b0ec: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12b0f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b0f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12b0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12b0f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b0fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b100: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b104: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12b108: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b10c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x12b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x12b110: 0xc05c848  jal         func_172120
    ctx->pc = 0x12B110u;
    SET_GPR_U32(ctx, 31, 0x12B118u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12B110u, 0x12B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B118u;
label_12b118:
    // 0x12b118: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x12b118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x12b11c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b120: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b124: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x12b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b128: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12b128u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b12c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12B12Cu;
    SET_GPR_U32(ctx, 31, 0x12B134u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12B12Cu, 0x12B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B134u;
label_12b134:
    // 0x12b134: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b138: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x12b13cu;
}
