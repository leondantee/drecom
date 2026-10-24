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

// Function: srp_0c_move10
// Address: 0x327760 - 0x327ed0
void srp_0c_move10_0x327760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0c_move10_0x327760");
#endif

    switch (ctx->pc) {
        case 0x3277d0u: goto label_3277d0;
        case 0x3277ecu: goto label_3277ec;
        case 0x327814u: goto label_327814;
        case 0x327820u: goto label_327820;
        case 0x32783cu: goto label_32783c;
        case 0x327864u: goto label_327864;
        case 0x327898u: goto label_327898;
        case 0x32797cu: goto label_32797c;
        case 0x3279c0u: goto label_3279c0;
        case 0x327b04u: goto label_327b04;
        case 0x327b3cu: goto label_327b3c;
        case 0x327b60u: goto label_327b60;
        case 0x327ba8u: goto label_327ba8;
        case 0x327becu: goto label_327bec;
        case 0x327bf8u: goto label_327bf8;
        case 0x327ca0u: goto label_327ca0;
        case 0x327d08u: goto label_327d08;
        case 0x327d50u: goto label_327d50;
        case 0x327d5cu: goto label_327d5c;
        case 0x327e48u: goto label_327e48;
        case 0x327e6cu: goto label_327e6c;
        case 0x327ea8u: goto label_327ea8;
        case 0x327eb4u: goto label_327eb4;
        default: break;
    }

    ctx->pc = 0x327760u;

    // 0x327760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x327760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x327764: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x327764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x327768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32776c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327774: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x327774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x327778: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x327778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32777c: 0x90830343  lbu         $v1, 0x343($a0)
    ctx->pc = 0x32777cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 835)));
    // 0x327780: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x327780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327784: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x327784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x327788: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x327788u;
    {
        const bool branch_taken_0x327788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x327788) {
            ctx->pc = 0x3278E8u;
            goto label_3278e8;
        }
    }
    ctx->pc = 0x327790u;
    // 0x327790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327794: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x327794u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327798: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x327798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32779c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x32779cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3277a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3277a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277a4: 0x94620340  lhu         $v0, 0x340($v1)
    ctx->pc = 0x3277a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x3277a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3277a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3277ac: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x3277acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3277b0: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3277B0u;
    {
        const bool branch_taken_0x3277b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3277b0) {
            ctx->pc = 0x3277FCu;
            goto label_3277fc;
        }
    }
    ctx->pc = 0x3277B8u;
    // 0x3277b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3277b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3277bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277c0: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x3277c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3277c4: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x3277c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x3277c8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3277C8u;
    SET_GPR_U32(ctx, 31, 0x3277D0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3277D0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3277D0u) { return; }
    ctx->pc = 0x3277D0u;
label_3277d0:
    // 0x3277d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3277d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3277d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3277d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277dc: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x3277dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3277e0: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x3277e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3277e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3277E4u;
    SET_GPR_U32(ctx, 31, 0x3277ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3277ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3277ECu) { return; }
    ctx->pc = 0x3277ECu;
label_3277ec:
    // 0x3277ec: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3277ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3277f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3277f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3277f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3277f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3277f8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x3277f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_3277fc:
    // 0x3277fc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3277fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327800: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x327800u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x327804: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327808: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x327808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32780c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x32780Cu;
    SET_GPR_U32(ctx, 31, 0x327814u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x32780Cu, 0x327814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327814u;
label_327814:
    // 0x327814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x327814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327818: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x327818u;
    {
        const bool branch_taken_0x327818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327818) {
            ctx->pc = 0x327870u;
            goto label_327870;
        }
    }
    ctx->pc = 0x327820u;
label_327820:
    // 0x327820: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x327820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x327824: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x327824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x327828: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x327828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32782c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x32782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327830: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327834: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x327834u;
    SET_GPR_U32(ctx, 31, 0x32783Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x32783Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32783Cu) { return; }
    ctx->pc = 0x32783Cu;
label_32783c:
    // 0x32783c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32783cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327844: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x327844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327848: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x327848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32784c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327850: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327854: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x327854u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x327858: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x327858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32785c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x32785Cu;
    SET_GPR_U32(ctx, 31, 0x327864u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x32785Cu, 0x327864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327864u;
label_327864:
    // 0x327864: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x327864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327868: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x327868u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32786c: 0x0  nop
    ctx->pc = 0x32786cu;
    // NOP
label_327870:
    // 0x327870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327874: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327878: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32787c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x32787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327880: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x327880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x327884: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x327884u;
    {
        const bool branch_taken_0x327884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327884) {
            ctx->pc = 0x327820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327820;
        }
    }
    ctx->pc = 0x32788Cu;
    // 0x32788c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32788cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327890: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x327890u;
    {
        const bool branch_taken_0x327890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327890) {
            ctx->pc = 0x3278D0u;
            goto label_3278d0;
        }
    }
    ctx->pc = 0x327898u;
