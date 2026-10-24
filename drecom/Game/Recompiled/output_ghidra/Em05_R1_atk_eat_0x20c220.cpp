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

// Function: Em05_R1_atk_eat
// Address: 0x20c220 - 0x20c780
void Em05_R1_atk_eat_0x20c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_atk_eat_0x20c220");
#endif

    switch (ctx->pc) {
        case 0x20c280u: goto label_20c280;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c318u: goto label_20c318;
        case 0x20c328u: goto label_20c328;
        case 0x20c340u: goto label_20c340;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c408u: goto label_20c408;
        case 0x20c440u: goto label_20c440;
        case 0x20c450u: goto label_20c450;
        case 0x20c460u: goto label_20c460;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c510u: goto label_20c510;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c560u: goto label_20c560;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c590u: goto label_20c590;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5e8u: goto label_20c5e8;
        case 0x20c5fcu: goto label_20c5fc;
        case 0x20c60cu: goto label_20c60c;
        case 0x20c61cu: goto label_20c61c;
        case 0x20c628u: goto label_20c628;
        default: break;
    }

    ctx->pc = 0x20c220u;

    // 0x20c220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20c224: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x20c224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20c228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c22c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x20c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x20c230: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20c234: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x20c234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x20c238: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c23c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20c23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20c240: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20c240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20c244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c248: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x20C248u;
    {
        const bool branch_taken_0x20c248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c248) {
            ctx->pc = 0x20C350u;
            goto label_20c350;
        }
    }
    ctx->pc = 0x20C250u;
    // 0x20c250: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C250u;
    {
        const bool branch_taken_0x20c250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c250) {
            ctx->pc = 0x20C260u;
            goto label_20c260;
        }
    }
    ctx->pc = 0x20C258u;
    // 0x20c258: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x20C258u;
    {
        const bool branch_taken_0x20c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c258) {
            ctx->pc = 0x20C76Cu;
            goto label_20c76c;
        }
    }
    ctx->pc = 0x20C260u;
label_20c260:
    // 0x20c260: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c264: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x20c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x20c268: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20c268u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c26c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c270: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c274: 0x2445a100  addiu       $a1, $v0, -0x5F00
    ctx->pc = 0x20c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942976));
    // 0x20c278: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20C278u;
    SET_GPR_U32(ctx, 31, 0x20C280u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20C278u, 0x20C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C280u;
label_20c280:
    // 0x20c280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c284: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C284u;
    {
        const bool branch_taken_0x20c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c284) {
            ctx->pc = 0x20C2A0u;
            goto label_20c2a0;
        }
    }
    ctx->pc = 0x20C28Cu;
    // 0x20c28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c290: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C2A0u;
            goto label_20c2a0;
        }
    }
    ctx->pc = 0x20C298u;
    // 0x20c298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20C298u;
    {
        const bool branch_taken_0x20c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c298) {
            ctx->pc = 0x20C2D4u;
            goto label_20c2d4;
        }
    }
    ctx->pc = 0x20C2A0u;
label_20c2a0:
    // 0x20c2a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2a8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20c2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c2ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20c2b8: 0x24060a13  addiu       $a2, $zero, 0xA13
    ctx->pc = 0x20c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2579));
    // 0x20c2bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20c2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c2c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20C2C4u;
    SET_GPR_U32(ctx, 31, 0x20C2CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20C2C4u, 0x20C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2CCu;
label_20c2cc:
    // 0x20c2cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20C2CCu;
    {
        const bool branch_taken_0x20c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2cc) {
            ctx->pc = 0x20C2FCu;
            goto label_20c2fc;
        }
    }
    ctx->pc = 0x20C2D4u;
