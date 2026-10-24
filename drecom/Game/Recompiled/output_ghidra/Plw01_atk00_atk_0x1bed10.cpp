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

// Function: Plw01_atk00_atk
// Address: 0x1bed10 - 0x1bef80
void Plw01_atk00_atk_0x1bed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk00_atk_0x1bed10");
#endif

    switch (ctx->pc) {
        case 0x1bed80u: goto label_1bed80;
        case 0x1bed98u: goto label_1bed98;
        case 0x1bedc0u: goto label_1bedc0;
        case 0x1bedd8u: goto label_1bedd8;
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee4cu: goto label_1bee4c;
        case 0x1bee60u: goto label_1bee60;
        case 0x1bee6cu: goto label_1bee6c;
        case 0x1beee4u: goto label_1beee4;
        default: break;
    }

    ctx->pc = 0x1bed10u;

    // 0x1bed10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bed14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bed18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bed1c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1bed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1bed20: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bed20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bed24: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bed24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bed28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed2c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bed2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bed30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bed30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bed34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed38: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BED38u;
    {
        const bool branch_taken_0x1bed38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bed38) {
            ctx->pc = 0x1BEDF4u;
            goto label_1bedf4;
        }
    }
    ctx->pc = 0x1BED40u;
    // 0x1bed40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BED40u;
    {
        const bool branch_taken_0x1bed40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed40) {
            ctx->pc = 0x1BED50u;
            goto label_1bed50;
        }
    }
    ctx->pc = 0x1BED48u;
    // 0x1bed48: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1BED48u;
    {
        const bool branch_taken_0x1bed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed48) {
            ctx->pc = 0x1BEF6Cu;
            goto label_1bef6c;
        }
    }
    ctx->pc = 0x1BED50u;
