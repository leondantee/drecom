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

// Function: Pl_r1_kick
// Address: 0x1cdb90 - 0x1ce8c4
void Pl_r1_kick_0x1cdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_kick_0x1cdb90");
#endif

    switch (ctx->pc) {
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cde10u: goto label_1cde10;
        case 0x1cde34u: goto label_1cde34;
        case 0x1cde78u: goto label_1cde78;
        case 0x1cdeccu: goto label_1cdecc;
        case 0x1cdfb8u: goto label_1cdfb8;
        case 0x1ce0bcu: goto label_1ce0bc;
        case 0x1ce1c0u: goto label_1ce1c0;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2b8u: goto label_1ce2b8;
        case 0x1ce348u: goto label_1ce348;
        case 0x1ce374u: goto label_1ce374;
        case 0x1ce3a8u: goto label_1ce3a8;
        case 0x1ce3c0u: goto label_1ce3c0;
        case 0x1ce3ccu: goto label_1ce3cc;
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce3f4u: goto label_1ce3f4;
        case 0x1ce428u: goto label_1ce428;
        case 0x1ce440u: goto label_1ce440;
        case 0x1ce470u: goto label_1ce470;
        case 0x1ce4b8u: goto label_1ce4b8;
        case 0x1ce510u: goto label_1ce510;
        case 0x1ce5fcu: goto label_1ce5fc;
        case 0x1ce704u: goto label_1ce704;
        case 0x1ce80cu: goto label_1ce80c;
        default: break;
    }

    ctx->pc = 0x1cdb90u;

    // 0x1cdb90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cdb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cdb94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1cdb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1cdb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdb9c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1cdb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1cdba0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1cdba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1cdba4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1cdba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1cdba8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cdba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cdbac: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x1cdbacu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cdbb0: 0x30c50200  andi        $a1, $a2, 0x200
    ctx->pc = 0x1cdbb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x1cdbb4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDBB4u;
    {
        const bool branch_taken_0x1cdbb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdbb4) {
            ctx->pc = 0x1CDBC8u;
            goto label_1cdbc8;
        }
    }
    ctx->pc = 0x1CDBBCu;
    // 0x1cdbbc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cdbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdbc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbc4: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1cdbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1cdbc8:
    // 0x1cdbc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbcc: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cdbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cdbd0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDBD0u;
    {
        const bool branch_taken_0x1cdbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdbd0) {
            ctx->pc = 0x1CDBF8u;
            goto label_1cdbf8;
        }
    }
    ctx->pc = 0x1CDBD8u;
    // 0x1cdbd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cdbdc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cdbe0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1cdbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1cdbe4: 0x653025  or          $a2, $v1, $a1
    ctx->pc = 0x1cdbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1cdbe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cdbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cdbec: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x1cdbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cdbf0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbf4: 0xa0e01921  sb          $zero, 0x1921($a3)
    ctx->pc = 0x1cdbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1cdbf8:
    // 0x1cdbf8: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdbfc: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x1cdbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1cdc00: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1cdc00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cdc04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cdc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdc08: 0x10a301b9  beq         $a1, $v1, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1CDC08u;
    {
        const bool branch_taken_0x1cdc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cdc08) {
            ctx->pc = 0x1CE2F0u;
            goto label_1ce2f0;
        }
    }
    ctx->pc = 0x1CDC10u;
    // 0x1cdc10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdc14: 0x10a40193  beq         $a1, $a0, . + 4 + (0x193 << 2)
    ctx->pc = 0x1CDC14u;
    {
        const bool branch_taken_0x1cdc14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cdc14) {
            ctx->pc = 0x1CE264u;
            goto label_1ce264;
        }
    }
    ctx->pc = 0x1CDC1Cu;
    // 0x1cdc1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc20: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CDC20u;
    {
        const bool branch_taken_0x1cdc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cdc20) {
            ctx->pc = 0x1CDCBCu;
            goto label_1cdcbc;
        }
    }
    ctx->pc = 0x1CDC28u;
    // 0x1cdc28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDC28u;
    {
        const bool branch_taken_0x1cdc28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc28) {
            ctx->pc = 0x1CDC38u;
            goto label_1cdc38;
        }
    }
    ctx->pc = 0x1CDC30u;
    // 0x1cdc30: 0x1000031f  b           . + 4 + (0x31F << 2)
    ctx->pc = 0x1CDC30u;
    {
        const bool branch_taken_0x1cdc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc30) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CDC38u;