label_20c2d4:
    // 0x20c2d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2d8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c2dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20c2e8: 0x24060a22  addiu       $a2, $zero, 0xA22
    ctx->pc = 0x20c2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2594));
    // 0x20c2ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20c2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20c2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c2f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20C2F4u;
    SET_GPR_U32(ctx, 31, 0x20C2FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20C2F4u, 0x20C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2FCu;
label_20c2fc:
    // 0x20c2fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c300: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c300u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c308: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c30c: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x20c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20c310: 0xc096c60  jal         func_25B180
    ctx->pc = 0x20C310u;
    SET_GPR_U32(ctx, 31, 0x20C318u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x20C310u, 0x20C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C318u;
label_20c318:
    // 0x20c318: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x20c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20c31c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20c320: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C320u;
    SET_GPR_U32(ctx, 31, 0x20C328u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C328u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C328u) { return; }
    ctx->pc = 0x20C328u;
label_20c328:
    // 0x20c328: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c32c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c330: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c334: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c338: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C338u;
    SET_GPR_U32(ctx, 31, 0x20C340u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C340u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C340u) { return; }
    ctx->pc = 0x20C340u;
label_20c340:
    // 0x20c340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c344: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20c344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20c348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c34c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20c34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20c350:
    // 0x20c350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c354: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c35c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20c360: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C360u;
    {
        const bool branch_taken_0x20c360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c360) {
            ctx->pc = 0x20C3B8u;
            goto label_20c3b8;
        }
    }
    ctx->pc = 0x20C368u;
    // 0x20c368: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c36c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c370: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c374: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20c378: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20C378u;
    {
        const bool branch_taken_0x20c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c378) {
            ctx->pc = 0x20C3B8u;
            goto label_20c3b8;
        }
    }
    ctx->pc = 0x20C380u;
    // 0x20c380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20c384: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20c388: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20c388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20c38c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C390u;
    {
        const bool branch_taken_0x20c390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c390) {
            ctx->pc = 0x20C3A8u;
            goto label_20c3a8;
        }
    }
    ctx->pc = 0x20C398u;
    // 0x20c398: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c39c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20c3a0: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20C3A0u;
    SET_GPR_U32(ctx, 31, 0x20C3A8u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20C3A0u, 0x20C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3A8u;
label_20c3a8:
    // 0x20c3a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3ac: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c3b0: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C3B0u;
    SET_GPR_U32(ctx, 31, 0x20C3B8u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C3B0u, 0x20C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3B8u;
label_20c3b8:
    // 0x20c3b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3bc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20c3bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20c3c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20c3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20c3c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c3c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c3c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c3cc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C3CCu;
    {
        const bool branch_taken_0x20c3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c3cc) {
            ctx->pc = 0x20C3F8u;
            goto label_20c3f8;
        }
    }
    ctx->pc = 0x20C3D4u;
    // 0x20c3d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20C3D4u;
    SET_GPR_U32(ctx, 31, 0x20C3DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20C3D4u, 0x20C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3DCu;
label_20c3dc:
    // 0x20c3dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c3e0: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20c3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20c3e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3e8: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20C3E8u;
    SET_GPR_U32(ctx, 31, 0x20C3F0u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20C3E8u, 0x20C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3F0u;
label_20c3f0:
    // 0x20c3f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3f4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20c3f8:
    // 0x20c3f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c3fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c400: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20C400u;
    SET_GPR_U32(ctx, 31, 0x20C408u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20C400u, 0x20C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C408u;
label_20c408:
    // 0x20c408: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c40c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20c40cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20c410: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x20C410u;
    {
        const bool branch_taken_0x20c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c410) {
            ctx->pc = 0x20C5F0u;
            goto label_20c5f0;
        }
    }
    ctx->pc = 0x20C418u;
    // 0x20c418: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c41c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c424: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20c428: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20C428u;
    {
        const bool branch_taken_0x20c428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c428) {
            ctx->pc = 0x20C460u;
            goto label_20c460;
        }
    }
    ctx->pc = 0x20C430u;
    // 0x20c430: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x20c430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20c434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c438: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C438u;
    SET_GPR_U32(ctx, 31, 0x20C440u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C438u, 0x20C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C440u;
label_20c440:
    // 0x20c440: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20c444: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20c444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20c448: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20C448u;
    SET_GPR_U32(ctx, 31, 0x20C450u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20C448u, 0x20C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C450u;
label_20c450:
    // 0x20c450: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20c450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20c454: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20c454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20c458: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20C458u;
    SET_GPR_U32(ctx, 31, 0x20C460u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20C458u, 0x20C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C460u;
label_20c460:
    // 0x20c460: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c464: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c46c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20c470: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C470u;
    {
        const bool branch_taken_0x20c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c470) {
            ctx->pc = 0x20C4E8u;
            goto label_20c4e8;
        }
    }
    ctx->pc = 0x20C478u;
    // 0x20c478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c47c: 0x0  nop
    ctx->pc = 0x20c47cu;
    // NOP
    // 0x20c480: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20c480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20c484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c488: 0x0  nop
    ctx->pc = 0x20c488u;
    // NOP
    // 0x20c48c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20c48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20c490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c494: 0x0  nop
    ctx->pc = 0x20c494u;
    // NOP
    // 0x20c498: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20c49c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20c4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c4a4: 0x0  nop
    ctx->pc = 0x20c4a4u;
    // NOP
    // 0x20c4a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20c4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20c4ac: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x20c4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x20c4b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20c4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20c4b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20c4b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x20c4bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20c4c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c4c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20c4c8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x20c4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x20c4cc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20c4d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20c4d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20c4d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c4d8: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x20c4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x20c4dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20c4dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c4e0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x20C4E0u;
    SET_GPR_U32(ctx, 31, 0x20C4E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x20C4E0u, 0x20C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4E8u;
label_20c4e8:
    // 0x20c4e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c4ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c4f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20c4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20c4f8: 0x248412a0  addiu       $a0, $a0, 0x12A0
    ctx->pc = 0x20c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
    // 0x20c4fc: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x20c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20c500: 0x246612b0  addiu       $a2, $v1, 0x12B0
    ctx->pc = 0x20c500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
    // 0x20c504: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20c504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c508: 0xc05ce04  jal         func_173810
    ctx->pc = 0x20C508u;
    SET_GPR_U32(ctx, 31, 0x20C510u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x20C508u, 0x20C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C510u;
label_20c510:
    // 0x20c510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c514: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20c514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20c518: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20c51c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20c520: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20c520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20c524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c528: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c52c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x20c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c530: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x20c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20c534: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20C534u;
    SET_GPR_U32(ctx, 31, 0x20C53Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20C534u, 0x20C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c540: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20c544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c54c: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c550: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20c550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20c554: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c558: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20C558u;
    SET_GPR_U32(ctx, 31, 0x20C560u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20C558u, 0x20C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C560u;
label_20c560:
    // 0x20c560: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c564: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c568: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20c56c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c570: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c574: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20C574u;
    SET_GPR_U32(ctx, 31, 0x20C57Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20C574u, 0x20C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c580: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c584: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c588: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20C588u;
    SET_GPR_U32(ctx, 31, 0x20C590u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20C588u, 0x20C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c594: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c598: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c59c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C59Cu;
    SET_GPR_U32(ctx, 31, 0x20C5A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C5A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C5A4u) { return; }
    ctx->pc = 0x20C5A4u;
label_20c5a4:
    // 0x20c5a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c5ac: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20C5ACu;
    SET_GPR_U32(ctx, 31, 0x20C5B4u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20C5ACu, 0x20C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5B4u;
label_20c5b4:
    // 0x20c5b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c5bc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c5c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c5c4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20C5C4u;
    SET_GPR_U32(ctx, 31, 0x20C5CCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20C5C4u, 0x20C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5CCu;
label_20c5cc:
    // 0x20c5cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5d4: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c5d8: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20c5dc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c5e0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20C5E0u;
    SET_GPR_U32(ctx, 31, 0x20C5E8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20C5E0u, 0x20C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5E8u;
label_20c5e8:
    // 0x20c5e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C5E8u;
    {
        const bool branch_taken_0x20c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5e8) {
            ctx->pc = 0x20C60Cu;
            goto label_20c60c;
        }
    }
    ctx->pc = 0x20C5F0u;
label_20c5f0:
    // 0x20c5f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5f4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20C5F4u;
    SET_GPR_U32(ctx, 31, 0x20C5FCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20C5F4u, 0x20C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5FCu;
label_20c5fc:
    // 0x20c5fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c604: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20C604u;
    SET_GPR_U32(ctx, 31, 0x20C60Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20C604u, 0x20C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C60Cu;
label_20c60c:
    // 0x20c60c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c610: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c614: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20C614u;
    SET_GPR_U32(ctx, 31, 0x20C61Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20C614u, 0x20C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C61Cu;
label_20c61c:
    // 0x20c61c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c620: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20C620u;
    SET_GPR_U32(ctx, 31, 0x20C628u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20C620u, 0x20C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C628u;
label_20c628:
    // 0x20c628: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c62c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20c62cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20c630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c634: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20c634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c638: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c63c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20c63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20c640: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x20C640u;
    {
        const bool branch_taken_0x20c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c640) {
            ctx->pc = 0x20C76Cu;
            goto label_20c76c;
        }
    }
    ctx->pc = 0x20C648u;
    // 0x20c648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c64c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c650: 0x8c631310  lw          $v1, 0x1310($v1)
    ctx->pc = 0x20c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x20c654: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x20c654u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x20c658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c65c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x20c65cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x20c660: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C660u;
    {
        const bool branch_taken_0x20c660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c660) {
            ctx->pc = 0x20C67Cu;
            goto label_20c67c;
        }
    }
    ctx->pc = 0x20C668u;
    // 0x20c668: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x20c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x20c66c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c670: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20c670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    // 0x20c674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20C674u;
    {
        const bool branch_taken_0x20c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c674) {
            ctx->pc = 0x20C688u;
            goto label_20c688;
        }
    }
    ctx->pc = 0x20C67Cu;
label_20c67c:
    // 0x20c67c: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x20c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20c680: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c684: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20c684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
label_20c688:
    // 0x20c688: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20c688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20c68c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20c690: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20c690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20c694: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20c69c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20c69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20c6a0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20c6a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20c6a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x20c6ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20c6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20c6b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c6b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20c6b8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x20c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x20c6bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x20c6c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20c6c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20c6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20c6c8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x20c6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20c6cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20c6d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x20c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x20c6d4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C6D4u;
    {
        const bool branch_taken_0x20c6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c6d4) {
            ctx->pc = 0x20C728u;
            goto label_20c728;
        }
    }
    ctx->pc = 0x20C6DCu;
    // 0x20c6dc: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x20c6e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20c6e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c6e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c6ec: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x20c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x20c6f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c6f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c6f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20c6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c6fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c704: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20c704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c70c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20c70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c714: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20c714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c71c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20c720: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20C720u;
    {
        const bool branch_taken_0x20c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c720) {
            ctx->pc = 0x20C76Cu;
            goto label_20c76c;
        }
    }
    ctx->pc = 0x20C728u;
label_20c728:
    // 0x20c728: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x20c728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x20c72c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20c730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c734: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c738: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x20c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x20c73c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c744: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20c744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c748: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20c74c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c750: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20c750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c754: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c758: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20c758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c75c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c760: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20c760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c764: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c768: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20c768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20c76c:
    // 0x20c76c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x20c76cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c774: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20c774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20c778: 0x3e00008  jr          $ra
    ctx->pc = 0x20C778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C780u;
}
