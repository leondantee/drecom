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

// Function: Em0b_R1_br_mv02
// Address: 0x1edad0 - 0x1ee13c
void Em0b_R1_br_mv02_0x1edad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_br_mv02_0x1edad0");
#endif

    switch (ctx->pc) {
        case 0x1edb34u: goto label_1edb34;
        case 0x1edbacu: goto label_1edbac;
        case 0x1edc40u: goto label_1edc40;
        case 0x1edc64u: goto label_1edc64;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edda4u: goto label_1edda4;
        case 0x1ede70u: goto label_1ede70;
        case 0x1edf14u: goto label_1edf14;
        default: break;
    }

    ctx->pc = 0x1edad0u;

    // 0x1edad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1edad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1edad4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1edad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1edad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edae0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1edae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1edae4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1edae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1edae8: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x1edae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1edaec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edaf0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1edaf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1edaf4: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x1EDAF4u;
    {
        const bool branch_taken_0x1edaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edaf4) {
            ctx->pc = 0x1EDD1Cu;
            goto label_1edd1c;
        }
    }
    ctx->pc = 0x1EDAFCu;
    // 0x1edafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb04: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1edb04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edb08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb10: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1edb10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edb14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb18: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1edb18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edb1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb20: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1edb20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edb24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1edb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1edb2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDB2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDB34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDB2Cu, 0x1EDB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB34u;
label_1edb34:
    // 0x1edb34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1edb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edb38: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1edb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1edb3c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1edb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1edb40: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1edb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1edb44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edb44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edb48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb4c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1edb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1edb50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb54: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1edb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edb58: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1edb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1edb5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edb60: 0x0  nop
    ctx->pc = 0x1edb60u;
    // NOP
    // 0x1edb64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edb68: 0x0  nop
    ctx->pc = 0x1edb68u;
    // NOP
    // 0x1edb6c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EDB6Cu;
    {
        const bool branch_taken_0x1edb6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edb6c) {
            ctx->pc = 0x1EDBC8u;
            goto label_1edbc8;
        }
    }
    ctx->pc = 0x1EDB74u;
    // 0x1edb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edb78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb7c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1edb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edb80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1edb84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb88: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1edb88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edb8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1edb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edb94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edb98: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1edb98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edb9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edba0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1edba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1edba4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDBA4u;
    SET_GPR_U32(ctx, 31, 0x1EDBACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDBA4u, 0x1EDBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBACu;
label_1edbac:
    // 0x1edbac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1edbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edbb0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1edbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1edbb4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1edbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1edbb8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1edbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1edbbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edbbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edbc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edbc4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1edbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1edbc8:
    // 0x1edbc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edbcc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1edbccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1edbd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1edbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1edbd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1edbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1edbd8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EDBD8u;
    {
        const bool branch_taken_0x1edbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbd8) {
            ctx->pc = 0x1EDC5Cu;
            goto label_1edc5c;
        }
    }
    ctx->pc = 0x1EDBE0u;
    // 0x1edbe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edbe4: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x1edbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edbe8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1edbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1edbec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1edbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1edbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edbf4: 0x0  nop
    ctx->pc = 0x1edbf4u;
    // NOP
    // 0x1edbf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edbf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edbfc: 0x0  nop
    ctx->pc = 0x1edbfcu;
    // NOP
    // 0x1edc00: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EDC00u;
    {
        const bool branch_taken_0x1edc00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edc00) {
            ctx->pc = 0x1EDC5Cu;
            goto label_1edc5c;
        }
    }
    ctx->pc = 0x1EDC08u;
    // 0x1edc08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1edc10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc1c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1edc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc24: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1edc24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1edc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1edc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1edc38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDC38u;
    SET_GPR_U32(ctx, 31, 0x1EDC40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDC38u, 0x1EDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC40u;
label_1edc40:
    // 0x1edc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1edc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edc44: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1edc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1edc48: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1edc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1edc4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1edc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1edc50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edc50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edc54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc58: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1edc58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1edc5c:
    // 0x1edc5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDC5Cu, 0x1EDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC64u;
label_1edc64:
    // 0x1edc64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1edc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edc68: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1edc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1edc6c: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1EDC6Cu;
    {
        const bool branch_taken_0x1edc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc6c) {
            ctx->pc = 0x1EDD2Cu;
            goto label_1edd2c;
        }
    }
    ctx->pc = 0x1EDC74u;
    // 0x1edc74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc7c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1edc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edc84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc88: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1edc88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1edc90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc98: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1edc98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edca0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1edca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1edca4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDCA4u;
    SET_GPR_U32(ctx, 31, 0x1EDCACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDCA4u, 0x1EDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCACu;
label_1edcac:
    // 0x1edcac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1edcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edcb0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1edcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1edcb4: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1edcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1edcb8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1edcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1edcbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edcbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edcc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edcc4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1edcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1edcc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDCC8u;
    SET_GPR_U32(ctx, 31, 0x1EDCD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDCC8u, 0x1EDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCD0u;
label_1edcd0:
    // 0x1edcd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1edcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edcd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1edcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1edcd8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDCD8u;
    {
        const bool branch_taken_0x1edcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edcd8) {
            ctx->pc = 0x1EDD2Cu;
            goto label_1edd2c;
        }
    }
    ctx->pc = 0x1EDCE0u;
    // 0x1edce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1edce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edce8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edcec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1edcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edcf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edcf4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edcf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1edcfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd00: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1edd00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edd04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1edd08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edd0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1edd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1edd14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDD14u;
    {
        const bool branch_taken_0x1edd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd14) {
            ctx->pc = 0x1EDD2Cu;
            goto label_1edd2c;
        }
    }
    ctx->pc = 0x1EDD1Cu;
