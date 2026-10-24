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

// Function: eff2d_0a_move
// Address: 0x21fb10 - 0x2204b8
void eff2d_0a_move_0x21fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0a_move_0x21fb10");
#endif

    switch (ctx->pc) {
        case 0x21fc78u: goto label_21fc78;
        case 0x21fc84u: goto label_21fc84;
        case 0x21fcccu: goto label_21fccc;
        case 0x21fcd8u: goto label_21fcd8;
        case 0x21fdc4u: goto label_21fdc4;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fe08u: goto label_21fe08;
        case 0x21ff2cu: goto label_21ff2c;
        case 0x21ff38u: goto label_21ff38;
        case 0x21ff54u: goto label_21ff54;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff8cu: goto label_21ff8c;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21ffecu: goto label_21ffec;
        case 0x220014u: goto label_220014;
        case 0x220030u: goto label_220030;
        case 0x22004cu: goto label_22004c;
        case 0x220068u: goto label_220068;
        case 0x22006cu: goto label_22006c;
        case 0x2200a4u: goto label_2200a4;
        case 0x220140u: goto label_220140;
        case 0x2201e0u: goto label_2201e0;
        case 0x220204u: goto label_220204;
        case 0x220228u: goto label_220228;
        case 0x22024cu: goto label_22024c;
        case 0x220288u: goto label_220288;
        case 0x2202b4u: goto label_2202b4;
        case 0x220350u: goto label_220350;
        case 0x2203f0u: goto label_2203f0;
        case 0x2203fcu: goto label_2203fc;
        case 0x220438u: goto label_220438;
        case 0x220480u: goto label_220480;
        default: break;
    }

    ctx->pc = 0x21fb10u;

    // 0x21fb10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x21fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x21fb14: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x21fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x21fb18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21fb1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21fb20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21fb24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21fb28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21fb2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21fb30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21fb34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fb3c: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x21fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x21fb40: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fb44: 0x2446ac30  addiu       $a2, $v0, -0x53D0
    ctx->pc = 0x21fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
    // 0x21fb48: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x21fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21fb4c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x21fb4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38AC30u));
    // 0x21fb50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x21fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21fb54: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fb58: 0x8c460124  lw          $a2, 0x124($v0)
    ctx->pc = 0x21fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x21fb5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fb60: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21FB60u;
    {
        const bool branch_taken_0x21fb60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fb60) {
            ctx->pc = 0x21FBB4u;
            goto label_21fbb4;
        }
    }
    ctx->pc = 0x21FB68u;
    // 0x21fb68: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x21fb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fb6c: 0x10c7000e  beq         $a2, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x21FB6Cu;
    {
        const bool branch_taken_0x21fb6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x21fb6c) {
            ctx->pc = 0x21FBA8u;
            goto label_21fba8;
        }
    }
    ctx->pc = 0x21FB74u;
    // 0x21fb74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21fb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fb78: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FB78u;
    {
        const bool branch_taken_0x21fb78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x21fb78) {
            ctx->pc = 0x21FB9Cu;
            goto label_21fb9c;
        }
    }
    ctx->pc = 0x21FB80u;
    // 0x21fb80: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FB80u;
    {
        const bool branch_taken_0x21fb80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb80) {
            ctx->pc = 0x21FB90u;
            goto label_21fb90;
        }
    }
    ctx->pc = 0x21FB88u;
    // 0x21fb88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21FB88u;
    {
        const bool branch_taken_0x21fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb88) {
            ctx->pc = 0x21FBB8u;
            goto label_21fbb8;
        }
    }
    ctx->pc = 0x21FB90u;
label_21fb90:
    // 0x21fb90: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x21fb90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21fb94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21FB94u;
    {
        const bool branch_taken_0x21fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb94) {
            ctx->pc = 0x21FBB8u;
            goto label_21fbb8;
        }
    }
    ctx->pc = 0x21FB9Cu;
label_21fb9c:
    // 0x21fb9c: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x21fb9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21fba0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21FBA0u;
    {
        const bool branch_taken_0x21fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fba0) {
            ctx->pc = 0x21FBB8u;
            goto label_21fbb8;
        }
    }
    ctx->pc = 0x21FBA8u;
