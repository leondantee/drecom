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

// Function: Em0b_R1_mv13
// Address: 0x1f3e70 - 0x1f4350
void Em0b_R1_mv13_0x1f3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv13_0x1f3e70");
#endif

    switch (ctx->pc) {
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f40e8u: goto label_1f40e8;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4130u: goto label_1f4130;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42c0u: goto label_1f42c0;
        default: break;
    }

    ctx->pc = 0x1f3e70u;

    // 0x1f3e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3e74: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1f3e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1f3e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f3e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f3e80: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1f3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1f3e84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e88: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f3e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f3e8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f3e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f3e90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3e94: 0x108300f3  beq         $a0, $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1F3E94u;
    {
        const bool branch_taken_0x1f3e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3e94) {
            ctx->pc = 0x1F4264u;
            goto label_1f4264;
        }
    }
    ctx->pc = 0x1F3E9Cu;
    // 0x1f3e9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3ea0: 0x108300df  beq         $a0, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x1F3EA0u;
    {
        const bool branch_taken_0x1f3ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3ea0) {
            ctx->pc = 0x1F4220u;
            goto label_1f4220;
        }
    }
    ctx->pc = 0x1F3EA8u;
    // 0x1f3ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3eac: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F3EACu;
    {
        const bool branch_taken_0x1f3eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3eac) {
            ctx->pc = 0x1F400Cu;
            goto label_1f400c;
        }
    }
    ctx->pc = 0x1F3EB4u;
    // 0x1f3eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3eb8: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F3EB8u;
    {
        const bool branch_taken_0x1f3eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3eb8) {
            ctx->pc = 0x1F3F84u;
            goto label_1f3f84;
        }
    }
    ctx->pc = 0x1F3EC0u;
    // 0x1f3ec0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3EC0u;
    {
        const bool branch_taken_0x1f3ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ec0) {
            ctx->pc = 0x1F3ED0u;
            goto label_1f3ed0;
        }
    }
    ctx->pc = 0x1F3EC8u;
    // 0x1f3ec8: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x1F3EC8u;
    {
        const bool branch_taken_0x1f3ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ec8) {
            ctx->pc = 0x1F4338u;
            goto label_1f4338;
        }
    }
    ctx->pc = 0x1F3ED0u;
label_1f3ed0:
    // 0x1f3ed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ed4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f3ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f3ed8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3edc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3ee0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F3EE0u;
    {
        const bool branch_taken_0x1f3ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ee0) {
            ctx->pc = 0x1F3F28u;
            goto label_1f3f28;
        }
    }
    ctx->pc = 0x1F3EE8u;
    // 0x1f3ee8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3eec: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f3eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f3ef0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f3ef0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ef8: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f3efc: 0x0  nop
    ctx->pc = 0x1f3efcu;
    // NOP
label_1f3f00:
    // 0x1f3f00: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f3f00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3f04: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3f08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3f0c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f3f10: 0xc096254  jal         func_258950
    ctx->pc = 0x1F3F10u;
    SET_GPR_U32(ctx, 31, 0x1F3F18u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F3F10u, 0x1F3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F18u;
label_1f3f18:
    // 0x1f3f18: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f3f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f3f1c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f3f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f3f20: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F3F20u;
    {
        const bool branch_taken_0x1f3f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f20) {
            ctx->pc = 0x1F3F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3f00;
        }
    }
    ctx->pc = 0x1F3F28u;
label_1f3f28:
    // 0x1f3f28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3f2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f30: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f3f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3f34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f3f3c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f3f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1f3f40: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f3f44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3f4c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f3f50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f3f54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1f3f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f5c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3f60: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f3f64: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1f3f68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f3f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f3f6c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f3f70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f74: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F3F74u;
    SET_GPR_U32(ctx, 31, 0x1F3F7Cu);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F3F74u, 0x1F3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F7Cu;
label_1f3f7c:
    // 0x1f3f7c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1F3F7Cu;
    {
        const bool branch_taken_0x1f3f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f7c) {
            ctx->pc = 0x1F4338u;
            goto label_1f4338;
        }
    }
    ctx->pc = 0x1F3F84u;