label_327898:
    // 0x327898: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32789c: 0x90650345  lbu         $a1, 0x345($v1)
    ctx->pc = 0x32789cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3278a0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3278a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3278a4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x3278a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3278a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3278a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3278ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3278b4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3278b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3278b8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3278b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3278bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3278c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3278c4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3278c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3278c8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3278c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3278cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3278ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3278d0:
    // 0x3278d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278d4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3278d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3278d8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3278d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3278dc: 0xb0082b  sltu        $at, $a1, $s0
    ctx->pc = 0x3278dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3278e0: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3278E0u;
    {
        const bool branch_taken_0x3278e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278e0) {
            ctx->pc = 0x327898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327898;
        }
    }
    ctx->pc = 0x3278E8u;
label_3278e8:
    // 0x3278e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278ec: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x3278ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x3278f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3278f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3278f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3278f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3278f8: 0x108300e6  beq         $a0, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3278F8u;
    {
        const bool branch_taken_0x3278f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3278f8) {
            ctx->pc = 0x327C94u;
            goto label_327c94;
        }
    }
    ctx->pc = 0x327900u;
    // 0x327900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327904: 0x10830098  beq         $a0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x327904u;
    {
        const bool branch_taken_0x327904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327904) {
            ctx->pc = 0x327B68u;
            goto label_327b68;
        }
    }
    ctx->pc = 0x32790Cu;
    // 0x32790c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32790Cu;
    {
        const bool branch_taken_0x32790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32790c) {
            ctx->pc = 0x32791Cu;
            goto label_32791c;
        }
    }
    ctx->pc = 0x327914u;
    // 0x327914: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x327914u;
    {
        const bool branch_taken_0x327914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327914) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x32791Cu;
label_32791c:
    // 0x32791c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327920: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x327920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x327924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327928: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x327928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x32792c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32792cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327930: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x327930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x327934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327938: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x327938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x32793c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x32793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327940: 0x90620348  lbu         $v0, 0x348($v1)
    ctx->pc = 0x327940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327948: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x327948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32794c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x32794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x327950: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x327950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327954: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327958: 0xa043034b  sb          $v1, 0x34B($v0)
    ctx->pc = 0x327958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x32795c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327960: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327968: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x327968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x32796c: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x32796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x327970: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327974: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327974u;
    SET_GPR_U32(ctx, 31, 0x32797Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327974u, 0x32797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32797Cu;
label_32797c:
    // 0x32797c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327980: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327988: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32798c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327990: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327994: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32799c: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x32799cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x3279a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3279a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3279a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3279a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3279a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3279a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3279ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3279acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279b0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3279b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3279b4: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x3279b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x3279b8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3279B8u;
    SET_GPR_U32(ctx, 31, 0x3279C0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3279B8u, 0x3279C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279C0u;
label_3279c0:
    // 0x3279c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279c4: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x3279c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x3279c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3279c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3279cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3279ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3279d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3279d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3279d8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3279d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3279dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279e0: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x3279e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x3279e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3279e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3279e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3279e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3279ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3279f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3279f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3279f4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3279f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3279f8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3279f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3279fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3279fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a00: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x327a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327a04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a0c: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x327a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x327a10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a14: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x327a14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x327a18: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327A18u;
    {
        const bool branch_taken_0x327a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327a18) {
            ctx->pc = 0x327A2Cu;
            goto label_327a2c;
        }
    }
    ctx->pc = 0x327A20u;
    // 0x327a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327a24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a28: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x327a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
label_327a2c:
    // 0x327a2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a30: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327a34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a3c: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x327a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x327a40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a44: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x327a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x327a48: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x327A48u;
    {
        const bool branch_taken_0x327a48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x327a48) {
            ctx->pc = 0x327A6Cu;
            goto label_327a6c;
        }
    }
    ctx->pc = 0x327A50u;
    // 0x327a50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x327a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327a54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a58: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x327a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x327a5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x327a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a60: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x327a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x327a64: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x327a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x327a68: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x327a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