label_1cdc38:
    // 0x1cdc38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc3c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cdc40: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1cdc44: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1cdc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cdc48: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1cdc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cdc4c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1cdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1cdc50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cdc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cdc5c: 0x24061e88  addiu       $a2, $zero, 0x1E88
    ctx->pc = 0x1cdc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7816));
    // 0x1cdc60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cdc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cdc68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CDC68u;
    SET_GPR_U32(ctx, 31, 0x1CDC70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CDC68u, 0x1CDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC70u;
label_1cdc70:
    // 0x1cdc70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc74: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x1cdc74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1cdc78: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cdc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cdc7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc80: 0xc0c5084  jal         func_314210
    ctx->pc = 0x1CDC80u;
    SET_GPR_U32(ctx, 31, 0x1CDC88u);
    ctx->pc = 0x314210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314210u, 0x1CDC80u, 0x1CDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC88u;
label_1cdc88:
    // 0x1cdc88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc8c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1cdc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cdc90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdc94: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1cdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1cdc98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdca0: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1cdca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    // 0x1cdca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdca8: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1cdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1cdcac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcb0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cdcb4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1cdcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cdcb8: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1cdcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
label_1cdcbc:
    // 0x1cdcbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cdcc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cdcc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1cdcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cdccc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1cdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1cdcd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcd4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1cdcd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1cdcd8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1cdcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cdcdc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cdcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cdce0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CDCE0u;
    {
        const bool branch_taken_0x1cdce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdce0) {
            ctx->pc = 0x1CDD7Cu;
            goto label_1cdd7c;
        }
    }
    ctx->pc = 0x1CDCE8u;
    // 0x1cdce8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcec: 0x8c4413e8  lw          $a0, 0x13E8($v0)
    ctx->pc = 0x1cdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1cdcf0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CDCF0u;
    {
        const bool branch_taken_0x1cdcf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcf0) {
            ctx->pc = 0x1CDD50u;
            goto label_1cdd50;
        }
    }
    ctx->pc = 0x1CDCF8u;
    // 0x1cdcf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdcfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd00: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1cdd04: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1cdd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cdd08: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cdd0c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD14u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CDD0Cu, 0x1CDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD14u;
label_1cdd14:
    // 0x1cdd14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd18: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cdd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cdd1c: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1cdd20: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cdd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cdd24: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cdd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdd28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd30: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cdd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdd34: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdd38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CDD38u;
    SET_GPR_U32(ctx, 31, 0x1CDD40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CDD38u, 0x1CDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD40u;
label_1cdd40:
    // 0x1cdd40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cdd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cdd48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CDD48u;
    {
        const bool branch_taken_0x1cdd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd48) {
            ctx->pc = 0x1CDD7Cu;
            goto label_1cdd7c;
        }
    }
    ctx->pc = 0x1CDD50u;
label_1cdd50:
    // 0x1cdd50: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cdd54: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x1cdd54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cdd58: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1cdd58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdd5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd64: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1cdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdd68: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1cdd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdd6c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CDD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD74u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CDD6Cu, 0x1CDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD74u;
label_1cdd74:
    // 0x1cdd74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd78: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cdd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1cdd7c:
    // 0x1cdd7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cdd80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdd84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CDD84u;
    SET_GPR_U32(ctx, 31, 0x1CDD8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CDD84u, 0x1CDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD8Cu;
label_1cdd8c:
    // 0x1cdd8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CDD90u;
    SET_GPR_U32(ctx, 31, 0x1CDD98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CDD90u, 0x1CDD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD98u;
label_1cdd98:
    // 0x1cdd98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cdd98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cdd9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdd9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdda0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdda4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cdda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cdda8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cdda8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cddac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CDDACu;
    SET_GPR_U32(ctx, 31, 0x1CDDB4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CDDACu, 0x1CDDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDB4u;
label_1cddb4:
    // 0x1cddb4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cddb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cddb8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CDDB8u;
    SET_GPR_U32(ctx, 31, 0x1CDDC0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CDDB8u, 0x1CDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDC0u;
label_1cddc0:
    // 0x1cddc0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cddc4: 0x90e309df  lbu         $v1, 0x9DF($a3)
    ctx->pc = 0x1cddc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2527)));
    // 0x1cddc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cddc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cddcc: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1cddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1cddd0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1CDDD0u;
    {
        const bool branch_taken_0x1cddd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddd0) {
            ctx->pc = 0x1CDF40u;
            goto label_1cdf40;
        }
    }
    ctx->pc = 0x1CDDD8u;
    // 0x1cddd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdddc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cdddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdde0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cdde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdde4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cdde4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdde8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cddec: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CDDECu;
    SET_GPR_U32(ctx, 31, 0x1CDDF4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CDDECu, 0x1CDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDF4u;
label_1cddf4:
    // 0x1cddf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cddf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cddf8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cddfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde00: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x1cde00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cde04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cde04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cde08: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CDE08u;
    SET_GPR_U32(ctx, 31, 0x1CDE10u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CDE08u, 0x1CDE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE10u;
label_1cde10:
    // 0x1cde10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde18: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cde1c: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x1cde1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cde20: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cde24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cde24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cde28: 0x24479218  addiu       $a3, $v0, -0x6DE8
    ctx->pc = 0x1cde28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939160));
    // 0x1cde2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CDE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CDE2Cu, 0x1CDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE34u;
