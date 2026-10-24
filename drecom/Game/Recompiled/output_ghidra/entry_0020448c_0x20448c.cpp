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

// Function: entry_0020448c
// Address: 0x20448c - 0x2046d0
void entry_0020448c_0x20448c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020448c_0x20448c");
#endif

    switch (ctx->pc) {
        case 0x2044e0u: goto label_2044e0;
        case 0x204500u: goto label_204500;
        case 0x20452cu: goto label_20452c;
        case 0x20455cu: goto label_20455c;
        case 0x204590u: goto label_204590;
        case 0x2045c4u: goto label_2045c4;
        case 0x2045f4u: goto label_2045f4;
        case 0x204628u: goto label_204628;
        case 0x20465cu: goto label_20465c;
        case 0x204690u: goto label_204690;
        case 0x2046c4u: goto label_2046c4;
        default: break;
    }

    ctx->pc = 0x20448cu;

    // 0x20448c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204490: 0x94440094  lhu         $a0, 0x94($v0)
    ctx->pc = 0x204490u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204494: 0x1480008e  bnez        $a0, . + 4 + (0x8E << 2)
    ctx->pc = 0x204494u;
    {
        const bool branch_taken_0x204494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x204494) {
            ctx->pc = 0x2046D0u;
            return;
        }
    }
    ctx->pc = 0x20449Cu;
    // 0x20449c: 0x24050521  addiu       $a1, $zero, 0x521
    ctx->pc = 0x20449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x2044a0: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2044a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2044a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2044a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2044ac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2044b0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2044b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2044b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044b8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2044bc: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
    // 0x2044c0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2044c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2044c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2044c8: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2044cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044d4: 0x24e60030  addiu       $a2, $a3, 0x30
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2044d8: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x2044D8u;
    SET_GPR_U32(ctx, 31, 0x2044E0u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x2044E0u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2044E0u) { return; }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x2044e4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2044e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2044e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2044e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2044ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2044ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2044f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2044f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2044f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2044f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2044f8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2044F8u;
    SET_GPR_U32(ctx, 31, 0x204500u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2044F8u, 0x204500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204500u;
label_204500:
    // 0x204500: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204504: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204508: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x20450c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20450cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204510: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204514: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204518: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204518u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20451c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20451cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204520: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204520u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204524: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204524u;
    SET_GPR_U32(ctx, 31, 0x20452Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204524u, 0x20452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20452Cu;
label_20452c:
    // 0x20452c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20452cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204530: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204534: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204538: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204538u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20453c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204544: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204548: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204548u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20454c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204550: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204550u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204554: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204554u;
    SET_GPR_U32(ctx, 31, 0x20455Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204554u, 0x20455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20455Cu;
label_20455c:
    // 0x20455c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20455cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204560: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204564: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204568: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204568u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20456c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204570: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204574: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204578: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20457c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20457cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204580: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204584: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204584u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204588: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204588u;
    SET_GPR_U32(ctx, 31, 0x204590u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204588u, 0x204590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204590u;
label_204590:
    // 0x204590: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204594: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204598: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x20459c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x20459cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2045a0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x2045a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2045a4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2045a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2045a8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2045ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2045acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2045b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2045b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2045b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2045b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2045BCu;
    SET_GPR_U32(ctx, 31, 0x2045C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2045BCu, 0x2045C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045C4u;
label_2045c4:
    // 0x2045c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2045c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2045c8: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x2045c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x2045cc: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x2045ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x2045d0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2045d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2045d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2045d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2045d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2045d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2045dc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2045e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2045e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2045e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2045e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2045ec: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2045ECu;
    SET_GPR_U32(ctx, 31, 0x2045F4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2045ECu, 0x2045F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045F4u;
label_2045f4:
    // 0x2045f4: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x2045f8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2045f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2045fc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2045fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204600: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204604: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204608: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x204608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20460c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x20460cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204610: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204610u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204618: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204618u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20461c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20461cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204620: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204620u;
    SET_GPR_U32(ctx, 31, 0x204628u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204620u, 0x204628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204628u;
label_204628:
    // 0x204628: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204628u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20462c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204630: 0x3487d70a  ori         $a3, $a0, 0xD70A
    ctx->pc = 0x204630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204634: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204634u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204638: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20463c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20463cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204640: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x204640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204644: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204648: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20464c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20464cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204650: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204650u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204654: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204654u;
    SET_GPR_U32(ctx, 31, 0x20465Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204654u, 0x20465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20465Cu;
label_20465c:
    // 0x20465c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x20465cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204660: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204664: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204664u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204668: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20466c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x20466cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204670: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204674: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x204674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204678: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204678u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20467c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204680: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204680u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204684: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204684u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204688: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204688u;
    SET_GPR_U32(ctx, 31, 0x204690u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204688u, 0x204690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204690u;
label_204690:
    // 0x204690: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204694: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x204694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x204698: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x20469c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20469cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2046a0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2046a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046a4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2046a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2046a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2046a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2046ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2046acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2046b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2046b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2046b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2046b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2046b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2046bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2046BCu;
    SET_GPR_U32(ctx, 31, 0x2046C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2046BCu, 0x2046C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046C4u;
label_2046c4:
    // 0x2046c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2046c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2046c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2046c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2046cc: 0xa4a40094  sh          $a0, 0x94($a1)
    ctx->pc = 0x2046ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 148), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2046d0u;
}