label_21fba8:
    // 0x21fba8: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x21fba8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21fbac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21FBACu;
    {
        const bool branch_taken_0x21fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fbac) {
            ctx->pc = 0x21FBB8u;
            goto label_21fbb8;
        }
    }
    ctx->pc = 0x21FBB4u;
label_21fbb4:
    // 0x21fbb4: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x21fbb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21fbb8:
    // 0x21fbb8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fbbc: 0x8c4301f8  lw          $v1, 0x1F8($v0)
    ctx->pc = 0x21fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x21fbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbc4: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x21FBC4u;
    {
        const bool branch_taken_0x21fbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fbc4) {
            ctx->pc = 0x21FC8Cu;
            goto label_21fc8c;
        }
    }
    ctx->pc = 0x21FBCCu;
    // 0x21fbcc: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x21fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x21fbd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21fbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21fbd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fbd8: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x21fbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x21fbdc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fbe0: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x21fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x21fbe4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fbe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fbec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fbf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fbf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fbf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fbfc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21fbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fc04: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x21fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x21fc08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fc10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fc14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fc18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fc1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fc20: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x21fc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x21fc24: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc28: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21fc2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fc34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fc38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fc3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fc40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fc44: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x21fc44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc48: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc4c: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21fc50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fc58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fc5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fc60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fc64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fc68: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x21fc68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x21fc6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21fc6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fc70: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x21FC70u;
    SET_GPR_U32(ctx, 31, 0x21FC78u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x21FC70u, 0x21FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC78u;
label_21fc78:
    // 0x21fc78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21fc78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21fc7c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x21FC7Cu;
    SET_GPR_U32(ctx, 31, 0x21FC84u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x21FC7Cu, 0x21FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC84u;
label_21fc84:
    // 0x21fc84: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21fc8c:
    // 0x21fc8c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc90: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x21fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x21fc94: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x21fc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21fc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21fca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fca4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21fca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fcac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21fcacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21fcb0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21fcb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21fcb4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fcb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21fcb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fcbc: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21fcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21fcc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21fcc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fcc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21FCC4u;
    SET_GPR_U32(ctx, 31, 0x21FCCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21FCC4u, 0x21FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCCCu;
label_21fccc:
    // 0x21fccc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21fcccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21fcd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21FCD0u;
    SET_GPR_U32(ctx, 31, 0x21FCD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21FCD0u, 0x21FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCD8u;
label_21fcd8:
    // 0x21fcd8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fcdc: 0x3c023f8f  lui         $v0, 0x3F8F
    ctx->pc = 0x21fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16271 << 16));
    // 0x21fce0: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x21fce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x21fce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21fce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fce8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x21fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fcec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21fcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fcf0: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x21fcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x21fcf4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fcf8: 0x3c023f8f  lui         $v0, 0x3F8F
    ctx->pc = 0x21fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16271 << 16));
    // 0x21fcfc: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x21fcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x21fd00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21fd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fd04: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21fd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fd0c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x21fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x21fd10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21fd14: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x21fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21fd18: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x21fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x21fd1c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x21fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x21fd20: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x21fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x21fd24: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x21fd24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x21fd28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21fd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fd2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fd30: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21FD30u;
    {
        const bool branch_taken_0x21fd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fd30) {
            ctx->pc = 0x21FDA8u;
            goto label_21fda8;
        }
    }
    ctx->pc = 0x21FD38u;
    // 0x21fd38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fd3c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21FD3Cu;
    {
        const bool branch_taken_0x21fd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fd3c) {
            ctx->pc = 0x21FD90u;
            goto label_21fd90;
        }
    }
    ctx->pc = 0x21FD44u;
    // 0x21fd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fd48: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21FD48u;
    {
        const bool branch_taken_0x21fd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fd48) {
            ctx->pc = 0x21FD78u;
            goto label_21fd78;
        }
    }
    ctx->pc = 0x21FD50u;
    // 0x21fd50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FD50u;
    {
        const bool branch_taken_0x21fd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd50) {
            ctx->pc = 0x21FD60u;
            goto label_21fd60;
        }
    }
    ctx->pc = 0x21FD58u;
    // 0x21fd58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21FD58u;
    {
        const bool branch_taken_0x21fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd58) {
            ctx->pc = 0x21FDA8u;
            goto label_21fda8;
        }
    }
    ctx->pc = 0x21FD60u;