label_1cde34:
    // 0x1cde34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDE34u;
    {
        const bool branch_taken_0x1cde34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde34) {
            ctx->pc = 0x1CDE54u;
            goto label_1cde54;
        }
    }
    ctx->pc = 0x1CDE3Cu;
    // 0x1cde3c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cde3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cde40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde44: 0xa4651278  sh          $a1, 0x1278($v1)
    ctx->pc = 0x1cde44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cde48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cde4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cde50: 0xac251a68  sw          $a1, 0x1A68($at)
    ctx->pc = 0x1cde50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1cde54:
    // 0x1cde54: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cde54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde58: 0x8cc31b68  lw          $v1, 0x1B68($a2)
    ctx->pc = 0x1cde58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7016)));
    // 0x1cde5c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CDE5Cu;
    {
        const bool branch_taken_0x1cde5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde5c) {
            ctx->pc = 0x1CDEE4u;
            goto label_1cdee4;
        }
    }
    ctx->pc = 0x1CDE64u;
    // 0x1cde64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cde64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cde68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde6c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cde70: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CDE70u;
    SET_GPR_U32(ctx, 31, 0x1CDE78u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CDE70u, 0x1CDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE78u;
label_1cde78:
    // 0x1cde78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cde78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cde7c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDE7Cu;
    {
        const bool branch_taken_0x1cde7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cde7c) {
            ctx->pc = 0x1CDEE4u;
            goto label_1cdee4;
        }
    }
    ctx->pc = 0x1CDE84u;
    // 0x1cde84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cde84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cde88: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cde8c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1cde8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1cde90: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1cde90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cde94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cde94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1cde98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1cde98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1cde9c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cde9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cdea0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1cdea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cdea4: 0x34640016  ori         $a0, $v1, 0x16
    ctx->pc = 0x1cdea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22);
    // 0x1cdea8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdeac: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1cdeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cdeb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdeb4: 0x24a50220  addiu       $a1, $a1, 0x220
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
    // 0x1cdeb8: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1cdebc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1cdebcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdec0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1cdec0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdec4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CDEC4u;
    SET_GPR_U32(ctx, 31, 0x1CDECCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CDEC4u, 0x1CDECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDECCu;
label_1cdecc:
    // 0x1cdecc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cdeccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cded0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cded4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cded4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cded8: 0xac231a68  sw          $v1, 0x1A68($at)
    ctx->pc = 0x1cded8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    // 0x1cdedc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdee0: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1cdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
label_1cdee4:
    // 0x1cdee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdee8: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1cdeec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CDEECu;
    {
        const bool branch_taken_0x1cdeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdeec) {
            ctx->pc = 0x1CDF40u;
            goto label_1cdf40;
        }
    }
    ctx->pc = 0x1CDEF4u;
    // 0x1cdef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdef8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdefc: 0xac851b6c  sw          $a1, 0x1B6C($a0)
    ctx->pc = 0x1cdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 5));
    // 0x1cdf00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf04: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cdf04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cdf08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CDF08u;
    {
        const bool branch_taken_0x1cdf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf08) {
            ctx->pc = 0x1CDF40u;
            goto label_1cdf40;
        }
    }
    ctx->pc = 0x1CDF10u;
    // 0x1cdf10: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf14: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x1cdf14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1cdf18: 0x2464fed4  addiu       $a0, $v1, -0x12C
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966996));
    // 0x1cdf1c: 0xa4a415ec  sh          $a0, 0x15EC($a1)
    ctx->pc = 0x1cdf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cdf20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf24: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cdf24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cdf28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cdf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1cdf2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cdf30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDF30u;
    {
        const bool branch_taken_0x1cdf30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cdf30) {
            ctx->pc = 0x1CDF40u;
            goto label_1cdf40;
        }
    }
    ctx->pc = 0x1CDF38u;
    // 0x1cdf38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf3c: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1cdf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1cdf40:
    // 0x1cdf40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf44: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1cdf44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1cdf48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cdf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cdf4c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cdf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cdf50: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CDF50u;
    {
        const bool branch_taken_0x1cdf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf50) {
            ctx->pc = 0x1CE01Cu;
            goto label_1ce01c;
        }
    }
    ctx->pc = 0x1CDF58u;
    // 0x1cdf58: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1cdf5c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cdf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cdf60: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CDF60u;
    {
        const bool branch_taken_0x1cdf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf60) {
            ctx->pc = 0x1CE01Cu;
            goto label_1ce01c;
        }
    }
    ctx->pc = 0x1CDF68u;
    // 0x1cdf68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf6c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cdf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cdf70: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cdf74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cdf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cdf78: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cdf78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1cdf7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf80: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1cdf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdf84: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1cdf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1cdf88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdf88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdf8c: 0x0  nop
    ctx->pc = 0x1cdf8cu;
    // NOP
    // 0x1cdf90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cdf90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdf94: 0x0  nop
    ctx->pc = 0x1cdf94u;
    // NOP
    // 0x1cdf98: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1CDF98u;
    {
        const bool branch_taken_0x1cdf98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdf98) {
            ctx->pc = 0x1CE01Cu;
            goto label_1ce01c;
        }
    }
    ctx->pc = 0x1CDFA0u;
    // 0x1cdfa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdfa4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdfa8: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1cdfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdfac: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1cdfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdfb0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CDFB0u;
    SET_GPR_U32(ctx, 31, 0x1CDFB8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CDFB0u, 0x1CDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFB8u;
label_1cdfb8:
    // 0x1cdfb8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1cdfbc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cdfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdfc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdfc4: 0x0  nop
    ctx->pc = 0x1cdfc4u;
    // NOP
    // 0x1cdfc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdfcc: 0x0  nop
    ctx->pc = 0x1cdfccu;
    // NOP
    // 0x1cdfd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDFD0u;
    {
        const bool branch_taken_0x1cdfd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdfd0) {
            ctx->pc = 0x1CDFECu;
            goto label_1cdfec;
        }
    }
    ctx->pc = 0x1CDFD8u;
    // 0x1cdfd8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1cdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1cdfdc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cdfdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdfe0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdfe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cdfe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cdfe8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1cdfec:
    // 0x1cdfec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cdfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdff0: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1cdff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1cdff4: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1cdff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1cdff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdffc: 0x0  nop
    ctx->pc = 0x1cdffcu;
    // NOP
    // 0x1ce000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce004: 0x0  nop
    ctx->pc = 0x1ce004u;
    // NOP
    // 0x1ce008: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE008u;
    {
        const bool branch_taken_0x1ce008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce008) {
            ctx->pc = 0x1CE01Cu;
            goto label_1ce01c;
        }
    }
    ctx->pc = 0x1CE010u;
    // 0x1ce010: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce014: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce018: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ce018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1ce01c:
    // 0x1ce01c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce020: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1ce020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ce024: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ce024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ce028: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1ce028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ce02c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CE02Cu;
    {
        const bool branch_taken_0x1ce02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce02c) {
            ctx->pc = 0x1CE0C8u;
            goto label_1ce0c8;
        }
    }
    ctx->pc = 0x1CE034u;
    // 0x1ce034: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce038: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce03c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce040: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce044: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE044u;
    {
        const bool branch_taken_0x1ce044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce044) {
            ctx->pc = 0x1CE0B4u;
            goto label_1ce0b4;
        }
    }
    ctx->pc = 0x1CE04Cu;
    // 0x1ce04c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce050: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce054: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE054u;
    {
        const bool branch_taken_0x1ce054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce054) {
            ctx->pc = 0x1CE06Cu;
            goto label_1ce06c;
        }
    }
    ctx->pc = 0x1CE05Cu;
    // 0x1ce05c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce060: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce064: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x1CE064u;
    {
        const bool branch_taken_0x1ce064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce064) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE06Cu;
