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

// Function: entry_001d57a0
// Address: 0x1d57a0 - 0x1d5b60
void entry_001d57a0_0x1d57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d57a0_0x1d57a0");
#endif

    switch (ctx->pc) {
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d582cu: goto label_1d582c;
        case 0x1d5848u: goto label_1d5848;
        case 0x1d58b0u: goto label_1d58b0;
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58ecu: goto label_1d58ec;
        case 0x1d590cu: goto label_1d590c;
        case 0x1d5928u: goto label_1d5928;
        case 0x1d5948u: goto label_1d5948;
        case 0x1d5968u: goto label_1d5968;
        case 0x1d5988u: goto label_1d5988;
        case 0x1d59a8u: goto label_1d59a8;
        case 0x1d59c4u: goto label_1d59c4;
        case 0x1d59e0u: goto label_1d59e0;
        case 0x1d59fcu: goto label_1d59fc;
        case 0x1d5a18u: goto label_1d5a18;
        case 0x1d5a34u: goto label_1d5a34;
        case 0x1d5a4cu: goto label_1d5a4c;
        case 0x1d5a64u: goto label_1d5a64;
        case 0x1d5a80u: goto label_1d5a80;
        case 0x1d5a9cu: goto label_1d5a9c;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5accu: goto label_1d5acc;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5b04u: goto label_1d5b04;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b58u: goto label_1d5b58;
        default: break;
    }

    ctx->pc = 0x1d57a0u;

    // 0x1d57a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d57a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d57ac: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x1d57acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d57b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d57b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57b4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D57B4u;
    SET_GPR_U32(ctx, 31, 0x1D57BCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D57BCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D57BCu) { return; }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1d57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d57c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d57c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1d57c8: 0x2462e510  addiu       $v0, $v1, -0x1AF0
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960400));
    // 0x1d57cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d57ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57d0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D57D0u;
    SET_GPR_U32(ctx, 31, 0x1D57D8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D57D8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D57D8u) { return; }
    ctx->pc = 0x1D57D8u;
