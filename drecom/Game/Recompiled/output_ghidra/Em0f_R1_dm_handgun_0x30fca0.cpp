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

// Function: Em0f_R1_dm_handgun
// Address: 0x30fca0 - 0x30fe24
void Em0f_R1_dm_handgun_0x30fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_dm_handgun_0x30fca0");
#endif

    switch (ctx->pc) {
        case 0x30fd1cu: goto label_30fd1c;
        case 0x30fd40u: goto label_30fd40;
        case 0x30fd64u: goto label_30fd64;
        case 0x30fd98u: goto label_30fd98;
        case 0x30fda4u: goto label_30fda4;
        case 0x30fdb4u: goto label_30fdb4;
        case 0x30fdc0u: goto label_30fdc0;
        default: break;
    }

    ctx->pc = 0x30fca0u;

    // 0x30fca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30fca4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30fca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30fca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30fcac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30fcb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fcb4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30fcb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fcb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30fcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30fcbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fcc0: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x30FCC0u;
    {
        const bool branch_taken_0x30fcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fcc0) {
            ctx->pc = 0x30FD88u;
            goto label_30fd88;
        }
    }
    ctx->pc = 0x30FCC8u;
    // 0x30fcc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FCC8u;
    {
        const bool branch_taken_0x30fcc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fcc8) {
            ctx->pc = 0x30FCD8u;
            goto label_30fcd8;
        }
    }
    ctx->pc = 0x30FCD0u;
    // 0x30fcd0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x30FCD0u;
    {
        const bool branch_taken_0x30fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fcd0) {
            ctx->pc = 0x30FE10u;
            goto label_30fe10;
        }
    }
    ctx->pc = 0x30FCD8u;
label_30fcd8:
    // 0x30fcd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fcdc: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x30fcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x30fce0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30fce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30fce4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30fce8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30FCE8u;
    {
        const bool branch_taken_0x30fce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30fce8) {
            ctx->pc = 0x30FD2Cu;
            goto label_30fd2c;
        }
    }
    ctx->pc = 0x30FCF0u;
    // 0x30fcf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fcf4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x30fcf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x30fcf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30fcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30fcfc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x30fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x30fd00: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30FD00u;
    {
        const bool branch_taken_0x30fd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30fd00) {
            ctx->pc = 0x30FD2Cu;
            goto label_30fd2c;
        }
    }
    ctx->pc = 0x30FD08u;
    // 0x30fd08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30fd0c: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x30fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30fd10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd14: 0xc05cd90  jal         func_173640
    ctx->pc = 0x30FD14u;
    SET_GPR_U32(ctx, 31, 0x30FD1Cu);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x30FD14u, 0x30FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD1Cu;
label_30fd1c:
    // 0x30fd1c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x30fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x30fd20: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30fd24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FD24u;
    {
        const bool branch_taken_0x30fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd24) {
            ctx->pc = 0x30FD44u;
            goto label_30fd44;
        }
    }
    ctx->pc = 0x30FD2Cu;
label_30fd2c:
    // 0x30fd2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30fd30: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x30fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30fd34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd38: 0xc05cd90  jal         func_173640
    ctx->pc = 0x30FD38u;
    SET_GPR_U32(ctx, 31, 0x30FD40u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x30FD38u, 0x30FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD40u;
label_30fd40:
    // 0x30fd40: 0x24500016  addiu       $s0, $v0, 0x16
    ctx->pc = 0x30fd40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
label_30fd44:
    // 0x30fd44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd48: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x30fd48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30fd4c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd50: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30fd54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fd58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30fd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fd5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FD5Cu;
    SET_GPR_U32(ctx, 31, 0x30FD64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FD5Cu, 0x30FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD64u;
label_30fd64:
    // 0x30fd64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd68: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30fd68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fd6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x30fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30fd70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd74: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x30fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fd78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30fd7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fd80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fd84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30fd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30fd88:
    // 0x30fd88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fd8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fd90: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FD90u;
    SET_GPR_U32(ctx, 31, 0x30FD98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FD90u, 0x30FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD98u;
label_30fd98:
    // 0x30fd98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd9c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FD9Cu;
    SET_GPR_U32(ctx, 31, 0x30FDA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FD9Cu, 0x30FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDA4u;
label_30fda4:
    // 0x30fda4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fda8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fda8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fdac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FDACu;
    SET_GPR_U32(ctx, 31, 0x30FDB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FDACu, 0x30FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDB4u;
label_30fdb4:
    // 0x30fdb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdb8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FDB8u;
    SET_GPR_U32(ctx, 31, 0x30FDC0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FDB8u, 0x30FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDC0u;
label_30fdc0:
    // 0x30fdc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdc4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x30fdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x30fdc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30fdcc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x30fdccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30fdd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdd4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30fdd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30fdd8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30FDD8u;
    {
        const bool branch_taken_0x30fdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fdd8) {
            ctx->pc = 0x30FE10u;
            goto label_30fe10;
        }
    }
    ctx->pc = 0x30FDE0u;
    // 0x30fde0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fde4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fde8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30fde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fdec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fdf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdf4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30fdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fdf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30fdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fe00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30fe04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fe08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30fe10:
    // 0x30fe10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30fe10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fe14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30fe14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fe18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30fe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE24u;
}