label_1ce06c:
    // 0x1ce06c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce074: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce078: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1ce078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce07c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce080: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ce080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce084: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce088: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce08c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce090: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce09c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ce0a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0a8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce0ac: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE0B4u;
label_1ce0b4:
    // 0x1ce0b4: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CE0B4u;
    SET_GPR_U32(ctx, 31, 0x1CE0BCu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CE0B4u, 0x1CE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0BCu;
label_1ce0bc:
    // 0x1ce0bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce0bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce0c0: 0x146001fb  bnez        $v1, . + 4 + (0x1FB << 2)
    ctx->pc = 0x1CE0C0u;
    {
        const bool branch_taken_0x1ce0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0c0) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE0C8u;
label_1ce0c8:
    // 0x1ce0c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0cc: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1ce0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1ce0d0: 0x106001f7  beqz        $v1, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1CE0D0u;
    {
        const bool branch_taken_0x1ce0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0d0) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE0D8u;
    // 0x1ce0d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce0e0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce0e4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ce0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce0e8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE0E8u;
    {
        const bool branch_taken_0x1ce0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0e8) {
            ctx->pc = 0x1CE158u;
            goto label_1ce158;
        }
    }
    ctx->pc = 0x1CE0F0u;
    // 0x1ce0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce0f4: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ce0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce0f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE0F8u;
    {
        const bool branch_taken_0x1ce0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0f8) {
            ctx->pc = 0x1CE110u;
            goto label_1ce110;
        }
    }
    ctx->pc = 0x1CE100u;
    // 0x1ce100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce104: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce108: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x1CE108u;
    {
        const bool branch_taken_0x1ce108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce108) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE110u;