label_1edd1c:
    // 0x1edd1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1edd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd20: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1edd24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1edd28: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1edd28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1edd2c:
    // 0x1edd2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edd30: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1edd30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1edd34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1edd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1edd38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1edd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1edd3c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EDD3Cu;
    {
        const bool branch_taken_0x1edd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd3c) {
            ctx->pc = 0x1EDE18u;
            goto label_1ede18;
        }
    }
    ctx->pc = 0x1EDD44u;
    // 0x1edd44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edd4c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1edd4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1edd50: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EDD50u;
    {
        const bool branch_taken_0x1edd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd50) {
            ctx->pc = 0x1EDE04u;
            goto label_1ede04;
        }
    }
    ctx->pc = 0x1EDD58u;
    // 0x1edd58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd5c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1edd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edd60: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1edd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1edd64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edd68: 0x0  nop
    ctx->pc = 0x1edd68u;
    // NOP
    // 0x1edd6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edd6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edd70: 0x0  nop
    ctx->pc = 0x1edd70u;
    // NOP
    // 0x1edd74: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1EDD74u;
    {
        const bool branch_taken_0x1edd74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edd74) {
            ctx->pc = 0x1EDE04u;
            goto label_1ede04;
        }
    }
    ctx->pc = 0x1EDD7Cu;
    // 0x1edd7c: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x1edd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
    // 0x1edd80: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1edd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1edd84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1edd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1edd88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd90: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1edd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1edd94: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1edd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1edd98: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1edd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1edd9c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1EDD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDDA4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1EDD9Cu, 0x1EDDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDA4u;
