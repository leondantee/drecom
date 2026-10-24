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

// Function: Calc_make_matrix_pl
// Address: 0x25f700 - 0x25f9f0
void Calc_make_matrix_pl_0x25f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Calc_make_matrix_pl_0x25f700");
#endif

    switch (ctx->pc) {
        case 0x25f734u: goto label_25f734;
        case 0x25f754u: goto label_25f754;
        case 0x25f774u: goto label_25f774;
        case 0x25f794u: goto label_25f794;
        case 0x25f7d4u: goto label_25f7d4;
        case 0x25f7ecu: goto label_25f7ec;
        case 0x25f81cu: goto label_25f81c;
        case 0x25f880u: goto label_25f880;
        case 0x25f8acu: goto label_25f8ac;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f90cu: goto label_25f90c;
        case 0x25f930u: goto label_25f930;
        case 0x25f958u: goto label_25f958;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f97cu: goto label_25f97c;
        case 0x25f9b4u: goto label_25f9b4;
        default: break;
    }

    ctx->pc = 0x25f700u;

    // 0x25f700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f704: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x25f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x25f708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f70c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f714: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x25f714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x25f718: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25f718u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25f71c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f720: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f724: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f728: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x25f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f72c: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x25F72Cu;
    SET_GPR_U32(ctx, 31, 0x25F734u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x25F72Cu, 0x25F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F734u;
label_25f734:
    // 0x25f734: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x25f734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f738: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f73c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f740: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25f744: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f748: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x25f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f74c: 0xc067808  jal         func_19E020
    ctx->pc = 0x25F74Cu;
    SET_GPR_U32(ctx, 31, 0x25F754u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25F74Cu, 0x25F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F754u;
label_25f754:
    // 0x25f754: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x25f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f758: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f75c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f760: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25f760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25f764: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25f764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f768: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x25f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25f76c: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25F76Cu;
    SET_GPR_U32(ctx, 31, 0x25F774u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25F76Cu, 0x25F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F774u;
label_25f774:
    // 0x25f774: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f778: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25f77c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25f780: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25F780u;
    {
        const bool branch_taken_0x25f780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f780) {
            ctx->pc = 0x25F7D4u;
            goto label_25f7d4;
        }
    }
    ctx->pc = 0x25F788u;
    // 0x25f788: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f78c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F78Cu;
    SET_GPR_U32(ctx, 31, 0x25F794u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F794u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F794u) { return; }
    ctx->pc = 0x25F794u;
label_25f794:
    // 0x25f794: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f798: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f79c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25f7a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7a4: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f7a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25f7ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7b0: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f7b4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25f7b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7c0: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f7c4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f7c8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f7cc: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F7CCu;
    SET_GPR_U32(ctx, 31, 0x25F7D4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F7D4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F7D4u) { return; }
    ctx->pc = 0x25F7D4u;
label_25f7d4:
    // 0x25f7d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7dc: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x25f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25f7e0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x25f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x25f7e4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F7E4u;
    SET_GPR_U32(ctx, 31, 0x25F7ECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F7ECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F7ECu) { return; }
    ctx->pc = 0x25F7ECu;
label_25f7ec:
    // 0x25f7ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f7f0: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f7f4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F7F4u;
    {
        const bool branch_taken_0x25f7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f7f4) {
            ctx->pc = 0x25F81Cu;
            goto label_25f81c;
        }
    }
    ctx->pc = 0x25F7FCu;
    // 0x25f7fc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x25f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f800: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f804: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f808: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25f808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25f80c: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25f810: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25f810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f814: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F814u;
    SET_GPR_U32(ctx, 31, 0x25F81Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F81Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F81Cu) { return; }
    ctx->pc = 0x25F81Cu;
label_25f81c:
    // 0x25f81c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x25f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f820: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f824: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f828: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f82c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f830: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f834: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f838: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f83c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f83cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f840: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f844: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25f844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25f848: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x25F848u;
    {
        const bool branch_taken_0x25f848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f848) {
            ctx->pc = 0x25F9B8u;
            goto label_25f9b8;
        }
    }
    ctx->pc = 0x25F850u;
    // 0x25f850: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f854: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f858: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25f858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25f85c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25f85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f860: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f864: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f868: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25f86c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F86Cu;
    {
        const bool branch_taken_0x25f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f86c) {
            ctx->pc = 0x25F8B8u;
            goto label_25f8b8;
        }
    }
    ctx->pc = 0x25F874u;
    // 0x25f874: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f878: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F878u;
    SET_GPR_U32(ctx, 31, 0x25F880u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F880u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F880u) { return; }
    ctx->pc = 0x25F880u;
