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

// Function: Plw01_atk02_atk
// Address: 0x1bfca0 - 0x1bff10
void Plw01_atk02_atk_0x1bfca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk02_atk_0x1bfca0");
#endif

    switch (ctx->pc) {
        case 0x1bfd20u: goto label_1bfd20;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd60u: goto label_1bfd60;
        case 0x1bfd78u: goto label_1bfd78;
        case 0x1bfdd0u: goto label_1bfdd0;
        case 0x1bfddcu: goto label_1bfddc;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfdfcu: goto label_1bfdfc;
        case 0x1bfe74u: goto label_1bfe74;
        default: break;
    }

    ctx->pc = 0x1bfca0u;

    // 0x1bfca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfca4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bfca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bfca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfcac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1bfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1bfcb0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bfcb4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bfcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bfcb8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bfcbc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bfcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bfcc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfcc4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1bfcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1bfcc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfccc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bfcccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bfcd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bfcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfcd8: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BFCD8u;
    {
        const bool branch_taken_0x1bfcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bfcd8) {
            ctx->pc = 0x1BFD94u;
            goto label_1bfd94;
        }
    }
    ctx->pc = 0x1BFCE0u;
    // 0x1bfce0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFCE0u;
    {
        const bool branch_taken_0x1bfce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfce0) {
            ctx->pc = 0x1BFCF0u;
            goto label_1bfcf0;
        }
    }
    ctx->pc = 0x1BFCE8u;
    // 0x1bfce8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1BFCE8u;
    {
        const bool branch_taken_0x1bfce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfce8) {
            ctx->pc = 0x1BFEFCu;
            goto label_1bfefc;
        }
    }
    ctx->pc = 0x1BFCF0u;
label_1bfcf0:
    // 0x1bfcf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfcf4: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bfcf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bfcf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BFCF8u;
    {
        const bool branch_taken_0x1bfcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfcf8) {
            ctx->pc = 0x1BFD40u;
            goto label_1bfd40;
        }
    }
    ctx->pc = 0x1BFD00u;
    // 0x1bfd00: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd08: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd0c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1bfd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1bfd10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfd18: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFD18u;
    SET_GPR_U32(ctx, 31, 0x1BFD20u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFD18u, 0x1BFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD20u;
label_1bfd20:
    // 0x1bfd20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd24: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd28: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1bfd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bfd2c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bfd30: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BFD30u;
    SET_GPR_U32(ctx, 31, 0x1BFD38u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BFD30u, 0x1BFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BFD38u;
    {
        const bool branch_taken_0x1bfd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd38) {
            ctx->pc = 0x1BFD78u;
            goto label_1bfd78;
        }
    }
    ctx->pc = 0x1BFD40u;
label_1bfd40:
    // 0x1bfd40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd48: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd4c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1bfd50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfd50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfd58: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFD58u;
    SET_GPR_U32(ctx, 31, 0x1BFD60u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFD58u, 0x1BFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD60u;
label_1bfd60:
    // 0x1bfd60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd64: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bfd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd68: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1bfd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1bfd6c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bfd70: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BFD70u;
    SET_GPR_U32(ctx, 31, 0x1BFD78u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BFD70u, 0x1BFD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD78u;
label_1bfd78:
    // 0x1bfd78: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bfd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bfd7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd80: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1bfd80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bfd84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd88: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bfd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bfd8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfd90: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bfd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bfd94:
    // 0x1bfd94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd98: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1bfd98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1bfd9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bfd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfda0: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1bfda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1bfda4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFDA4u;
    {
        const bool branch_taken_0x1bfda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfda4) {
            ctx->pc = 0x1BFDC0u;
            goto label_1bfdc0;
        }
    }
    ctx->pc = 0x1BFDACu;
    // 0x1bfdac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bfdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bfdb0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bfdb4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bfdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bfdb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bfdbc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bfdbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1bfdc0:
    // 0x1bfdc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfdc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfdc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfdc8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BFDC8u;
    SET_GPR_U32(ctx, 31, 0x1BFDD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BFDC8u, 0x1BFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDD0u;
label_1bfdd0:
    // 0x1bfdd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfdd4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BFDD4u;
    SET_GPR_U32(ctx, 31, 0x1BFDDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BFDD4u, 0x1BFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDDCu;
label_1bfddc:
    // 0x1bfddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bfddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfde0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfde4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfde4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfde8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BFDE8u;
    SET_GPR_U32(ctx, 31, 0x1BFDF0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BFDE8u, 0x1BFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDF0u;
label_1bfdf0:
    // 0x1bfdf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfdf4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BFDF4u;
    SET_GPR_U32(ctx, 31, 0x1BFDFCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BFDF4u, 0x1BFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDFCu;
label_1bfdfc:
    // 0x1bfdfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe00: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1bfe00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1bfe04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bfe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfe08: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bfe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bfe0c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BFE0Cu;
    {
        const bool branch_taken_0x1bfe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe0c) {
            ctx->pc = 0x1BFE7Cu;
            goto label_1bfe7c;
        }
    }
    ctx->pc = 0x1BFE14u;
    // 0x1bfe14: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bfe18: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bfe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bfe1c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BFE1Cu;
    {
        const bool branch_taken_0x1bfe1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe1c) {
            ctx->pc = 0x1BFE7Cu;
            goto label_1bfe7c;
        }
    }
    ctx->pc = 0x1BFE24u;
    // 0x1bfe24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe28: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bfe2c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bfe30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfe34: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BFE34u;
    {
        const bool branch_taken_0x1bfe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe34) {
            ctx->pc = 0x1BFE7Cu;
            goto label_1bfe7c;
        }
    }
    ctx->pc = 0x1BFE3Cu;
    // 0x1bfe3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe40: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bfe40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bfe44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFE44u;
    {
        const bool branch_taken_0x1bfe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe44) {
            ctx->pc = 0x1BFE5Cu;
            goto label_1bfe5c;
        }
    }
    ctx->pc = 0x1BFE4Cu;
    // 0x1bfe4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe50: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1bfe50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfe54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFE54u;
    {
        const bool branch_taken_0x1bfe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe54) {
            ctx->pc = 0x1BFE68u;
            goto label_1bfe68;
        }
    }
    ctx->pc = 0x1BFE5Cu;
label_1bfe5c:
    // 0x1bfe5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfe60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe64: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1bfe64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
label_1bfe68:
    // 0x1bfe68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe6c: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1BFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE74u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1BFE6Cu, 0x1BFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE74u;
label_1bfe74:
    // 0x1bfe74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BFE74u;
    {
        const bool branch_taken_0x1bfe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe74) {
            ctx->pc = 0x1BFEFCu;
            goto label_1bfefc;
        }
    }
    ctx->pc = 0x1BFE7Cu;
