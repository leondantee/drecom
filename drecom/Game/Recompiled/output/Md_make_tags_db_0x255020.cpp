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

// Function: Md_make_tags_db
// Address: 0x255020 - 0x2559b0
void Md_make_tags_db_0x255020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_make_tags_db_0x255020");
#endif

    switch (ctx->pc) {
        case 0x255094u: goto label_255094;
        case 0x2550dcu: goto label_2550dc;
        case 0x255120u: goto label_255120;
        case 0x255320u: goto label_255320;
        case 0x255468u: goto label_255468;
        default: break;
    }

    ctx->pc = 0x255020u;

    // 0x255020: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x255020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x255024: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x255024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x255028: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x255028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25502c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x255030: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x255030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x255034: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x255034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x255038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x255038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25503c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x255040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x255040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x255044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25504c: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x25504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x255050: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x255050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x255054: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x255054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x255058: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25505c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x25505cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255060: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x255060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x255064: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x255064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x255068: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x255068u;
    {
        const bool branch_taken_0x255068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255068) {
            ctx->pc = 0x255088u;
            goto label_255088;
        }
    }
    ctx->pc = 0x255070u;
    // 0x255070: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x255070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255074: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x255074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x255078: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x255078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25507c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255084: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_255088:
    // 0x255088: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x255088u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25508c: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x25508Cu;
    {
        const bool branch_taken_0x25508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25508c) {
            ctx->pc = 0x255968u;
            goto label_255968;
        }
    }
    ctx->pc = 0x255094u;
label_255094:
    // 0x255094: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x255094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255098: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x255098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x25509c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x25509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2550a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2550a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2550a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2550A4u;
    {
        const bool branch_taken_0x2550a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2550a4) {
            ctx->pc = 0x2550C8u;
            goto label_2550c8;
        }
    }
    ctx->pc = 0x2550ACu;
    // 0x2550ac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2550acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2550b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2550b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2550b4: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x2550b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2550b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2550bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2550bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2550c0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2550c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2550c4: 0x0  nop
    ctx->pc = 0x2550c4u;
    // NOP
label_2550c8:
    // 0x2550c8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2550c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2550cc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2550ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2550d0: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x2550d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2550d4: 0xc095a8c  jal         func_256A30
    ctx->pc = 0x2550D4u;
    SET_GPR_U32(ctx, 31, 0x2550DCu);
    ctx->pc = 0x256A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A30u, 0x2550D4u, 0x2550DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550DCu;
label_2550dc:
    // 0x2550dc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2550dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2550e0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2550e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2550e4: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2550e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2550e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2550e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2550ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2550ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2550f0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2550f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2550f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2550f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2550f8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2550f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2550fc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2550fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x255100: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x255100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255104: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x255104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255108: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x255108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25510c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25510cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x255110: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255118: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x255118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x25511c: 0x0  nop
    ctx->pc = 0x25511cu;
    // NOP
