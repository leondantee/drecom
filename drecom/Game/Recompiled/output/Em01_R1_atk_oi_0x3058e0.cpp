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

// Function: Em01_R1_atk_oi
// Address: 0x3058e0 - 0x305bb8
void Em01_R1_atk_oi_0x3058e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_oi_0x3058e0");
#endif

    switch (ctx->pc) {
        case 0x30593cu: goto label_30593c;
        case 0x3059a0u: goto label_3059a0;
        case 0x3059b4u: goto label_3059b4;
        case 0x305a1cu: goto label_305a1c;
        case 0x305a84u: goto label_305a84;
        case 0x305aa4u: goto label_305aa4;
        case 0x305b20u: goto label_305b20;
        case 0x305b38u: goto label_305b38;
        case 0x305b44u: goto label_305b44;
        case 0x305b54u: goto label_305b54;
        case 0x305b60u: goto label_305b60;
        default: break;
    }

    ctx->pc = 0x3058e0u;

    // 0x3058e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3058e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3058e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3058e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3058e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3058e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3058ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3058ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3058f0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x3058f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x3058f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058f8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3058f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3058fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3058fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305904: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x305904u;
    {
        const bool branch_taken_0x305904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x305904) {
            ctx->pc = 0x30595Cu;
            goto label_30595c;
        }
    }
    ctx->pc = 0x30590Cu;
    // 0x30590c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30590Cu;
    {
        const bool branch_taken_0x30590c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30590c) {
            ctx->pc = 0x30591Cu;
            goto label_30591c;
        }
    }
    ctx->pc = 0x305914u;
    // 0x305914: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x305914u;
    {
        const bool branch_taken_0x305914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305914) {
            ctx->pc = 0x305BA0u;
            goto label_305ba0;
        }
    }
    ctx->pc = 0x30591Cu;
label_30591c:
    // 0x30591c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305920: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305924: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x305924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305928: 0x24062814  addiu       $a2, $zero, 0x2814
    ctx->pc = 0x305928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10260));
    // 0x30592c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30592cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305930: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305934: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305934u;
    SET_GPR_U32(ctx, 31, 0x30593Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305934u, 0x30593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30593Cu;
label_30593c:
    // 0x30593c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305940: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x305940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305944: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305948: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30594c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305950: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305958: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30595c:
    // 0x30595c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305960: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x305960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x305964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x305964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x305968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x305968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30596c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30596Cu;
    {
        const bool branch_taken_0x30596c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30596c) {
            ctx->pc = 0x3059BCu;
            goto label_3059bc;
        }
    }
    ctx->pc = 0x305974u;
    // 0x305974: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x305978: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x305978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30597c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30597cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305980: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305984: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305988: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30598c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x305990: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x305990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305994: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x305994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x305998: 0xc05c848  jal         func_172120
    ctx->pc = 0x305998u;
    SET_GPR_U32(ctx, 31, 0x3059A0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x305998u, 0x3059A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059A0u;
label_3059a0:
    // 0x3059a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059a4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3059a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3059a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3059a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3059ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3059ACu;
    SET_GPR_U32(ctx, 31, 0x3059B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3059ACu, 0x3059B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059B4u;
label_3059b4:
    // 0x3059b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3059b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_3059bc:
    // 0x3059bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059c0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3059c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3059c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3059c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3059c8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3059c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3059cc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3059CCu;
    {
        const bool branch_taken_0x3059cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059cc) {
            ctx->pc = 0x305AA4u;
            goto label_305aa4;
        }
    }
    ctx->pc = 0x3059D4u;
    // 0x3059d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059d8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3059d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3059dc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3059DCu;
    {
        const bool branch_taken_0x3059dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3059dc) {
            ctx->pc = 0x305AA4u;
            goto label_305aa4;
        }
    }
    ctx->pc = 0x3059E4u;
    // 0x3059e4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3059e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3059e8: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x3059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x3059ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3059f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3059f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399650u));
    // 0x3059f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3059f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3059f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3059fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305a00: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a04: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x305a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305a08: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305a0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x305a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305a10: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x305a14: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x305A14u;
    SET_GPR_U32(ctx, 31, 0x305A1Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x305A14u, 0x305A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A1Cu;
label_305a1c:
    // 0x305a1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x305a1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305a20: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305A20u;
    {
        const bool branch_taken_0x305a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a20) {
            ctx->pc = 0x305AA4u;
            goto label_305aa4;
        }
    }
    ctx->pc = 0x305A28u;
    // 0x305a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305a2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305a30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305a34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305a38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a3c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x305a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305a40: 0x2402050d  addiu       $v0, $zero, 0x50D
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x305a44: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305a44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305a48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305a50: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305a54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x305a54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305a58: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x305a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305a60: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x305a64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305a68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305a6c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x305a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305a70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a74: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a78: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x305a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305a7c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x305A7Cu;
    SET_GPR_U32(ctx, 31, 0x305A84u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x305A84u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x305A84u) { return; }
    ctx->pc = 0x305A84u;
label_305a84:
    // 0x305a84: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x305a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x305a88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x305a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x305a8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305a90: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x305a90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x305a94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x305a98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305a9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x305A9Cu;
    SET_GPR_U32(ctx, 31, 0x305AA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x305A9Cu, 0x305AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AA4u;
label_305aa4:
    // 0x305aa4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305aa8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x305aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x305aac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x305AACu;
    {
        const bool branch_taken_0x305aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305aac) {
            ctx->pc = 0x305B28u;
            goto label_305b28;
        }
    }
    ctx->pc = 0x305AB4u;
    // 0x305ab4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305ab8: 0x24429660  addiu       $v0, $v0, -0x69A0
    ctx->pc = 0x305ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940256));
    // 0x305abc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x305abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305ac0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305ac0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399660u));
    // 0x305ac4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305ac8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305acc: 0x24429670  addiu       $v0, $v0, -0x6990
    ctx->pc = 0x305accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940272));
    // 0x305ad0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x305ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305ad4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305ad4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399670u));
    // 0x305ad8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305adc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305ae0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x305ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305ae4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x305ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305ae8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305aec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x305aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305af0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305af8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305afc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x305afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305b00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b04: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305b08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305b0c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x305b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305b10: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x305b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305b14: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x305b14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305b18: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x305B18u;
    SET_GPR_U32(ctx, 31, 0x305B20u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x305B18u, 0x305B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B20u;
label_305b20:
    // 0x305b20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b24: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305b24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_305b28:
    // 0x305b28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305b30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305B30u;
    SET_GPR_U32(ctx, 31, 0x305B38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305B30u, 0x305B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B38u;
label_305b38:
    // 0x305b38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305B3Cu;
    SET_GPR_U32(ctx, 31, 0x305B44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305B3Cu, 0x305B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B44u;
label_305b44:
    // 0x305b44: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305b4c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305B4Cu;
    SET_GPR_U32(ctx, 31, 0x305B54u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305B4Cu, 0x305B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B54u;
label_305b54:
    // 0x305b54: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b58: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305B58u;
    SET_GPR_U32(ctx, 31, 0x305B60u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305B58u, 0x305B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B60u;
label_305b60:
    // 0x305b60: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b64: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305b68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305B68u;
    {
        const bool branch_taken_0x305b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b68) {
            ctx->pc = 0x305BA0u;
            goto label_305ba0;
        }
    }
    ctx->pc = 0x305B70u;
    // 0x305b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x305b7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305b88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x305b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305b90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305b98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x305b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_305ba0:
    // 0x305ba0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x305ba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305bac: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x305bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x305bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x305BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305BB8u;
}