label_1ce110:
    // 0x1ce110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce118: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce11c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce124: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ce124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce12c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce134: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce140: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ce140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ce144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce148: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce14c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ce14cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce150: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1CE150u;
    {
        const bool branch_taken_0x1ce150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce150) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE158u;
label_1ce158:
    // 0x1ce158: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce15c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce160: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ce164: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce168: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CE168u;
    {
        const bool branch_taken_0x1ce168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce168) {
            ctx->pc = 0x1CE22Cu;
            goto label_1ce22c;
        }
    }
    ctx->pc = 0x1CE170u;
    // 0x1ce170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce178: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ce178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ce17c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce180: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1ce180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce184: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce188: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1ce188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1ce18c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce190: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ce190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce198: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1ce198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1ce19c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1a0: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1ce1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce1a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1a8: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ce1ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE1ACu;
    {
        const bool branch_taken_0x1ce1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1ac) {
            ctx->pc = 0x1CE1C4u;
            goto label_1ce1c4;
        }
    }
    ctx->pc = 0x1CE1B4u;
    // 0x1ce1b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1b8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CE1B8u;
    SET_GPR_U32(ctx, 31, 0x1CE1C0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CE1B8u, 0x1CE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1C0u;
label_1ce1c0:
    // 0x1ce1c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce1c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ce1c4:
    // 0x1ce1c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce1d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ce1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce1d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ce1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce1dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1e0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ce1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce1e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce1ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ce1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ce1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1fc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce200: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce204: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce208: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce20c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce210: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ce210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce218: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ce218u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce21c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce220: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1ce220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce224: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CE224u;
    {
        const bool branch_taken_0x1ce224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce224) {
            ctx->pc = 0x1CE25Cu;
            goto label_1ce25c;
        }
    }
    ctx->pc = 0x1CE22Cu;
label_1ce22c:
    // 0x1ce22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce238: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce23c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ce23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce244: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce248: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce24c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce250: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ce254: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce258: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ce258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1ce25c:
    // 0x1ce25c: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1CE25Cu;
    {
        const bool branch_taken_0x1ce25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce25c) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE264u;
label_1ce264:
    // 0x1ce264: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce268: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ce26c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ce26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1ce270: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1ce270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ce274: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1ce274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1ce278: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ce278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ce27c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce280: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce284: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ce288: 0x24061e88  addiu       $a2, $zero, 0x1E88
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7816));
    // 0x1ce28c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce290: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ce290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ce294: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CE294u, 0x1CE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce29cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce2a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2a4: 0x90a313a5  lbu         $v1, 0x13A5($a1)
    ctx->pc = 0x1ce2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5029)));
    // 0x1ce2a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ce2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce2ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce2acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce2b0: 0xc0c5084  jal         func_314210
    ctx->pc = 0x1CE2B0u;
    SET_GPR_U32(ctx, 31, 0x1CE2B8u);
    ctx->pc = 0x314210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314210u, 0x1CE2B0u, 0x1CE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2B8u;
