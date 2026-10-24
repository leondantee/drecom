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

// Function: entry_001ce2f0
// Address: 0x1ce2f0 - 0x1ce384
void entry_001ce2f0_0x1ce2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce2f0_0x1ce2f0");
#endif

    switch (ctx->pc) {
        case 0x1ce348u: goto label_1ce348;
        case 0x1ce374u: goto label_1ce374;
        default: break;
    }

    ctx->pc = 0x1ce2f0u;

    // 0x1ce2f0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2f4: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ce2f8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1ce2fc: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x1ce2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1ce300: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1ce300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1ce304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce308: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ce308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ce30c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ce30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ce310: 0x30850020  andi        $a1, $a0, 0x20
    ctx->pc = 0x1ce310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1ce314: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CE314u;
    {
        const bool branch_taken_0x1ce314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce314) {
            ctx->pc = 0x1CE3B0u;
            return;
        }
    }
    ctx->pc = 0x1CE31Cu;
    // 0x1ce31c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce320: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1ce320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1ce324: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CE324u;
    {
        const bool branch_taken_0x1ce324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce324) {
            ctx->pc = 0x1CE384u;
            return;
        }
    }
    ctx->pc = 0x1CE32Cu;
    // 0x1ce32c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce334: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1ce334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ce338: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ce33c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ce340: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CE340u;
    SET_GPR_U32(ctx, 31, 0x1CE348u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CE340u, 0x1CE348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE348u;
label_1ce348:
    // 0x1ce348: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce34c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1ce34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1ce350: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce354: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce358: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ce35c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ce35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce360: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1ce360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce364: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1ce364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce368: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1ce368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce36c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CE36Cu;
    SET_GPR_U32(ctx, 31, 0x1CE374u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CE36Cu, 0x1CE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE374u;
label_1ce374:
    // 0x1ce374: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce378: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ce378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ce37c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CE37Cu;
    {
        const bool branch_taken_0x1ce37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce37c) {
            ctx->pc = 0x1CE3B0u;
            return;
        }
    }
    ctx->pc = 0x1CE384u;
}