label_1bfe7c:
    // 0x1bfe7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe80: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1bfe80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1bfe84: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BFE84u;
    {
        const bool branch_taken_0x1bfe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe84) {
            ctx->pc = 0x1BFEFCu;
            goto label_1bfefc;
        }
    }
    ctx->pc = 0x1BFE8Cu;
    // 0x1bfe8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfe90: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1bfe90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1bfe94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFE94u;
    {
        const bool branch_taken_0x1bfe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe94) {
            ctx->pc = 0x1BFEACu;
            goto label_1bfeac;
        }
    }
    ctx->pc = 0x1BFE9Cu;
    // 0x1bfe9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfea0: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1bfea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFEA4u;
    {
        const bool branch_taken_0x1bfea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfea4) {
            ctx->pc = 0x1BFEB8u;
            goto label_1bfeb8;
        }
    }
    ctx->pc = 0x1BFEACu;
label_1bfeac:
    // 0x1bfeac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfeb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfeb4: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1bfeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
label_1bfeb8:
    // 0x1bfeb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfec0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bfec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bfec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfec8: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1bfec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1bfecc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bfeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfed0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFED0u;
    {
        const bool branch_taken_0x1bfed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfed0) {
            ctx->pc = 0x1BFEE8u;
            goto label_1bfee8;
        }
    }
    ctx->pc = 0x1BFED8u;
    // 0x1bfed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfedc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bfedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFEE0u;
    {
        const bool branch_taken_0x1bfee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfee0) {
            ctx->pc = 0x1BFEF4u;
            goto label_1bfef4;
        }
    }
    ctx->pc = 0x1BFEE8u;
label_1bfee8:
    // 0x1bfee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfeec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfef0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bfef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bfef4:
    // 0x1bfef4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1BFEF4u;
    {
        const bool branch_taken_0x1bfef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfef4) {
            ctx->pc = 0x1BFEFCu;
            goto label_1bfefc;
        }
    }
    ctx->pc = 0x1BFEFCu;
label_1bfefc:
    // 0x1bfefc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bfefcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bff00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bff00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bff04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bff08: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFF10u;
}