label_21fd60:
    // 0x21fd60: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21fd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fd68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21fd6c: 0xe4208b6c  swc1        $f0, -0x7494($at)
    ctx->pc = 0x21fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B6Cu, _value); } while (0); }
    // 0x21fd70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21FD70u;
    {
        const bool branch_taken_0x21fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd70) {
            ctx->pc = 0x21FDB8u;
            goto label_21fdb8;
        }
    }
    ctx->pc = 0x21FD78u;
label_21fd78:
    // 0x21fd78: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x21fd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fd80: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21fd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21fd84: 0xe4208b6c  swc1        $f0, -0x7494($at)
    ctx->pc = 0x21fd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B6Cu, _value); } while (0); }
    // 0x21fd88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21FD88u;
    {
        const bool branch_taken_0x21fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd88) {
            ctx->pc = 0x21FDB8u;
            goto label_21fdb8;
        }
    }
    ctx->pc = 0x21FD90u;
label_21fd90:
    // 0x21fd90: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x21fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x21fd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fd98: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21fd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21fd9c: 0xe4208b6c  swc1        $f0, -0x7494($at)
    ctx->pc = 0x21fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B6Cu, _value); } while (0); }
    // 0x21fda0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDA0u;
    {
        const bool branch_taken_0x21fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fda0) {
            ctx->pc = 0x21FDB8u;
            goto label_21fdb8;
        }
    }
    ctx->pc = 0x21FDA8u;
label_21fda8:
    // 0x21fda8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x21fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x21fdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fdb0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21fdb4: 0xe4208b6c  swc1        $f0, -0x7494($at)
    ctx->pc = 0x21fdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B6Cu, _value); } while (0); }
label_21fdb8:
    // 0x21fdb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21fdbc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x21FDBCu;
    SET_GPR_U32(ctx, 31, 0x21FDC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x21FDBCu, 0x21FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDC4u;
label_21fdc4:
    // 0x21fdc4: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x21fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x21fdc8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fdcc: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x21fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21fdd0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x21fdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21fdd4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fdd8: 0x24478b6c  addiu       $a3, $v0, -0x7494
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937452));
    // 0x21fddc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x21FDDCu;
    SET_GPR_U32(ctx, 31, 0x21FDE4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x21FDDCu, 0x21FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDE4u;
label_21fde4:
    // 0x21fde4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x21fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x21fde8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fdec: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fdf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21fdf4: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x21fdf8: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21fdfc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x21fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x21fe00: 0xc059e1c  jal         func_167870
    ctx->pc = 0x21FE00u;
    SET_GPR_U32(ctx, 31, 0x21FE08u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x21FE00u, 0x21FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE08u;
label_21fe08:
    // 0x21fe08: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x21fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x21fe0c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x21fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x21fe10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE10u;
    {
        const bool branch_taken_0x21fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe10) {
            ctx->pc = 0x21FE24u;
            goto label_21fe24;
        }
    }
    ctx->pc = 0x21FE18u;
    // 0x21fe18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x21fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21fe1c: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x21FE1Cu;
    {
        const bool branch_taken_0x21fe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe1c) {
            ctx->pc = 0x220438u;
            goto label_220438;
        }
    }
    ctx->pc = 0x21FE24u;
label_21fe24:
    // 0x21fe24: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fe28: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21fe2c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21fe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21fe30: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x21fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x21fe34: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fe38: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x21fe38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fe3c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21fe40: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21fe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21fe44: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE44u;
    {
        const bool branch_taken_0x21fe44 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe44) {
            ctx->pc = 0x21FE58u;
            goto label_21fe58;
        }
    }
    ctx->pc = 0x21FE4Cu;
    // 0x21fe4c: 0x8fc20b18  lw          $v0, 0xB18($fp)
    ctx->pc = 0x21fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2840)));
    // 0x21fe50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21fe54: 0xafc20b18  sw          $v0, 0xB18($fp)
    ctx->pc = 0x21fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 2840), GPR_U32(ctx, 2));
