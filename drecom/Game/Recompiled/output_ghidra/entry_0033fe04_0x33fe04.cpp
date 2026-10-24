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

// Function: entry_0033fe04
// Address: 0x33fe04 - 0x33fe9c
void entry_0033fe04_0x33fe04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fe04_0x33fe04");
#endif

    switch (ctx->pc) {
        case 0x33fe14u: goto label_33fe14;
        case 0x33fe3cu: goto label_33fe3c;
        case 0x33fe58u: goto label_33fe58;
        case 0x33fe74u: goto label_33fe74;
        default: break;
    }

    ctx->pc = 0x33fe04u;

    // 0x33fe04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe08: 0x244412f0  addiu       $a0, $v0, 0x12F0
    ctx->pc = 0x33fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
    // 0x33fe0c: 0xc05da88  jal         func_176A20
    ctx->pc = 0x33FE0Cu;
    SET_GPR_U32(ctx, 31, 0x33FE14u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x33FE0Cu, 0x33FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE14u;
label_33fe14:
    // 0x33fe14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe18: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x33fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x33fe1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe20: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x33fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x33fe24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe28: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33fe2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33fe30: 0x2446a220  addiu       $a2, $v0, -0x5DE0
    ctx->pc = 0x33fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943264));
    // 0x33fe34: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33FE34u;
    SET_GPR_U32(ctx, 31, 0x33FE3Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33FE34u, 0x33FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE3Cu;
label_33fe3c:
    // 0x33fe3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe40: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x33fe44: 0x3c0245f3  lui         $v0, 0x45F3
    ctx->pc = 0x33fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17907 << 16));
    // 0x33fe48: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x33fe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x33fe4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33fe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33fe50: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33FE50u;
    SET_GPR_U32(ctx, 31, 0x33FE58u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33FE50u, 0x33FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE58u;
label_33fe58:
    // 0x33fe58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe5c: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x33fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x33fe60: 0x3c024676  lui         $v0, 0x4676
    ctx->pc = 0x33fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18038 << 16));
    // 0x33fe64: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x33fe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x33fe68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33fe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33fe6c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33FE6Cu;
    SET_GPR_U32(ctx, 31, 0x33FE74u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33FE6Cu, 0x33FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE74u;
label_33fe74:
    // 0x33fe74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33fe74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fe78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe7c: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x33fe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x33fe80: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x33fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x33fe84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe88: 0xac641294  sw          $a0, 0x1294($v1)
    ctx->pc = 0x33fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 4));
    // 0x33fe8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe90: 0xac601298  sw          $zero, 0x1298($v1)
    ctx->pc = 0x33fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 0));
    // 0x33fe94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33FE94u;
    {
        const bool branch_taken_0x33fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe94) {
            ctx->pc = 0x33FEF8u;
            return;
        }
    }
    ctx->pc = 0x33FE9Cu;
}
