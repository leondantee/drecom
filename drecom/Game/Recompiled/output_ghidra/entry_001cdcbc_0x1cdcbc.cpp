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

// Function: entry_001cdcbc
// Address: 0x1cdcbc - 0x1cdd50
void entry_001cdcbc_0x1cdcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdcbc_0x1cdcbc");
#endif

    switch (ctx->pc) {
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd40u: goto label_1cdd40;
        default: break;
    }

    ctx->pc = 0x1cdcbcu;

    // 0x1cdcbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cdcc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cdcc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1cdcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cdccc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1cdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1cdcd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcd4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1cdcd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1cdcd8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1cdcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cdcdc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cdcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cdce0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CDCE0u;
    {
        const bool branch_taken_0x1cdce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdce0) {
            ctx->pc = 0x1CDD7Cu;
            return;
        }
    }
    ctx->pc = 0x1CDCE8u;
    // 0x1cdce8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcec: 0x8c4413e8  lw          $a0, 0x13E8($v0)
    ctx->pc = 0x1cdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1cdcf0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CDCF0u;
    {
        const bool branch_taken_0x1cdcf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcf0) {
            ctx->pc = 0x1CDD50u;
            return;
        }
    }
    ctx->pc = 0x1CDCF8u;
    // 0x1cdcf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd00: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1cdd04: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1cdd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cdd08: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cdd0c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD14u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CDD0Cu, 0x1CDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD14u;
label_1cdd14:
    // 0x1cdd14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd18: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cdd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cdd1c: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1cdd20: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cdd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cdd24: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cdd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdd28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd30: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cdd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdd34: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdd38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CDD38u;
    SET_GPR_U32(ctx, 31, 0x1CDD40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CDD38u, 0x1CDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD40u;
label_1cdd40:
    // 0x1cdd40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cdd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cdd48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CDD48u;
    {
        const bool branch_taken_0x1cdd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd48) {
            ctx->pc = 0x1CDD7Cu;
            return;
        }
    }
    ctx->pc = 0x1CDD50u;
}