label_1ce2b8:
    // 0x1ce2b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce2b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce2bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2c0: 0xa4a01278  sh          $zero, 0x1278($a1)
    ctx->pc = 0x1ce2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce2c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2c8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1ce2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1ce2cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce2d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2d4: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1ce2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    // 0x1ce2d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2dc: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x1ce2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x1ce2e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2e4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1ce2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ce2e8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ce2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce2ec: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1ce2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_1ce2f0:
    // 0x1ce2f0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce2f4: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ce2f8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1ce2fc: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x1ce2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1ce300: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1ce300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1ce304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce308: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ce308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ce30c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ce30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ce310: 0x30850020  andi        $a1, $a0, 0x20
    ctx->pc = 0x1ce310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1ce314: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CE314u;
    {
        const bool branch_taken_0x1ce314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce314) {
            ctx->pc = 0x1CE3B0u;
            goto label_1ce3b0;
        }
    }
    ctx->pc = 0x1CE31Cu;
    // 0x1ce31c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce320: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1ce320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1ce324: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CE324u;
    {
        const bool branch_taken_0x1ce324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce324) {
            ctx->pc = 0x1CE384u;
            goto label_1ce384;
        }
    }
    ctx->pc = 0x1CE32Cu;
    // 0x1ce32c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce334: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1ce334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ce338: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ce33c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ce340: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CE340u;
    SET_GPR_U32(ctx, 31, 0x1CE348u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CE340u, 0x1CE348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE348u;
label_1ce348:
    // 0x1ce348: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce34c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1ce34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1ce350: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce354: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce358: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ce35c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ce35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce360: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1ce360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce364: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1ce364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce368: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1ce368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce36c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CE36Cu;
    SET_GPR_U32(ctx, 31, 0x1CE374u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CE36Cu, 0x1CE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE374u;
label_1ce374:
    // 0x1ce374: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce378: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ce378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ce37c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CE37Cu;
    {
        const bool branch_taken_0x1ce37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce37c) {
            ctx->pc = 0x1CE3B0u;
            goto label_1ce3b0;
        }
    }
    ctx->pc = 0x1CE384u;
label_1ce384:
    // 0x1ce384: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ce384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ce388: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce38c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ce38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce390: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce394: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce398: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1ce398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce39c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1ce39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce3a0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CE3A0u;
    SET_GPR_U32(ctx, 31, 0x1CE3A8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CE3A0u, 0x1CE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3A8u;
label_1ce3a8:
    // 0x1ce3a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3ac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ce3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1ce3b0:
    // 0x1ce3b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce3b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce3b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CE3B8u;
    SET_GPR_U32(ctx, 31, 0x1CE3C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CE3B8u, 0x1CE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3C0u;
label_1ce3c0:
    // 0x1ce3c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3c4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CE3C4u;
    SET_GPR_U32(ctx, 31, 0x1CE3CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CE3C4u, 0x1CE3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3CCu;
label_1ce3cc:
    // 0x1ce3cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce3ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce3d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ce3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce3d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce3d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce3dc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CE3DCu;
    SET_GPR_U32(ctx, 31, 0x1CE3E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CE3DCu, 0x1CE3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3E4u;
label_1ce3e4:
    // 0x1ce3e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ce3e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce3e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ce3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce3ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CE3ECu;
    SET_GPR_U32(ctx, 31, 0x1CE3F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CE3ECu, 0x1CE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3F4u;
label_1ce3f4:
    // 0x1ce3f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3f8: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ce3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ce3fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ce3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce400: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1ce400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1ce404: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1CE404u;
    {
        const bool branch_taken_0x1ce404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce404) {
            ctx->pc = 0x1CE584u;
            goto label_1ce584;
        }
    }
    ctx->pc = 0x1CE40Cu;
    // 0x1ce40c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce414: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ce414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce41c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce420: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CE420u;
    SET_GPR_U32(ctx, 31, 0x1CE428u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CE420u, 0x1CE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE428u;
label_1ce428:
    // 0x1ce428: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ce42c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce430: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1ce430u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce434: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce438: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CE438u;
    SET_GPR_U32(ctx, 31, 0x1CE440u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CE438u, 0x1CE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE440u;
label_1ce440:
    // 0x1ce440: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce44c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1ce44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1ce450: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce454: 0x24650680  addiu       $a1, $v1, 0x680
    ctx->pc = 0x1ce454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
    // 0x1ce458: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ce458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce45c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ce45cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce460: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce464: 0x24479218  addiu       $a3, $v0, -0x6DE8
    ctx->pc = 0x1ce464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939160));
    // 0x1ce468: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CE468u;
    SET_GPR_U32(ctx, 31, 0x1CE470u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CE468u, 0x1CE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE470u;
label_1ce470:
    // 0x1ce470: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce470u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE474u;
    {
        const bool branch_taken_0x1ce474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce474) {
            ctx->pc = 0x1CE494u;
            goto label_1ce494;
        }
    }
    ctx->pc = 0x1CE47Cu;
    // 0x1ce47c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ce47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ce480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce484: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ce484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce488: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ce488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce48c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce490: 0xac231a68  sw          $v1, 0x1A68($at)
    ctx->pc = 0x1ce490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1ce494:
    // 0x1ce494: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce498: 0x8cc31b68  lw          $v1, 0x1B68($a2)
    ctx->pc = 0x1ce498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7016)));
    // 0x1ce49c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CE49Cu;
    {
        const bool branch_taken_0x1ce49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce49c) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE4A4u;
    // 0x1ce4a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1ce4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce4b0: 0xc058c14  jal         func_163050
    ctx->pc = 0x1CE4B0u;
    SET_GPR_U32(ctx, 31, 0x1CE4B8u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1CE4B0u, 0x1CE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4B8u;
label_1ce4b8:
    // 0x1ce4b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce4bc: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE4BCu;
    {
        const bool branch_taken_0x1ce4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4bc) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE4C4u;
    // 0x1ce4c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ce4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ce4cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ce4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ce4d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ce4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ce4d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ce4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ce4d8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x1ce4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce4dc: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x1ce4dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ce4e0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1ce4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ce4e4: 0x34470016  ori         $a3, $v0, 0x16
    ctx->pc = 0x1ce4e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x1ce4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4ec: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ce4f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce4f4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ce4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ce4f8: 0x24a506a0  addiu       $a1, $a1, 0x6A0
    ctx->pc = 0x1ce4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1696));
    // 0x1ce4fc: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x1ce4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1ce500: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1ce500u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce504: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1ce504u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce508: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1CE508u;
    SET_GPR_U32(ctx, 31, 0x1CE510u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1CE508u, 0x1CE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE510u;
label_1ce510:
    // 0x1ce510: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce510u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce518: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1ce518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1ce51c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce524: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1ce524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
label_1ce528:
    // 0x1ce528: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce52c: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1ce530: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CE530u;
    {
        const bool branch_taken_0x1ce530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce530) {
            ctx->pc = 0x1CE584u;
            goto label_1ce584;
        }
    }
    ctx->pc = 0x1CE538u;
    // 0x1ce538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce53c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce540: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1ce540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1ce544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce548: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1ce548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ce54c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE54Cu;
    {
        const bool branch_taken_0x1ce54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce54c) {
            ctx->pc = 0x1CE584u;
            goto label_1ce584;
        }
    }
    ctx->pc = 0x1CE554u;
    // 0x1ce554: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce558: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x1ce558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1ce55c: 0x2464fed4  addiu       $a0, $v1, -0x12C
    ctx->pc = 0x1ce55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966996));
    // 0x1ce560: 0xa4a415ec  sh          $a0, 0x15EC($a1)
    ctx->pc = 0x1ce560u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce568: 0x846515ec  lh          $a1, 0x15EC($v1)
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ce56c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1ce56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ce570: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ce570u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ce574: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE584u;
            goto label_1ce584;
        }
    }
    ctx->pc = 0x1CE57Cu;
    // 0x1ce57c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce580: 0xa4a015ec  sh          $zero, 0x15EC($a1)
    ctx->pc = 0x1ce580u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1ce584:
    // 0x1ce584: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce588: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1ce588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1ce58c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ce58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce590: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ce590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ce594: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CE594u;
    {
        const bool branch_taken_0x1ce594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce594) {
            ctx->pc = 0x1CE660u;
            goto label_1ce660;
        }
    }
    ctx->pc = 0x1CE59Cu;
    // 0x1ce59c: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1ce59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1ce5a0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ce5a4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CE5A4u;
    {
        const bool branch_taken_0x1ce5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5a4) {
            ctx->pc = 0x1CE660u;
            goto label_1ce660;
        }
    }
    ctx->pc = 0x1CE5ACu;
    // 0x1ce5ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce5b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce5b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ce5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ce5bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ce5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1ce5c0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5c4: 0xc4a11388  lwc1        $f1, 0x1388($a1)
    ctx->pc = 0x1ce5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce5c8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1ce5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce5d0: 0x0  nop
    ctx->pc = 0x1ce5d0u;
    // NOP
    // 0x1ce5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce5d8: 0x0  nop
    ctx->pc = 0x1ce5d8u;
    // NOP
    // 0x1ce5dc: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1CE5DCu;
    {
        const bool branch_taken_0x1ce5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce5dc) {
            ctx->pc = 0x1CE660u;
            goto label_1ce660;
        }
    }
    ctx->pc = 0x1CE5E4u;
    // 0x1ce5e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5ec: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1ce5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce5f0: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1ce5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce5f4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CE5F4u;
    SET_GPR_U32(ctx, 31, 0x1CE5FCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CE5F4u, 0x1CE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5FCu;
label_1ce5fc:
    // 0x1ce5fc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ce600: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ce600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce608: 0x0  nop
    ctx->pc = 0x1ce608u;
    // NOP
    // 0x1ce60c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce610: 0x0  nop
    ctx->pc = 0x1ce610u;
    // NOP
    // 0x1ce614: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE614u;
    {
        const bool branch_taken_0x1ce614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce614) {
            ctx->pc = 0x1CE630u;
            goto label_1ce630;
        }
    }
    ctx->pc = 0x1CE61Cu;
    // 0x1ce61c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1ce61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1ce620: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce624: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce628: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce62c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1ce630:
    // 0x1ce630: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ce630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce634: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1ce638: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1ce638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1ce63c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce640: 0x0  nop
    ctx->pc = 0x1ce640u;
    // NOP
    // 0x1ce644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce648: 0x0  nop
    ctx->pc = 0x1ce648u;
    // NOP
    // 0x1ce64c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE64Cu;
    {
        const bool branch_taken_0x1ce64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce64c) {
            ctx->pc = 0x1CE660u;
            goto label_1ce660;
        }
    }
    ctx->pc = 0x1CE654u;
    // 0x1ce654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce65c: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ce65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_1ce660:
    // 0x1ce660: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce664: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ce664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ce668: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ce668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce66c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ce670: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CE670u;
    {
        const bool branch_taken_0x1ce670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce670) {
            ctx->pc = 0x1CE710u;
            goto label_1ce710;
        }
    }
    ctx->pc = 0x1CE678u;
    // 0x1ce678: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce67c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce680: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce684: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce688: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE688u;
    {
        const bool branch_taken_0x1ce688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce688) {
            ctx->pc = 0x1CE6FCu;
            goto label_1ce6fc;
        }
    }
    ctx->pc = 0x1CE690u;
    // 0x1ce690: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce694: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ce694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce698: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE698u;
    {
        const bool branch_taken_0x1ce698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce698) {
            ctx->pc = 0x1CE6B4u;
            goto label_1ce6b4;
        }
    }
    ctx->pc = 0x1CE6A0u;
    // 0x1ce6a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce6a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6a8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce6ac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1CE6ACu;
    {
        const bool branch_taken_0x1ce6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6ac) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE6B4u;