label_1edda4:
    // 0x1edda4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EDDA4u;
    {
        const bool branch_taken_0x1edda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edda4) {
            ctx->pc = 0x1EDE04u;
            goto label_1ede04;
        }
    }
    ctx->pc = 0x1EDDACu;
    // 0x1eddac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eddb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eddb4: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1eddb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eddb8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EDDB8u;
    {
        const bool branch_taken_0x1eddb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddb8) {
            ctx->pc = 0x1EDE04u;
            goto label_1ede04;
        }
    }
    ctx->pc = 0x1EDDC0u;
    // 0x1eddc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eddc4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1eddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1eddc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1eddc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1eddcc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDDCCu;
    {
        const bool branch_taken_0x1eddcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddcc) {
            ctx->pc = 0x1EDE04u;
            goto label_1ede04;
        }
    }
    ctx->pc = 0x1EDDD4u;
    // 0x1eddd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eddd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edddc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edde0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1edde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edde4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edde8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eddec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eddf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eddf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eddf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eddf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eddfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ede00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ede04:
    // 0x1ede04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ede04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ede08: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x1ede08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1ede0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ede10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1ede10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1ede14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ede14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1ede18:
    // 0x1ede18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ede18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ede1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ede20: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1ede20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1ede24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ede24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ede28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ede28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ede2c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1ede2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1ede30: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EDE30u;
    {
        const bool branch_taken_0x1ede30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ede30) {
            ctx->pc = 0x1EDE9Cu;
            goto label_1ede9c;
        }
    }
    ctx->pc = 0x1EDE38u;
    // 0x1ede38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ede40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ede44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ede44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede4c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ede4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ede50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede54: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ede54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ede58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede5c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ede5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ede60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ede64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ede68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDE68u;
    SET_GPR_U32(ctx, 31, 0x1EDE70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDE68u, 0x1EDE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE70u;
label_1ede70:
    // 0x1ede70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ede70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ede74: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ede74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ede78: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1ede78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1ede7c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ede7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ede80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ede80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ede84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ede84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede88: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ede88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ede8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ede8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ede90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ede94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ede98: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x1ede98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
label_1ede9c:
    // 0x1ede9c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ede9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1edea0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1edea4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1edea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1edea8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EDEA8u;
    {
        const bool branch_taken_0x1edea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edea8) {
            ctx->pc = 0x1EDF58u;
            goto label_1edf58;
        }
    }
    ctx->pc = 0x1EDEB0u;
    // 0x1edeb0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1edeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1edeb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1edeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1edeb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1edeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1edebc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EDEBCu;
    {
        const bool branch_taken_0x1edebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edebc) {
            ctx->pc = 0x1EDF58u;
            goto label_1edf58;
        }
    }
    ctx->pc = 0x1EDEC4u;
    // 0x1edec4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edecc: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1edeccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eded0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EDED0u;
    {
        const bool branch_taken_0x1eded0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eded0) {
            ctx->pc = 0x1EDF58u;
            goto label_1edf58;
        }
    }
    ctx->pc = 0x1EDED8u;
    // 0x1eded8: 0x8e2413e8  lw          $a0, 0x13E8($s1)
    ctx->pc = 0x1eded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5096)));
    // 0x1ededc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edee0: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EDEE0u;
    {
        const bool branch_taken_0x1edee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edee0) {
            ctx->pc = 0x1EDF58u;
            goto label_1edf58;
        }
    }
    ctx->pc = 0x1EDEE8u;
    // 0x1edee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edeec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1edeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edef0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1edef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1edef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edef8: 0x0  nop
    ctx->pc = 0x1edef8u;
    // NOP
    // 0x1edefc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edf00: 0x0  nop
    ctx->pc = 0x1edf00u;
    // NOP
    // 0x1edf04: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDF04u;
    {
        const bool branch_taken_0x1edf04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edf04) {
            ctx->pc = 0x1EDF58u;
            goto label_1edf58;
        }
    }
    ctx->pc = 0x1EDF0Cu;
    // 0x1edf0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDF0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDF0Cu, 0x1EDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF14u;