label_255120:
    // 0x255120: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x255120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255124: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x255124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x255128: 0x329100ff  andi        $s1, $s4, 0xFF
    ctx->pc = 0x255128u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25512c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25512cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x255130: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x255130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255134: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x255134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x255138: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x255138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x25513c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x25513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255140: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x255140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x255144: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255148: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x255148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x25514c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x25514cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255150: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255158: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x255158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25515c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x25515cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x255160: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x255160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x255164: 0x2893c  dsll32      $s1, $v0, 4
    ctx->pc = 0x255164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255168: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x255168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
    // 0x25516c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x25516cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x255170: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x255170u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x255174: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x255174u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x255178: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25517c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x25517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255180: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x255180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x255184: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x255184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255188: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x255188u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x25518c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x25518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255190: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x255190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x255194: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x255194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x255198: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x255198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x25519c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551a0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2551a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2551a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2551a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2551a8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2551a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2551ac: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2551acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2551b0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2551b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2551b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2551b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2551b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2551b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2551bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2551bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2551c0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2551c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2551c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2551c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2551c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2551c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2551cc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2551ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551d0: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x2551d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x2551d4: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x2551d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2551d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551dc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2551dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2551e0: 0x3c046c02  lui         $a0, 0x6C02
    ctx->pc = 0x2551e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27650 << 16));
    // 0x2551e4: 0x348303fe  ori         $v1, $a0, 0x3FE
    ctx->pc = 0x2551e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1022);
    // 0x2551e8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2551e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551ec: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2551ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2551f0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2551f4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2551f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2551f8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2551f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2551fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2551fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255200: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255204: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255208: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x25520c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25520cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255210: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255214: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x255214u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x255218: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x25521c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x25521cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x255220: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255224: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x255224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x255228: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x255228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25522c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x25522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x255230: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255234: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255238: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25523c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255240: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x255240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x255244: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255248: 0xac450084  sw          $a1, 0x84($v0)
    ctx->pc = 0x255248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
    // 0x25524c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x255250: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x255250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x255254: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255258: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25525c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x25525cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x255260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255264: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x255264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x255268: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x25526c: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x25526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x255270: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x255270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255274: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x255278: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25527c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x255280: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255284: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255288: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x255288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25528c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x25528cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x255290: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x255290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x255294: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255298: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x255298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x25529c: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x25529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x2552a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2552a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2552a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2552a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2552a8: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2552a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2552ac: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2552acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2552b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2552b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2552b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2552b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2552b8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2552b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2552bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2552bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2552c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2552c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2552c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2552c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2552c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2552c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2552cc: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x2552ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x2552d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2552d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2552d4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2552d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2552d8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2552d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2552dc: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2552dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2552e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2552e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2552e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2552e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2552e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2552e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2552ec: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2552ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2552f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2552f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2552f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2552f8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2552f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2552fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255300: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x255300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x255304: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x255304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x255308: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25530c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x25530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x255310: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x255310u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x255314: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x255314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255318: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25531c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x25531cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_255320:
    // 0x255320: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x255320u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255324: 0x26a30040  addiu       $v1, $s5, 0x40
    ctx->pc = 0x255324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x255328: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x255328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x25532c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x25532cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x255330: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x255330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x255334: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x255334u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x255338: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x25533c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x25533cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x255340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255344: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x255344u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x255348: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x255348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x25534c: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x25534cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x255350: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x255350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x255354: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255358: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x255358u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x25535c: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x25535cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x255360: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x255360u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x255364: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x255364u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x255368: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x255368u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x25536c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x25536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x255370: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255378: 0x262b021  addu        $s6, $s3, $v0
    ctx->pc = 0x255378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25537c: 0xaec30058  sw          $v1, 0x58($s6)
    ctx->pc = 0x25537cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 3));
    // 0x255380: 0x8fb700bc  lw          $s7, 0xBC($sp)
    ctx->pc = 0x255380u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255384: 0x17f13c  dsll32      $fp, $s7, 4
    ctx->pc = 0x255384u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 23) << (32 + 4));
    // 0x255388: 0x1ef13e  dsrl32      $fp, $fp, 4
    ctx->pc = 0x255388u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 4));
    // 0x25538c: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x25538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x255390: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255398: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x255398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x25539c: 0x36120004  ori         $s2, $s0, 0x4
    ctx->pc = 0x25539cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x2553a0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2553a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2553a4: 0xfea20030  sd          $v0, 0x30($s5)
    ctx->pc = 0x2553a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 2));
    // 0x2553a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2553a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2553ac: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2553acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2553b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2553b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2553b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2553b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2553b8: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x2553b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x2553bc: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2553bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2553c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2553c8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2553c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2553cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2553ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2553d0: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2553d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2553d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2553d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2553d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2553dc: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x2553dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2553e0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2553e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2553e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553e8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2553ec: 0x8c570038  lw          $s7, 0x38($v0)
    ctx->pc = 0x2553ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2553f0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2553f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2553f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2553f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2553f8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2553f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2553fc: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x2553fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x255400: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255404: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255408: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25540c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x25540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x255410: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255414: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x255414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255418: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x25541c: 0x94550000  lhu         $s5, 0x0($v0)
    ctx->pc = 0x25541cu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255420: 0x32b2ffff  andi        $s2, $s5, 0xFFFF
    ctx->pc = 0x255420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x255424: 0x2643002f  addiu       $v1, $s2, 0x2F
    ctx->pc = 0x255424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 47));
    // 0x255428: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x25542c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x25542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x255430: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x255430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x255434: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x255434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x255438: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x25543c: 0x0  nop
    ctx->pc = 0x25543cu;
    // NOP
    // 0x255440: 0x1010  mfhi        $v0
    ctx->pc = 0x255440u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x255444: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x255444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x255448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25544c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x25544cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x255450: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255458: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25545c: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x25545cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x255460: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x255460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x255464: 0x0  nop
    ctx->pc = 0x255464u;
    // NOP
