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

// Function: entry_0036c128
// Address: 0x36c128 - 0x36c20c
void entry_0036c128_0x36c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c128_0x36c128");
#endif

    switch (ctx->pc) {
        case 0x36c150u: goto label_36c150;
        case 0x36c19cu: goto label_36c19c;
        case 0x36c1c4u: goto label_36c1c4;
        case 0x36c1e0u: goto label_36c1e0;
        case 0x36c1f4u: goto label_36c1f4;
        case 0x36c208u: goto label_36c208;
        default: break;
    }

    ctx->pc = 0x36c128u;

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
            return;
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
            return;
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
    ctx->pc = 0x36c20cu;
}