label_1d57d8:
    // 0x1d57d8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d57dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1d57dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d57e0: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1d57e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d57e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57e8: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d57e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d57ec: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D57ECu;
    SET_GPR_U32(ctx, 31, 0x1D57F4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D57ECu, 0x1D57F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57F4u;
label_1d57f4:
    // 0x1d57f4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x1d57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d57f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d57f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57fc: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d5800: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d5800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5804: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d5808: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D5808u;
    SET_GPR_U32(ctx, 31, 0x1D5810u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D5808u, 0x1D5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5810u;
label_1d5810:
    // 0x1d5810: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d5814: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1d5814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d5818: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d581c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d581cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5820: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5824: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D5824u;
    SET_GPR_U32(ctx, 31, 0x1D582Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D5824u, 0x1D582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D582Cu;
label_1d582c:
    // 0x1d582c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d5830: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1d5830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d5834: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1d5838: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d5838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d583c: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d583cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5840: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D5840u;
    SET_GPR_U32(ctx, 31, 0x1D5848u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D5840u, 0x1D5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5848u;
label_1d5848:
    // 0x1d5848: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d584c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d584cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5850: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5854: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1d5858: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d5858u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d585c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d5860: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d5860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5864: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5868: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1d586c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d586cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d5870: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1d5874: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d5874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5878: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d587c: 0x24820940  addiu       $v0, $a0, 0x940
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
    // 0x1d5880: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d5880u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d5884: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1d5884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5888: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d5888u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d588c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5890: 0x24630980  addiu       $v1, $v1, 0x980
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
    // 0x1d5894: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d5894u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d5898: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1d5898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1d589c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d589cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d58a0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d58a4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1d58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d58a8: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D58A8u;
    SET_GPR_U32(ctx, 31, 0x1D58B0u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D58A8u, 0x1D58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58B0u;
label_1d58b0:
    // 0x1d58b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d58b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d58b4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58b8: 0x24640810  addiu       $a0, $v1, 0x810
    ctx->pc = 0x1d58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2064));
    // 0x1d58bc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d58c0: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d58c4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D58C4u;
    SET_GPR_U32(ctx, 31, 0x1D58CCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D58C4u, 0x1D58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58CCu;
label_1d58cc:
    // 0x1d58cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d58ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d58d0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58d4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58d8: 0x24840820  addiu       $a0, $a0, 0x820
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
    // 0x1d58dc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d58e0: 0x24660810  addiu       $a2, $v1, 0x810
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2064));
    // 0x1d58e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D58E4u;
    SET_GPR_U32(ctx, 31, 0x1D58ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D58E4u, 0x1D58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ECu;
label_1d58ec:
    // 0x1d58ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d58ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d58f0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58f4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58f8: 0x24840830  addiu       $a0, $a0, 0x830
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
    // 0x1d58fc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5900: 0x24660820  addiu       $a2, $v1, 0x820
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x1d5904: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5904u;
    SET_GPR_U32(ctx, 31, 0x1D590Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5904u, 0x1D590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D590Cu;
label_1d590c:
    // 0x1d590c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d590cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5910: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1d5914: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d5914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5918: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d591c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d5920: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D5920u;
    SET_GPR_U32(ctx, 31, 0x1D5928u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D5920u, 0x1D5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5928u;
label_1d5928:
    // 0x1d5928: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d5928u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d592c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5930: 0x24640850  addiu       $a0, $v1, 0x850
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x1d5934: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5938: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1d5938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d593c: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d593cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d5940: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5940u;
    SET_GPR_U32(ctx, 31, 0x1D5948u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5940u, 0x1D5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5948u;
label_1d5948:
    // 0x1d5948: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d5948u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d594c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5950: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5954: 0x24840860  addiu       $a0, $a0, 0x860
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2144));
    // 0x1d5958: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d595c: 0x24660850  addiu       $a2, $v1, 0x850
    ctx->pc = 0x1d595cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x1d5960: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5960u;
    SET_GPR_U32(ctx, 31, 0x1D5968u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5960u, 0x1D5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5968u;
label_1d5968:
    // 0x1d5968: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d5968u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d596c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5970: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5974: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x1d5978: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d597c: 0x24660860  addiu       $a2, $v1, 0x860
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2144));
    // 0x1d5980: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5980u;
    SET_GPR_U32(ctx, 31, 0x1D5988u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5980u, 0x1D5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5988u;
label_1d5988:
    // 0x1d5988: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1d5988u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d598c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5990: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5994: 0x24640880  addiu       $a0, $v1, 0x880
    ctx->pc = 0x1d5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1d5998: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d599c: 0x24460870  addiu       $a2, $v0, 0x870
    ctx->pc = 0x1d599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x1d59a0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59A0u;
    SET_GPR_U32(ctx, 31, 0x1D59A8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59A0u, 0x1D59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59A8u;
label_1d59a8:
    // 0x1d59a8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59ac: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59b0: 0x246408a0  addiu       $a0, $v1, 0x8A0
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2208));
    // 0x1d59b4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d59b8: 0x24460850  addiu       $a2, $v0, 0x850
    ctx->pc = 0x1d59b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x1d59bc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59BCu;
    SET_GPR_U32(ctx, 31, 0x1D59C4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59BCu, 0x1D59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59C4u;
label_1d59c4:
    // 0x1d59c4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59c8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59cc: 0x246408b0  addiu       $a0, $v1, 0x8B0
    ctx->pc = 0x1d59ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1d59d0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d59d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d59d4: 0x244608a0  addiu       $a2, $v0, 0x8A0
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
    // 0x1d59d8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59D8u;
    SET_GPR_U32(ctx, 31, 0x1D59E0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59D8u, 0x1D59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59E0u;
label_1d59e0:
    // 0x1d59e0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59e4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59e8: 0x246408c0  addiu       $a0, $v1, 0x8C0
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2240));
    // 0x1d59ec: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d59f0: 0x244608b0  addiu       $a2, $v0, 0x8B0
    ctx->pc = 0x1d59f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1d59f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59F4u;
    SET_GPR_U32(ctx, 31, 0x1D59FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59F4u, 0x1D59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59FCu;
label_1d59fc:
    // 0x1d59fc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a00: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a04: 0x246408f0  addiu       $a0, $v1, 0x8F0
    ctx->pc = 0x1d5a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
    // 0x1d5a08: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5a0c: 0x244608a0  addiu       $a2, $v0, 0x8A0
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
    // 0x1d5a10: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A10u;
    SET_GPR_U32(ctx, 31, 0x1D5A18u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A10u, 0x1D5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A18u;
label_1d5a18:
    // 0x1d5a18: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a1c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a20: 0x24640900  addiu       $a0, $v1, 0x900
    ctx->pc = 0x1d5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x1d5a24: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a28: 0x244608f0  addiu       $a2, $v0, 0x8F0
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1d5a2c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A34u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A2Cu, 0x1D5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A34u;
label_1d5a34:
    // 0x1d5a34: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1d5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1d5a38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d5a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5a3c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a40: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d5a44: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D5A44u;
    SET_GPR_U32(ctx, 31, 0x1D5A4Cu);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D5A44u, 0x1D5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A4Cu;
label_1d5a4c:
    // 0x1d5a4c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a50: 0x24440970  addiu       $a0, $v0, 0x970
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x1d5a54: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a58: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d5a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5a5c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A64u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A5Cu, 0x1D5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A64u;
label_1d5a64:
    // 0x1d5a64: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a68: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a6c: 0x24640960  addiu       $a0, $v1, 0x960
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x1d5a70: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a74: 0x24460970  addiu       $a2, $v0, 0x970
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x1d5a78: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A78u;
    SET_GPR_U32(ctx, 31, 0x1D5A80u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A78u, 0x1D5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A80u;
label_1d5a80:
    // 0x1d5a80: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a84: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a88: 0x24640950  addiu       $a0, $v1, 0x950
    ctx->pc = 0x1d5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x1d5a8c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a90: 0x24460960  addiu       $a2, $v0, 0x960
    ctx->pc = 0x1d5a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x1d5a94: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A94u;
    SET_GPR_U32(ctx, 31, 0x1D5A9Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A94u, 0x1D5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A9Cu;
label_1d5a9c:
    // 0x1d5a9c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1d5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1d5aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d5aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5aa4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5aa8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d5aac: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D5AACu;
    SET_GPR_U32(ctx, 31, 0x1D5AB4u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D5AACu, 0x1D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AB4u;
label_1d5ab4:
    // 0x1d5ab4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5ab8: 0x24440930  addiu       $a0, $v0, 0x930
    ctx->pc = 0x1d5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1d5abc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5ac0: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5ac4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5AC4u;
    SET_GPR_U32(ctx, 31, 0x1D5ACCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5AC4u, 0x1D5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ACCu;
label_1d5acc:
    // 0x1d5acc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5ad0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5ad4: 0x24640920  addiu       $a0, $v1, 0x920
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x1d5ad8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5adc: 0x24460930  addiu       $a2, $v0, 0x930
    ctx->pc = 0x1d5adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1d5ae0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5AE0u;
    SET_GPR_U32(ctx, 31, 0x1D5AE8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5AE0u, 0x1D5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AE8u;
label_1d5ae8:
    // 0x1d5ae8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5aec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5af0: 0x24640910  addiu       $a0, $v1, 0x910
    ctx->pc = 0x1d5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2320));
    // 0x1d5af4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5af8: 0x24460920  addiu       $a2, $v0, 0x920
    ctx->pc = 0x1d5af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x1d5afc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5AFCu;
    SET_GPR_U32(ctx, 31, 0x1D5B04u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5AFCu, 0x1D5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B04u;
label_1d5b04:
    // 0x1d5b04: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b08: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b0c: 0x246408e0  addiu       $a0, $v1, 0x8E0
    ctx->pc = 0x1d5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2272));
    // 0x1d5b10: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5b14: 0x24460930  addiu       $a2, $v0, 0x930
    ctx->pc = 0x1d5b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1d5b18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5B18u;
    SET_GPR_U32(ctx, 31, 0x1D5B20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5B18u, 0x1D5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B20u;
label_1d5b20:
    // 0x1d5b20: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b24: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b28: 0x246408d0  addiu       $a0, $v1, 0x8D0
    ctx->pc = 0x1d5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
    // 0x1d5b2c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5b30: 0x244608e0  addiu       $a2, $v0, 0x8E0
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x1d5b34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5B34u;
    SET_GPR_U32(ctx, 31, 0x1D5B3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5B34u, 0x1D5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B3Cu;
label_1d5b3c:
    // 0x1d5b3c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b40: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b44: 0x24640890  addiu       $a0, $v1, 0x890
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x1d5b48: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5b4c: 0x244608e0  addiu       $a2, $v0, 0x8E0
    ctx->pc = 0x1d5b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x1d5b50: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5B50u;
    SET_GPR_U32(ctx, 31, 0x1D5B58u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5B50u, 0x1D5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B58u;
label_1d5b58:
    // 0x1d5b58: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x1d5b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d5b5c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d5b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d5b60u;
}
