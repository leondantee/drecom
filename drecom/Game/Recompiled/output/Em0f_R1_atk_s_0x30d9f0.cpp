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

// Function: Em0f_R1_atk_s
// Address: 0x30d9f0 - 0x30dc00
void Em0f_R1_atk_s_0x30d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_s_0x30d9f0");
#endif

    switch (ctx->pc) {
        case 0x30da48u: goto label_30da48;
        case 0x30dadcu: goto label_30dadc;
        case 0x30db1cu: goto label_30db1c;
        case 0x30db5cu: goto label_30db5c;
        case 0x30db6cu: goto label_30db6c;
        case 0x30db78u: goto label_30db78;
        case 0x30db88u: goto label_30db88;
        case 0x30db94u: goto label_30db94;
        default: break;
    }

    ctx->pc = 0x30d9f0u;

    // 0x30d9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d9f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30d9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30d9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d9fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30da00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da04: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30da04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30da08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30da08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30da0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30da10: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30DA10u;
    {
        const bool branch_taken_0x30da10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30da10) {
            ctx->pc = 0x30DA7Cu;
            goto label_30da7c;
        }
    }
    ctx->pc = 0x30DA18u;
    // 0x30da18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DA18u;
    {
        const bool branch_taken_0x30da18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da18) {
            ctx->pc = 0x30DA28u;
            goto label_30da28;
        }
    }
    ctx->pc = 0x30DA20u;
    // 0x30da20: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30DA20u;
    {
        const bool branch_taken_0x30da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da20) {
            ctx->pc = 0x30DBECu;
            goto label_30dbec;
        }
    }
    ctx->pc = 0x30DA28u;
label_30da28:
    // 0x30da28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30da34: 0x2406280e  addiu       $a2, $zero, 0x280E
    ctx->pc = 0x30da34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10254));
    // 0x30da38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30da3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30da3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30da40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30DA40u;
    SET_GPR_U32(ctx, 31, 0x30DA48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30DA40u, 0x30DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA48u;
label_30da48:
    // 0x30da48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da4c: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30da50: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30da50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30da54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30da58: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30da58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30da5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30da60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30da64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da68: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30da68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30da6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30da70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30da74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30da78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30da78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30da7c:
    // 0x30da7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da80: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30da80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30da84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30da84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30da88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30da88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30da8c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DA8Cu;
    {
        const bool branch_taken_0x30da8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da8c) {
            ctx->pc = 0x30DB00u;
            goto label_30db00;
        }
    }
    ctx->pc = 0x30DA94u;
    // 0x30da94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30da98: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30da98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30da9c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DA9Cu;
    {
        const bool branch_taken_0x30da9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30da9c) {
            ctx->pc = 0x30DB00u;
            goto label_30db00;
        }
    }
    ctx->pc = 0x30DAA4u;
    // 0x30daa4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30daa8: 0x24429950  addiu       $v0, $v0, -0x66B0
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941008));
    // 0x30daac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30daacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dab0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30dab0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399950u));
    // 0x30dab4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30dab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dabc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30dac0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dac4: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30dac8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dacc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30dad0: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30dad4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30DAD4u;
    SET_GPR_U32(ctx, 31, 0x30DADCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30DAD4u, 0x30DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DADCu;
label_30dadc:
    // 0x30dadc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30dadcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30dae0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DAE0u;
    {
        const bool branch_taken_0x30dae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dae0) {
            ctx->pc = 0x30DB00u;
            goto label_30db00;
        }
    }
    ctx->pc = 0x30DAE8u;
    // 0x30dae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30daec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30daf0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30daf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30daf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30daf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dafc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30dafcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30db00:
    // 0x30db00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db04: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30db04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30db08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DB08u;
    {
        const bool branch_taken_0x30db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db08) {
            ctx->pc = 0x30DB24u;
            goto label_30db24;
        }
    }
    ctx->pc = 0x30DB10u;
    // 0x30db10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db14: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30DB14u;
    SET_GPR_U32(ctx, 31, 0x30DB1Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30DB14u, 0x30DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB1Cu;
label_30db1c:
    // 0x30db1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db20: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30db20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30db24:
    // 0x30db24: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30db24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30db28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30db28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30db2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db30: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30db34: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30db38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30db38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30db3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30db40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30db40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30db44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30db44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30db48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db4c: 0x24660330  addiu       $a2, $v1, 0x330
    ctx->pc = 0x30db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x30db50: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30db50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30db54: 0xc086488  jal         func_219220
    ctx->pc = 0x30DB54u;
    SET_GPR_U32(ctx, 31, 0x30DB5Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30DB54u, 0x30DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB5Cu;
label_30db5c:
    // 0x30db5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30db60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db64: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30DB64u;
    SET_GPR_U32(ctx, 31, 0x30DB6Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30DB64u, 0x30DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB6Cu;
label_30db6c:
    // 0x30db6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db70: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30DB70u;
    SET_GPR_U32(ctx, 31, 0x30DB78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30DB70u, 0x30DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB78u;
label_30db78:
    // 0x30db78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30db7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30db80: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30DB80u;
    SET_GPR_U32(ctx, 31, 0x30DB88u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30DB80u, 0x30DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB88u;
label_30db88:
    // 0x30db88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db8c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30DB8Cu;
    SET_GPR_U32(ctx, 31, 0x30DB94u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30DB8Cu, 0x30DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB94u;
label_30db94:
    // 0x30db94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30db94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30db98: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30db98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30db9c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30DB9Cu;
    {
        const bool branch_taken_0x30db9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db9c) {
            ctx->pc = 0x30DBECu;
            goto label_30dbec;
        }
    }
    ctx->pc = 0x30DBA4u;
    // 0x30dba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30dbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dbb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dbb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbb8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30dbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dbbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30dbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dbc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30dbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dbcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbd0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30dbd4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dbd8: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30dbdc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30dbe0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30dbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30dbe4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30dbe8: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30dbec:
    // 0x30dbec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30dbecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30dbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dbf4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30dbf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30dbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x30DBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DC00u;
}
