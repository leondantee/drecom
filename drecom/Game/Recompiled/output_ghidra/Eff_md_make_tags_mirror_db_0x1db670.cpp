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

// Function: Eff_md_make_tags_mirror_db
// Address: 0x1db670 - 0x1dc158
void Eff_md_make_tags_mirror_db_0x1db670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_make_tags_mirror_db_0x1db670");
#endif

    switch (ctx->pc) {
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db770u: goto label_1db770;
        case 0x1dba10u: goto label_1dba10;
        case 0x1dbba8u: goto label_1dbba8;
        default: break;
    }

    ctx->pc = 0x1db670u;

    // 0x1db670: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1db670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1db674: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1db674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1db678: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1db678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1db67c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1db67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1db680: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1db680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1db684: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1db684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1db688: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1db68c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db69c: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x1db69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x1db6a0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1db6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1db6a4: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x1db6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x1db6a8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db6ac: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1db6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db6b0: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x1db6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x1db6b4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1db6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1db6b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB6B8u;
    {
        const bool branch_taken_0x1db6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6b8) {
            ctx->pc = 0x1DB6D8u;
            goto label_1db6d8;
        }
    }
    ctx->pc = 0x1DB6C0u;
    // 0x1db6c0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1db6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1db6c4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1db6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1db6c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1db6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db6cc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db6d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db6d4: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1db6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_1db6d8:
    // 0x1db6d8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1db6d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db6dc: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x1DB6DCu;
    {
        const bool branch_taken_0x1db6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6dc) {
            ctx->pc = 0x1DC110u;
            goto label_1dc110;
        }
    }
    ctx->pc = 0x1DB6E4u;
label_1db6e4:
    // 0x1db6e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db6e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1db6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db6ec: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1db6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1db6f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1db6f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB6F4u;
    {
        const bool branch_taken_0x1db6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6f4) {
            ctx->pc = 0x1DB718u;
            goto label_1db718;
        }
    }
    ctx->pc = 0x1DB6FCu;
    // 0x1db6fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1db6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1db700: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1db700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1db704: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1db704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db708: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db710: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db714: 0x0  nop
    ctx->pc = 0x1db714u;
    // NOP
label_1db718:
    // 0x1db718: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1db718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1db71c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db720: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1db720u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1db724: 0xc0768c8  jal         func_1DA320
    ctx->pc = 0x1DB724u;
    SET_GPR_U32(ctx, 31, 0x1DB72Cu);
    ctx->pc = 0x1DA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA320u, 0x1DB724u, 0x1DB72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB72Cu;
label_1db72c:
    // 0x1db72c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db730: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1db734: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1db734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1db738: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1db738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1db73c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1db73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1db740: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1db740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1db744: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1db744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db748: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1db748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1db74c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1db74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1db750: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1db750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db754: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1db754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db75c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1db75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db760: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1db760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db764: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1db764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db768: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1db768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1db76c: 0x0  nop
    ctx->pc = 0x1db76cu;
    // NOP