label_1edf14:
    // 0x1edf14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1edf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edf18: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1edf18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1edf1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf20: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDF20u;
    {
        const bool branch_taken_0x1edf20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edf20) {
            ctx->pc = 0x1EDF58u;
            goto label_1edf58;
        }
    }
    ctx->pc = 0x1EDF28u;
    // 0x1edf28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1edf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edf30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf34: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1edf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1edf38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1edf44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edf48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1edf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edf50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1edf54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1edf58:
    // 0x1edf58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edf60: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1edf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1edf64: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EDF64u;
    {
        const bool branch_taken_0x1edf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf64) {
            ctx->pc = 0x1EE054u;
            goto label_1ee054;
        }
    }
    ctx->pc = 0x1EDF6Cu;
    // 0x1edf6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edf74: 0x84630076  lh          $v1, 0x76($v1)
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1edf78: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EDF78u;
    {
        const bool branch_taken_0x1edf78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf78) {
            ctx->pc = 0x1EE054u;
            goto label_1ee054;
        }
    }
    ctx->pc = 0x1EDF80u;
    // 0x1edf80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf8c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1edf90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1edf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edfa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1edfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edfa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1edfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1edfb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edfb4: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1edfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1edfb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1edfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1edfbc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1edfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1edfc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edfc4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1edfc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1edfc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edfd0: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1edfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1edfd4: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x1edfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1edfd8: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1edfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1edfdc: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1edfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1edfe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edfe8: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1edfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1edfec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edff0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1edff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1edff4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1edff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1edff8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edff8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edffc: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1edffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ee000: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE000u;
    {
        const bool branch_taken_0x1ee000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee000) {
            ctx->pc = 0x1EE03Cu;
            goto label_1ee03c;
        }
    }
    ctx->pc = 0x1EE008u;
    // 0x1ee008: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee00c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ee00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ee010: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ee010u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ee014: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ee014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ee018: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE018u;
    {
        const bool branch_taken_0x1ee018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee018) {
            ctx->pc = 0x1EE03Cu;
            goto label_1ee03c;
        }
    }
    ctx->pc = 0x1EE020u;
    // 0x1ee020: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee024: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ee024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ee028: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee02c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee030: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ee034: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ee034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ee038: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee038u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ee03c:
    // 0x1ee03c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee040: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee044: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ee044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ee048: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ee04c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee050: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ee050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1ee054:
    // 0x1ee054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee058: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee05c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ee060: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1EE060u;
    {
        const bool branch_taken_0x1ee060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee060) {
            ctx->pc = 0x1EE124u;
            goto label_1ee124;
        }
    }
    ctx->pc = 0x1EE068u;
    // 0x1ee068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee06c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee070: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee074: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ee078: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1EE078u;
    {
        const bool branch_taken_0x1ee078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee078) {
            ctx->pc = 0x1EE124u;
            goto label_1ee124;
        }
    }
    ctx->pc = 0x1EE080u;
    // 0x1ee080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ee080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee084: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee088: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ee088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee08c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ee08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ee090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee094: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ee094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee098: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee09c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ee09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee0a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ee0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee0a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ee0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ee0b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee0b8: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ee0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ee0bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0c0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ee0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ee0c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ee0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ee0c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ee0cc: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ee0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ee0d0: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE0D0u;
    {
        const bool branch_taken_0x1ee0d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0d0) {
            ctx->pc = 0x1EE10Cu;
            goto label_1ee10c;
        }
    }
    ctx->pc = 0x1EE0D8u;
    // 0x1ee0d8: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee0d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee0dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ee0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ee0e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ee0e4: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ee0e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ee0e8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE0E8u;
    {
        const bool branch_taken_0x1ee0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0e8) {
            ctx->pc = 0x1EE10Cu;
            goto label_1ee10c;
        }
    }
    ctx->pc = 0x1EE0F0u;
    // 0x1ee0f0: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee0f4: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ee0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ee0f8: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee0fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ee0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee100: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ee104: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ee104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ee108: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ee10c:
    // 0x1ee10c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee110: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee110u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee114: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ee114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ee118: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ee11c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee120: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ee120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1ee124:
    // 0x1ee124: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1ee124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee130: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ee134: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE13Cu;
}
