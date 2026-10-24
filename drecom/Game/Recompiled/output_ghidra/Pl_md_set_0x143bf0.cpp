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

// Function: Pl_md_set
// Address: 0x143bf0 - 0x143cdc
void Pl_md_set_0x143bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_md_set_0x143bf0");
#endif

    switch (ctx->pc) {
        case 0x143c40u: goto label_143c40;
        case 0x143c4cu: goto label_143c4c;
        case 0x143c6cu: goto label_143c6c;
        case 0x143c7cu: goto label_143c7c;
        case 0x143c8cu: goto label_143c8c;
        case 0x143ca0u: goto label_143ca0;
        case 0x143cb0u: goto label_143cb0;
        default: break;
    }

    ctx->pc = 0x143bf0u;

    // 0x143bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x143bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x143bf4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x143bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x143bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143c00: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x143c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x143c04: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x143c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x143c08: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x143c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x143c0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143c10: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x143c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143c14: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143c18: 0x2451ec70  addiu       $s1, $v0, -0x1390
    ctx->pc = 0x143c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x143c1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x143c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x143c20: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x143c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDC5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC5Cu, _value); } while (0);
    // 0x143c24: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x143c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143c28: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x143c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x143c2c: 0x24062a00  addiu       $a2, $zero, 0x2A00
    ctx->pc = 0x143c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
    // 0x143c30: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x143c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x143c34: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x143c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143c38: 0xc05e858  jal         func_17A160
    ctx->pc = 0x143C38u;
    SET_GPR_U32(ctx, 31, 0x143C40u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x143C38u, 0x143C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C40u;
label_143c40:
    // 0x143c40: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x143c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143c44: 0xc05e964  jal         func_17A590
    ctx->pc = 0x143C44u;
    SET_GPR_U32(ctx, 31, 0x143C4Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x143C44u, 0x143C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C4Cu;
label_143c4c:
    // 0x143c4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x143c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x143c50: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x143c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x143c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x143c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143c58: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x143c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x143c5c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x143c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x143c60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x143c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143c64: 0xc095228  jal         func_2548A0
    ctx->pc = 0x143C64u;
    SET_GPR_U32(ctx, 31, 0x143C6Cu);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x143C64u, 0x143C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C6Cu;
label_143c6c:
    // 0x143c6c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x143c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x143c70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x143c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143c74: 0xc096558  jal         func_259560
    ctx->pc = 0x143C74u;
    SET_GPR_U32(ctx, 31, 0x143C7Cu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x143C74u, 0x143C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C7Cu;
label_143c7c:
    // 0x143c7c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x143c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143c80: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x143c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143c84: 0xc05be64  jal         func_16F990
    ctx->pc = 0x143C84u;
    SET_GPR_U32(ctx, 31, 0x143C8Cu);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x143C84u, 0x143C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C8Cu;
label_143c8c:
    // 0x143c8c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143c90: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x143c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143c94: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x143c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x143c98: 0xc095384  jal         func_254E10
    ctx->pc = 0x143C98u;
    SET_GPR_U32(ctx, 31, 0x143CA0u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x143C98u, 0x143CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CA0u;
label_143ca0:
    // 0x143ca0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x143ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x143ca4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143ca8: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x143CA8u;
    SET_GPR_U32(ctx, 31, 0x143CB0u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x143CA8u, 0x143CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CB0u;
label_143cb0:
    // 0x143cb0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x143cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x143cb4: 0x246351d0  addiu       $v1, $v1, 0x51D0
    ctx->pc = 0x143cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20944));
    // 0x143cb8: 0xae030354  sw          $v1, 0x354($s0)
    ctx->pc = 0x143cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 3));
    // 0x143cbc: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x143cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x143cc0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x143cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x143cc4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x143cc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143cd0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x143CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143CDCu;
}
