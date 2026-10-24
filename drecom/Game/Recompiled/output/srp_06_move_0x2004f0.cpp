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

// Function: srp_06_move
// Address: 0x2004f0 - 0x200ba4
void srp_06_move_0x2004f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_06_move_0x2004f0");
#endif

    switch (ctx->pc) {
        case 0x2005b4u: goto label_2005b4;
        case 0x2005e4u: goto label_2005e4;
        case 0x2005ecu: goto label_2005ec;
        case 0x200624u: goto label_200624;
        case 0x20064cu: goto label_20064c;
        case 0x20067cu: goto label_20067c;
        case 0x200684u: goto label_200684;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006e0u: goto label_2006e0;
        case 0x200714u: goto label_200714;
        case 0x20071cu: goto label_20071c;
        case 0x200764u: goto label_200764;
        case 0x20076cu: goto label_20076c;
        case 0x200800u: goto label_200800;
        case 0x200820u: goto label_200820;
        case 0x20086cu: goto label_20086c;
        case 0x200874u: goto label_200874;
        case 0x2008acu: goto label_2008ac;
        case 0x2008d0u: goto label_2008d0;
        case 0x200904u: goto label_200904;
        case 0x20090cu: goto label_20090c;
        case 0x200954u: goto label_200954;
        case 0x20095cu: goto label_20095c;
        case 0x2009d0u: goto label_2009d0;
        case 0x200a04u: goto label_200a04;
        case 0x200a6cu: goto label_200a6c;
        case 0x200a74u: goto label_200a74;
        case 0x200aacu: goto label_200aac;
        case 0x200ad0u: goto label_200ad0;
        case 0x200b08u: goto label_200b08;
        case 0x200b10u: goto label_200b10;
        case 0x200b5cu: goto label_200b5c;
        case 0x200b64u: goto label_200b64;
        default: break;
    }

    ctx->pc = 0x2004f0u;

    // 0x2004f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2004f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2004f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2004f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2004f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2004fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2004fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x200500: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200504: 0x8c830ab8  lw          $v1, 0xAB8($a0)
    ctx->pc = 0x200504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2744)));
    // 0x200508: 0x2c610259  sltiu       $at, $v1, 0x259
    ctx->pc = 0x200508u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)601) ? 1 : 0);
    // 0x20050c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20050Cu;
    {
        const bool branch_taken_0x20050c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20050c) {
            ctx->pc = 0x200524u;
            goto label_200524;
        }
    }
    ctx->pc = 0x200514u;
    // 0x200514: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200518: 0x8c850b18  lw          $a1, 0xB18($a0)
    ctx->pc = 0x200518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x20051c: 0x38a30010  xori        $v1, $a1, 0x10
    ctx->pc = 0x20051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)16);
    // 0x200520: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x200520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
label_200524:
    // 0x200524: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200528: 0x8cc50ab8  lw          $a1, 0xAB8($a2)
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2744)));
    // 0x20052c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20052Cu;
    {
        const bool branch_taken_0x20052c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20052c) {
            ctx->pc = 0x2005A4u;
            goto label_2005a4;
        }
    }
    ctx->pc = 0x200534u;
    // 0x200534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200538: 0x8c640ab8  lw          $a0, 0xAB8($v1)
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x20053c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x200540: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x200540u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200544: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x200544u;
    {
        const bool branch_taken_0x200544 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x200544) {
            ctx->pc = 0x200560u;
            goto label_200560;
        }
    }
    ctx->pc = 0x20054Cu;
    // 0x20054c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20054cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200550: 0x0  nop
    ctx->pc = 0x200550u;
    // NOP
    // 0x200554: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200558u;
    {
        const bool branch_taken_0x200558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200558) {
            ctx->pc = 0x20057Cu;
            goto label_20057c;
        }
    }
    ctx->pc = 0x200560u;
