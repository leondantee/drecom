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

// Function: entry_0034a9f4
// Address: 0x34a9f4 - 0x34aa84
void entry_0034a9f4_0x34a9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a9f4_0x34a9f4");
#endif

    switch (ctx->pc) {
        case 0x34aa20u: goto label_34aa20;
        case 0x34aa5cu: goto label_34aa5c;
        default: break;
    }

    ctx->pc = 0x34a9f4u;

    // 0x34a9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a9f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a9fc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34aa00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34aa0c: 0x24061e0d  addiu       $a2, $zero, 0x1E0D
    ctx->pc = 0x34aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7693));
    // 0x34aa10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34aa10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34aa14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34aa14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34aa18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AA18u;
    SET_GPR_U32(ctx, 31, 0x34AA20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AA18u, 0x34AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA20u;
label_34aa20:
    // 0x34aa20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa24: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34aa28: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34aa2c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34aa30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34aa34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34aa38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34aa3c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x34aa40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34aa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aa48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa50: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34aa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34aa54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34AA54u;
    SET_GPR_U32(ctx, 31, 0x34AA5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34AA54u, 0x34AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA5Cu;
label_34aa5c:
    // 0x34aa5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34aa60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34aa64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AA64u;
    {
        const bool branch_taken_0x34aa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa64) {
            ctx->pc = 0x34AA84u;
            return;
        }
    }
    ctx->pc = 0x34AA6Cu;
    // 0x34aa6c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34aa70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34aa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34aa74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34aa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aa78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa80: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34aa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34aa84u;
}
