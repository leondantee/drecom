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

// Function: entry_002005b4
// Address: 0x2005b4 - 0x2007a0
void entry_002005b4_0x2005b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002005b4_0x2005b4");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x2005b4u;

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
    ctx->pc = 0x2007a0u;
}