label_1ce6b4:
    // 0x1ce6b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce6b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce6c0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1ce6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce6c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6c8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ce6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce6cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce6d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce6dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6e4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ce6e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ce6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce6ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6f0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce6f4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1CE6F4u;
    {
        const bool branch_taken_0x1ce6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6f4) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE6FCu;
label_1ce6fc:
    // 0x1ce6fc: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CE6FCu;
    SET_GPR_U32(ctx, 31, 0x1CE704u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CE6FCu, 0x1CE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE704u;
label_1ce704:
    // 0x1ce704: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce708: 0x14800069  bnez        $a0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE710u;
label_1ce710:
    // 0x1ce710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce714: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ce714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ce718: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x1CE718u;
    {
        const bool branch_taken_0x1ce718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce718) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE720u;
    // 0x1ce720: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce724: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce728: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce72c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ce72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce730: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE730u;
    {
        const bool branch_taken_0x1ce730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce730) {
            ctx->pc = 0x1CE7A4u;
            goto label_1ce7a4;
        }
    }
    ctx->pc = 0x1CE738u;
    // 0x1ce738: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce73c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ce73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce740: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE740u;
    {
        const bool branch_taken_0x1ce740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce740) {
            ctx->pc = 0x1CE75Cu;
            goto label_1ce75c;
        }
    }
    ctx->pc = 0x1CE748u;
    // 0x1ce748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ce748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce74c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce750: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce754: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1CE754u;
    {
        const bool branch_taken_0x1ce754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce754) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE75Cu;