label_1db770:
    // 0x1db770: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db774: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x1db774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x1db778: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db77c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db780: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db788: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1db788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x1db78c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db790: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1db794: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db798: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db79c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db7a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db7a8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1db7ac: 0x4113c  dsll32      $v0, $a0, 4
    ctx->pc = 0x1db7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x1db7b0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db7b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db7b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db7bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db7c0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1db7c4: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x1db7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1db7c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db7cc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db7d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1db7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1db7d4: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1db7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1db7d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db7dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1db7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1db7e0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1db7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1db7e4: 0x34850004  ori         $a1, $a0, 0x4
    ctx->pc = 0x1db7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1db7e8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1db7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db7ec: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1db7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1db7f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db7f4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1db7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db7f8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db7fc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db800: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db804: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db808: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1db808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db80c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db810: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1db810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1db814: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1db814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1db818: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db81c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1db81cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1db820: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db824: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1db824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1db828: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x1db828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x1db82c: 0x346203fe  ori         $v0, $v1, 0x3FE
    ctx->pc = 0x1db82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1022);
    // 0x1db830: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db834: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1db834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x1db838: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db83c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x1db83cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1db840: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1db840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1db844: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1db844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1db848: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB848u;
    {
        const bool branch_taken_0x1db848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db848) {
            ctx->pc = 0x1DB898u;
            goto label_1db898;
        }
    }
    ctx->pc = 0x1DB850u;
    // 0x1db850: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1db850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1db854: 0x2442bd20  addiu       $v0, $v0, -0x42E0
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950176));
    // 0x1db858: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db85c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db860: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1db860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db864: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1db864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1db868: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1db868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1db86c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db870: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x1db870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1db874: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1db874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db878: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db87c: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1db87cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1db880: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db884: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1db884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1db888: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db88c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1db88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1db890: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB890u;
    {
        const bool branch_taken_0x1db890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db890) {
            ctx->pc = 0x1DB8B8u;
            goto label_1db8b8;
        }
    }
    ctx->pc = 0x1DB898u;
label_1db898:
    // 0x1db898: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db89c: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x1db89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8a0: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x1db8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x1db8a4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1db8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8a8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1db8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1db8ac: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8b0: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1db8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1db8b4: 0x0  nop
    ctx->pc = 0x1db8b4u;
    // NOP
label_1db8b8:
    // 0x1db8b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db8bc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db8c0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db8c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db8c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db8cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db8d0: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1db8d4: 0x518825  or          $s1, $v0, $s1
    ctx->pc = 0x1db8d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1db8d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8dc: 0xfc510030  sd          $s1, 0x30($v0)
    ctx->pc = 0x1db8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 17));
    // 0x1db8e0: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8e4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1db8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1db8e8: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8ec: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1db8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1db8f0: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db8f4: 0xafb100bc  sw          $s1, 0xBC($sp)
    ctx->pc = 0x1db8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 17));
    // 0x1db8f8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db8fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db900: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db908: 0xac510038  sw          $s1, 0x38($v0)
    ctx->pc = 0x1db908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 17));
    // 0x1db90c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1db90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1db910: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1db910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1db914: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1db914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x1db918: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1db918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db91c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1db91cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1db920: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1db920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1db924: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1db924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1db928: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1db928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db92c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1db930: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB930u;
    {
        const bool branch_taken_0x1db930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db930) {
            ctx->pc = 0x1DB940u;
            goto label_1db940;
        }
    }
    ctx->pc = 0x1DB938u;
    // 0x1db938: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1db938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1db93c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1db93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1db940:
    // 0x1db940: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1db940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db944: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1db948: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB948u;
    {
        const bool branch_taken_0x1db948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db948) {
            ctx->pc = 0x1DB958u;
            goto label_1db958;
        }
    }
    ctx->pc = 0x1DB950u;
    // 0x1db950: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1db950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1db954: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1db954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1db958:
    // 0x1db958: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db95c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db960: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1db964: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x1db968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db96c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1db970: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db974: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1db974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1db978: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db97c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1db97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1db980: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db984: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1db988: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1db988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1db98c: 0x2483b7a0  addiu       $v1, $a0, -0x4860
    ctx->pc = 0x1db98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    // 0x1db990: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1db990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1db994: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db998: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x1db998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1db99c: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1db9a0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1db9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1db9a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1db9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1db9a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1db9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db9ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1db9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db9b0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1db9b4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1db9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1db9b8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1db9bc: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1db9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1db9c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db9c4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1db9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1db9c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db9cc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1db9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1db9d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db9d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1db9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db9d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db9dc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1db9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1db9e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db9e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1db9e8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1db9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1db9ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db9f0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1db9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1db9f4: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1db9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1db9f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db9fc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1db9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1dba00: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1dba00u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dba04: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1dba04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dba08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dba0c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1dba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1dba10:
    // 0x1dba10: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dba14: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1dba14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1dba18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba1c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1dba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dba20: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dba24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1dba28: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x1dba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1dba2c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba30: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dba30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dba34: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1dba38: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba3c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dba40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dba44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba48: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1dba48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1dba4c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba50: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1dba54: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba58: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1dba58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1dba5c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba60: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1dba60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1dba64: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dba68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba6c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1dba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1dba70: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dba74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1dba74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dba78: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1dba7c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1dba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dba80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dba84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dba88: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1dba88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1dba8c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dba90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dba94: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dba98: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1dba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dba9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dbaa0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbaa4: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1dbaa8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbaac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1dbaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbab0: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1dbab4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1dbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dbab8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1dbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dbabc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbac0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1dbac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1dbac4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbacc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbad0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1dbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dbad4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dbad8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbadc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1dbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1dbae0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dbae4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dbae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dbae8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbaec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbaf0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbaf4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbaf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbaf8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbafc: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1dbafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dbb00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1dbb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dbb04: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbb08: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1dbb08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1dbb0c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1dbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1dbb10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbb14: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1dbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1dbb18: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1dbb1c: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1dbb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dbb20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dbb24: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1dbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1dbb28: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x1dbb28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb2c: 0x15b080  sll         $s6, $s5, 2
    ctx->pc = 0x1dbb2cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1dbb30: 0x276b821  addu        $s7, $s3, $s6
    ctx->pc = 0x1dbb30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1dbb34: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x1dbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x1dbb38: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1dbb3c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb40: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1dbb40u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb44: 0x27e9021  addu        $s2, $s3, $fp
    ctx->pc = 0x1dbb44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x1dbb48: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x1dbb48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1dbb4c: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x1dbb4cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dbb50: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb5c: 0x8c560038  lw          $s6, 0x38($v0)
    ctx->pc = 0x1dbb5cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1dbb60: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb68: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb6c: 0x8c570040  lw          $s7, 0x40($v0)
    ctx->pc = 0x1dbb6cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dbb70: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1dbb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb74: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1dbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dbb78: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb7c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1dbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1dbb80: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1dbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1dbb84: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbb88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbb8c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1dbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dbb90: 0x8c5e0050  lw          $fp, 0x50($v0)
    ctx->pc = 0x1dbb90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1dbb94: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x1dbb94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dbb98: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1dbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1dbb9c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1dbb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbba0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1dbba0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dbba4: 0x0  nop
    ctx->pc = 0x1dbba4u;
    // NOP
