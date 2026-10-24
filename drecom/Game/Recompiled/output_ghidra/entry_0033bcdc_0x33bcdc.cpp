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

// Function: entry_0033bcdc
// Address: 0x33bcdc - 0x33be20
void entry_0033bcdc_0x33bcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bcdc_0x33bcdc");
#endif

    switch (ctx->pc) {
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd24u: goto label_33bd24;
        case 0x33bdc8u: goto label_33bdc8;
        default: break;
    }

    ctx->pc = 0x33bcdcu;

label_33bcdc:
    // 0x33bcdc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x33bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_33bce0:
    // 0x33bce0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33bce4:
    // 0x33bce4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33bce8:
    // 0x33bce8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33bce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33bcec:
    // 0x33bcec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_33bcf0:
    // 0x33bcf0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bcf4:
    // 0x33bcf4: 0xc0cf1b0  jal         func_33C6C0
label_33bcf8:
    if (ctx->pc == 0x33BCF8u) {
        ctx->pc = 0x33BCFCu;
        goto label_33bcfc;
    }
    ctx->pc = 0x33BCF4u;
    SET_GPR_U32(ctx, 31, 0x33BCFCu);
    ctx->pc = 0x33C6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C6C0u, 0x33BCF4u, 0x33BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCFCu;
label_33bcfc:
    // 0x33bcfc: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x33bcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_33bd00:
    // 0x33bd00: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bd04:
    // 0x33bd04: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x33bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33bd08:
    // 0x33bd08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33bd0c:
    // 0x33bd0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33bd10:
    // 0x33bd10: 0x24429ec0  addiu       $v0, $v0, -0x6140
    ctx->pc = 0x33bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942400));
label_33bd14:
    // 0x33bd14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bd18:
    // 0x33bd18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd1c:
    // 0x33bd1c: 0x40f809  jalr        $v0
label_33bd20:
    if (ctx->pc == 0x33BD20u) {
        ctx->pc = 0x33BD24u;
        goto label_33bd24;
    }
    ctx->pc = 0x33BD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BD24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD1Cu, 0x33BD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BD24u;
label_33bd24:
    // 0x33bd24: 0x14400151  bnez        $v0, . + 4 + (0x151 << 2)
label_33bd28:
    if (ctx->pc == 0x33BD28u) {
        ctx->pc = 0x33BD2Cu;
        goto label_33bd2c;
    }
    ctx->pc = 0x33BD24u;
    {
        const bool branch_taken_0x33bd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bd24) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BD2Cu;
label_33bd2c:
    // 0x33bd2c: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33bd2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bd30:
    // 0x33bd30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33bd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_33bd34:
    // 0x33bd34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33bd34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33bd38:
    // 0x33bd38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33bd3c:
    // 0x33bd3c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33bd40:
    // 0x33bd40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bd44:
    // 0x33bd44: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_33bd48:
    // 0x33bd48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33bd48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd4c:
    // 0x33bd4c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bd50:
    // 0x33bd50: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_33bd54:
    // 0x33bd54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_33bd58:
    // 0x33bd58: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33bd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bd5c:
    // 0x33bd5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_33bd60:
    // 0x33bd60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33bd60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33bd64:
    // 0x33bd64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33bd68:
    // 0x33bd68: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33bd6c:
    // 0x33bd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bd70:
    // 0x33bd70: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_33bd74:
    // 0x33bd74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33bd74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33bd78:
    // 0x33bd78: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_33bd7c:
    // 0x33bd7c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_33bd80:
    // 0x33bd80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_33bd84:
    // 0x33bd84: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33bd84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bd88:
    // 0x33bd88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33bd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_33bd8c:
    // 0x33bd8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bd8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bd90:
    // 0x33bd90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33bd94:
    // 0x33bd94: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x33bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_33bd98:
    // 0x33bd98: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x33bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_33bd9c:
    // 0x33bd9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33bda0:
    // 0x33bda0: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x33bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_33bda4:
    // 0x33bda4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_33bda8:
    // 0x33bda8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x33bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_33bdac:
    // 0x33bdac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33bdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_33bdb0:
    // 0x33bdb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33bdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33bdb4:
    // 0x33bdb4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_33bdb8:
    // 0x33bdb8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x33bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_33bdbc:
    // 0x33bdbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33bdbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33bdc0:
    // 0x33bdc0: 0xc067b18  jal         func_19EC60
label_33bdc4:
    if (ctx->pc == 0x33BDC4u) {
        ctx->pc = 0x33BDC8u;
        goto label_33bdc8;
    }
    ctx->pc = 0x33BDC0u;
    SET_GPR_U32(ctx, 31, 0x33BDC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x33BDC0u, 0x33BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDC8u;
label_33bdc8:
    // 0x33bdc8: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x33bdc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_33bdcc:
    // 0x33bdcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33bdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33bdd0:
    // 0x33bdd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bdd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_33bdd4:
    // 0x33bdd4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bdd8:
    // 0x33bdd8: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_33bddc:
    // 0x33bddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33bde0:
    // 0x33bde0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33bde4:
    // 0x33bde4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x33bde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_33bde8:
    // 0x33bde8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33bdec:
    // 0x33bdec: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_33bdf0:
    if (ctx->pc == 0x33BDF0u) {
        ctx->pc = 0x33BDF4u;
        goto label_33bdf4;
    }
    ctx->pc = 0x33BDECu;
    {
        const bool branch_taken_0x33bdec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bdec) {
            ctx->pc = 0x33BE68u;
            return;
        }
    }
    ctx->pc = 0x33BDF4u;
label_33bdf4:
    // 0x33bdf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33bdf8:
    // 0x33bdf8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_33bdfc:
    if (ctx->pc == 0x33BDFCu) {
        ctx->pc = 0x33BE00u;
        goto label_33be00;
    }
    ctx->pc = 0x33BDF8u;
    {
        const bool branch_taken_0x33bdf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bdf8) {
            ctx->pc = 0x33BE68u;
            return;
        }
    }
    ctx->pc = 0x33BE00u;
label_33be00:
    // 0x33be00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33be04:
    // 0x33be04: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_33be08:
    if (ctx->pc == 0x33BE08u) {
        ctx->pc = 0x33BE0Cu;
        goto label_33be0c;
    }
    ctx->pc = 0x33BE04u;
    {
        const bool branch_taken_0x33be04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33be04) {
            ctx->pc = 0x33BE50u;
            return;
        }
    }
    ctx->pc = 0x33BE0Cu;
label_33be0c:
    // 0x33be0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33be10:
    // 0x33be10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_33be14:
    if (ctx->pc == 0x33BE14u) {
        ctx->pc = 0x33BE18u;
        goto label_33be18;
    }
    ctx->pc = 0x33BE10u;
    {
        const bool branch_taken_0x33be10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33be10) {
            ctx->pc = 0x33BE20u;
            return;
        }
    }
    ctx->pc = 0x33BE18u;
label_33be18:
    // 0x33be18: 0x10000013  b           . + 4 + (0x13 << 2)
label_33be1c:
    if (ctx->pc == 0x33BE1Cu) {
        ctx->pc = 0x33BE20u;
        goto label_fallthrough_0x33be18;
    }
    ctx->pc = 0x33BE18u;
    {
        const bool branch_taken_0x33be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be18) {
            ctx->pc = 0x33BE68u;
            return;
        }
    }
label_fallthrough_0x33be18:
    ctx->pc = 0x33BE20u;
}