label_200560:
    // 0x200560: 0x72042  srl         $a0, $a3, 1
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x200564: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x200564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x200568: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x200568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20056c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20056cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200570: 0x0  nop
    ctx->pc = 0x200570u;
    // NOP
    // 0x200574: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200578: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x200578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20057c:
    // 0x20057c: 0x3c0542a4  lui         $a1, 0x42A4
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17060 << 16));
    // 0x200580: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x200580u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200584: 0x0  nop
    ctx->pc = 0x200584u;
    // NOP
    // 0x200588: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x200588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20058c: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x20058cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x200590: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x200590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200594: 0x0  nop
    ctx->pc = 0x200594u;
    // NOP
    // 0x200598: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200598u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20059c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2005a0: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2005a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
label_2005a4:
    // 0x2005a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2005a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2005a8: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2005a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2005ac: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2005ACu;
    {
        const bool branch_taken_0x2005ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2005ac) {
            ctx->pc = 0x2007A0u;
            goto label_2007a0;
        }
    }
    ctx->pc = 0x2005B4u;
label_2005b4:
    // 0x2005b4: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2005b8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2005bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2005bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2005c0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2005c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2005c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2005c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2005c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2005c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2005cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2005d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2005d4: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x2005d8: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x2005d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2005dc: 0xc040c80  jal         func_103200
    ctx->pc = 0x2005DCu;
    SET_GPR_U32(ctx, 31, 0x2005E4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2005E4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2005E4u) { return; }
    ctx->pc = 0x2005E4u;
label_2005e4:
    // 0x2005e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2005E4u;
    SET_GPR_U32(ctx, 31, 0x2005ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2005E4u, 0x2005ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005ECu;
label_2005ec:
    // 0x2005ec: 0x3c053a83  lui         $a1, 0x3A83
    ctx->pc = 0x2005ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14979 << 16));
    // 0x2005f0: 0x34a3126f  ori         $v1, $a1, 0x126F
    ctx->pc = 0x2005f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4719);
    // 0x2005f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2005f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2005f8: 0x0  nop
    ctx->pc = 0x2005f8u;
    // NOP
    // 0x2005fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2005fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200600: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x200600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x200604: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x200604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x200608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20060c: 0x0  nop
    ctx->pc = 0x20060cu;
    // NOP
    // 0x200610: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200610u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200614: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200618: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20061c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x20061Cu;
    SET_GPR_U32(ctx, 31, 0x200624u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200624u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200624u) { return; }
    ctx->pc = 0x200624u;
label_200624:
    // 0x200624: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x200624u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x200628: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20062c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200630: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200634: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200638: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20063c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x20063cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200640: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200644: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x200644u;
    SET_GPR_U32(ctx, 31, 0x20064Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20064Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20064Cu) { return; }
    ctx->pc = 0x20064Cu;
label_20064c:
    // 0x20064c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200650: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x200650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x200654: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200658: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20065c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x20065cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200668: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20066c: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x20066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200670: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x200670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x200674: 0xc040c80  jal         func_103200
    ctx->pc = 0x200674u;
    SET_GPR_U32(ctx, 31, 0x20067Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x20067Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20067Cu) { return; }
    ctx->pc = 0x20067Cu;
