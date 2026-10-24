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

// Function: entry_002dbe8c
// Address: 0x2dbe8c - 0x2dbef0
void entry_002dbe8c_0x2dbe8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbe8c_0x2dbe8c");
#endif

    switch (ctx->pc) {
        case 0x2dbebcu: goto label_2dbebc;
        case 0x2dbee8u: goto label_2dbee8;
        default: break;
    }

    ctx->pc = 0x2dbe8cu;

    // 0x2dbe8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe90: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dbe90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dbe94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dbe98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dbe9c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBE9Cu;
    {
        const bool branch_taken_0x2dbe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe9c) {
            ctx->pc = 0x2DBEF0u;
            return;
        }
    }
    ctx->pc = 0x2DBEA4u;
    // 0x2dbea4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbea8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dbea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dbeac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dbeb0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dbeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dbeb4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DBEB4u;
    SET_GPR_U32(ctx, 31, 0x2DBEBCu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DBEB4u, 0x2DBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEBCu;
label_2dbebc:
    // 0x2dbebc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbec0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dbec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dbec4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbecc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dbed0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dbed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dbed4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dbed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dbed8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2dbed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dbedc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2dbedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dbee0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DBEE0u;
    SET_GPR_U32(ctx, 31, 0x2DBEE8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DBEE0u, 0x2DBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEE8u;
label_2dbee8:
    // 0x2dbee8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbeec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dbeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2dbef0u;
}