label_25f880:
    // 0x25f880: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f884: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25f888: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f88c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25f88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25f890: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f894: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25f898: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25f898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f89c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f89cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f8a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f8a4: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F8A4u;
    SET_GPR_U32(ctx, 31, 0x25F8ACu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F8ACu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F8ACu) { return; }
    ctx->pc = 0x25F8ACu;
label_25f8ac:
    // 0x25f8ac: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f8b0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f8b4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_25f8b8:
    // 0x25f8b8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f8bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f8c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25f8c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F8C4u;
    {
        const bool branch_taken_0x25f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8c4) {
            ctx->pc = 0x25F8F8u;
            goto label_25f8f8;
        }
    }
    ctx->pc = 0x25F8CCu;
    // 0x25f8cc: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f8ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f8d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f8d4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25f8d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25F8D8u;
    {
        const bool branch_taken_0x25f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f8d8) {
            ctx->pc = 0x25F910u;
            goto label_25f910;
        }
    }
    ctx->pc = 0x25F8E0u;
    // 0x25f8e0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f8e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f8e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f8e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f8e8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25F8E8u;
    SET_GPR_U32(ctx, 31, 0x25F8F0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25F8F0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F8F0u) { return; }
    ctx->pc = 0x25F8F0u;
label_25f8f0:
    // 0x25f8f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25F8F0u;
    {
        const bool branch_taken_0x25f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8f0) {
            ctx->pc = 0x25F910u;
            goto label_25f910;
        }
    }
    ctx->pc = 0x25F8F8u;
label_25f8f8:
    // 0x25f8f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f8f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f8fc: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25f900: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25f900u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f904: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F904u;
    SET_GPR_U32(ctx, 31, 0x25F90Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F90Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F90Cu) { return; }
    ctx->pc = 0x25F90Cu;
label_25f90c:
    // 0x25f90c: 0x0  nop
    ctx->pc = 0x25f90cu;
    // NOP
label_25f910:
    // 0x25f910: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f914: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f918: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25f91c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F91Cu;
    {
        const bool branch_taken_0x25f91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f91c) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F924u;
    // 0x25f924: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f928: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F928u;
    SET_GPR_U32(ctx, 31, 0x25F930u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F930u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F930u) { return; }
    ctx->pc = 0x25F930u;
label_25f930:
    // 0x25f930: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f934: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25f938: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f93c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25f93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25f940: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f944: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25f944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25f948: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25f94c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x25f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f950: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F950u;
    SET_GPR_U32(ctx, 31, 0x25F958u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F958u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F958u) { return; }
    ctx->pc = 0x25F958u;
label_25f958:
    // 0x25f958: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f95c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f960: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25f960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f964: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F964u;
    SET_GPR_U32(ctx, 31, 0x25F96Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F96Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F96Cu) { return; }
    ctx->pc = 0x25F96Cu;
label_25f96c:
    // 0x25f96c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x25f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f970: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25f974: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F974u;
    SET_GPR_U32(ctx, 31, 0x25F97Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F97Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F97Cu) { return; }
    ctx->pc = 0x25F97Cu;
label_25f97c:
    // 0x25f97c: 0x0  nop
    ctx->pc = 0x25f97cu;
    // NOP
label_25f980:
    // 0x25f980: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f984: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f988: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f98c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f990: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f994: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25f998: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f99c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25f9a0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25f9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f9a4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25f9a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f9a8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25f9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25f9ac: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F9ACu;
    SET_GPR_U32(ctx, 31, 0x25F9B4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F9B4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F9B4u) { return; }
    ctx->pc = 0x25F9B4u;
label_25f9b4:
    // 0x25f9b4: 0x0  nop
    ctx->pc = 0x25f9b4u;
    // NOP
label_25f9b8:
    // 0x25f9b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f9bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x25f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f9c0: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f9c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f9c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f9c8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f9c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f9cc: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x25F9CCu;
    {
        const bool branch_taken_0x25f9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f9cc) {
            ctx->pc = 0x25F81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f81c;
        }
    }
    ctx->pc = 0x25F9D4u;
    // 0x25f9d4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x25f9d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f9e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x25f9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25f9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F9F0u;
}