label_20067c:
    // 0x20067c: 0xc067648  jal         func_19D920
    ctx->pc = 0x20067Cu;
    SET_GPR_U32(ctx, 31, 0x200684u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x20067Cu, 0x200684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200684u;
label_200684:
    // 0x200684: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x200684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x200688: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x200688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x20068c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200690: 0x0  nop
    ctx->pc = 0x200690u;
    // NOP
    // 0x200694: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200698: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x20069c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2006a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2006a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2006a4: 0x0  nop
    ctx->pc = 0x2006a4u;
    // NOP
    // 0x2006a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2006a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2006ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2006acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2006b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2006b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2006b4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2006B4u;
    SET_GPR_U32(ctx, 31, 0x2006BCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2006BCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2006BCu) { return; }
    ctx->pc = 0x2006BCu;
label_2006bc:
    // 0x2006bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2006c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2006c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2006c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2006c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2006cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2006d0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2006d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2006d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2006d8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2006D8u;
    SET_GPR_U32(ctx, 31, 0x2006E0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2006E0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2006E0u) { return; }
    ctx->pc = 0x2006E0u;
label_2006e0:
    // 0x2006e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2006e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2006e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2006e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2006e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2006e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2006ec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2006ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2006f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2006f4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2006f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2006f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2006fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200700: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200704: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x200704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x200708: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x200708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x20070c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20070Cu;
    SET_GPR_U32(ctx, 31, 0x200714u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20070Cu, 0x200714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200714u;
label_200714:
    // 0x200714: 0xc067648  jal         func_19D920
    ctx->pc = 0x200714u;
    SET_GPR_U32(ctx, 31, 0x20071Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200714u, 0x20071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20071Cu;
label_20071c:
    // 0x20071c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x20071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
    // 0x200720: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x200720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x200724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200728: 0x0  nop
    ctx->pc = 0x200728u;
    // NOP
    // 0x20072c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20072cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200730: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x200734: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20073c: 0x0  nop
    ctx->pc = 0x20073cu;
    // NOP
    // 0x200740: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200740u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200744: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200748: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20074c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200750: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200758: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20075c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x20075Cu;
    SET_GPR_U32(ctx, 31, 0x200764u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200764u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200764u) { return; }
    ctx->pc = 0x200764u;
label_200764:
    // 0x200764: 0xc067648  jal         func_19D920
    ctx->pc = 0x200764u;
    SET_GPR_U32(ctx, 31, 0x20076Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200764u, 0x20076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20076Cu;
label_20076c:
    // 0x20076c: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x20076cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x200770: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x200770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x200774: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200778: 0x0  nop
    ctx->pc = 0x200778u;
    // NOP
    // 0x20077c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20077cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200780: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20078c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x20078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200790: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x200790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x200794: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x200794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x200798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20079c: 0x0  nop
    ctx->pc = 0x20079cu;
    // NOP
label_2007a0:
    // 0x2007a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007a4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x2007a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x2007a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2007a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2007ac: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2007acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2007b0: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x2007B0u;
    {
        const bool branch_taken_0x2007b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2007b0) {
            ctx->pc = 0x2005B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2005b4;
        }
    }
    ctx->pc = 0x2007B8u;
    // 0x2007b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007bc: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x2007bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x2007c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2007c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2007c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2007c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2007c8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2007C8u;
    {
        const bool branch_taken_0x2007c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007c8) {
            ctx->pc = 0x200838u;
            goto label_200838;
        }
    }
    ctx->pc = 0x2007D0u;
    // 0x2007d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007d4: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x2007d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x2007d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2007d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2007dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2007dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2007e0: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2007E0u;
    {
        const bool branch_taken_0x2007e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007e0) {
            ctx->pc = 0x200988u;
            goto label_200988;
        }
    }
    ctx->pc = 0x2007E8u;
    // 0x2007e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2007e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2007ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2007f0: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x2007f4: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x2007f8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2007F8u;
    SET_GPR_U32(ctx, 31, 0x200800u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x200800u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200800u) { return; }
    ctx->pc = 0x200800u;
label_200800:
    // 0x200800: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20080c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x200810: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x200814: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x200814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x200818: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x200818u;
    SET_GPR_U32(ctx, 31, 0x200820u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x200820u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200820u) { return; }
    ctx->pc = 0x200820u;
label_200820:
    // 0x200820: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x200824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200828: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20082c: 0xe460048c  swc1        $f0, 0x48C($v1)
    ctx->pc = 0x20082cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1164), bits); }
    // 0x200830: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200830) {
            ctx->pc = 0x200988u;
            goto label_200988;
        }
    }
    ctx->pc = 0x200838u;
label_200838:
    // 0x200838: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x200838u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20083c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200840: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x200844: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200848: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20084c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x20084cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20085c: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x20085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200860: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x200864: 0xc040c80  jal         func_103200
    ctx->pc = 0x200864u;
    SET_GPR_U32(ctx, 31, 0x20086Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x20086Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20086Cu) { return; }
    ctx->pc = 0x20086Cu;
