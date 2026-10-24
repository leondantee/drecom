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

// Function: entry_0037af48
// Address: 0x37af48 - 0x37b2d4
void entry_0037af48_0x37af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037af48_0x37af48");
#endif

    switch (ctx->pc) {
        case 0x37afdcu: goto label_37afdc;
        case 0x37b008u: goto label_37b008;
        case 0x37b038u: goto label_37b038;
        case 0x37b170u: goto label_37b170;
        case 0x37b1ecu: goto label_37b1ec;
        case 0x37b22cu: goto label_37b22c;
        case 0x37b264u: goto label_37b264;
        case 0x37b298u: goto label_37b298;
        default: break;
    }

    ctx->pc = 0x37af48u;

    // 0x37af48: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x37af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x37af4c: 0x263302b  sltu        $a2, $s3, $v1
    ctx->pc = 0x37af4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37af50: 0x14c0ff54  bnez        $a2, . + 4 + (-0xAC << 2)
    ctx->pc = 0x37AF50u;
    {
        const bool branch_taken_0x37af50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x37af50) {
            ctx->pc = 0x37ACA4u;
            return;
        }
    }
    ctx->pc = 0x37AF58u;
    // 0x37af58: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x37af5c: 0x2443674c  addiu       $v1, $v0, 0x674C
    ctx->pc = 0x37af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26444));
    // 0x37af60: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x37af60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37af64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37af68: 0x2456ba30  addiu       $s6, $v0, -0x45D0
    ctx->pc = 0x37af68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949424));
    // 0x37af6c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x37af6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3ABA30u));
    // 0x37af70: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x37af70u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37af74: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37af78: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37af78u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37af7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37af80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37af84: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x37af84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37af88: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x37af88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x37af8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37af90: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37af94: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x37af94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37af98: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x37af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
    // 0x37af9c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37afa0: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x37afa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37afa4: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x37afa4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x37afa8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x37afa8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37afac: 0x0  nop
    ctx->pc = 0x37afacu;
    // NOP
    // 0x37afb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37afb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37afb4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x37afb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37afb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37afbc: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x37afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37afc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37afc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37afc4: 0x0  nop
    ctx->pc = 0x37afc4u;
    // NOP
    // 0x37afc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37afc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37afcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37afccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37afd0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x37afd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x37afd4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37AFD4u;
    SET_GPR_U32(ctx, 31, 0x37AFDCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37AFD4u, 0x37AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFDCu;
label_37afdc:
    // 0x37afdc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x37afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x37afe0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37afe0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37afe4: 0x0  nop
    ctx->pc = 0x37afe4u;
    // NOP
    // 0x37afe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37afe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37afec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37aff0: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x37aff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37aff4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37aff4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37aff8: 0x0  nop
    ctx->pc = 0x37aff8u;
    // NOP
    // 0x37affc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37affcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37b000: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37B000u;
    SET_GPR_U32(ctx, 31, 0x37B008u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37B000u, 0x37B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B008u;
label_37b008:
    // 0x37b008: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37b008u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b00c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x37b00cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b010: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37b010u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b014: 0x0  nop
    ctx->pc = 0x37b014u;
    // NOP
    // 0x37b018: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37b018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37b01c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x37b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x37b020: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x37b020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x37b024: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37b024u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b028: 0x0  nop
    ctx->pc = 0x37b028u;
    // NOP
    // 0x37b02c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37b02cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37b030: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37B030u;
    SET_GPR_U32(ctx, 31, 0x37B038u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37B030u, 0x37B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B038u;
label_37b038:
    // 0x37b038: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37b038u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b03c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b040: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b044: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37b044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37b048: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x37b048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37b04c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x37b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x37b050: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37b054: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x37b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37b058: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x37b058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x37b05c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b060: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37b064: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x37b064u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37b068: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37b06c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b070: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37b070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37b074: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x37b074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b078: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x37b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37b07c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b080: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x37b080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37b084: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x37b084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x37b088: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37b08c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37b090: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b094: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x37b094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b098: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37b09c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b0a0: 0x8fb600a8  lw          $s6, 0xA8($sp)
    ctx->pc = 0x37b0a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37b0a4: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37b0a8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x37b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37b0ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x37b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x37b0b0: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x37b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37b0b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37b0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b0b8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x37b0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x37b0bc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x37b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37b0c0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x37b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x37b0c4: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x37b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37b0c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b0cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b0d0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x37b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37b0d4: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x37b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37b0d8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x37b0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b0dc: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x37b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37b0e0: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x37b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x37b0e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b0e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37b0e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b0ec: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x37b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37b0f0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x37b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x37b0f4: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37b0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37b0f8: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x37b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37b0fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b100: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x37b100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37b104: 0x24757000  addiu       $s5, $v1, 0x7000
    ctx->pc = 0x37b104u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37b108: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x37b108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x37b10c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37b110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37b110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b114: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37b118: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b11c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b120: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x37b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37b124: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b128: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37b12c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x37b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37b130: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b134: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37b134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37b138: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b13c: 0x244200a3  addiu       $v0, $v0, 0xA3
    ctx->pc = 0x37b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
    // 0x37b140: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x37b140u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b144: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x37b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37b148: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x37b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b14c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37b150: 0x2446cca0  addiu       $a2, $v0, -0x3360
    ctx->pc = 0x37b150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x37b154: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37b158: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37b15c: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37b160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b164: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b168: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B168u;
    SET_GPR_U32(ctx, 31, 0x37B170u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B168u, 0x37B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B170u;
label_37b170:
    // 0x37b170: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x37b170u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x37b174: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x37b174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x37b178: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b17c: 0x34461009  ori         $a2, $v0, 0x1009
    ctx->pc = 0x37b17cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37b180: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x37b180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x37b184: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37b188: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37b18c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37b18cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37b190: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x37b190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x37b194: 0x34c2000a  ori         $v0, $a2, 0xA
    ctx->pc = 0x37b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x37b198: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37b19c: 0x3b03c  dsll32      $s6, $v1, 0
    ctx->pc = 0x37b19cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37b1a0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x37b1a0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x37b1a4: 0x161bb8  dsll        $v1, $s6, 14
    ctx->pc = 0x37b1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << 14);
    // 0x37b1a8: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x37b1a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37b1ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x37b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37b1b0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x37b1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37b1b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37b1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37b1b8: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x37b1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x37b1bc: 0x483825  or          $a3, $v0, $t0
    ctx->pc = 0x37b1bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x37b1c0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x37b1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37b1c4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x37b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37b1c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37b1c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37b1cc: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x37b1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37b1d0: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x37b1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x37b1d4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37b1d8: 0x27c3001c  addiu       $v1, $fp, 0x1C
    ctx->pc = 0x37b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b1dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x37b1dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b1e0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b1e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b1e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B1E4u;
    SET_GPR_U32(ctx, 31, 0x37B1ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B1E4u, 0x37B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1ECu;
label_37b1ec:
    // 0x37b1ec: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37b1f0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37b1f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b1f4: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x37b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b1f8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x37b1f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b1fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b200: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37b200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37b204: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b208: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37b208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37b20c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b210: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x37b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37b214: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x37b214u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x37b218: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b21c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37b21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b220: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b224: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B224u;
    SET_GPR_U32(ctx, 31, 0x37B22Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B224u, 0x37B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B22Cu;
label_37b22c:
    // 0x37b22c: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x37b22cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b230: 0x72c09628  paddub      $s2, $s6, $zero
    ctx->pc = 0x37b230u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x37b234: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x37b234u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x37b238: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x37b238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x37b23c: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x37b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x37b240: 0x34c21015  ori         $v0, $a2, 0x1015
    ctx->pc = 0x37b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4117);
    // 0x37b244: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b248: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37b24c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37b24cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37b250: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37b254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b258: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b25c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B25Cu;
    SET_GPR_U32(ctx, 31, 0x37B264u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B25Cu, 0x37B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B264u;
label_37b264:
    // 0x37b264: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37b264u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b268: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b26c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x37b26cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b270: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37b270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37b274: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37b274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x37b278: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b27c: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37b280: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b284: 0x27c3001c  addiu       $v1, $fp, 0x1C
    ctx->pc = 0x37b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b288: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x37b288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b28c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b28cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b290: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B290u;
    SET_GPR_U32(ctx, 31, 0x37B298u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B290u, 0x37B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B298u;
label_37b298:
    // 0x37b298: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b29c: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37b29cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37b2a0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x37b2a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37b2a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37b2a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37b2a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37b2a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37b2ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37b2acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37b2b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37b2b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37b2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37b2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37b2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b2c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x37b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x37b2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B2D4u;
}
