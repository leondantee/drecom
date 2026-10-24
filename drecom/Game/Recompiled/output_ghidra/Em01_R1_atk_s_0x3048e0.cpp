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

// Function: Em01_R1_atk_s
// Address: 0x3048e0 - 0x304b58
void Em01_R1_atk_s_0x3048e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_s_0x3048e0");
#endif

    switch (ctx->pc) {
        case 0x30493cu: goto label_30493c;
        case 0x3049bcu: goto label_3049bc;
        case 0x304a24u: goto label_304a24;
        case 0x304a44u: goto label_304a44;
        case 0x304ac0u: goto label_304ac0;
        case 0x304ad8u: goto label_304ad8;
        case 0x304ae4u: goto label_304ae4;
        case 0x304af4u: goto label_304af4;
        case 0x304b00u: goto label_304b00;
        default: break;
    }

    ctx->pc = 0x3048e0u;

    // 0x3048e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3048e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3048e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3048e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3048e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3048e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3048ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3048ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3048f0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x3048f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x3048f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3048f8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3048f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3048fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3048fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x304900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304904: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x304904u;
    {
        const bool branch_taken_0x304904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304904) {
            ctx->pc = 0x30495Cu;
            goto label_30495c;
        }
    }
    ctx->pc = 0x30490Cu;
    // 0x30490c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30490Cu;
    {
        const bool branch_taken_0x30490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30490c) {
            ctx->pc = 0x30491Cu;
            goto label_30491c;
        }
    }
    ctx->pc = 0x304914u;
    // 0x304914: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x304914u;
    {
        const bool branch_taken_0x304914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304914) {
            ctx->pc = 0x304B40u;
            goto label_304b40;
        }
    }
    ctx->pc = 0x30491Cu;
label_30491c:
    // 0x30491c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304920: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304924: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304928: 0x2406280e  addiu       $a2, $zero, 0x280E
    ctx->pc = 0x304928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10254));
    // 0x30492c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304930: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304934: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304934u;
    SET_GPR_U32(ctx, 31, 0x30493Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304934u, 0x30493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30493Cu;
label_30493c:
    // 0x30493c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304940: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x304944: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304948: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30494c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304950: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304958: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30495c:
    // 0x30495c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304960: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304968: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x304968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30496c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30496Cu;
    {
        const bool branch_taken_0x30496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30496c) {
            ctx->pc = 0x304A44u;
            goto label_304a44;
        }
    }
    ctx->pc = 0x304974u;
    // 0x304974: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304978: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30497c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30497Cu;
    {
        const bool branch_taken_0x30497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30497c) {
            ctx->pc = 0x304A44u;
            goto label_304a44;
        }
    }
    ctx->pc = 0x304984u;
    // 0x304984: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304988: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x30498c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x30498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304990: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304990u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399530u));
    // 0x304994: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304998: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30499c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3049a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3049a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049a4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x3049a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3049a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3049a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3049ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3049b0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x3049b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x3049b4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3049B4u;
    SET_GPR_U32(ctx, 31, 0x3049BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3049B4u, 0x3049BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049BCu;
label_3049bc:
    // 0x3049bc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3049bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3049c0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3049C0u;
    {
        const bool branch_taken_0x3049c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3049c0) {
            ctx->pc = 0x304A44u;
            goto label_304a44;
        }
    }
    ctx->pc = 0x3049C8u;
    // 0x3049c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3049c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3049ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3049d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3049d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3049d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3049d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049dc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3049dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3049e0: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x3049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x3049e4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3049e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3049e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3049e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3049ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3049f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3049f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3049f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3049f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3049f8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3049fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3049fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x304a00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x304a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x304a04: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x304a04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x304a08: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x304a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x304a0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304a10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x304a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304a14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304a18: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x304a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x304a1c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x304A1Cu;
    SET_GPR_U32(ctx, 31, 0x304A24u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x304A24u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x304A24u) { return; }
    ctx->pc = 0x304A24u;
label_304a24:
    // 0x304a24: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x304a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x304a28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x304a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x304a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304a30: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x304a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x304a34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304a38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x304a38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304a3c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x304A3Cu;
    SET_GPR_U32(ctx, 31, 0x304A44u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x304A3Cu, 0x304A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A44u;
label_304a44:
    // 0x304a44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304a48: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x304a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x304a4c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x304A4Cu;
    {
        const bool branch_taken_0x304a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a4c) {
            ctx->pc = 0x304AC8u;
            goto label_304ac8;
        }
    }
    ctx->pc = 0x304A54u;
    // 0x304a54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304a58: 0x24429540  addiu       $v0, $v0, -0x6AC0
    ctx->pc = 0x304a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939968));
    // 0x304a5c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x304a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304a60: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304a60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399540u));
    // 0x304a64: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304a64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304a68: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304a6c: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x304a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x304a70: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x304a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304a74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304a74u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399550u));
    // 0x304a78: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304a78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304a7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304a80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304a84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x304a88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304a8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304a90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304a94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304a98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x304a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304a9c: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x304a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x304aa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304aa4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304aa8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x304aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304aac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x304aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304ab0: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304ab4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x304ab4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ab8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x304AB8u;
    SET_GPR_U32(ctx, 31, 0x304AC0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x304AB8u, 0x304AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AC0u;
label_304ac0:
    // 0x304ac0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ac4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_304ac8:
    // 0x304ac8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ad0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304AD0u;
    SET_GPR_U32(ctx, 31, 0x304AD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304AD0u, 0x304AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AD8u;
label_304ad8:
    // 0x304ad8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304adc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304ADCu;
    SET_GPR_U32(ctx, 31, 0x304AE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304ADCu, 0x304AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AE4u;
label_304ae4:
    // 0x304ae4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ae8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304ae8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304aec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304AECu;
    SET_GPR_U32(ctx, 31, 0x304AF4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304AECu, 0x304AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AF4u;
label_304af4:
    // 0x304af4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304af8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304AF8u;
    SET_GPR_U32(ctx, 31, 0x304B00u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304AF8u, 0x304B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B00u;
label_304b00:
    // 0x304b00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304b08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x304B08u;
    {
        const bool branch_taken_0x304b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b08) {
            ctx->pc = 0x304B40u;
            goto label_304b40;
        }
    }
    ctx->pc = 0x304B10u;
    // 0x304b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304b14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x304b1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304b20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x304b28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x304b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x304b30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x304b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304b38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x304b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_304b40:
    // 0x304b40: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x304b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304b4c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x304b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x304b50: 0x3e00008  jr          $ra
    ctx->pc = 0x304B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304B58u;
}
