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

// Function: Em_work_set
// Address: 0x16ea30 - 0x16eae8
void Em_work_set_0x16ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_work_set_0x16ea30");
#endif

    switch (ctx->pc) {
        case 0x16eabcu: goto label_16eabc;
        default: break;
    }

    ctx->pc = 0x16ea30u;

    // 0x16ea30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ea34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x16ea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x16ea38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16ea3c: 0xa3a40028  sb          $a0, 0x28($sp)
    ctx->pc = 0x16ea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x16ea40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16ea44: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16ea48: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x16ea48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ea4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ea50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ea54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ea58: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x16ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x16ea5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ea60: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x16ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x16ea64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16ea68: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16ea6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16ea70: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x16ea74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16ea74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16ea78: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16ea7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ea80: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x16ea80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ea84: 0xa20010a9  sb          $zero, 0x10A9($s0)
    ctx->pc = 0x16ea84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4265), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ea88: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16ea88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ea8c: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x16ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x16ea90: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16ea90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ea94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ea98: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16ea98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ea9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16eaa0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16eaa4: 0xa20009e5  sb          $zero, 0x9E5($s0)
    ctx->pc = 0x16eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2533), (uint8_t)GPR_U32(ctx, 0));
    // 0x16eaa8: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x16eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x16eaac: 0xa20209e6  sb          $v0, 0x9E6($s0)
    ctx->pc = 0x16eaacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2534), (uint8_t)GPR_U32(ctx, 2));
    // 0x16eab0: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x16eab4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16EAB4u;
    SET_GPR_U32(ctx, 31, 0x16EABCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16EAB4u, 0x16EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EABCu;
label_16eabc:
    // 0x16eabc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x16eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x16eac0: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x16eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x16eac4: 0xae031250  sw          $v1, 0x1250($s0)
    ctx->pc = 0x16eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4688), GPR_U32(ctx, 3));
    // 0x16eac8: 0xae001270  sw          $zero, 0x1270($s0)
    ctx->pc = 0x16eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4720), GPR_U32(ctx, 0));
    // 0x16eacc: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x16ead0: 0xa2030013  sb          $v1, 0x13($s0)
    ctx->pc = 0x16ead0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x16ead4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x16ead4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ead8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ead8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eadc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16eadcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EAE8u;
}