label_327a6c:
    // 0x327a6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327a70: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327a74: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x327a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327a78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327a80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a84: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x327a84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x327a88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327a8c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327a90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x327a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327a94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327a98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327a9c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x327a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x327aa0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x327aa4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x327aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x327aa8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327aac: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x327aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x327ab0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327ab4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x327ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x327ab8: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x327AB8u;
    {
        const bool branch_taken_0x327ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ab8) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327AC0u;
    // 0x327ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327ac4: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327acc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327ad0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327ad4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327ad8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x327ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327ae0: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327ae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327ae8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327af0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327af4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x327af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x327af8: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x327af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x327afc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x327AFCu;
    SET_GPR_U32(ctx, 31, 0x327B04u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x327AFCu, 0x327B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B04u;
label_327b04:
    // 0x327b04: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x327b04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327b08: 0x122000ea  beqz        $s1, . + 4 + (0xEA << 2)
    ctx->pc = 0x327B08u;
    {
        const bool branch_taken_0x327b08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b08) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327B10u;
    // 0x327b10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b14: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327b1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327b20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b24: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327b28: 0x24046500  addiu       $a0, $zero, 0x6500
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
    // 0x327b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x327b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327b30: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x327b30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327b34: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x327B34u;
    SET_GPR_U32(ctx, 31, 0x327B3Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x327B34u, 0x327B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B3Cu;
label_327b3c:
    // 0x327b3c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x327b3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327b40: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x327b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b44: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x327b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x327b48: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x327b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x327b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x327b50: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x327b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x327b54: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x327b54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x327b58: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x327B58u;
    SET_GPR_U32(ctx, 31, 0x327B60u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x327B58u, 0x327B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B60u;
label_327b60:
    // 0x327b60: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x327B60u;
    {
        const bool branch_taken_0x327b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b60) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327B68u;
label_327b68:
    // 0x327b68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b6c: 0x90620346  lbu         $v0, 0x346($v1)
    ctx->pc = 0x327b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x327b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x327b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327b74: 0xa0620346  sb          $v0, 0x346($v1)
    ctx->pc = 0x327b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x327b78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b7c: 0x90620345  lbu         $v0, 0x345($v1)
    ctx->pc = 0x327b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x327b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x327b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327b84: 0xa0620345  sb          $v0, 0x345($v1)
    ctx->pc = 0x327b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 2));
    // 0x327b88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x327b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b94: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x327b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x327b98: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x327b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x327b9c: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x327b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327ba0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327BA0u;
    SET_GPR_U32(ctx, 31, 0x327BA8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327BA0u, 0x327BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BA8u;
label_327ba8:
    // 0x327ba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bac: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327bb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327bb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327bb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bbc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327bc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bc4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bc8: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327bcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327bd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327bd4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327bd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bdc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327be0: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x327be4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327BE4u;
    SET_GPR_U32(ctx, 31, 0x327BECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327BE4u, 0x327BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BECu;
label_327bec:
    // 0x327bec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327becu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327bf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x327BF0u;
    {
        const bool branch_taken_0x327bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327bf0) {
            ctx->pc = 0x327C30u;
            goto label_327c30;
        }
    }
    ctx->pc = 0x327BF8u;
label_327bf8:
    // 0x327bf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bfc: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x327bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x327c00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x327c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x327c08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x327c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x327c0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c14: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x327c14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327c18: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x327c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327c1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c24: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x327c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x327c28: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x327c28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x327c2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x327c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_327c30:
    // 0x327c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c34: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x327c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327c38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c3c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x327c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x327c40: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x327C40u;
    {
        const bool branch_taken_0x327c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c40) {
            ctx->pc = 0x327BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327bf8;
        }
    }
    ctx->pc = 0x327C48u;
    // 0x327c48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c4c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327c50: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c58: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x327c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x327c5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c60: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x327c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x327c64: 0x14200093  bnez        $at, . + 4 + (0x93 << 2)
    ctx->pc = 0x327C64u;
    {
        const bool branch_taken_0x327c64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x327c64) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327C6Cu;
    // 0x327c6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x327c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327c70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c74: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x327c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x327c78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c7c: 0x8ca40b18  lw          $a0, 0xB18($a1)
    ctx->pc = 0x327c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2840)));
    // 0x327c80: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x327c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x327c84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x327c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x327c88: 0xaca30b18  sw          $v1, 0xB18($a1)
    ctx->pc = 0x327c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 3));
    // 0x327c8c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x327C8Cu;
    {
        const bool branch_taken_0x327c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c8c) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327C94u;
label_327c94:
    // 0x327c94: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327c94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327c98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x327C98u;
    {
        const bool branch_taken_0x327c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c98) {
            ctx->pc = 0x327CD0u;
            goto label_327cd0;
        }
    }
    ctx->pc = 0x327CA0u;
label_327ca0:
    // 0x327ca0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x327ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327ca4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327ca8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327cb0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x327cb0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327cb4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x327cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327cb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cbc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327cc0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x327cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x327cc4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x327cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327cc8: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x327cc8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x327ccc: 0x0  nop
    ctx->pc = 0x327cccu;
    // NOP