label_1dbba8:
    // 0x1dbba8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1dbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1dbbac: 0x34820003  ori         $v0, $a0, 0x3
    ctx->pc = 0x1dbbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1dbbb0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1dbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1dbbb4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbbb8: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x1dbbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1dbbbc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1dbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1dbbc0: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x1dbbc4: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1dbbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1dbbc8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1dbbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1dbbcc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1dbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1dbbd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbd8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1dbbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbbdc: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1dbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1dbbe0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1dbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1dbbe4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1dbbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1dbbe8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1dbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1dbbec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dbbf0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBBF0u;
    {
        const bool branch_taken_0x1dbbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dbbf0) {
            ctx->pc = 0x1DBC08u;
            goto label_1dbc08;
        }
    }
    ctx->pc = 0x1DBBF8u;
    // 0x1dbbf8: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1dbbf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1dbbfc: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1dbbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1dbc00: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DBC00u;
    {
        const bool branch_taken_0x1dbc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc00) {
            ctx->pc = 0x1DBCB0u;
            goto label_1dbcb0;
        }
    }
    ctx->pc = 0x1DBC08u;
label_1dbc08:
    // 0x1dbc08: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1dbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dbc0c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dbc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1dbc10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1dbc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dbc14: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x1dbc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1dbc18: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DBC18u;
    {
        const bool branch_taken_0x1dbc18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc18) {
            ctx->pc = 0x1DBC68u;
            goto label_1dbc68;
        }
    }
    ctx->pc = 0x1DBC20u;
    // 0x1dbc20: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dbc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbc24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC24u;
    {
        const bool branch_taken_0x1dbc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc24) {
            ctx->pc = 0x1DBC48u;
            goto label_1dbc48;
        }
    }
    ctx->pc = 0x1DBC2Cu;
    // 0x1dbc2c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbc34: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1dbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbc38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbc3c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1dbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1dbc40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DBC40u;
    {
        const bool branch_taken_0x1dbc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc40) {
            ctx->pc = 0x1DBCB0u;
            goto label_1dbcb0;
        }
    }
    ctx->pc = 0x1DBC48u;