label_21fe58:
    // 0x21fe58: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fe5c: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x21fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x21fe60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fe64: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21FE64u;
    {
        const bool branch_taken_0x21fe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe64) {
            ctx->pc = 0x21FEF4u;
            goto label_21fef4;
        }
    }
    ctx->pc = 0x21FE6Cu;
    // 0x21fe6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fe70: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21FE70u;
    {
        const bool branch_taken_0x21fe70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe70) {
            ctx->pc = 0x21FED4u;
            goto label_21fed4;
        }
    }
    ctx->pc = 0x21FE78u;
    // 0x21fe78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fe7c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FE7Cu;
    {
        const bool branch_taken_0x21fe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe7c) {
            ctx->pc = 0x21FEB4u;
            goto label_21feb4;
        }
    }
    ctx->pc = 0x21FE84u;
    // 0x21fe84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE84u;
    {
        const bool branch_taken_0x21fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe84) {
            ctx->pc = 0x21FE94u;
            goto label_21fe94;
        }
    }
    ctx->pc = 0x21FE8Cu;
    // 0x21fe8c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21FE8Cu;
    {
        const bool branch_taken_0x21fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe8c) {
            ctx->pc = 0x21FF0Cu;
            goto label_21ff0c;
        }
    }
    ctx->pc = 0x21FE94u;
label_21fe94:
    // 0x21fe94: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x21fe94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fe98: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21fe9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fea0: 0x0  nop
    ctx->pc = 0x21fea0u;
    // NOP
    // 0x21fea4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21fea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21fea8: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x21fea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21feac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21FEACu;
    {
        const bool branch_taken_0x21feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21feac) {
            ctx->pc = 0x21FF0Cu;
            goto label_21ff0c;
        }
    }
    ctx->pc = 0x21FEB4u;
label_21feb4:
    // 0x21feb4: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x21feb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21feb8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x21febc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21febcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fec0: 0x0  nop
    ctx->pc = 0x21fec0u;
    // NOP
    // 0x21fec4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21fec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21fec8: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x21fec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21fecc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21FECCu;
    {
        const bool branch_taken_0x21fecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fecc) {
            ctx->pc = 0x21FF0Cu;
            goto label_21ff0c;
        }
    }
    ctx->pc = 0x21FED4u;
label_21fed4:
    // 0x21fed4: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x21fed4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fed8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x21fedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fee0: 0x0  nop
    ctx->pc = 0x21fee0u;
    // NOP
    // 0x21fee4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21fee8: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21feec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEECu;
    {
        const bool branch_taken_0x21feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21feec) {
            ctx->pc = 0x21FF0Cu;
            goto label_21ff0c;
        }
    }
    ctx->pc = 0x21FEF4u;
label_21fef4:
    // 0x21fef4: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x21fef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21fef8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x21fefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ff00: 0x0  nop
    ctx->pc = 0x21ff00u;
    // NOP
    // 0x21ff04: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x21ff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21ff08: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x21ff08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21ff0c:
    // 0x21ff0c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff10: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff14: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff18: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x21ff1c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x21ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21ff20: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x21ff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21ff24: 0xc040c80  jal         func_103200
    ctx->pc = 0x21FF24u;
    SET_GPR_U32(ctx, 31, 0x21FF2Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x21FF2Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21FF2Cu) { return; }
    ctx->pc = 0x21FF2Cu;
label_21ff2c:
    // 0x21ff2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21ff2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ff30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21FF30u;
    {
        const bool branch_taken_0x21ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff30) {
            ctx->pc = 0x21FFF0u;
            goto label_21fff0;
        }
    }
    ctx->pc = 0x21FF38u;
