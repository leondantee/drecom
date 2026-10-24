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

// Function: Em1b_R1_atk_laser
// Address: 0x36c080 - 0x36c32c
void Em1b_R1_atk_laser_0x36c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_laser_0x36c080");
#endif

    switch (ctx->pc) {
        case 0x36c118u: goto label_36c118;
        case 0x36c150u: goto label_36c150;
        case 0x36c19cu: goto label_36c19c;
        case 0x36c1c4u: goto label_36c1c4;
        case 0x36c1e0u: goto label_36c1e0;
        case 0x36c1f4u: goto label_36c1f4;
        case 0x36c208u: goto label_36c208;
        case 0x36c264u: goto label_36c264;
        case 0x36c270u: goto label_36c270;
        case 0x36c2a0u: goto label_36c2a0;
        case 0x36c2acu: goto label_36c2ac;
        case 0x36c2bcu: goto label_36c2bc;
        case 0x36c2c8u: goto label_36c2c8;
        case 0x36c2d4u: goto label_36c2d4;
        default: break;
    }

    ctx->pc = 0x36c080u;

    // 0x36c080: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36c084: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36c084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36c088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c090: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x36c090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x36c094: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36c094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36c098: 0x2463b290  addiu       $v1, $v1, -0x4D70
    ctx->pc = 0x36c098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947472));
    // 0x36c09c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36c0a0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36c0a0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB290u));
    // 0x36c0a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36c0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36c0a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36c0ac: 0x2463b2a0  addiu       $v1, $v1, -0x4D60
    ctx->pc = 0x36c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947488));
    // 0x36c0b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36c0b4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36c0b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB2A0u));
    // 0x36c0b8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36c0bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36c0c0: 0x2463b2b0  addiu       $v1, $v1, -0x4D50
    ctx->pc = 0x36c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947504));
    // 0x36c0c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x36c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c0c8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36c0c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB2B0u));
    // 0x36c0cc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36c0d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c0d4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36c0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c0d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36c0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36c0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c0e0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36C0E0u;
    {
        const bool branch_taken_0x36c0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36c0e0) {
            ctx->pc = 0x36C128u;
            goto label_36c128;
        }
    }
    ctx->pc = 0x36C0E8u;
    // 0x36c0e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C0E8u;
    {
        const bool branch_taken_0x36c0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c0e8) {
            ctx->pc = 0x36C0F8u;
            goto label_36c0f8;
        }
    }
    ctx->pc = 0x36C0F0u;
    // 0x36c0f0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x36C0F0u;
    {
        const bool branch_taken_0x36c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c0f0) {
            ctx->pc = 0x36C314u;
            goto label_36c314;
        }
    }
    ctx->pc = 0x36C0F8u;
label_36c0f8:
    // 0x36c0f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c0fc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c100: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c104: 0x24065a06  addiu       $a2, $zero, 0x5A06
    ctx->pc = 0x36c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23046));
    // 0x36c108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c10c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c110: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36C110u;
    SET_GPR_U32(ctx, 31, 0x36C118u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36C110u, 0x36C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C118u;
label_36c118:
    // 0x36c118: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c11c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36c11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c124: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36c124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36c128:
    // 0x36c128: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c12c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c130: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c134: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36c138: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x36C138u;
    {
        const bool branch_taken_0x36c138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c138) {
            ctx->pc = 0x36C20Cu;
            goto label_36c20c;
        }
    }
    ctx->pc = 0x36C140u;
    // 0x36c140: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c148: 0xc0db498  jal         func_36D260
    ctx->pc = 0x36C148u;
    SET_GPR_U32(ctx, 31, 0x36C150u);
    ctx->pc = 0x36D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D260u, 0x36C148u, 0x36C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C150u;
label_36c150:
    // 0x36c150: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x36c150u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c154: 0x620002d  bltz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x36C154u;
    {
        const bool branch_taken_0x36c154 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x36c154) {
            ctx->pc = 0x36C20Cu;
            goto label_36c20c;
        }
    }
    ctx->pc = 0x36C15Cu;
    // 0x36c15c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c160: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36c160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36c164: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x36c164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x36c168: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36c16c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36c170: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c174: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36c174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c17c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x36c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x36c180: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c184: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c188: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36c188u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c18c: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x36c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x36c190: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36c190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36c194: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36C194u;
    SET_GPR_U32(ctx, 31, 0x36C19Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36C19Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C19Cu) { return; }
    ctx->pc = 0x36C19Cu;
