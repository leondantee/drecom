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
// Address: 0x2dded8 - 0x2ddf44
void caseD_1_0x2dded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2dded8");
#endif

    switch (ctx->pc) {
        case 0x2ddf10u: goto label_2ddf10;
        case 0x2ddf3cu: goto label_2ddf3c;
        default: break;
    }

    ctx->pc = 0x2dded8u;

    // 0x2dded8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddedc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2ddee0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DDEE0u;
    {
        const bool branch_taken_0x2ddee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddee0) {
            ctx->pc = 0x2DDF44u;
            return;
        }
    }
    ctx->pc = 0x2DDEE8u;
    // 0x2ddee8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddeec: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2ddef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ddef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ddef4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2ddef4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ddef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddefc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2ddefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2ddf00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ddf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ddf04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2ddf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2ddf08: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DDF08u;
    SET_GPR_U32(ctx, 31, 0x2DDF10u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DDF08u, 0x2DDF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF10u;
label_2ddf10:
    // 0x2ddf10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf14: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2ddf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2ddf18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2ddf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf20: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2ddf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2ddf24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ddf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2ddf28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ddf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ddf2c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2ddf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ddf30: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2ddf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ddf34: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DDF34u;
    SET_GPR_U32(ctx, 31, 0x2DDF3Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DDF34u, 0x2DDF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF3Cu;
label_2ddf3c:
    // 0x2ddf3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddf40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2ddf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2ddf44u;
}
