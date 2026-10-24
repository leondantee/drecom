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

// Function: entry_0033eec0
// Address: 0x33eec0 - 0x33ef64
void entry_0033eec0_0x33eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033eec0_0x33eec0");
#endif

    switch (ctx->pc) {
        case 0x33ef28u: goto label_33ef28;
        default: break;
    }

    ctx->pc = 0x33eec0u;

    // 0x33eec0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eec4: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x33eec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x33eec8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33eecc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33eed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eed4: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x33eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33eed8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eedc: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x33eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x33eee0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33eee4: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x33eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x33eee8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eeec: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x33eeecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x33eef0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33eef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33eef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33eef8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33eefc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef00: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x33ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33ef04: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ef08: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x33ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x33ef0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33ef10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ef14: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x33ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef18: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ef1c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x33ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ef20: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x33EF20u;
    SET_GPR_U32(ctx, 31, 0x33EF28u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x33EF20u, 0x33EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF28u;
label_33ef28:
    // 0x33ef28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef2c: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x33ef2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x33ef30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ef34: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x33ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ef38: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33ef3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33ef44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef48: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33ef4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef50: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x33ef50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x33ef54: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x33ef54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x33ef58: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x33ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x33ef5c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33ef5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33ef60: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x33ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x33ef64u;
}
