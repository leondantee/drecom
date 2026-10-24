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

// Function: Pl_em_dam_em0a_r2_catch_bom
// Address: 0x36a740 - 0x36a968
void Pl_em_dam_em0a_r2_catch_bom_0x36a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em0a_r2_catch_bom_0x36a740");
#endif

    switch (ctx->pc) {
        case 0x36a7c4u: goto label_36a7c4;
        case 0x36a7e4u: goto label_36a7e4;
        case 0x36a7f0u: goto label_36a7f0;
        case 0x36a804u: goto label_36a804;
        case 0x36a818u: goto label_36a818;
        case 0x36a83cu: goto label_36a83c;
        case 0x36a868u: goto label_36a868;
        case 0x36a8b0u: goto label_36a8b0;
        case 0x36a8d0u: goto label_36a8d0;
        case 0x36a8dcu: goto label_36a8dc;
        case 0x36a8f0u: goto label_36a8f0;
        case 0x36a8fcu: goto label_36a8fc;
        default: break;
    }

    ctx->pc = 0x36a740u;

    // 0x36a740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a744: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36a748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a750: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x36a750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x36a754: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x36a754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x36a758: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x36a758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x36a75c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a760: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x36a760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x36a764: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a768: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x36a768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a76c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36a76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a770: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a774: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x36A774u;
    {
        const bool branch_taken_0x36a774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a774) {
            ctx->pc = 0x36A8C0u;
            goto label_36a8c0;
        }
    }
    ctx->pc = 0x36A77Cu;
    // 0x36a77c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a780: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x36A780u;
    {
        const bool branch_taken_0x36a780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a780) {
            ctx->pc = 0x36A890u;
            goto label_36a890;
        }
    }
    ctx->pc = 0x36A788u;
    // 0x36a788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a78c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36A78Cu;
    {
        const bool branch_taken_0x36a78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a78c) {
            ctx->pc = 0x36A7D4u;
            goto label_36a7d4;
        }
    }
    ctx->pc = 0x36A794u;
    // 0x36a794: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A794u;
    {
        const bool branch_taken_0x36a794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a794) {
            ctx->pc = 0x36A7A4u;
            goto label_36a7a4;
        }
    }
    ctx->pc = 0x36A79Cu;
    // 0x36a79c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x36A79Cu;
    {
        const bool branch_taken_0x36a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a79c) {
            ctx->pc = 0x36A950u;
            goto label_36a950;
        }
    }
    ctx->pc = 0x36A7A4u;
label_36a7a4:
    // 0x36a7a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a7a8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a7ac: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a7b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a7b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a7b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a7bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A7BCu;
    SET_GPR_U32(ctx, 31, 0x36A7C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A7BCu, 0x36A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7C4u;
label_36a7c4:
    // 0x36a7c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7c8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a7cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a7d0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a7d4:
    // 0x36a7d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a7d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a7dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A7DCu;
    SET_GPR_U32(ctx, 31, 0x36A7E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A7DCu, 0x36A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7E4u;
label_36a7e4:
    // 0x36a7e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A7E8u;
    SET_GPR_U32(ctx, 31, 0x36A7F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A7E8u, 0x36A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7F0u;
label_36a7f0:
    // 0x36a7f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a7f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a7f8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a7fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36A7FCu;
    SET_GPR_U32(ctx, 31, 0x36A804u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36A804u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36A804u) { return; }
    ctx->pc = 0x36A804u;
label_36a804:
    // 0x36a804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a808: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a80c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a810: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A810u;
    SET_GPR_U32(ctx, 31, 0x36A818u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A810u, 0x36A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A818u;
label_36a818:
    // 0x36a818: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a820: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36a820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36a824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a828: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a82c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a830: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a834: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36A834u;
    SET_GPR_U32(ctx, 31, 0x36A83Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A834u, 0x36A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A83Cu;
label_36a83c:
    // 0x36a83c: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a840: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a844: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a848: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x36a84c: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a850: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a854: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a858: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36a858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x36a85c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a85cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a860: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A860u;
    SET_GPR_U32(ctx, 31, 0x36A868u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A860u, 0x36A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A868u;
label_36a868:
    // 0x36a868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a86c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a870: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x36A870u;
    {
        const bool branch_taken_0x36a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a870) {
            ctx->pc = 0x36A950u;
            goto label_36a950;
        }
    }
    ctx->pc = 0x36A878u;
    // 0x36a878: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a87c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36a87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x36a880: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a884: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36a884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a888: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x36A888u;
    {
        const bool branch_taken_0x36a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a888) {
            ctx->pc = 0x36A950u;
            goto label_36a950;
        }
    }
    ctx->pc = 0x36A890u;
label_36a890:
    // 0x36a890: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a894: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a898: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a89c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x36a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a8a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a8a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a8a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A8A8u;
    SET_GPR_U32(ctx, 31, 0x36A8B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A8A8u, 0x36A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8B0u;
label_36a8b0:
    // 0x36a8b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8b4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a8bc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a8c0:
    // 0x36a8c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a8c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A8C8u;
    SET_GPR_U32(ctx, 31, 0x36A8D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A8C8u, 0x36A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8D0u;
label_36a8d0:
    // 0x36a8d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A8D4u;
    SET_GPR_U32(ctx, 31, 0x36A8DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A8D4u, 0x36A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8DCu;
label_36a8dc:
    // 0x36a8dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a8e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a8e8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A8E8u;
    SET_GPR_U32(ctx, 31, 0x36A8F0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A8E8u, 0x36A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8F0u;
label_36a8f0:
    // 0x36a8f0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a8f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a8f4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A8F4u;
    SET_GPR_U32(ctx, 31, 0x36A8FCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A8F4u, 0x36A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8FCu;
label_36a8fc:
    // 0x36a8fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a900: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a904: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36A904u;
    {
        const bool branch_taken_0x36a904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a904) {
            ctx->pc = 0x36A950u;
            goto label_36a950;
        }
    }
    ctx->pc = 0x36A90Cu;
    // 0x36a90c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a910: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a914: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x36a914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a91c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a920: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36a920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a924: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a928: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36a928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a930: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36a930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a938: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36a938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a93c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a940: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a944: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36a944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x36a948: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36A948u;
    {
        const bool branch_taken_0x36a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a948) {
            ctx->pc = 0x36A950u;
            goto label_36a950;
        }
    }
    ctx->pc = 0x36A950u;
label_36a950:
    // 0x36a950: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36a950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a95c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x36a95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36a960: 0x3e00008  jr          $ra
    ctx->pc = 0x36A960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A968u;
}