label_1f3f84:
    // 0x1f3f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f8c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f3f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3f98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3f9c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f3fa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3fa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3fa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3FA8u;
    SET_GPR_U32(ctx, 31, 0x1F3FB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3FA8u, 0x1F3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FB0u;
label_1f3fb0:
    // 0x1f3fb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f3fb8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f3fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f3fbc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f3fc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fc4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3fc8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f3fcc: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f3fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f3fd0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f3fd4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1f3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f3fd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fdc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f3fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3fe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3fe4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f3fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f3fe8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3fec: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3ff0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3FF0u;
    {
        const bool branch_taken_0x1f3ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ff0) {
            ctx->pc = 0x1F4004u;
            goto label_1f4004;
        }
    }
    ctx->pc = 0x1F3FF8u;
    // 0x1f3ff8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3ffc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4000: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1f4004:
    // 0x1f4004: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4008: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f4008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_1f400c:
    // 0x1f400c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4010: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f4014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4018: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4018u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f401c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4020: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4024: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4028: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f402c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1f402cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1f4030: 0x14200055  bnez        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F4030u;
    {
        const bool branch_taken_0x1f4030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4030) {
            ctx->pc = 0x1F4188u;
            goto label_1f4188;
        }
    }
    ctx->pc = 0x1F4038u;
    // 0x1f4038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f403c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f403cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f4040: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4044: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f4044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f4048: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F4048u;
    {
        const bool branch_taken_0x1f4048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4048) {
            ctx->pc = 0x1F4118u;
            goto label_1f4118;
        }
    }
    ctx->pc = 0x1F4050u;
    // 0x1f4050: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4054: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4058: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f405c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4060: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f4060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4064: 0x0  nop
    ctx->pc = 0x1f4064u;
    // NOP
label_1f4068:
    // 0x1f4068: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f406c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f406cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4070: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f4070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4074: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f4074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4078: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f407c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f407cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f4080: 0xc096254  jal         func_258950
    ctx->pc = 0x1F4080u;
    SET_GPR_U32(ctx, 31, 0x1F4088u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F4080u, 0x1F4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4088u;
label_1f4088:
    // 0x1f4088: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f408c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f408cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4090: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F4090u;
    {
        const bool branch_taken_0x1f4090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4090) {
            ctx->pc = 0x1F4068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4068;
        }
    }
    ctx->pc = 0x1F4098u;
    // 0x1f4098: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f409c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f409cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f40a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f40a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f40a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f40a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f40acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f40b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f40b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f40b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f40b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f40b8: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x1f40b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1f40bc: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F40BCu;
    {
        const bool branch_taken_0x1f40bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f40bc) {
            ctx->pc = 0x1F4188u;
            goto label_1f4188;
        }
    }
    ctx->pc = 0x1F40C4u;
    // 0x1f40c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f40c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40cc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f40ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f40d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40d4: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f40d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f40d8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f40d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f40dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40e0: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f40e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f40e4: 0x0  nop
    ctx->pc = 0x1f40e4u;
    // NOP
label_1f40e8:
    // 0x1f40e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f40e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f40ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f40f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f40f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f40f4: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f40f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f40f8: 0xc0961d0  jal         func_258740
    ctx->pc = 0x1F40F8u;
    SET_GPR_U32(ctx, 31, 0x1F4100u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x1F40F8u, 0x1F4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4100u;
label_1f4100:
    // 0x1f4100: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4104: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4108: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F4108u;
    {
        const bool branch_taken_0x1f4108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4108) {
            ctx->pc = 0x1F40E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f40e8;
        }
    }
    ctx->pc = 0x1F4110u;
    // 0x1f4110: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F4110u;
    {
        const bool branch_taken_0x1f4110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4110) {
            ctx->pc = 0x1F4188u;
            goto label_1f4188;
        }
    }
    ctx->pc = 0x1F4118u;
label_1f4118:
    // 0x1f4118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f411c: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f411cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4120: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4120u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4124: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4128: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f412c: 0x0  nop
    ctx->pc = 0x1f412cu;
    // NOP
