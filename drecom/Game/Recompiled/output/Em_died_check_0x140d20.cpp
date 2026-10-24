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

// Function: Em_died_check
// Address: 0x140d20 - 0x140ea0
void Em_died_check_0x140d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_died_check_0x140d20");
#endif

    switch (ctx->pc) {
        case 0x140da0u: goto label_140da0;
        default: break;
    }

    ctx->pc = 0x140d20u;

    // 0x140d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x140d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x140d28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140d2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140d34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140d38: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x140d3c: 0x24745450  addiu       $s4, $v1, 0x5450
    ctx->pc = 0x140d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 21584));
    // 0x140d40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x140d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x140d44: 0x2471bb48  addiu       $s1, $v1, -0x44B8
    ctx->pc = 0x140d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x140d48: 0x8e840138  lw          $a0, 0x138($s4)
    ctx->pc = 0x140d48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x895588u));
    // 0x140d4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x140d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x140d50: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x140D50u;
    {
        const bool branch_taken_0x140d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x140d50) {
            ctx->pc = 0x140D8Cu;
            goto label_140d8c;
        }
    }
    ctx->pc = 0x140D58u;
    // 0x140d58: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x140d5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x140d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x140d60: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x140D60u;
    {
        const bool branch_taken_0x140d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d60) {
            ctx->pc = 0x140E0Cu;
            goto label_140e0c;
        }
    }
    ctx->pc = 0x140D68u;
    // 0x140d68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140d6c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140d70: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x140d74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x140d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x140d78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140d7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140d80: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x140d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x140d84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140D84u;
    {
        const bool branch_taken_0x140d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d84) {
            ctx->pc = 0x140E0Cu;
            goto label_140e0c;
        }
    }
    ctx->pc = 0x140D8Cu;
label_140d8c:
    // 0x140d8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x140d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x140d90: 0x8c33bb40  lw          $s3, -0x44C0($at)
    ctx->pc = 0x140d90u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x47BB40u));
    // 0x140d94: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x140d94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140d98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x140D98u;
    {
        const bool branch_taken_0x140d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d98) {
            ctx->pc = 0x140DD8u;
            goto label_140dd8;
        }
    }
    ctx->pc = 0x140DA0u;
label_140da0:
    // 0x140da0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x140da4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x140da8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x140da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x140dac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140DACu;
    {
        const bool branch_taken_0x140dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140dac) {
            ctx->pc = 0x140DD0u;
            goto label_140dd0;
        }
    }
    ctx->pc = 0x140DB4u;
    // 0x140db4: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x140db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x140db8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x140db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x140dbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x140dbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x140dc0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140DC0u;
    {
        const bool branch_taken_0x140dc0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x140dc0) {
            ctx->pc = 0x140DD0u;
            goto label_140dd0;
        }
    }
    ctx->pc = 0x140DC8u;
    // 0x140dc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x140dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x140dcc: 0x0  nop
    ctx->pc = 0x140dccu;
    // NOP
label_140dd0:
    // 0x140dd0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x140dd4: 0x0  nop
    ctx->pc = 0x140dd4u;
    // NOP
label_140dd8:
    // 0x140dd8: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x140dd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x140ddc: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140de0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x140DE0u;
    {
        const bool branch_taken_0x140de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140de0) {
            ctx->pc = 0x140DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140da0;
        }
    }
    ctx->pc = 0x140DE8u;
    // 0x140de8: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x140DE8u;
    {
        const bool branch_taken_0x140de8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x140de8) {
            ctx->pc = 0x140E0Cu;
            goto label_140e0c;
        }
    }
    ctx->pc = 0x140DF0u;
    // 0x140df0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140df4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x140df4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140df8: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x140df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x140dfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x140dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x140e00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140e04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140e08: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x140e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_140e0c:
    // 0x140e0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e10: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x140e14: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x140E14u;
    {
        const bool branch_taken_0x140e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e14) {
            ctx->pc = 0x140E48u;
            goto label_140e48;
        }
    }
    ctx->pc = 0x140E1Cu;
    // 0x140e1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e20: 0x8c23efac  lw          $v1, -0x1054($at)
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFACu));
    // 0x140e24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E24u;
    {
        const bool branch_taken_0x140e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e24) {
            ctx->pc = 0x140E48u;
            goto label_140e48;
        }
    }
    ctx->pc = 0x140E2Cu;
    // 0x140e2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e30: 0x8c238ef0  lw          $v1, -0x7110($at)
    ctx->pc = 0x140e30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E8EF0u));
    // 0x140e34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140e38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e3c: 0xac238ef0  sw          $v1, -0x7110($at)
    ctx->pc = 0x140e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E8EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EF0u, _value); } while (0);
    // 0x140e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140E40u;
    {
        const bool branch_taken_0x140e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e40) {
            ctx->pc = 0x140E50u;
            goto label_140e50;
        }
    }
    ctx->pc = 0x140E48u;
label_140e48:
    // 0x140e48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e4c: 0xac208ef0  sw          $zero, -0x7110($at)
    ctx->pc = 0x140e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E8EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EF0u, _value); } while (0);
label_140e50:
    // 0x140e50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e54: 0x8c238ef0  lw          $v1, -0x7110($at)
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E8EF0u));
    // 0x140e58: 0x2c61012d  sltiu       $at, $v1, 0x12D
    ctx->pc = 0x140e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x140e5c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E5Cu;
    {
        const bool branch_taken_0x140e5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e5c) {
            ctx->pc = 0x140E80u;
            goto label_140e80;
        }
    }
    ctx->pc = 0x140E64u;
    // 0x140e64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140e68: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140e6c: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x140e70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x140e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x140e74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140e78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140e7c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x140e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_140e80:
    // 0x140e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140e94: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x140e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140e98: 0x3e00008  jr          $ra
    ctx->pc = 0x140E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140EA0u;
}
