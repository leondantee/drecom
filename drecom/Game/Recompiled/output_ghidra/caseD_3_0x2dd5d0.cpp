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

// Function: caseD_3
// Address: 0x2dd5d0 - 0x2dd63c
void caseD_3_0x2dd5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2dd5d0");
#endif

    switch (ctx->pc) {
        case 0x2dd608u: goto label_2dd608;
        case 0x2dd634u: goto label_2dd634;
        default: break;
    }

    ctx->pc = 0x2dd5d0u;

    // 0x2dd5d0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5d4: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x2dd5d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2dd5d8: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD5D8u;
    {
        const bool branch_taken_0x2dd5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5d8) {
            ctx->pc = 0x2DD63Cu;
            return;
        }
    }
    ctx->pc = 0x2DD5E0u;
    // 0x2dd5e0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5e4: 0x84e81278  lh          $t0, 0x1278($a3)
    ctx->pc = 0x2dd5e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4728)));
    // 0x2dd5e8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2dd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2dd5ec: 0xa4e21278  sh          $v0, 0x1278($a3)
    ctx->pc = 0x2dd5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dd5f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2dd5f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dd5fc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dd5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dd600: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DD600u;
    SET_GPR_U32(ctx, 31, 0x2DD608u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DD600u, 0x2DD608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD608u;
label_2dd608:
    // 0x2dd608: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd60c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dd60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dd610: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2dd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2dd614: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x2dd614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dd618: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dd618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dd61c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd624: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2dd624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd628: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dd628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd62c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DD62Cu;
    SET_GPR_U32(ctx, 31, 0x2DD634u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DD62Cu, 0x2DD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD634u;
label_2dd634:
    // 0x2dd634: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd638: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2dd638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x2dd63cu;
}
