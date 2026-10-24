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

// Function: Pl_md_ch
// Address: 0x143d70 - 0x143e64
void Pl_md_ch_0x143d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_md_ch_0x143d70");
#endif

    switch (ctx->pc) {
        case 0x143db4u: goto label_143db4;
        case 0x143dc0u: goto label_143dc0;
        case 0x143e34u: goto label_143e34;
        case 0x143e50u: goto label_143e50;
        default: break;
    }

    ctx->pc = 0x143d70u;

    // 0x143d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x143d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x143d74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x143d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x143d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143d7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x143d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x143d80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x143d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x143d84: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x143d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x143d88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143d8c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143d90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x143d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143d94: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x143d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDC5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC5Cu, _value); } while (0);
    // 0x143d98: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x143d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143d9c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x143d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143da0: 0x24062a00  addiu       $a2, $zero, 0x2A00
    ctx->pc = 0x143da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
    // 0x143da4: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x143da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x143da8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x143da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143dac: 0xc05e858  jal         func_17A160
    ctx->pc = 0x143DACu;
    SET_GPR_U32(ctx, 31, 0x143DB4u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x143DACu, 0x143DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DB4u;
label_143db4:
    // 0x143db4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x143db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143db8: 0xc05e964  jal         func_17A590
    ctx->pc = 0x143DB8u;
    SET_GPR_U32(ctx, 31, 0x143DC0u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x143DB8u, 0x143DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DC0u;
label_143dc0:
    // 0x143dc0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x143dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143dc4: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x143dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x143dc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x143dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143dcc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x143dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143dd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x143dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x143dd4: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x143dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x143dd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x143dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x143ddc: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x143ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x143de0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143de4: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x143de4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x143de8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x143de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x143dec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143df0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x143DF0u;
    {
        const bool branch_taken_0x143df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143df0) {
            ctx->pc = 0x143E10u;
            goto label_143e10;
        }
    }
    ctx->pc = 0x143DF8u;
    // 0x143df8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143dfc: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x143dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x143e00: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x143e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x143e04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143e08: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x143E08u;
    {
        const bool branch_taken_0x143e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e08) {
            ctx->pc = 0x143E50u;
            goto label_143e50;
        }
    }
    ctx->pc = 0x143E10u;
label_143e10:
    // 0x143e10: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x143e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143e14: 0x8e021330  lw          $v0, 0x1330($s0)
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x143e18: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143E18u;
    {
        const bool branch_taken_0x143e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143e18) {
            ctx->pc = 0x143E3Cu;
            goto label_143e3c;
        }
    }
    ctx->pc = 0x143E20u;
    // 0x143e20: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143e24: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143e28: 0x8e061374  lw          $a2, 0x1374($s0)
    ctx->pc = 0x143e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x143e2c: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x143E2Cu;
    SET_GPR_U32(ctx, 31, 0x143E34u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x143E2Cu, 0x143E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E34u;
label_143e34:
    // 0x143e34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143E34u;
    {
        const bool branch_taken_0x143e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e34) {
            ctx->pc = 0x143E50u;
            goto label_143e50;
        }
    }
    ctx->pc = 0x143E3Cu;
label_143e3c:
    // 0x143e3c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143e40: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143e44: 0x8e061378  lw          $a2, 0x1378($s0)
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4984)));
    // 0x143e48: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x143E48u;
    SET_GPR_U32(ctx, 31, 0x143E50u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x143E48u, 0x143E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E50u;
label_143e50:
    // 0x143e50: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x143e50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143e58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x143e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x143e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x143E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143E64u;
}