label_20086c:
    // 0x20086c: 0xc067648  jal         func_19D920
    ctx->pc = 0x20086Cu;
    SET_GPR_U32(ctx, 31, 0x200874u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x20086Cu, 0x200874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200874u;
label_200874:
    // 0x200874: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x200874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x200878: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x200878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x20087c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20087cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200880: 0x0  nop
    ctx->pc = 0x200880u;
    // NOP
    // 0x200884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200888: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x200888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x20088c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200894: 0x0  nop
    ctx->pc = 0x200894u;
    // NOP
    // 0x200898: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200898u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20089c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2008a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2008a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2008a4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2008A4u;
    SET_GPR_U32(ctx, 31, 0x2008ACu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2008ACu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2008ACu) { return; }
    ctx->pc = 0x2008ACu;
label_2008ac:
    // 0x2008ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2008b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2008c8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2008C8u;
    SET_GPR_U32(ctx, 31, 0x2008D0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2008D0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2008D0u) { return; }
    ctx->pc = 0x2008D0u;
label_2008d0:
    // 0x2008d0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2008d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008e4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2008e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2008ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2008f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2008f4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2008f8: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x2008fc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2008FCu;
    SET_GPR_U32(ctx, 31, 0x200904u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2008FCu, 0x200904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200904u;
label_200904:
    // 0x200904: 0xc067648  jal         func_19D920
    ctx->pc = 0x200904u;
    SET_GPR_U32(ctx, 31, 0x20090Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200904u, 0x20090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20090Cu;
label_20090c:
    // 0x20090c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
    // 0x200910: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x200910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x200914: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200918: 0x0  nop
    ctx->pc = 0x200918u;
    // NOP
    // 0x20091c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20091cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200920: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x200924: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20092c: 0x0  nop
    ctx->pc = 0x20092cu;
    // NOP
    // 0x200930: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200930u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200934: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20093c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200940: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200948: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20094c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x20094Cu;
    SET_GPR_U32(ctx, 31, 0x200954u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200954u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200954u) { return; }
    ctx->pc = 0x200954u;
label_200954:
    // 0x200954: 0xc067648  jal         func_19D920
    ctx->pc = 0x200954u;
    SET_GPR_U32(ctx, 31, 0x20095Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200954u, 0x20095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20095Cu;
label_20095c:
    // 0x20095c: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x200960: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x200960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x200964: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200968: 0x0  nop
    ctx->pc = 0x200968u;
    // NOP
    // 0x20096c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20096cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200970: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200974: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20097c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x20097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200980: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x200980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x200984: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x200984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_200988:
    // 0x200988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20098c: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x20098cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x200990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x200990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200994: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x200998: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x200998u;
    {
        const bool branch_taken_0x200998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200998) {
            ctx->pc = 0x200A30u;
            goto label_200a30;
        }
    }
    ctx->pc = 0x2009A0u;
    // 0x2009a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2009a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009a4: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x2009a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x2009a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2009a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2009ac: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2009acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2009b0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2009B0u;
    {
        const bool branch_taken_0x2009b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2009b0) {
            ctx->pc = 0x200B90u;
            goto label_200b90;
        }
    }
    ctx->pc = 0x2009B8u;
    // 0x2009b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009c0: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2009c4: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x2009c8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2009C8u;
    SET_GPR_U32(ctx, 31, 0x2009D0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2009D0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2009D0u) { return; }
    ctx->pc = 0x2009D0u;
label_2009d0:
    // 0x2009d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009d4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x2009d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x2009d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2009d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2009dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2009e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2009e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2009e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2009e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2009f0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2009f4: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2009f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2009f8: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x2009f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2009fc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2009FCu;
    SET_GPR_U32(ctx, 31, 0x200A04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x200A04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200A04u) { return; }
    ctx->pc = 0x200A04u;
label_200a04:
    // 0x200a04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x200a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x200a08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a10: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x200a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x200a14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200a18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x200a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x200a1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200a24: 0xe460048c  swc1        $f0, 0x48C($v1)
    ctx->pc = 0x200a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1164), bits); }
    // 0x200a28: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x200A28u;
    {
        const bool branch_taken_0x200a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a28) {
            ctx->pc = 0x200B90u;
            goto label_200b90;
        }
    }
    ctx->pc = 0x200A30u;