label_21ff38:
    // 0x21ff38: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff3c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x21ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21ff40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21ff40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ff44: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21ff48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x21ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x21ff4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21FF4Cu;
    SET_GPR_U32(ctx, 31, 0x21FF54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21FF4Cu, 0x21FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF54u;
label_21ff54:
    // 0x21ff54: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x21ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ff58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ff58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ff5c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x21ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ff60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ff60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ff64: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x21ff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21ff68: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21FF68u;
    SET_GPR_U32(ctx, 31, 0x21FF70u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21FF68u, 0x21FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF70u;
label_21ff70:
    // 0x21ff70: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x21ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ff74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ff74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ff78: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x21ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ff7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ff7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ff80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x21ff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x21ff84: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21FF84u;
    SET_GPR_U32(ctx, 31, 0x21FF8Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21FF84u, 0x21FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF8Cu;
label_21ff8c:
    // 0x21ff8c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x21ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ff90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ff90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ff94: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ff98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ff98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ff9c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21ffa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21ffa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ffa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ffa8: 0x0  nop
    ctx->pc = 0x21ffa8u;
    // NOP
    // 0x21ffac: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x21ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x21ffb0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x21ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x21ffb4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ffb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ffbc: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21ffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21ffc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ffc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ffc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ffc8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21ffc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21ffcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ffccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ffd0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x21ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21ffd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21ffd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ffd8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21FFD8u;
    SET_GPR_U32(ctx, 31, 0x21FFE0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21FFD8u, 0x21FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE0u;
label_21ffe0:
    // 0x21ffe0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21ffe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ffe4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21FFE4u;
    SET_GPR_U32(ctx, 31, 0x21FFECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21FFE4u, 0x21FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFECu;
label_21ffec:
    // 0x21ffec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ffecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21fff0:
    // 0x21fff0: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x21fff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x21fff4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x21FFF4u;
    {
        const bool branch_taken_0x21fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fff4) {
            ctx->pc = 0x21FF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ff38;
        }
    }
    ctx->pc = 0x21FFFCu;
    // 0x21fffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21fffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220000: 0x0  nop
    ctx->pc = 0x220000u;
    // NOP
    // 0x220004: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x220004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x220008: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x220008u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22000c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x22000Cu;
    {
        const bool branch_taken_0x22000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22000c) {
            ctx->pc = 0x2203A8u;
            goto label_2203a8;
        }
    }
    ctx->pc = 0x220014u;
label_220014:
    // 0x220014: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x220014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x220018: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x22001c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x22001cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220020: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x220020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x220024: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x220024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x220028: 0xc06765c  jal         func_19D970
    ctx->pc = 0x220028u;
    SET_GPR_U32(ctx, 31, 0x220030u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x220028u, 0x220030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220030u;
label_220030:
    // 0x220030: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x220030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220034: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220038: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x220038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22003c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22003cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220040: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x220040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x220044: 0xc06765c  jal         func_19D970
    ctx->pc = 0x220044u;
    SET_GPR_U32(ctx, 31, 0x22004Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x220044u, 0x22004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22004Cu;
label_22004c:
    // 0x22004c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x22004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220054: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x220054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220058: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22005c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22005cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x220060: 0xc06765c  jal         func_19D970
    ctx->pc = 0x220060u;
    SET_GPR_U32(ctx, 31, 0x220068u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x220060u, 0x220068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220068u;
label_220068:
    // 0x220068: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x220068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22006c:
    // 0x22006c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22006cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220070: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x220070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220074: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220078: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x220078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x22007c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x220080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220084: 0x0  nop
    ctx->pc = 0x220084u;
    // NOP
    // 0x220088: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x220088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x22008c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x220090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220094: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x220098: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220098u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22009c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22009Cu;
    SET_GPR_U32(ctx, 31, 0x2200A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22009Cu, 0x2200A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200A4u;
label_2200a4:
    // 0x2200a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2200a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2200ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2200acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2200b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2200b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2200bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2200c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200c8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2200c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2200cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200d4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2200d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2200d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2200dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200e4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2200e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2200e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2200f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2200f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2200f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2200f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2200fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2200fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x220100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220104: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x220108: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x220108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x22010c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x220110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x220114: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x220114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x220118: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x22011c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x22011cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x220120: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x220120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x220124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220128: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x220128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x22012c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x22012cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x220130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220134: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x220134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x220138: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220138u;
    SET_GPR_U32(ctx, 31, 0x220140u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220138u, 0x220140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220140u;
label_220140:
    // 0x220140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220144: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x220144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x220148: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x22014c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x22014cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x220150: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x220150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x220154: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x220154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x220158: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220158u;
    {
        const bool branch_taken_0x220158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220158) {
            ctx->pc = 0x22016Cu;
            goto label_22016c;
        }
    }
    ctx->pc = 0x220160u;
    // 0x220160: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x220160u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x220164u;
    {
        const bool branch_taken_0x220164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220164) {
            ctx->pc = 0x220188u;
            goto label_220188;
        }
    }
    ctx->pc = 0x22016Cu;
label_22016c:
    // 0x22016c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220170: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x220170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x220174: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220178: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x22017c: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x22017cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x220180: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x220180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220184: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x220184u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_220188:
    // 0x220188: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x220188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x22018c: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x220190: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x220194: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x220198: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x220198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x22019c: 0x12020078  beq         $s0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x22019Cu;
    {
        const bool branch_taken_0x22019c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22019c) {
            ctx->pc = 0x220380u;
            goto label_220380;
        }
    }
    ctx->pc = 0x2201A4u;
    // 0x2201a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2201a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201a8: 0x0  nop
    ctx->pc = 0x2201a8u;
    // NOP
    // 0x2201ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2201acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2201b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2201b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201b4: 0x0  nop
    ctx->pc = 0x2201b4u;
    // NOP
    // 0x2201b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2201b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2201bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2201bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201c0: 0x0  nop
    ctx->pc = 0x2201c0u;
    // NOP
    // 0x2201c4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2201c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2201c8: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2201c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2201cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2201ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2201d0: 0x0  nop
    ctx->pc = 0x2201d0u;
    // NOP
    // 0x2201d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2201d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2201d8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2201D8u;
    SET_GPR_U32(ctx, 31, 0x2201E0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2201D8u, 0x2201E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201E0u;
label_2201e0:
    // 0x2201e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2201e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2201e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2201e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2201e8: 0x0  nop
    ctx->pc = 0x2201e8u;
    // NOP
    // 0x2201ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2201ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2201f0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2201f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2201f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2201f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2201f8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2201f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2201fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2201FCu;
    SET_GPR_U32(ctx, 31, 0x220204u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2201FCu, 0x220204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x220208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22020c: 0x0  nop
    ctx->pc = 0x22020cu;
    // NOP
    // 0x220210: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220214: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x220214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22021c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x22021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x220220: 0xc067654  jal         func_19D950
    ctx->pc = 0x220220u;
    SET_GPR_U32(ctx, 31, 0x220228u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x220220u, 0x220228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220228u;
label_220228:
    // 0x220228: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x220228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22022c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220230: 0x0  nop
    ctx->pc = 0x220230u;
    // NOP
    // 0x220234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220238: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x220238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22023c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22023cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220240: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x220240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x220244: 0xc067648  jal         func_19D920
    ctx->pc = 0x220244u;
    SET_GPR_U32(ctx, 31, 0x22024Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x220244u, 0x22024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22024Cu;
label_22024c:
    // 0x22024c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x220250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220254: 0x0  nop
    ctx->pc = 0x220254u;
    // NOP
    // 0x220258: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22025c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x22025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220260: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220264: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x220264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x220268: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x220268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x22026c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x22026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x220270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220274: 0x0  nop
    ctx->pc = 0x220274u;
    // NOP
    // 0x220278: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x220278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x22027c: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x22027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x220280: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x220280u;
    SET_GPR_U32(ctx, 31, 0x220288u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x220280u, 0x220288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220288u;
label_220288:
    // 0x220288: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22028c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220290: 0x0  nop
    ctx->pc = 0x220290u;
    // NOP
    // 0x220294: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x220294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220298: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x220298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x22029c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22029cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202a0: 0x0  nop
    ctx->pc = 0x2202a0u;
    // NOP
    // 0x2202a4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2202a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2202a8: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2202a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2202ac: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2202ACu;
    SET_GPR_U32(ctx, 31, 0x2202B4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2202ACu, 0x2202B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202B4u;
label_2202b4:
    // 0x2202b4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2202b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2202b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2202b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2202bc: 0x0  nop
    ctx->pc = 0x2202bcu;
    // NOP
    // 0x2202c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2202c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2202c4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2202c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2202c8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2202c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2202cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2202ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202d0: 0x0  nop
    ctx->pc = 0x2202d0u;
    // NOP
    // 0x2202d4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2202d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2202d8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2202d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2202dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2202dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202e0: 0x0  nop
    ctx->pc = 0x2202e0u;
    // NOP
    // 0x2202e4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2202e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2202e8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2202ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2202ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2202f0: 0x0  nop
    ctx->pc = 0x2202f0u;
    // NOP
    // 0x2202f4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2202f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2202f8: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2202f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2202fc: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2202fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x220300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220304: 0x0  nop
    ctx->pc = 0x220304u;
    // NOP
    // 0x220308: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x220308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x22030c: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x22030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x220310: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x220310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x220314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220318: 0x0  nop
    ctx->pc = 0x220318u;
    // NOP
    // 0x22031c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x22031cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x220320: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x220324: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x220324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x220328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22032c: 0x0  nop
    ctx->pc = 0x22032cu;
    // NOP
    // 0x220330: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x220330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x220334: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x220334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x220338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22033c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x22033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x220340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220344: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x220344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x220348: 0xc067648  jal         func_19D920
    ctx->pc = 0x220348u;
    SET_GPR_U32(ctx, 31, 0x220350u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x220348u, 0x220350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220350u;
label_220350:
    // 0x220350: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x220350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x220354: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x220354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x220358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22035c: 0x0  nop
    ctx->pc = 0x22035cu;
    // NOP
    // 0x220360: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x220360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220364: 0x3c023c4c  lui         $v0, 0x3C4C
    ctx->pc = 0x220364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15436 << 16));
    // 0x220368: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x220368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22036c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22036cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220370: 0x0  nop
    ctx->pc = 0x220370u;
    // NOP
    // 0x220374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x220374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x220378: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x220378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x22037c: 0x0  nop
    ctx->pc = 0x22037cu;
    // NOP
label_220380:
    // 0x220380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x220380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x220384: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x220384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220388: 0x3c023f65  lui         $v0, 0x3F65
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16229 << 16));
    // 0x22038c: 0x3442c73e  ori         $v0, $v0, 0xC73E
    ctx->pc = 0x22038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51006);
    // 0x220390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220394: 0x0  nop
    ctx->pc = 0x220394u;
    // NOP
    // 0x220398: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x220398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22039c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x22039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2203a0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2203a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2203a4: 0x0  nop
    ctx->pc = 0x2203a4u;
    // NOP
label_2203a8:
    // 0x2203a8: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x2203a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2203ac: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x2203ACu;
    {
        const bool branch_taken_0x2203ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2203ac) {
            ctx->pc = 0x220014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220014;
        }
    }
    ctx->pc = 0x2203B4u;
    // 0x2203b4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2203b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2203b8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2203bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2203bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2203c0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2203c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2203c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2203c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2203cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2203ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2203d0: 0x0  nop
    ctx->pc = 0x2203d0u;
    // NOP
    // 0x2203d4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2203d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2203d8: 0x24041721  addiu       $a0, $zero, 0x1721
    ctx->pc = 0x2203d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5921));
    // 0x2203dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2203dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2203e0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2203e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2203e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2203e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2203E8u;
    SET_GPR_U32(ctx, 31, 0x2203F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2203E8u, 0x2203F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203F0u;
label_2203f0:
    // 0x2203f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2203f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2203f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2203F4u;
    SET_GPR_U32(ctx, 31, 0x2203FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2203F4u, 0x2203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203FCu;
label_2203fc:
    // 0x2203fc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x220400: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x220400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220404: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x220408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x220408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22040c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x22040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220410: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x220410u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220414: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x220414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
    // 0x220418: 0x3442b852  ori         $v0, $v0, 0xB852
    ctx->pc = 0x220418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47186);
    // 0x22041c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x220420: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x220420u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220424: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220424u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220428: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22042c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x220430: 0xc086488  jal         func_219220
    ctx->pc = 0x220430u;
    SET_GPR_U32(ctx, 31, 0x220438u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x220430u, 0x220438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220438u;
label_220438:
    // 0x220438: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x22043c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x22043cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x220440: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x220440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x220444: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x220444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x220448: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x220448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22044c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x220450: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x220450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x220454: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x220458: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x220458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22045c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x22045cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220464: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x220464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x220468: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x220468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x22046c: 0x2447ac20  addiu       $a3, $v0, -0x53E0
    ctx->pc = 0x22046cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x220470: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220474: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x220474u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220478: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x220478u;
    SET_GPR_U32(ctx, 31, 0x220480u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x220478u, 0x220480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220480u;
label_220480:
    // 0x220480: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x220480u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220484: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x220484u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220488: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x220488u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22048c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22048cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220490: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x220490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220494: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x220494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220498: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x220498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22049c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22049cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2204a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2204a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2204a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2204a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2204a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2204a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2204ac: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2204b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2204B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2204B8u;
}
