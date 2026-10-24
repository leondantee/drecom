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

// Function: shooting_em_move00
// Address: 0x29ccf0 - 0x29ce78
void shooting_em_move00_0x29ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("shooting_em_move00_0x29ccf0");
#endif

    switch (ctx->pc) {
        case 0x29cd08u: goto label_29cd08;
        case 0x29ce4cu: goto label_29ce4c;
        case 0x29ce64u: goto label_29ce64;
        default: break;
    }

    ctx->pc = 0x29ccf0u;

    // 0x29ccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ccf4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29ccf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ccfc: 0x241000c8  addiu       $s0, $zero, 0xC8
    ctx->pc = 0x29ccfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29cd00: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x29CD00u;
    {
        const bool branch_taken_0x29cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd00) {
            ctx->pc = 0x29CE50u;
            goto label_29ce50;
        }
    }
    ctx->pc = 0x29CD08u;
label_29cd08:
    // 0x29cd08: 0x240201eb  addiu       $v0, $zero, 0x1EB
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    // 0x29cd0c: 0x12020045  beq         $s0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x29CD0Cu;
    {
        const bool branch_taken_0x29cd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd0c) {
            ctx->pc = 0x29CE24u;
            goto label_29ce24;
        }
    }
    ctx->pc = 0x29CD14u;
    // 0x29cd14: 0x240201ea  addiu       $v0, $zero, 0x1EA
    ctx->pc = 0x29cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x29cd18: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x29CD18u;
    {
        const bool branch_taken_0x29cd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd18) {
            ctx->pc = 0x29CE04u;
            goto label_29ce04;
        }
    }
    ctx->pc = 0x29CD20u;
    // 0x29cd20: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x29cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x29cd24: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x29CD24u;
    {
        const bool branch_taken_0x29cd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd24) {
            ctx->pc = 0x29CDE4u;
            goto label_29cde4;
        }
    }
    ctx->pc = 0x29CD2Cu;
    // 0x29cd2c: 0x24020127  addiu       $v0, $zero, 0x127
    ctx->pc = 0x29cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x29cd30: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29CD30u;
    {
        const bool branch_taken_0x29cd30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd30) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CD38u;
    // 0x29cd38: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x29cd3c: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29CD3Cu;
    {
        const bool branch_taken_0x29cd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd3c) {
            ctx->pc = 0x29CDA4u;
            goto label_29cda4;
        }
    }
    ctx->pc = 0x29CD44u;
    // 0x29cd44: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x29cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29cd48: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29CD48u;
    {
        const bool branch_taken_0x29cd48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd48) {
            ctx->pc = 0x29CD84u;
            goto label_29cd84;
        }
    }
    ctx->pc = 0x29CD50u;
    // 0x29cd50: 0x240200eb  addiu       $v0, $zero, 0xEB
    ctx->pc = 0x29cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x29cd54: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CD54u;
    {
        const bool branch_taken_0x29cd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd54) {
            ctx->pc = 0x29CD64u;
            goto label_29cd64;
        }
    }
    ctx->pc = 0x29CD5Cu;
    // 0x29cd5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x29CD5Cu;
    {
        const bool branch_taken_0x29cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd5c) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CD64u;
label_29cd64:
    // 0x29cd64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cd68: 0x8c24bb48  lw          $a0, -0x44B8($at)
    ctx->pc = 0x29cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB48u));
    // 0x29cd6c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cd70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cd74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cd78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cd7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x29CD7Cu;
    {
        const bool branch_taken_0x29cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd7c) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CD84u;
label_29cd84:
    // 0x29cd84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cd88: 0x8c24bb4c  lw          $a0, -0x44B4($at)
    ctx->pc = 0x29cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x29cd8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cd90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cd94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cd98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cd9c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x29CD9Cu;
    {
        const bool branch_taken_0x29cd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd9c) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CDA4u;
label_29cda4:
    // 0x29cda4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cda8: 0x8c24bb50  lw          $a0, -0x44B0($at)
    ctx->pc = 0x29cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB50u));
    // 0x29cdac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cdb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cdb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cdb8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cdbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x29CDBCu;
    {
        const bool branch_taken_0x29cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cdbc) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CDC4u;
label_29cdc4:
    // 0x29cdc4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cdc8: 0x8c24bb54  lw          $a0, -0x44AC($at)
    ctx->pc = 0x29cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB54u));
    // 0x29cdcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cdd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cdd4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cdd8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cddc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29CDDCu;
    {
        const bool branch_taken_0x29cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cddc) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CDE4u;
label_29cde4:
    // 0x29cde4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29cde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29cde8: 0x8c24bb58  lw          $a0, -0x44A8($at)
    ctx->pc = 0x29cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB58u));
    // 0x29cdec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cdf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29cdf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29cdf8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29cdfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29CDFCu;
    {
        const bool branch_taken_0x29cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cdfc) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CE04u;
label_29ce04:
    // 0x29ce04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29ce04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29ce08: 0x8c24bb5c  lw          $a0, -0x44A4($at)
    ctx->pc = 0x29ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47BB5Cu));
    // 0x29ce0c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29ce10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29ce14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29ce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29ce18: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29ce1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29CE1Cu;
    {
        const bool branch_taken_0x29ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce1c) {
            ctx->pc = 0x29CE40u;
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CE24u;
label_29ce24:
    // 0x29ce24: 0x3c024466  lui         $v0, 0x4466
    ctx->pc = 0x29ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17510 << 16));
    // 0x29ce28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ce2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ce30: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29ce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29ce34: 0x8c22bb5c  lw          $v0, -0x44A4($at)
    ctx->pc = 0x29ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB5Cu));
    // 0x29ce38: 0xe44012b0  swc1        $f0, 0x12B0($v0)
    ctx->pc = 0x29ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4784), bits); }
    // 0x29ce3c: 0x0  nop
    ctx->pc = 0x29ce3cu;
    // NOP
label_29ce40:
    // 0x29ce40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ce44: 0xc084964  jal         func_212590
    ctx->pc = 0x29CE44u;
    SET_GPR_U32(ctx, 31, 0x29CE4Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x29CE44u, 0x29CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE4Cu;
label_29ce4c:
    // 0x29ce4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ce4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ce50:
    // 0x29ce50: 0x2e020320  sltiu       $v0, $s0, 0x320
    ctx->pc = 0x29ce50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)800) ? 1 : 0);
    // 0x29ce54: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x29CE54u;
    {
        const bool branch_taken_0x29ce54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce54) {
            ctx->pc = 0x29CD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CE5Cu;
    // 0x29ce5c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x29CE5Cu;
    SET_GPR_U32(ctx, 31, 0x29CE64u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x29CE5Cu, 0x29CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE64u;
label_29ce64:
    // 0x29ce64: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29ce64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ce68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ce68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ce6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29ce6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29ce70: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE78u;
}
