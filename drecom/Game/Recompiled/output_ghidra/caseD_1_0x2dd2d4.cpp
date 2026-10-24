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

// Function: caseD_1
// Address: 0x2dd2d4 - 0x2dd340
void caseD_1_0x2dd2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2dd2d4");
#endif

    switch (ctx->pc) {
        case 0x2dd30cu: goto label_2dd30c;
        case 0x2dd338u: goto label_2dd338;
        default: break;
    }

    ctx->pc = 0x2dd2d4u;

    // 0x2dd2d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2d8: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x2dd2d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2dd2dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD2DCu;
    {
        const bool branch_taken_0x2dd2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd2dc) {
            ctx->pc = 0x2DD340u;
            return;
        }
    }
    ctx->pc = 0x2DD2E4u;
    // 0x2dd2e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2e8: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x2dd2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dd2ec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2dd2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dd2f0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dd2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd2f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd2f8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dd2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dd2fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dd300: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dd300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dd304: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DD304u;
    SET_GPR_U32(ctx, 31, 0x2DD30Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DD304u, 0x2DD30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD30Cu;
label_2dd30c:
    // 0x2dd30c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd310: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x2dd310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x2dd314: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x2dd314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
    // 0x2dd318: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x2dd318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2dd31c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dd31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dd320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd324: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd328: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2dd328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd32c: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x2dd32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd330: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DD330u;
    SET_GPR_U32(ctx, 31, 0x2DD338u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DD330u, 0x2DD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD338u;
label_2dd338:
    // 0x2dd338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd33c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dd33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2dd340u;
}
