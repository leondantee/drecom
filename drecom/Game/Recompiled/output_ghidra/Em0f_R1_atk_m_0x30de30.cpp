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

// Function: Em0f_R1_atk_m
// Address: 0x30de30 - 0x30e040
void Em0f_R1_atk_m_0x30de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_m_0x30de30");
#endif

    switch (ctx->pc) {
        case 0x30de88u: goto label_30de88;
        case 0x30df1cu: goto label_30df1c;
        case 0x30df5cu: goto label_30df5c;
        case 0x30df9cu: goto label_30df9c;
        case 0x30dfacu: goto label_30dfac;
        case 0x30dfb8u: goto label_30dfb8;
        case 0x30dfc8u: goto label_30dfc8;
        case 0x30dfd4u: goto label_30dfd4;
        default: break;
    }

    ctx->pc = 0x30de30u;

    // 0x30de30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30de34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30de38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30de3c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30de40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de44: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30de44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30de48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30de48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30de4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30de50: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30DE50u;
    {
        const bool branch_taken_0x30de50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30de50) {
            ctx->pc = 0x30DEBCu;
            goto label_30debc;
        }
    }
    ctx->pc = 0x30DE58u;
    // 0x30de58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DE58u;
    {
        const bool branch_taken_0x30de58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de58) {
            ctx->pc = 0x30DE68u;
            goto label_30de68;
        }
    }
    ctx->pc = 0x30DE60u;
    // 0x30de60: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30DE60u;
    {
        const bool branch_taken_0x30de60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30de60) {
            ctx->pc = 0x30E02Cu;
            goto label_30e02c;
        }
    }
    ctx->pc = 0x30DE68u;
label_30de68:
    // 0x30de68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30de70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30de74: 0x24063210  addiu       $a2, $zero, 0x3210
    ctx->pc = 0x30de74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x30de78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30de78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30de7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30de7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30de80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30DE80u;
    SET_GPR_U32(ctx, 31, 0x30DE88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30DE80u, 0x30DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DE88u;
label_30de88:
    // 0x30de88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de8c: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30de90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30de94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30de94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30de98: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30de98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30de9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dea0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30dea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30dea4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dea8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30dea8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30deac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30deb0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30deb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30deb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30deb8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30debc:
    // 0x30debc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dec0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30dec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30dec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30dec8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30decc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DECCu;
    {
        const bool branch_taken_0x30decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30decc) {
            ctx->pc = 0x30DF40u;
            goto label_30df40;
        }
    }
    ctx->pc = 0x30DED4u;
    // 0x30ded4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ded8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30ded8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30dedc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DEDCu;
    {
        const bool branch_taken_0x30dedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dedc) {
            ctx->pc = 0x30DF40u;
            goto label_30df40;
        }
    }
    ctx->pc = 0x30DEE4u;
    // 0x30dee4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30dee8: 0x24429970  addiu       $v0, $v0, -0x6690
    ctx->pc = 0x30dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941040));
    // 0x30deec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30def0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30def0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399970u));
    // 0x30def4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30def4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30def8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30defc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30df00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30df00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df04: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30df04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30df08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30df08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30df0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30df10: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30df10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30df14: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30DF14u;
    SET_GPR_U32(ctx, 31, 0x30DF1Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30DF14u, 0x30DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF1Cu;
label_30df1c:
    // 0x30df1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30df1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30df20: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DF20u;
    {
        const bool branch_taken_0x30df20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30df20) {
            ctx->pc = 0x30DF40u;
            goto label_30df40;
        }
    }
    ctx->pc = 0x30DF28u;
    // 0x30df28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30df2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30df30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30df34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30df38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df3c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30df3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30df40:
    // 0x30df40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df44: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30df44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30df48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DF48u;
    {
        const bool branch_taken_0x30df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30df48) {
            ctx->pc = 0x30DF64u;
            goto label_30df64;
        }
    }
    ctx->pc = 0x30DF50u;
    // 0x30df50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30df50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df54: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30DF54u;
    SET_GPR_U32(ctx, 31, 0x30DF5Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30DF54u, 0x30DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF5Cu;
label_30df5c:
    // 0x30df5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df60: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30df60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30df64:
    // 0x30df64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30df64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30df68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30df68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30df6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30df70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30df70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30df74: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30df78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30df78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30df7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30df84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30df84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30df88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30df88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30df8c: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30df90: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30df90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30df94: 0xc086488  jal         func_219220
    ctx->pc = 0x30DF94u;
    SET_GPR_U32(ctx, 31, 0x30DF9Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30DF94u, 0x30DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF9Cu;
label_30df9c:
    // 0x30df9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfa0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dfa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dfa4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30DFA4u;
    SET_GPR_U32(ctx, 31, 0x30DFACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30DFA4u, 0x30DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFACu;
label_30dfac:
    // 0x30dfac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfb0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30DFB0u;
    SET_GPR_U32(ctx, 31, 0x30DFB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30DFB0u, 0x30DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFB8u;
label_30dfb8:
    // 0x30dfb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dfbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dfc0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30DFC0u;
    SET_GPR_U32(ctx, 31, 0x30DFC8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30DFC0u, 0x30DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFC8u;
label_30dfc8:
    // 0x30dfc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfcc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30DFCCu;
    SET_GPR_U32(ctx, 31, 0x30DFD4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30DFCCu, 0x30DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFD4u;
label_30dfd4:
    // 0x30dfd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfd8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30dfd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30dfdc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30DFDCu;
    {
        const bool branch_taken_0x30dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dfdc) {
            ctx->pc = 0x30E02Cu;
            goto label_30e02c;
        }
    }
    ctx->pc = 0x30DFE4u;
    // 0x30dfe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dfe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30dfecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dff8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30dff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e000: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e008: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e00c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e010: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30e014: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e018: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e01c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e020: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e024: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e028: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30e02c:
    // 0x30e02c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30e02cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e034: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30e034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30e038: 0x3e00008  jr          $ra
    ctx->pc = 0x30E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E040u;
}