label_36c19c:
    // 0x36c19c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x36c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x36c1a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36c1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c1a8: 0x0  nop
    ctx->pc = 0x36c1a8u;
    // NOP
    // 0x36c1ac: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36c1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36c1b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36c1b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c1b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36c1b8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36c1bc: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36C1BCu;
    SET_GPR_U32(ctx, 31, 0x36C1C4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36C1BCu, 0x36C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C1C4u;
label_36c1c4:
    // 0x36c1c4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36c1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36c1c8: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36c1cc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36c1d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36c1d4: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c1d8: 0xc067844  jal         func_19E110
    ctx->pc = 0x36C1D8u;
    SET_GPR_U32(ctx, 31, 0x36C1E0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36C1D8u, 0x36C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C1E0u;
label_36c1e0:
    // 0x36c1e0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c1e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36c1e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36c1ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36C1ECu;
    SET_GPR_U32(ctx, 31, 0x36C1F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36C1F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C1F4u) { return; }
    ctx->pc = 0x36C1F4u;
label_36c1f4:
    // 0x36c1f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c1f8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c1fc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36c1fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c200: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36C200u;
    SET_GPR_U32(ctx, 31, 0x36C208u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36C200u, 0x36C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C208u;
label_36c208:
    // 0x36c208: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36c208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_36c20c:
    // 0x36c20c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c210: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c218: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x36c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36c21c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x36C21Cu;
    {
        const bool branch_taken_0x36c21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c21c) {
            ctx->pc = 0x36C2ACu;
            goto label_36c2ac;
        }
    }
    ctx->pc = 0x36C224u;
    // 0x36c224: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x36c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x36c228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c22c: 0x0  nop
    ctx->pc = 0x36c22cu;
    // NOP
    // 0x36c230: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x36c230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36c234: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c238: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c23c: 0x244204f0  addiu       $v0, $v0, 0x4F0
    ctx->pc = 0x36c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1264));
    // 0x36c240: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x36c240u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c244: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x36c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c248: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36c248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36c24c: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x36c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36c250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c254: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x36c254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c258: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36c258u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c25c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36C25Cu;
    SET_GPR_U32(ctx, 31, 0x36C264u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36C25Cu, 0x36C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C264u;
label_36c264:
    // 0x36c264: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36c264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c268: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36C268u;
    SET_GPR_U32(ctx, 31, 0x36C270u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36C268u, 0x36C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C270u;
label_36c270:
    // 0x36c270: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c274: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c278: 0x244205b0  addiu       $v0, $v0, 0x5B0
    ctx->pc = 0x36c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x36c27c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x36c27cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c280: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x36c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c284: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36c284u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36c288: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x36c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36c28c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c28cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c290: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x36c290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c294: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36c294u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c298: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36C298u;
    SET_GPR_U32(ctx, 31, 0x36C2A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36C298u, 0x36C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2A0u;
label_36c2a0:
    // 0x36c2a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36c2a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c2a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36C2A4u;
    SET_GPR_U32(ctx, 31, 0x36C2ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36C2A4u, 0x36C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2ACu;
label_36c2ac:
    // 0x36c2ac: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c2b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C2B4u;
    SET_GPR_U32(ctx, 31, 0x36C2BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C2B4u, 0x36C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2BCu;
label_36c2bc:
    // 0x36c2bc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C2C0u;
    SET_GPR_U32(ctx, 31, 0x36C2C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C2C0u, 0x36C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2C8u;
label_36c2c8:
    // 0x36c2c8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2cc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C2CCu;
    SET_GPR_U32(ctx, 31, 0x36C2D4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C2CCu, 0x36C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2D4u;
label_36c2d4:
    // 0x36c2d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c2dc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C2DCu;
    {
        const bool branch_taken_0x36c2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c2dc) {
            ctx->pc = 0x36C314u;
            goto label_36c314;
        }
    }
    ctx->pc = 0x36C2E4u;
    // 0x36c2e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c2e8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c2f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36c2f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c2fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c300: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c304: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c308: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c30c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c310: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36c314:
    // 0x36c314: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36c314u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c31c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c320: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x36c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36c324: 0x3e00008  jr          $ra
    ctx->pc = 0x36C324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C32Cu;
}
