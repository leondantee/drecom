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

// Function: Em0a_eye_r0_bomb
// Address: 0x369010 - 0x3692c8
void Em0a_eye_r0_bomb_0x369010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_bomb_0x369010");
#endif

    switch (ctx->pc) {
        case 0x369160u: goto label_369160;
        case 0x36919cu: goto label_36919c;
        case 0x3691b8u: goto label_3691b8;
        case 0x3691c4u: goto label_3691c4;
        case 0x3691d4u: goto label_3691d4;
        case 0x3691f0u: goto label_3691f0;
        case 0x36921cu: goto label_36921c;
        case 0x369248u: goto label_369248;
        default: break;
    }

    ctx->pc = 0x369010u;

    // 0x369010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x369010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x369014: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x369014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x369018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36901c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369024: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x369024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x369028: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x369028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x36902c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x36902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369030: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x369034: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x369034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x369038: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x369038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36903c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36903cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369040: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x369040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x369044: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369048: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x369048u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36904c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x36904cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369050: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x369050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x369054: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x369054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x369058: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x369058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36905c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x369060: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x369064: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x369064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x369068: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x369068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36906c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x36906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369070: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x369074: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x369074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x369078: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x369078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36907c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369080: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x369080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x369084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369088: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x369088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36908c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x36908cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x369090: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369094: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x369098: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x369098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36909c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3690a0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3690a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3690a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3690a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3690a8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x3690a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3690ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3690acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3690b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3690b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3690b4: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3690B4u;
    {
        const bool branch_taken_0x3690b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3690b4) {
            ctx->pc = 0x3691ACu;
            goto label_3691ac;
        }
    }
    ctx->pc = 0x3690BCu;
    // 0x3690bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3690BCu;
    {
        const bool branch_taken_0x3690bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3690bc) {
            ctx->pc = 0x3690CCu;
            goto label_3690cc;
        }
    }
    ctx->pc = 0x3690C4u;
    // 0x3690c4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x3690C4u;
    {
        const bool branch_taken_0x3690c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3690c4) {
            ctx->pc = 0x3692ACu;
            goto label_3692ac;
        }
    }
    ctx->pc = 0x3690CCu;
label_3690cc:
    // 0x3690cc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3690ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3690d0: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x3690d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x3690d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3690d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3690d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3690d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3690dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3690dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3690e0: 0x2442af30  addiu       $v0, $v0, -0x50D0
    ctx->pc = 0x3690e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946608));
    // 0x3690e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3690e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3690e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3690e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3690ec: 0x402027  not         $a0, $v0
    ctx->pc = 0x3690ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x3690f0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x3690f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3690f4: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x3690f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x3690f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3690f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3690fc: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x3690fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x369100: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x369100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x369104: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x369104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369108: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x369108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x36910c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x36910cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x369110: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x369110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x369114: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x369114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x369118: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x369118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369120: 0x0  nop
    ctx->pc = 0x369120u;
    // NOP
    // 0x369124: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x369124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x369128: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x369128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369130: 0x0  nop
    ctx->pc = 0x369130u;
    // NOP
    // 0x369134: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x369134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x369138: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x369138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36913c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369140: 0x0  nop
    ctx->pc = 0x369140u;
    // NOP
    // 0x369144: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x369144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x369148: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x369148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36914c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x369150: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x369150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x369154: 0x24450970  addiu       $a1, $v0, 0x970
    ctx->pc = 0x369154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x369158: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369158u;
    SET_GPR_U32(ctx, 31, 0x369160u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369160u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369160u) { return; }
    ctx->pc = 0x369160u;
label_369160:
    // 0x369160: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x369160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369164: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x369164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x369168: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x369168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36916c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x369170: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x369170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x369174: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x369174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x369178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x369178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36917c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x369180: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x369180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x369184: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x369184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x369188: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x369188u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36918c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36918cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x369190: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x369190u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x369194: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x369194u;
    SET_GPR_U32(ctx, 31, 0x36919Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x369194u, 0x36919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36919Cu;
label_36919c:
    // 0x36919c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x36919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3691a0: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x3691a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3691a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3691a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3691a8: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3691a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
label_3691ac:
    // 0x3691ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3691acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3691b0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3691B0u;
    SET_GPR_U32(ctx, 31, 0x3691B8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3691B0u, 0x3691B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691B8u;
label_3691b8:
    // 0x3691b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3691b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3691bc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3691BCu;
    SET_GPR_U32(ctx, 31, 0x3691C4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3691C4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3691C4u) { return; }
    ctx->pc = 0x3691C4u;
label_3691c4:
    // 0x3691c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3691c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3691c8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3691c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3691cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3691CCu;
    SET_GPR_U32(ctx, 31, 0x3691D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3691D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3691D4u) { return; }
    ctx->pc = 0x3691D4u;
label_3691d4:
    // 0x3691d4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x3691d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3691d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3691d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3691dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3691dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3691e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3691e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3691e4: 0x24478d30  addiu       $a3, $v0, -0x72D0
    ctx->pc = 0x3691e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x3691e8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3691E8u;
    SET_GPR_U32(ctx, 31, 0x3691F0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3691E8u, 0x3691F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691F0u;
label_3691f0:
    // 0x3691f0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3691f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3691f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3691f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3691f8: 0x0  nop
    ctx->pc = 0x3691f8u;
    // NOP
    // 0x3691fc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3691fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x369200: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x369200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369204: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x369204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369208: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x369208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36920c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x369210: 0x24478d30  addiu       $a3, $v0, -0x72D0
    ctx->pc = 0x369210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x369214: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x369214u;
    SET_GPR_U32(ctx, 31, 0x36921Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x369214u, 0x36921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36921Cu;
label_36921c:
    // 0x36921c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x36921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x369220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369224: 0x0  nop
    ctx->pc = 0x369224u;
    // NOP
    // 0x369228: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x369228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x36922c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x36922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369230: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x369230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369234: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x369234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x369238: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x369238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36923c: 0x24478d30  addiu       $a3, $v0, -0x72D0
    ctx->pc = 0x36923cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x369240: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x369240u;
    SET_GPR_U32(ctx, 31, 0x369248u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x369240u, 0x369248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369248u;
label_369248:
    // 0x369248: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x369248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36924c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x369250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369254: 0x0  nop
    ctx->pc = 0x369254u;
    // NOP
    // 0x369258: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36925c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x36925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x369260: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x369260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369268: 0x0  nop
    ctx->pc = 0x369268u;
    // NOP
    // 0x36926c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36926cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369270: 0x0  nop
    ctx->pc = 0x369270u;
    // NOP
    // 0x369274: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x369274u;
    {
        const bool branch_taken_0x369274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369274) {
            ctx->pc = 0x36929Cu;
            goto label_36929c;
        }
    }
    ctx->pc = 0x36927Cu;
    // 0x36927c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36927cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369280: 0x0  nop
    ctx->pc = 0x369280u;
    // NOP
    // 0x369284: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x369284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x369288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x369288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36928c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x36928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369290: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x369290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369294: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x369294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369298: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
label_36929c:
    // 0x36929c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x36929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3692a0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3692a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3692a4: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3692a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3692a8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3692a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_3692ac:
    // 0x3692ac: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3692acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3692b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3692b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3692b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3692b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3692b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3692b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3692bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x3692bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3692c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3692C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3692C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3692C8u;
}