label_255468:
    // 0x255468: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x25546c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x25546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x255470: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x255470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x255474: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x255474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x255478: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x255478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x25547c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x255480: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x255480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x255484: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x255484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x255488: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x255488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x25548c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x25548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255490: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255498: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25549c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x25549cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2554a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2554a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2554a4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2554a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2554a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2554a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2554ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2554acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2554b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2554B0u;
    {
        const bool branch_taken_0x2554b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2554b0) {
            ctx->pc = 0x2554C8u;
            goto label_2554c8;
        }
    }
    ctx->pc = 0x2554B8u;
    // 0x2554b8: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x2554b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2554bc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2554bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x2554c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2554C0u;
    {
        const bool branch_taken_0x2554c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554c0) {
            ctx->pc = 0x255570u;
            goto label_255570;
        }
    }
    ctx->pc = 0x2554C8u;
label_2554c8:
    // 0x2554c8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2554c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2554cc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2554ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2554d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2554d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2554d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2554d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2554d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2554D8u;
    {
        const bool branch_taken_0x2554d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554d8) {
            ctx->pc = 0x255528u;
            goto label_255528;
        }
    }
    ctx->pc = 0x2554E0u;
    // 0x2554e0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2554e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2554e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2554E4u;
    {
        const bool branch_taken_0x2554e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2554e4) {
            ctx->pc = 0x255508u;
            goto label_255508;
        }
    }
    ctx->pc = 0x2554ECu;
    // 0x2554ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2554ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2554f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2554f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2554f4: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2554f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2554f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2554fc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2554fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255500: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x255500u;
    {
        const bool branch_taken_0x255500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255500) {
            ctx->pc = 0x255570u;
            goto label_255570;
        }
    }
    ctx->pc = 0x255508u;
label_255508:
    // 0x255508: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25550c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25550cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255510: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255514: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x255514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x255518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25551c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x25551cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255520: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255520u;
    {
        const bool branch_taken_0x255520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255520) {
            ctx->pc = 0x255570u;
            goto label_255570;
        }
    }
    ctx->pc = 0x255528u;
label_255528:
    // 0x255528: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25552c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255530: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255530u;
    {
        const bool branch_taken_0x255530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255530) {
            ctx->pc = 0x255554u;
            goto label_255554;
        }
    }
    ctx->pc = 0x255538u;
    // 0x255538: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25553c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255540: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255544: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255548: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255548u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x25554c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25554Cu;
    {
        const bool branch_taken_0x25554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25554c) {
            ctx->pc = 0x255570u;
            goto label_255570;
        }
    }
    ctx->pc = 0x255554u;
label_255554:
    // 0x255554: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255558: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25555c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255560: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x255560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x255564: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255568: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255568u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x25556c: 0x0  nop
    ctx->pc = 0x25556cu;
    // NOP