label_200a30:
    // 0x200a30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a34: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x200a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x200a38: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x200a38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x200a3c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x200a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x200a40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x200a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x200a44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x200a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200a5c: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x200a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200a60: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x200a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x200a64: 0xc040c80  jal         func_103200
    ctx->pc = 0x200A64u;
    SET_GPR_U32(ctx, 31, 0x200A6Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x200A6Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200A6Cu) { return; }
    ctx->pc = 0x200A6Cu;
label_200a6c:
    // 0x200a6c: 0xc067648  jal         func_19D920
    ctx->pc = 0x200A6Cu;
    SET_GPR_U32(ctx, 31, 0x200A74u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200A6Cu, 0x200A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A74u;
label_200a74:
    // 0x200a74: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x200a78: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x200a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x200a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x200a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200a80: 0x0  nop
    ctx->pc = 0x200a80u;
    // NOP
    // 0x200a84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200a88: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x200a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x200a8c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a94: 0x0  nop
    ctx->pc = 0x200a94u;
    // NOP
    // 0x200a98: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200a98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200a9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200aa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200aa4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x200AA4u;
    SET_GPR_U32(ctx, 31, 0x200AACu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200AACu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200AACu) { return; }
    ctx->pc = 0x200AACu;
label_200aac:
    // 0x200aac: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200ab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200ab4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200ab8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x200ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200abc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200ac0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200ac4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200ac8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x200AC8u;
    SET_GPR_U32(ctx, 31, 0x200AD0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x200AD0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200AD0u) { return; }
    ctx->pc = 0x200AD0u;
label_200ad0:
    // 0x200ad0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x200ad0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x200ad4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200ad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200adc: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x200adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200ae0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200ae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200ae8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x200ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200aec: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200af4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200af8: 0x24e40480  addiu       $a0, $a3, 0x480
    ctx->pc = 0x200af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1152));
    // 0x200afc: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x200afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x200b00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x200B00u;
    SET_GPR_U32(ctx, 31, 0x200B08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x200B00u, 0x200B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B08u;
label_200b08:
    // 0x200b08: 0xc067648  jal         func_19D920
    ctx->pc = 0x200B08u;
    SET_GPR_U32(ctx, 31, 0x200B10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200B08u, 0x200B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B10u;
label_200b10:
    // 0x200b10: 0x3c033e2e  lui         $v1, 0x3E2E
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15918 << 16));
    // 0x200b14: 0x3465147b  ori         $a1, $v1, 0x147B
    ctx->pc = 0x200b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x200b18: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x200b18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200b1c: 0x0  nop
    ctx->pc = 0x200b1cu;
    // NOP
    // 0x200b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200b24: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x200b28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x200b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x200b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200b30: 0x0  nop
    ctx->pc = 0x200b30u;
    // NOP
    // 0x200b34: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x200b34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200b38: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200b3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x200b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200b40: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x200b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x200b44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200b4c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200b50: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x200b50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x200b54: 0xc040c8c  jal         func_103230
    ctx->pc = 0x200B54u;
    SET_GPR_U32(ctx, 31, 0x200B5Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x200B5Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200B5Cu) { return; }
    ctx->pc = 0x200B5Cu;
label_200b5c:
    // 0x200b5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x200B5Cu;
    SET_GPR_U32(ctx, 31, 0x200B64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200B5Cu, 0x200B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B64u;
label_200b64:
    // 0x200b64: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x200b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x200b68: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x200b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x200b6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200b70: 0x0  nop
    ctx->pc = 0x200b70u;
    // NOP
    // 0x200b74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x200b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200b78: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x200b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200b7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x200b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200b80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x200b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200b84: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x200b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x200b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x200b8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x200b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_200b90:
    // 0x200b90: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x200b90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x200b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x200B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200BA4u;
}