label_1bed50:
    // 0x1bed50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed54: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bed54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bed58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BED58u;
    {
        const bool branch_taken_0x1bed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed58) {
            ctx->pc = 0x1BEDA0u;
            goto label_1beda0;
        }
    }
    ctx->pc = 0x1BED60u;
    // 0x1bed60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed68: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bed6c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1bed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bed70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bed78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BED78u;
    SET_GPR_U32(ctx, 31, 0x1BED80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BED78u, 0x1BED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED80u;
label_1bed80:
    // 0x1bed80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bed84: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bed88: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bed8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1bed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1bed90: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BED90u;
    SET_GPR_U32(ctx, 31, 0x1BED98u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BED90u, 0x1BED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED98u;
label_1bed98:
    // 0x1bed98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BED98u;
    {
        const bool branch_taken_0x1bed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed98) {
            ctx->pc = 0x1BEDD8u;
            goto label_1bedd8;
        }
    }
    ctx->pc = 0x1BEDA0u;
label_1beda0:
    // 0x1beda0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1beda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beda4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beda8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bedac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1bedacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bedb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bedb4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bedb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bedb8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BEDB8u;
    SET_GPR_U32(ctx, 31, 0x1BEDC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BEDB8u, 0x1BEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDC0u;
label_1bedc0:
    // 0x1bedc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bedc4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bedc8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bedc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bedcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bedd0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BEDD0u;
    SET_GPR_U32(ctx, 31, 0x1BEDD8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BEDD0u, 0x1BEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDD8u;
label_1bedd8:
    // 0x1bedd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1beddc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bede0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1bede0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bede4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bede8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bede8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bedec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bedecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bedf0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bedf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bedf4:
    // 0x1bedf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bedf8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1bedf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1bedfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bedfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bee00: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1bee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1bee04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEE04u;
    {
        const bool branch_taken_0x1bee04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee04) {
            ctx->pc = 0x1BEE20u;
            goto label_1bee20;
        }
    }
    ctx->pc = 0x1BEE0Cu;
    // 0x1bee0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bee0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bee10: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1bee10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bee14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bee18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bee18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bee1c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bee1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1bee20:
    // 0x1bee20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee24: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1bee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bee30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bee34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bee38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BEE38u;
    SET_GPR_U32(ctx, 31, 0x1BEE40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BEE38u, 0x1BEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE40u;
label_1bee40:
    // 0x1bee40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BEE44u;
    SET_GPR_U32(ctx, 31, 0x1BEE4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BEE44u, 0x1BEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE4Cu;
label_1bee4c:
    // 0x1bee4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bee4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bee50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bee54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bee58: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BEE58u;
    SET_GPR_U32(ctx, 31, 0x1BEE60u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BEE58u, 0x1BEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE60u;
label_1bee60:
    // 0x1bee60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bee64: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BEE64u;
    SET_GPR_U32(ctx, 31, 0x1BEE6Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BEE64u, 0x1BEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE6Cu;
label_1bee6c:
    // 0x1bee6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee70: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1bee70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1bee74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bee78: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bee78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bee7c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BEE7Cu;
    {
        const bool branch_taken_0x1bee7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee7c) {
            ctx->pc = 0x1BEEECu;
            goto label_1beeec;
        }
    }
    ctx->pc = 0x1BEE84u;
    // 0x1bee84: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bee88: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bee88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bee8c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BEE8Cu;
    {
        const bool branch_taken_0x1bee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee8c) {
            ctx->pc = 0x1BEEECu;
            goto label_1beeec;
        }
    }
    ctx->pc = 0x1BEE94u;
    // 0x1bee94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bee9c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1beea0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1beea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1beea4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BEEA4u;
    {
        const bool branch_taken_0x1beea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beea4) {
            ctx->pc = 0x1BEEECu;
            goto label_1beeec;
        }
    }
    ctx->pc = 0x1BEEACu;
    // 0x1beeac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beeb0: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1beeb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1beeb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEEB4u;
    {
        const bool branch_taken_0x1beeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beeb4) {
            ctx->pc = 0x1BEECCu;
            goto label_1beecc;
        }
    }
    ctx->pc = 0x1BEEBCu;
    // 0x1beebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beec0: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1beec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1beec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEEC4u;
    {
        const bool branch_taken_0x1beec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beec4) {
            ctx->pc = 0x1BEED8u;
            goto label_1beed8;
        }
    }
    ctx->pc = 0x1BEECCu;
label_1beecc:
    // 0x1beecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beed4: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1beed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
label_1beed8:
    // 0x1beed8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beedc: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1BEEDCu;
    SET_GPR_U32(ctx, 31, 0x1BEEE4u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1BEEDCu, 0x1BEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEE4u;
label_1beee4:
    // 0x1beee4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BEEE4u;
    {
        const bool branch_taken_0x1beee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beee4) {
            ctx->pc = 0x1BEF6Cu;
            goto label_1bef6c;
        }
    }
    ctx->pc = 0x1BEEECu;
label_1beeec:
    // 0x1beeec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1beeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beef0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1beef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1beef4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BEEF4u;
    {
        const bool branch_taken_0x1beef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beef4) {
            ctx->pc = 0x1BEF6Cu;
            goto label_1bef6c;
        }
    }
    ctx->pc = 0x1BEEFCu;
    // 0x1beefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1beefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef00: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1bef00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1bef04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEF04u;
    {
        const bool branch_taken_0x1bef04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef04) {
            ctx->pc = 0x1BEF1Cu;
            goto label_1bef1c;
        }
    }
    ctx->pc = 0x1BEF0Cu;
    // 0x1bef0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef10: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1bef10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bef14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEF14u;
    {
        const bool branch_taken_0x1bef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef14) {
            ctx->pc = 0x1BEF28u;
            goto label_1bef28;
        }
    }
    ctx->pc = 0x1BEF1Cu;
label_1bef1c:
    // 0x1bef1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef24: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1bef24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
label_1bef28:
    // 0x1bef28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef30: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bef30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bef34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef38: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1bef38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1bef3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bef3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bef40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEF58u;
            goto label_1bef58;
        }
    }
    ctx->pc = 0x1BEF48u;
    // 0x1bef48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bef50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEF50u;
    {
        const bool branch_taken_0x1bef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef50) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEF58u;
label_1bef58:
    // 0x1bef58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef60: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bef60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bef64:
    // 0x1bef64: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1BEF64u;
    {
        const bool branch_taken_0x1bef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef64) {
            ctx->pc = 0x1BEF6Cu;
            goto label_1bef6c;
        }
    }
    ctx->pc = 0x1BEF6Cu;
label_1bef6c:
    // 0x1bef6c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bef6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bef70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bef70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bef74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bef74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bef78: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEF80u;
}
