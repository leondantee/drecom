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

// Function: Scr_parts_grp_env_def_set
// Address: 0x13d6b0 - 0x13d8e0
void Scr_parts_grp_env_def_set_0x13d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_grp_env_def_set_0x13d6b0");
#endif

    ctx->pc = 0x13d6b0u;

    // 0x13d6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13d6b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13d6b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d6c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d6c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13d6c8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x13d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x13d6cc: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x13d6d0: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x13d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x13d6d4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13d6d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13d6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d6dc: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x13d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13d6e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d6e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d6e8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13d6ec: 0x24040eee  addiu       $a0, $zero, 0xEEE
    ctx->pc = 0x13d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x13d6f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d6f4: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x13d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x13d6f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d6fc: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x13d6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x13d700: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13D700u;
    {
        const bool branch_taken_0x13d700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d700) {
            ctx->pc = 0x13D730u;
            goto label_13d730;
        }
    }
    ctx->pc = 0x13D708u;
    // 0x13d708: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13d708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13d70c: 0x8423cc92  lh          $v1, -0x336E($at)
    ctx->pc = 0x13d70cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47CC92u));
    // 0x13d710: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13d710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13d714: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13d714u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13d718: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d71c: 0x34640120  ori         $a0, $v1, 0x120
    ctx->pc = 0x13d71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
    // 0x13d720: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d724: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x13d724u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x13d728: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13D728u;
    {
        const bool branch_taken_0x13d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d728) {
            ctx->pc = 0x13D76Cu;
            goto label_13d76c;
        }
    }
    ctx->pc = 0x13D730u;
label_13d730:
    // 0x13d730: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d734: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13d738: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d73c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d740: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x13d740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x13d744: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13d744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13d748: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x13d748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13d74c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13d750: 0x8423cc92  lh          $v1, -0x336E($at)
    ctx->pc = 0x13d750u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47CC92u));
    // 0x13d754: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13d758: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13d758u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13d75c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d760: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13d760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13d764: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d768: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x13d768u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
label_13d76c:
    // 0x13d76c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x13d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13d770: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d774: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x13d774u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x13d778: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d77c: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x13d77cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d780: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d784: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x13d784u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x13d788: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x13d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13d78c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d790: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x13d790u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x13d794: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d798: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x13d798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d79c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D7B4u;
            goto label_13d7b4;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d7a8: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x13d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x13d7ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13D7ACu;
    {
        const bool branch_taken_0x13d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d7ac) {
            ctx->pc = 0x13D850u;
            goto label_13d850;
        }
    }
    ctx->pc = 0x13D7B4u;
label_13d7b4:
    // 0x13d7b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7b8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x13d7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d7bc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13d7bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7c4: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x13d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13d7c8: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13d7c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7d0: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x13d7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x13d7d4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x13d7d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7dc: 0x94630016  lhu         $v1, 0x16($v1)
    ctx->pc = 0x13d7dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x13d7e0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7e4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d7e8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x13d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13d7ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13d7f0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D7F0u;
    {
        const bool branch_taken_0x13d7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d7f0) {
            ctx->pc = 0x13D808u;
            goto label_13d808;
        }
    }
    ctx->pc = 0x13D7F8u;
    // 0x13d7f8: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x13d7fc: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x13d800: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x13d804: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x13d804u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_13d808:
    // 0x13d808: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x13d808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x13d80c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d810: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x13d810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x13d814: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x13d814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x13d818: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x13d818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x13d81c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d820: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x13d820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x13d824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13d824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13d828: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x13d828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13d82c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d830: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x13d830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x13d834: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d838: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x13d838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x13d83c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d840: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x13d840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x13d844: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d848: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d84c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x13d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
label_13d850:
    // 0x13d850: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x13d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13d854: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d858: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x13d858u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x13d85c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d860: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x13d860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13d864: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D864u;
    {
        const bool branch_taken_0x13d864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d864) {
            ctx->pc = 0x13D890u;
            goto label_13d890;
        }
    }
    ctx->pc = 0x13D86Cu;
    // 0x13d86c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d870: 0xdca40030  ld          $a0, 0x30($a1)
    ctx->pc = 0x13d870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13d874: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x13d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x13d878: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d87c: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x13d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x13d880: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d884: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x13d884u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13d888: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x13d888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x13d88c: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x13d88cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
label_13d890:
    // 0x13d890: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d894: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x13d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x13d898: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D898u;
    {
        const bool branch_taken_0x13d898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d898) {
            ctx->pc = 0x13D8C4u;
            goto label_13d8c4;
        }
    }
    ctx->pc = 0x13D8A0u;
    // 0x13d8a0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d8a4: 0xdca40030  ld          $a0, 0x30($a1)
    ctx->pc = 0x13d8a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13d8a8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x13d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d8ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d8b0: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x13d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x13d8b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d8b8: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x13d8b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13d8bc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13d8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13d8c0: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x13d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
label_13d8c4:
    // 0x13d8c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d8c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d8c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d8cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d8d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d8d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13d8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D8E0u;
}