label_1f4130:
    // 0x1f4130: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4134: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4138: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f4138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f413c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f413cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4140: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4144: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f4148: 0xc096254  jal         func_258950
    ctx->pc = 0x1F4148u;
    SET_GPR_U32(ctx, 31, 0x1F4150u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F4148u, 0x1F4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4150u;
label_1f4150:
    // 0x1f4150: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4154: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4158: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F4158u;
    {
        const bool branch_taken_0x1f4158 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4158) {
            ctx->pc = 0x1F4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4130;
        }
    }
    ctx->pc = 0x1F4160u;
    // 0x1f4160: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4164: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4168: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f416c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f416cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4170u;
    {
        const bool branch_taken_0x1f4170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4170) {
            ctx->pc = 0x1F4188u;
            goto label_1f4188;
        }
    }
    ctx->pc = 0x1F4178u;
    // 0x1f4178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f417c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f4180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f4184: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f4184u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_1f4188:
    // 0x1f4188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f418c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f418cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4190: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f4190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4194: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4194u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4198: 0x2402019a  addiu       $v0, $zero, 0x19A
    ctx->pc = 0x1f4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
    // 0x1f419c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F419Cu;
    {
        const bool branch_taken_0x1f419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f419c) {
            ctx->pc = 0x1F41E0u;
            goto label_1f41e0;
        }
    }
    ctx->pc = 0x1F41A4u;
    // 0x1f41a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f41ac: 0x24500480  addiu       $s0, $v0, 0x480
    ctx->pc = 0x1f41acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1f41b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f41b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f41b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f41c0: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x1f41c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1f41c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41c8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f41c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f41cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f41d4: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x1f41d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f41e0:
    // 0x1f41e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f41e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f41e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F41E8u;
    SET_GPR_U32(ctx, 31, 0x1F41F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F41E8u, 0x1F41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41F0u;
label_1f41f0:
    // 0x1f41f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F41F4u;
    SET_GPR_U32(ctx, 31, 0x1F41FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F41F4u, 0x1F41FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41FCu;
label_1f41fc:
    // 0x1f41fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4200: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f4200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f4204: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F4204u;
    {
        const bool branch_taken_0x1f4204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4204) {
            ctx->pc = 0x1F4338u;
            goto label_1f4338;
        }
    }
    ctx->pc = 0x1F420Cu;
    // 0x1f420c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4210: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4214: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f4214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4218: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1F4218u;
    {
        const bool branch_taken_0x1f4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4218) {
            ctx->pc = 0x1F4338u;
            goto label_1f4338;
        }
    }
    ctx->pc = 0x1F4220u;
label_1f4220:
    // 0x1f4220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4224: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f4224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4228: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f4228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f422c: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f4230: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4234: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f4238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f423c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4240: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f4240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f4244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4248: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f424c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f4250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4254: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4258: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f4258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f425c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1F425Cu;
    {
        const bool branch_taken_0x1f425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f425c) {
            ctx->pc = 0x1F4338u;
            goto label_1f4338;
        }
    }
    ctx->pc = 0x1F4264u;
label_1f4264:
    // 0x1f4264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f426c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f426cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4270: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4278: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f4278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f427c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4280: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f4280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4284: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4288: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f4288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f428c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4290: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f4290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f4294: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4294u;
    SET_GPR_U32(ctx, 31, 0x1F429Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4294u, 0x1F429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F429Cu;
label_1f429c:
    // 0x1f429c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f42a0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f42a4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f42a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f42ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f42acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f42b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f42b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f42b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F42B8u;
    SET_GPR_U32(ctx, 31, 0x1F42C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F42B8u, 0x1F42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42C0u;
label_1f42c0:
    // 0x1f42c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f42c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f42c4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f42c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f42c8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f42cc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f42ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f42d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f42d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f42d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f42dc: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f42dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f42e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42e4: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f42e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f42e8: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x1f42e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x1f42ec: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1f42ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f42f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42f4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f42f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f42f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f42f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f42fc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4300: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f4304: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4308: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f430c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4310: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4314: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f4314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4318: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f431c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4320: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4324: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f4328: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1f432c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f4330: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4334: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1f4338:
    // 0x1f4338: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1f4338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f433c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f433cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4344: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f4344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f4348: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4350u;
}