label_255570:
    // 0x255570: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x255570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x255574: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x255574u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x255578: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x255578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25557c: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x25557cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x255580: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x255580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x255584: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255588: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x255588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25558c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255590: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x255590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255594: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25559c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2555a0: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x2555a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x2555a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2555a8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2555a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2555ac: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2555acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2555b0: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x2555b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2555b4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2555b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2555b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2555b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2555bc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2555bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2555c0: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x2555c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2555c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2555c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2555c8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2555c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2555cc: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2555ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2555d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2555d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2555d4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2555d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2555d8: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x2555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x2555dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2555dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2555e0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2555e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2555e4: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x2555e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2555e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2555e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2555ec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2555ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2555f0: 0x90850009  lbu         $a1, 0x9($a0)
    ctx->pc = 0x2555f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x2555f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2555f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2555f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2555f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2555fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2555fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x255600: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255604: 0xa0820009  sb          $v0, 0x9($a0)
    ctx->pc = 0x255604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x255608: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x255608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x25560c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25560c) {
            ctx->pc = 0x255644u;
            goto label_255644;
        }
    }
    ctx->pc = 0x255614u;
    // 0x255614: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x255614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x255618: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25561c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x25561cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255620: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x255620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x255624: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x255624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x255628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x255628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25562c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255630: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x255630u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255634: 0x30467fff  andi        $a2, $v0, 0x7FFF
    ctx->pc = 0x255634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255638: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x255638u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25563c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25563Cu;
    {
        const bool branch_taken_0x25563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25563c) {
            ctx->pc = 0x255670u;
            goto label_255670;
        }
    }
    ctx->pc = 0x255644u;
label_255644:
    // 0x255644: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x255644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x255648: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25564c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x25564cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255650: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x255650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255654: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x255654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x255658: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x255658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25565c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255660: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x255660u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255664: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x255664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255668: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x255668u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25566c: 0x0  nop
    ctx->pc = 0x25566cu;
    // NOP