label_327cd0:
    // 0x327cd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cd4: 0x90430344  lbu         $v1, 0x344($v0)
    ctx->pc = 0x327cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x327cd8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x327cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327cdc: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x327cdcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x327ce0: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x327CE0u;
    {
        const bool branch_taken_0x327ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x327ce0) {
            ctx->pc = 0x327CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327ca0;
        }
    }
    ctx->pc = 0x327CE8u;
    // 0x327ce8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cec: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x327cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327cf4: 0x24a402f0  addiu       $a0, $a1, 0x2F0
    ctx->pc = 0x327cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x327cf8: 0x24c502f0  addiu       $a1, $a2, 0x2F0
    ctx->pc = 0x327cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x327cfc: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x327cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327d00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327D00u;
    SET_GPR_U32(ctx, 31, 0x327D08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327D00u, 0x327D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D08u;
label_327d08:
    // 0x327d08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x327d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327d0c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x327d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d10: 0x90c20346  lbu         $v0, 0x346($a2)
    ctx->pc = 0x327d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 838)));
    // 0x327d14: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x327d14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327d18: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x327d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327d1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327d24: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d2c: 0x90430346  lbu         $v1, 0x346($v0)
    ctx->pc = 0x327d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327d30: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x327d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327d34: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x327d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327d38: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x327d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x327d3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d40: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327d44: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x327d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x327d48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327D48u;
    SET_GPR_U32(ctx, 31, 0x327D50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327D48u, 0x327D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D50u;
label_327d50:
    // 0x327d50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327d50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x327D54u;
    {
        const bool branch_taken_0x327d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d54) {
            ctx->pc = 0x327D98u;
            goto label_327d98;
        }
    }
    ctx->pc = 0x327D5Cu;
label_327d5c:
    // 0x327d5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d60: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x327d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x327d64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327d68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x327d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x327d6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x327d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x327d70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327d78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x327d78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327d7c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x327d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327d80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x327d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327d88: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x327d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x327d8c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x327d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x327d90: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x327d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327d94: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x327d94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_327d98:
    // 0x327d98: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d9c: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x327d9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x327da0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x327da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x327da4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x327da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x327da8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x327DA8u;
    {
        const bool branch_taken_0x327da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x327da8) {
            ctx->pc = 0x327D5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327d5c;
        }
    }
    ctx->pc = 0x327DB0u;
    // 0x327db0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327db4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327db4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327db8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327dbc: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x327dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327dc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x327dc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327dc8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x327dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x327dcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327dd0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327dd4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327dd8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x327dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x327ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327de0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x327de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x327de4: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x327de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x327de8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x327de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x327dec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327df0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x327df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x327df4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327df8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x327df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x327dfc: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x327DFCu;
    {
        const bool branch_taken_0x327dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x327dfc) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327E04u;
    // 0x327e04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327e08: 0x90630270  lbu         $v1, 0x270($v1)
    ctx->pc = 0x327e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x327e0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327e10: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x327E10u;
    {
        const bool branch_taken_0x327e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e10) {
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327E18u;
    // 0x327e18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327e1c: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327e24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x327e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327e28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327e2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x327e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327e30: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x327e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x327e34: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x327e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327e38: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x327e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x327e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x327e40: 0xc067648  jal         func_19D920
    ctx->pc = 0x327E40u;
    SET_GPR_U32(ctx, 31, 0x327E48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327E40u, 0x327E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E48u;
label_327e48:
    // 0x327e48: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x327e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x327e4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x327e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327e50: 0x0  nop
    ctx->pc = 0x327e50u;
    // NOP
    // 0x327e54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x327e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327e58: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x327e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327e60: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x327e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x327e64: 0xc067648  jal         func_19D920
    ctx->pc = 0x327E64u;
    SET_GPR_U32(ctx, 31, 0x327E6Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327E64u, 0x327E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E6Cu;
label_327e6c:
    // 0x327e6c: 0x3c054316  lui         $a1, 0x4316
    ctx->pc = 0x327e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17174 << 16));
    // 0x327e70: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x327e70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327e74: 0x0  nop
    ctx->pc = 0x327e74u;
    // NOP
    // 0x327e78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x327e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327e7c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x327e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327e80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327e84: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x327e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x327e88: 0x24061901  addiu       $a2, $zero, 0x1901
    ctx->pc = 0x327e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x327e8c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x327e8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x327e90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x327e90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327e94: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x327e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327e98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x327e98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327e9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x327e9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327ea0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x327EA0u;
    SET_GPR_U32(ctx, 31, 0x327EA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x327EA0u, 0x327EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EA8u;
label_327ea8:
    // 0x327ea8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x327ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327eac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x327EACu;
    SET_GPR_U32(ctx, 31, 0x327EB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x327EACu, 0x327EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EB4u;
label_327eb4:
    // 0x327eb4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x327eb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327eb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327ec4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x327ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x327ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x327EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327ED0u;
}