label_1dbc48:
    // 0x1dbc48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbc50: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbc54: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x1dbc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x1dbc58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbc5c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1dbc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1dbc60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DBC60u;
    {
        const bool branch_taken_0x1dbc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc60) {
            ctx->pc = 0x1DBCB0u;
            goto label_1dbcb0;
        }
    }
    ctx->pc = 0x1DBC68u;
label_1dbc68:
    // 0x1dbc68: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x1dbc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dbc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC70u;
    {
        const bool branch_taken_0x1dbc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbc70) {
            ctx->pc = 0x1DBC94u;
            goto label_1dbc94;
        }
    }
    ctx->pc = 0x1DBC78u;
    // 0x1dbc78: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1dbc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc7c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1dbc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dbc80: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1dbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbc88: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1dbc88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1dbc8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC8Cu;
    {
        const bool branch_taken_0x1dbc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc8c) {
            ctx->pc = 0x1DBCB0u;
            goto label_1dbcb0;
        }
    }
    ctx->pc = 0x1DBC94u;
label_1dbc94:
    // 0x1dbc94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbc9c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbca0: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x1dbca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x1dbca4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1dbca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbca8: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1dbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1dbcac: 0x0  nop
    ctx->pc = 0x1dbcacu;
    // NOP
label_1dbcb0:
    // 0x1dbcb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1dbcb4: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1dbcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1dbcb8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1dbcb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dbcbc: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x1dbcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1dbcc0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1dbcc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbcc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dbcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dbccc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbcd0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1dbcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbcd4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbcd8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbcdc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1dbcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbce0: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x1dbce0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x1dbce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbce8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbcec: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x1dbcecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dbcf0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1dbcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1dbcf4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1dbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dbcf8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dbcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dbcfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbd00: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1dbd00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbd08: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd0c: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x1dbd0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dbd10: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1dbd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1dbd14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dbd18: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1dbd1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dbd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dbd20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbd24: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1dbd24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd28: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbd2c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd30: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x1dbd30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x1dbd34: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1dbd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dbd38: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dbd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dbd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dbd40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1dbd44: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x1dbd44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd48: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x1dbd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dbd4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DBD4Cu;
    {
        const bool branch_taken_0x1dbd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd4c) {
            ctx->pc = 0x1DBD84u;
            goto label_1dbd84;
        }
    }
    ctx->pc = 0x1DBD54u;
    // 0x1dbd54: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1dbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1dbd58: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd5c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1dbd5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbd60: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x1dbd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dbd64: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1dbd68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dbd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dbd6c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1dbd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dbd70: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1dbd70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dbd74: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1dbd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dbd78: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1dbd78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dbd7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DBD7Cu;
    {
        const bool branch_taken_0x1dbd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd7c) {
            ctx->pc = 0x1DBDB0u;
            goto label_1dbdb0;
        }
    }
    ctx->pc = 0x1DBD84u;
label_1dbd84:
    // 0x1dbd84: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1dbd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1dbd88: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd8c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1dbd8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbd90: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1dbd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dbd94: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1dbd98: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dbd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dbd9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbda0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1dbda0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dbda4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1dbda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dbda8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1dbda8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dbdac: 0x0  nop
    ctx->pc = 0x1dbdacu;
    // NOP
