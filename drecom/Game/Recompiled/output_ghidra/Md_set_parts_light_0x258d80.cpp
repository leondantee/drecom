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

// Function: Md_set_parts_light
// Address: 0x258d80 - 0x258e38
void Md_set_parts_light_0x258d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_light_0x258d80");
#endif

    switch (ctx->pc) {
        case 0x258da4u: goto label_258da4;
        default: break;
    }

    ctx->pc = 0x258d80u;

    // 0x258d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258d84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258d90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x258d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x258d94: 0xa3a50038  sb          $a1, 0x38($sp)
    ctx->pc = 0x258d94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 5));
    // 0x258d98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x258d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258d9c: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x258d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x258da0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x258da0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_258da4:
    // 0x258da4: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x258da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x258da8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258db0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x258db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x258db4: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x258db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x258db8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x258db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258dbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258dc0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x258dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x258dc4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x258DC4u;
    {
        const bool branch_taken_0x258dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258dc4) {
            ctx->pc = 0x258DF4u;
            goto label_258df4;
        }
    }
    ctx->pc = 0x258DCCu;
    // 0x258dcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x258dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x258dd0: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x258dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x258dd4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x258dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x258dd8: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x258dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x258ddc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x258ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x258de0: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x258de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x258de4: 0x346300b8  ori         $v1, $v1, 0xB8
    ctx->pc = 0x258de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)184);
    // 0x258de8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x258de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x258dec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258DECu;
    {
        const bool branch_taken_0x258dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258dec) {
            ctx->pc = 0x258E00u;
            goto label_258e00;
        }
    }
    ctx->pc = 0x258DF4u;
label_258df4:
    // 0x258df4: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x258df4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x258df8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x258df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x258dfc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x258dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_258e00:
    // 0x258e00: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x258e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x258e04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258e08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x258e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258e0c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258e10: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258e14: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x258e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258e18: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x258E18u;
    {
        const bool branch_taken_0x258e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258e18) {
            ctx->pc = 0x258DA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258da4;
        }
    }
    ctx->pc = 0x258E20u;
    // 0x258e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258e30: 0x3e00008  jr          $ra
    ctx->pc = 0x258E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E38u;
}
