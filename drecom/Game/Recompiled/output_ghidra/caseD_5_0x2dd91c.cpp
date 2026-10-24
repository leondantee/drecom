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

// Function: caseD_5
// Address: 0x2dd91c - 0x2dd988
void caseD_5_0x2dd91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2dd91c");
#endif

    switch (ctx->pc) {
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd980u: goto label_2dd980;
        default: break;
    }

    ctx->pc = 0x2dd91cu;

    // 0x2dd91c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd920: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2dd920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dd924: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD924u;
    {
        const bool branch_taken_0x2dd924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd924) {
            ctx->pc = 0x2DD988u;
            return;
        }
    }
    ctx->pc = 0x2DD92Cu;
    // 0x2dd92c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd930: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dd930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dd934: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2dd934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dd938: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2dd938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dd93c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd940: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2dd944: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dd948: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dd948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dd94c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DD94Cu;
    SET_GPR_U32(ctx, 31, 0x2DD954u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DD94Cu, 0x2DD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD954u;
label_2dd954:
    // 0x2dd954: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd958: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dd958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dd95c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2dd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2dd960: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x2dd960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dd964: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dd964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dd968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd96c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd970: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2dd970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd974: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd978: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DD978u;
    SET_GPR_U32(ctx, 31, 0x2DD980u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DD978u, 0x2DD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD980u;
label_2dd980:
    // 0x2dd980: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd984: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2dd984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x2dd988u;
}
