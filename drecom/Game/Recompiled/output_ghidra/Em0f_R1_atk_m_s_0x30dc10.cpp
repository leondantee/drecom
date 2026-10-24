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

// Function: Em0f_R1_atk_m_s
// Address: 0x30dc10 - 0x30de20
void Em0f_R1_atk_m_s_0x30dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_m_s_0x30dc10");
#endif

    switch (ctx->pc) {
        case 0x30dc68u: goto label_30dc68;
        case 0x30dcfcu: goto label_30dcfc;
        case 0x30dd3cu: goto label_30dd3c;
        case 0x30dd7cu: goto label_30dd7c;
        case 0x30dd8cu: goto label_30dd8c;
        case 0x30dd98u: goto label_30dd98;
        case 0x30dda8u: goto label_30dda8;
        case 0x30ddb4u: goto label_30ddb4;
        default: break;
    }

    ctx->pc = 0x30dc10u;

    // 0x30dc10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30dc14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30dc18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30dc1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30dc20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc24: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30dc24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30dc28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30dc28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30dc2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dc30: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30DC30u;
    {
        const bool branch_taken_0x30dc30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30dc30) {
            ctx->pc = 0x30DC9Cu;
            goto label_30dc9c;
        }
    }
    ctx->pc = 0x30DC38u;
    // 0x30dc38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DC38u;
    {
        const bool branch_taken_0x30dc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc38) {
            ctx->pc = 0x30DC48u;
            goto label_30dc48;
        }
    }
    ctx->pc = 0x30DC40u;
    // 0x30dc40: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30DC40u;
    {
        const bool branch_taken_0x30dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc40) {
            ctx->pc = 0x30DE0Cu;
            goto label_30de0c;
        }
    }
    ctx->pc = 0x30DC48u;
label_30dc48:
    // 0x30dc48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc50: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30dc54: 0x2406320f  addiu       $a2, $zero, 0x320F
    ctx->pc = 0x30dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12815));
    // 0x30dc58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30dc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dc5c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30dc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30dc60: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30DC60u;
    SET_GPR_U32(ctx, 31, 0x30DC68u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30DC60u, 0x30DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DC68u;
label_30dc68:
    // 0x30dc68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc6c: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30dc70: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30dc74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30dc78: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30dc7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc80: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30dc80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30dc84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc88: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30dc88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30dc8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dc90: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30dc90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30dc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30dc98: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30dc98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30dc9c:
    // 0x30dc9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dca0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30dca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30dca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30dca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30dca8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30dca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30dcac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DCACu;
    {
        const bool branch_taken_0x30dcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dcac) {
            ctx->pc = 0x30DD20u;
            goto label_30dd20;
        }
    }
    ctx->pc = 0x30DCB4u;
    // 0x30dcb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dcb8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30dcb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30dcbc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30DCBCu;
    {
        const bool branch_taken_0x30dcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dcbc) {
            ctx->pc = 0x30DD20u;
            goto label_30dd20;
        }
    }
    ctx->pc = 0x30DCC4u;
    // 0x30dcc4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30dcc8: 0x24429960  addiu       $v0, $v0, -0x66A0
    ctx->pc = 0x30dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941024));
    // 0x30dccc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dcd0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30dcd0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399960u));
    // 0x30dcd4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30dcd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dcdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30dce0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dce4: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30dce8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30dcec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30dcf0: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30dcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30dcf4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30DCF4u;
    SET_GPR_U32(ctx, 31, 0x30DCFCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30DCF4u, 0x30DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCFCu;
label_30dcfc:
    // 0x30dcfc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30dcfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30dd00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DD00u;
    {
        const bool branch_taken_0x30dd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dd00) {
            ctx->pc = 0x30DD20u;
            goto label_30dd20;
        }
    }
    ctx->pc = 0x30DD08u;
    // 0x30dd08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd10: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30dd10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30dd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd1c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30dd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30dd20:
    // 0x30dd20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd24: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30dd24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30dd28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DD28u;
    {
        const bool branch_taken_0x30dd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dd28) {
            ctx->pc = 0x30DD44u;
            goto label_30dd44;
        }
    }
    ctx->pc = 0x30DD30u;
    // 0x30dd30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd34: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30DD34u;
    SET_GPR_U32(ctx, 31, 0x30DD3Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30DD34u, 0x30DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD3Cu;
label_30dd3c:
    // 0x30dd3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd40: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30dd44:
    // 0x30dd44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30dd48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30dd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30dd4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30dd50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30dd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30dd54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30dd58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30dd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30dd5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30dd64: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30dd64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dd68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dd68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dd6c: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30dd70: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30dd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30dd74: 0xc086488  jal         func_219220
    ctx->pc = 0x30DD74u;
    SET_GPR_U32(ctx, 31, 0x30DD7Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30DD74u, 0x30DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD7Cu;
label_30dd7c:
    // 0x30dd7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dd80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dd84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30DD84u;
    SET_GPR_U32(ctx, 31, 0x30DD8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30DD84u, 0x30DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD8Cu;
label_30dd8c:
    // 0x30dd8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30DD90u;
    SET_GPR_U32(ctx, 31, 0x30DD98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30DD90u, 0x30DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD98u;
label_30dd98:
    // 0x30dd98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dd9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dd9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dda0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30DDA0u;
    SET_GPR_U32(ctx, 31, 0x30DDA8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30DDA0u, 0x30DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDA8u;
label_30dda8:
    // 0x30dda8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddac: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30DDACu;
    SET_GPR_U32(ctx, 31, 0x30DDB4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30DDACu, 0x30DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDB4u;
label_30ddb4:
    // 0x30ddb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddb8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ddb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ddbc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30DDBCu;
    {
        const bool branch_taken_0x30ddbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ddbc) {
            ctx->pc = 0x30DE0Cu;
            goto label_30de0c;
        }
    }
    ctx->pc = 0x30DDC4u;
    // 0x30ddc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ddc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddcc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30ddccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ddd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ddd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddd8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30ddd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dddc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dde0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dde4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dde8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ddec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30ddf4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ddf8: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30ddfc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30de00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30de00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30de04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30de08: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30de08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30de0c:
    // 0x30de0c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30de0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30de10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30de10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30de14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30de14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30de18: 0x3e00008  jr          $ra
    ctx->pc = 0x30DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DE20u;
}