label_1dbdb0:
    // 0x1dbdb0: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1dbdb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1dbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dbdb8: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x1dbdbc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dbdc0: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1dbdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dbdc4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dbdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dbdc8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbdcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbdd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbdd4: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1dbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbdd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1dbddc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dbde0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1dbde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbde4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1dbde4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1dbde8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbdec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1dbdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dbdf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbdf4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x1dbdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x1dbdf8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbdfc: 0x34620106  ori         $v0, $v1, 0x106
    ctx->pc = 0x1dbdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)262);
    // 0x1dbe00: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1dbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1dbe04: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbe08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbe0c: 0x34428004  ori         $v0, $v0, 0x8004
    ctx->pc = 0x1dbe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x1dbe10: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x1dbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x1dbe14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbe18: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1dbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1dbe1c: 0x15113c  dsll32      $v0, $s5, 4
    ctx->pc = 0x1dbe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 4));
    // 0x1dbe20: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbe24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbe2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe30: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbe34: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1dbe38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dbe3c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbe3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe40: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1dbe40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1dbe44: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x1dbe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbe48: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1dbe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1dbe4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1dbe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dbe50: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x1dbe50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x1dbe54: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1dbe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1dbe58: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbe5c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1dbe60: 0x34648005  ori         $a0, $v1, 0x8005
    ctx->pc = 0x1dbe60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x1dbe64: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x1dbe68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1dbe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dbe6c: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1dbe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1dbe70: 0x16193c  dsll32      $v1, $s6, 4
    ctx->pc = 0x1dbe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 4));
    // 0x1dbe74: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dbe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dbe78: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbe7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbe80: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbe80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe84: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbe88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1dbe8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1dbe90: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbe94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbe98: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbe9c: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x1dbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x1dbea0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1dbea4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1dbea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1dbea8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1dbea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1dbeac: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbeb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbeb4: 0x34438006  ori         $v1, $v0, 0x8006
    ctx->pc = 0x1dbeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x1dbeb8: 0x3c026500  lui         $v0, 0x6500
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
    // 0x1dbebc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbec0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1dbec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1dbec4: 0x17193c  dsll32      $v1, $s7, 4
    ctx->pc = 0x1dbec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 4));
    // 0x1dbec8: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dbec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dbecc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbed0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbed4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbed8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbedc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbee0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1dbee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1dbee4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbeec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dbeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbef0: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x1dbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x1dbef4: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x1dbef8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x1dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1dbefc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbf00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbf04: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x1dbf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x1dbf08: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x1dbf0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbf10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1dbf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1dbf14: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1dbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1dbf18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dbf1c: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x1dbf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1dbf20: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbf24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbf2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf30: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1dbf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1dbf34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1dbf34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1dbf38: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbf3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbf40: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1dbf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dbf44: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x1dbf44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x1dbf48: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1dbf4c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbf50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbf54: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x1dbf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x1dbf58: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x1dbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x1dbf5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbf60: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x1dbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x1dbf64: 0x1e113c  dsll32      $v0, $fp, 4
    ctx->pc = 0x1dbf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 4));
    // 0x1dbf68: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbf6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbf74: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf78: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbf7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1dbf80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1dbf84: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbf88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbf8c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dbf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbf90: 0xfe020090  sd          $v0, 0x90($s0)
    ctx->pc = 0x1dbf90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
    // 0x1dbf94: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1dbf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1dbf98: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbf9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbfa0: 0x34428009  ori         $v0, $v0, 0x8009
    ctx->pc = 0x1dbfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32777);
    // 0x1dbfa4: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x1dbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x1dbfa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbfac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1dbfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1dbfb0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1dbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1dbfb4: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1dbfb8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dbfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dbfbc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbfc0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbfc4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1dbfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1dbfc8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1dbfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dbfcc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1dbfd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbfd4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1dbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1dbfd8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dbfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dbfdc: 0x3c031700  lui         $v1, 0x1700
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5888 << 16));
    // 0x1dbfe0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1dbfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x1dbfe4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbfe8: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x1dbfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1dbfec: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1dbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1dbff0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dbff4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x1dbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1dbff8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1dbffc: 0x26b50240  addiu       $s5, $s5, 0x240
    ctx->pc = 0x1dbffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
    // 0x1dc000: 0x26d600c0  addiu       $s6, $s6, 0xC0
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x1dc004: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x1dc004u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1dc008: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1dc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dc00c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dc010: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1dc010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1dc014: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x1dc014u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x1dc018: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x1dc01c: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1dc01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1dc020: 0x1e40fee1  bgtz        $s2, . + 4 + (-0x11F << 2)
    ctx->pc = 0x1DC020u;
    {
        const bool branch_taken_0x1dc020 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1dc020) {
            ctx->pc = 0x1DBBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbba8;
        }
    }
    ctx->pc = 0x1DC028u;
    // 0x1dc028: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dc02c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1dc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dc030: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1dc030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x1dc034: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x1dc034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1dc038: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1dc038u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc03c: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x1dc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x1dc040: 0x8fb600a4  lw          $s6, 0xA4($sp)
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1dc044: 0x26c20030  addiu       $v0, $s6, 0x30
    ctx->pc = 0x1dc044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1dc048: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1dc048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1dc04c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1dc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dc050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dc050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dc054: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1dc054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1dc058: 0x1c40fe6d  bgtz        $v0, . + 4 + (-0x193 << 2)
    ctx->pc = 0x1DC058u;
    {
        const bool branch_taken_0x1dc058 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1dc058) {
            ctx->pc = 0x1DBA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dba10;
        }
    }
    ctx->pc = 0x1DC060u;
    // 0x1dc060: 0x2617fff0  addiu       $s7, $s0, -0x10
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1dc064: 0x17213c  dsll32      $a0, $s7, 4
    ctx->pc = 0x1dc064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 4));
    // 0x1dc068: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1dc068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1dc06c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dc06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dc070: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc074: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc07c: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x1dc07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x1dc080: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc084: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1dc084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x1dc088: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc08c: 0x245e0090  addiu       $fp, $v0, 0x90
    ctx->pc = 0x1dc08cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dc090: 0xafbe00b0  sw          $fp, 0xB0($sp)
    ctx->pc = 0x1dc090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 30));
    // 0x1dc094: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x1dc094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dc098: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1dc098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dc09c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1dc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1dc0a0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dc0a4: 0x62902b  sltu        $s2, $v1, $v0
    ctx->pc = 0x1dc0a4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dc0a8: 0x1640fdb1  bnez        $s2, . + 4 + (-0x24F << 2)
    ctx->pc = 0x1DC0A8u;
    {
        const bool branch_taken_0x1dc0a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0a8) {
            ctx->pc = 0x1DB770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db770;
        }
    }
    ctx->pc = 0x1DC0B0u;
    // 0x1dc0b0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc0b4: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x1dc0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dc0b8: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1dc0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1dc0bc: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dc0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dc0c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc0c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1dc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dc0c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc0cc: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x1dc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x1dc0d0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc0d4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1dc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1dc0d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc0dc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1dc0e0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dc0e4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1dc0e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc0ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dc0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dc0f0: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1dc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1dc0f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc0f8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dc0fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc100: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1dc100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1dc104: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1dc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1dc108: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dc108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc10c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dc10cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1dc110:
    // 0x1dc110: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1dc110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dc114: 0x28850002  slti        $a1, $a0, 0x2
    ctx->pc = 0x1dc114u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dc118: 0x14a0fd72  bnez        $a1, . + 4 + (-0x28E << 2)
    ctx->pc = 0x1DC118u;
    {
        const bool branch_taken_0x1dc118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc118) {
            ctx->pc = 0x1DB6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db6e4;
        }
    }
    ctx->pc = 0x1DC120u;
    // 0x1dc120: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc124: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1dc124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc128: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1dc128u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc12c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dc12cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dc130: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dc130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc134: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dc134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc138: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc14c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1dc14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dc150: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC158u;
}