label_255670:
    // 0x255670: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x255674: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255678: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x255678u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x25567c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x255680: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255684: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255688: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25568c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255690: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x255690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255694: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x255694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x255698: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25569c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2556a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2556a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2556a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2556a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2556a8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2556a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2556ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2556acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2556b0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2556b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2556b4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2556b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2556b8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2556bc: 0x34620105  ori         $v0, $v1, 0x105
    ctx->pc = 0x2556bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)261);
    // 0x2556c0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2556c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2556c4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2556c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2556c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2556cc: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x2556ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x2556d0: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x2556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x2556d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2556d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2556d8: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x2556d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x2556dc: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x2556dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x2556e0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2556e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2556e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2556e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2556e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2556e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2556ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2556ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2556f0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2556f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2556f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2556f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2556f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2556f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2556fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2556fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255700: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x255700u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x255704: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x255704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x255708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25570c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x25570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255710: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x255710u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x255714: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x255714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x255718: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x255718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x25571c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255720: 0x34428005  ori         $v0, $v0, 0x8005
    ctx->pc = 0x255720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x255724: 0x3c056800  lui         $a1, 0x6800
    ctx->pc = 0x255724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26624 << 16));
    // 0x255728: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x255728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25572c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x25572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x255730: 0x17193c  dsll32      $v1, $s7, 4
    ctx->pc = 0x255730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 4));
    // 0x255734: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x255734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x255738: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x255738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25573c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255740: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x255740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255744: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x255744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x255748: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25574c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x25574cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x255750: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255754: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255758: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x255758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25575c: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x25575cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x255760: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x255760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x255764: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x255764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x255768: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x255768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x25576c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25576cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x255770: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255774: 0x34438006  ori         $v1, $v0, 0x8006
    ctx->pc = 0x255774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x255778: 0x3c026500  lui         $v0, 0x6500
    ctx->pc = 0x255778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
    // 0x25577c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25577cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255780: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x255780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x255784: 0x1e113c  dsll32      $v0, $fp, 4
    ctx->pc = 0x255784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 4));
    // 0x255788: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x25578c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255790: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255794: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x255794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255798: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x255798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25579c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25579cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2557a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2557a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2557a4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x2557a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x2557a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2557a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2557ac: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2557acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2557b0: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x2557b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x2557b4: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x2557b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x2557b8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2557b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x2557bc: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2557bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2557c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2557c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2557c4: 0x34648007  ori         $a0, $v1, 0x8007
    ctx->pc = 0x2557c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32775);
    // 0x2557c8: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x2557c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x2557cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2557ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2557d0: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x2557d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2557d4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x2557d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x2557d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2557dc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2557dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2557e0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2557e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2557e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2557ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2557f0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2557f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2557f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2557f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2557f8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2557fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2557fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255800: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x255800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255804: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x255804u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x255808: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x255808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x25580c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x255810: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255814: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x255814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x255818: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x255818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x25581c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255820: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x255820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x255824: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x255824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x255828: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x255828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x25582c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x25582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255830: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x255830u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255834: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x255834u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x255838: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x255838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x25583c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x25583cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x255840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255844: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x255844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x255848: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x255848u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x25584c: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x255850: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x255850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x255854: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x255854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x255858: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x255858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x25585c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x25585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x255860: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x255860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x255864: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x255864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x255868: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x255868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25586c: 0x26d60240  addiu       $s6, $s6, 0x240
    ctx->pc = 0x25586cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x255870: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x255870u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x255874: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x255878: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25587c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x25587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x255880: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255884: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x255884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x255888: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x25588c: 0x1e40fef6  bgtz        $s2, . + 4 + (-0x10A << 2)
    ctx->pc = 0x25588Cu;
    {
        const bool branch_taken_0x25588c = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x25588c) {
            ctx->pc = 0x255468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255468;
        }
    }
    ctx->pc = 0x255894u;
    // 0x255894: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255898: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25589c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x25589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2558a0: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x2558a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x2558a4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2558a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2558a8: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x2558a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x2558ac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2558acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2558b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2558b4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2558b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2558b8: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x2558b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2558bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2558bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2558c0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2558c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2558c4: 0x1c40fe96  bgtz        $v0, . + 4 + (-0x16A << 2)
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x255320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255320;
        }
    }
    ctx->pc = 0x2558CCu;
    // 0x2558cc: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2558d0: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x2558d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2558d4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2558d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2558d8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2558d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2558dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2558dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2558e0: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x2558e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2558e4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2558e8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2558e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2558ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2558ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2558f0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x2558f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x2558f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2558f8: 0x24570090  addiu       $s7, $v0, 0x90
    ctx->pc = 0x2558f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2558fc: 0xafb700b8  sw          $s7, 0xB8($sp)
    ctx->pc = 0x2558fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 23));
    // 0x255900: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255904: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x255904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x255908: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x255908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x25590c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x25590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255910: 0x62f02b  sltu        $fp, $v1, $v0
    ctx->pc = 0x255910u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x255914: 0x17c0fe02  bnez        $fp, . + 4 + (-0x1FE << 2)
    ctx->pc = 0x255914u;
    {
        const bool branch_taken_0x255914 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x255914) {
            ctx->pc = 0x255120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255120;
        }
    }
    ctx->pc = 0x25591Cu;
    // 0x25591c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255920: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x255920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255924: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x255924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x255928: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25592c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25592cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255930: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255934: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x255938: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x255938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x25593c: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x25593cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255940: 0x26b20040  addiu       $s2, $s5, 0x40
    ctx->pc = 0x255940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x255944: 0xafb200f8  sw          $s2, 0xF8($sp)
    ctx->pc = 0x255944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 18));
    // 0x255948: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x255948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x25594c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x25594cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x255950: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x255950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x255954: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x255954u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x255958: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25595c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255960: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x255960u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x255964: 0x0  nop
    ctx->pc = 0x255964u;
    // NOP
label_255968:
    // 0x255968: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25596c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x25596cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255970: 0x1460fdc8  bnez        $v1, . + 4 + (-0x238 << 2)
    ctx->pc = 0x255970u;
    {
        const bool branch_taken_0x255970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255970) {
            ctx->pc = 0x255094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255094;
        }
    }
    ctx->pc = 0x255978u;
    // 0x255978: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25597c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25597cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x255980: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x255980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255984: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x255984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255988: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25598c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25598cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25599c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25599cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2559a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2559a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2559a4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2559a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2559a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2559A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2559A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2559B0u;
}