label_1ce75c:
    // 0x1ce75c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce760: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce764: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ce764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce768: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1ce768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce76c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce770: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ce770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce778: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce77c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce780: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce788: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce78c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ce790: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ce790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce794: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce798: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ce798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce79c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1CE79Cu;
    {
        const bool branch_taken_0x1ce79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce79c) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE7A4u;
label_1ce7a4:
    // 0x1ce7a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce7ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ce7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ce7b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce7b4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CE7B4u;
    {
        const bool branch_taken_0x1ce7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7b4) {
            ctx->pc = 0x1CE878u;
            goto label_1ce878;
        }
    }
    ctx->pc = 0x1CE7BCu;
    // 0x1ce7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce7c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7c4: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ce7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ce7c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7cc: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1ce7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce7d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7d4: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ce7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1ce7d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7dc: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1ce7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce7e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7e4: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1ce7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1ce7e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7ec: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1ce7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce7f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce7f4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1ce7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ce7f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7F8u;
    {
        const bool branch_taken_0x1ce7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7f8) {
            ctx->pc = 0x1CE810u;
            goto label_1ce810;
        }
    }
    ctx->pc = 0x1CE800u;
    // 0x1ce800: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce804: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CE804u;
    SET_GPR_U32(ctx, 31, 0x1CE80Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CE804u, 0x1CE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce80cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ce810:
    // 0x1ce810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce814: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce81c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce820: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ce824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce828: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce82c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce83c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ce83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ce840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce848: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce84c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce850: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce854: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce85c: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ce85cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce864: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ce864u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce868: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce86c: 0xa080156c  sb          $zero, 0x156C($a0)
    ctx->pc = 0x1ce86cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce870: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CE870u;
    {
        const bool branch_taken_0x1ce870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce870) {
            ctx->pc = 0x1CE8A8u;
            goto label_1ce8a8;
        }
    }
    ctx->pc = 0x1CE878u;
label_1ce878:
    // 0x1ce878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce87c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce880: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ce880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce888: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ce888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce88c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce890: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ce890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce898: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce89c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ce8a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce8a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1ce8a8:
    // 0x1ce8a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE8A8u;
    {
        const bool branch_taken_0x1ce8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8a8) {
            ctx->pc = 0x1CE8B0u;
            goto label_1ce8b0;
        }
    }
    ctx->pc = 0x1CE8B0u;
label_1ce8b0:
    // 0x1ce8b0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1ce8b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce8b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE8C4u;
}
