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

// Function: entry_002dc700
// Address: 0x2dc700 - 0x2dc764
void entry_002dc700_0x2dc700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc700_0x2dc700");
#endif

    switch (ctx->pc) {
        case 0x2dc730u: goto label_2dc730;
        case 0x2dc75cu: goto label_2dc75c;
        default: break;
    }

    ctx->pc = 0x2dc700u;

    // 0x2dc700: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dc700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc704: 0x90c709db  lbu         $a3, 0x9DB($a2)
    ctx->pc = 0x2dc704u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2523)));
    // 0x2dc708: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2dc708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2dc70c: 0x31020020  andi        $v0, $t0, 0x20
    ctx->pc = 0x2dc70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x2dc710: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC710u;
    {
        const bool branch_taken_0x2dc710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc710) {
            ctx->pc = 0x2DC764u;
            return;
        }
    }
    ctx->pc = 0x2DC718u;
    // 0x2dc718: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc71c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dc71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2dc720: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dc720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dc724: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dc724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dc728: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DC728u;
    SET_GPR_U32(ctx, 31, 0x2DC730u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DC728u, 0x2DC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC730u;
label_2dc730:
    // 0x2dc730: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc734: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dc734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dc738: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dc738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dc73c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x2dc73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc740: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dc740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc744: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc748: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2dc748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc74c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2dc74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc750: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x2dc750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc754: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DC754u;
    SET_GPR_U32(ctx, 31, 0x2DC75Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DC754u, 0x2DC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC75Cu;
label_2dc75c:
    // 0x2dc75c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2dc75cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc760: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x2dc760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
    ctx->pc = 0x2dc764u;
}
