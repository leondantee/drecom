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

// Function: entry_002335ac
// Address: 0x2335ac - 0x233764
void entry_002335ac_0x2335ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002335ac_0x2335ac");
#endif

    switch (ctx->pc) {
        case 0x2335f8u: goto label_2335f8;
        case 0x233628u: goto label_233628;
        case 0x23363cu: goto label_23363c;
        case 0x233650u: goto label_233650;
        case 0x233668u: goto label_233668;
        case 0x23367cu: goto label_23367c;
        case 0x233694u: goto label_233694;
        case 0x2336acu: goto label_2336ac;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336ecu: goto label_2336ec;
        case 0x233700u: goto label_233700;
        case 0x233718u: goto label_233718;
        case 0x233738u: goto label_233738;
        case 0x23374cu: goto label_23374c;
        case 0x233760u: goto label_233760;
        default: break;
    }

    ctx->pc = 0x2335acu;

    // 0x2335ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2335acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2335b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2335b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2335b4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2335b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2335b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2335b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2335bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2335c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2335c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2335c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2335c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2335c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2335cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2335ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2335d0: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x2335d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2335d4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2335d8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2335d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2335dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2335e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2335e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2335e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2335e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2335e8: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2335ec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2335ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2335f0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2335F0u;
    SET_GPR_U32(ctx, 31, 0x2335F8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2335F0u, 0x2335F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335F8u;
label_2335f8:
    // 0x2335f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2335f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2335fc: 0x8605127a  lh          $a1, 0x127A($s0)
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4730)));
    // 0x233600: 0x14a00058  bnez        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x233600u;
    {
        const bool branch_taken_0x233600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x233600) {
            ctx->pc = 0x233764u;
            return;
        }
    }
    ctx->pc = 0x233608u;
    // 0x233608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23360c: 0xa606127a  sh          $a2, 0x127A($s0)
    ctx->pc = 0x23360cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 6));
    // 0x233610: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x233614: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x233614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x233618: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x233618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x23361c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x23361cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x233620: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233620u;
    SET_GPR_U32(ctx, 31, 0x233628u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233620u, 0x233628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233628u;
label_233628:
    // 0x233628: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x233628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23362c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x23362cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x233630: 0x3465000e  ori         $a1, $v1, 0xE
    ctx->pc = 0x233630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14);
    // 0x233634: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233634u;
    SET_GPR_U32(ctx, 31, 0x23363Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233634u, 0x23363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23363Cu;
label_23363c:
    // 0x23363c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23363cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x233640: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x233640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x233644: 0x3465001c  ori         $a1, $v1, 0x1C
    ctx->pc = 0x233644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
    // 0x233648: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233648u;
    SET_GPR_U32(ctx, 31, 0x233650u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233648u, 0x233650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233650u;
label_233650:
    // 0x233650: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x233654: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x233654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x233658: 0x34510027  ori         $s1, $v0, 0x27
    ctx->pc = 0x233658u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
    // 0x23365c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x23365cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x233660: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233660u;
    SET_GPR_U32(ctx, 31, 0x233668u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233660u, 0x233668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233668u;
label_233668:
    // 0x233668: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x233668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23366c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x23366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x233670: 0x34450035  ori         $a1, $v0, 0x35
    ctx->pc = 0x233670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    // 0x233674: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233674u;
    SET_GPR_U32(ctx, 31, 0x23367Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233674u, 0x23367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23367Cu;
label_23367c:
    // 0x23367c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x233680: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x233680u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x233684: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x233684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x233688: 0x34450041  ori         $a1, $v0, 0x41
    ctx->pc = 0x233688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x23368c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23368Cu;
    SET_GPR_U32(ctx, 31, 0x233694u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23368Cu, 0x233694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233694u;
label_233694:
    // 0x233694: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x233694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x233698: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x233698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23369c: 0x3c11000f  lui         $s1, 0xF
    ctx->pc = 0x23369cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)15 << 16));
    // 0x2336a0: 0x36250050  ori         $a1, $s1, 0x50
    ctx->pc = 0x2336a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)80);
    // 0x2336a4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2336A4u;
    SET_GPR_U32(ctx, 31, 0x2336ACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336A4u, 0x2336ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ACu;
label_2336ac:
    // 0x2336ac: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2336b0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2336b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x2336b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2336B4u;
    SET_GPR_U32(ctx, 31, 0x2336BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336B4u, 0x2336BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336BCu;
label_2336bc:
    // 0x2336bc: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2336c0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2336c4: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x2336c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x2336c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2336c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2336cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2336CCu;
    SET_GPR_U32(ctx, 31, 0x2336D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336CCu, 0x2336D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336D4u;
label_2336d4:
    // 0x2336d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2336d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2336d8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2336dc: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2336dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2336e0: 0x3465001c  ori         $a1, $v1, 0x1C
    ctx->pc = 0x2336e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
    // 0x2336e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2336E4u;
    SET_GPR_U32(ctx, 31, 0x2336ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336E4u, 0x2336ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336ECu;
label_2336ec:
    // 0x2336ec: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2336f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2336f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2336f4: 0x34450027  ori         $a1, $v0, 0x27
    ctx->pc = 0x2336f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
    // 0x2336f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2336F8u;
    SET_GPR_U32(ctx, 31, 0x233700u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2336F8u, 0x233700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233700u;
label_233700:
    // 0x233700: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x233700u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x233704: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x233704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x233708: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x233708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x23370c: 0x34450035  ori         $a1, $v0, 0x35
    ctx->pc = 0x23370cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    // 0x233710: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233710u;
    SET_GPR_U32(ctx, 31, 0x233718u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233710u, 0x233718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233718u;
label_233718:
    // 0x233718: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x233718u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23371c: 0x3c0502ff  lui         $a1, 0x2FF
    ctx->pc = 0x23371cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)767 << 16));
    // 0x233720: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x233720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x233724: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x233724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x233728: 0x34460041  ori         $a2, $v0, 0x41
    ctx->pc = 0x233728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x23372c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x23372cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x233730: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233730u;
    SET_GPR_U32(ctx, 31, 0x233738u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233730u, 0x233738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233738u;
label_233738:
    // 0x233738: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x233738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x23373c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x233740: 0x34450050  ori         $a1, $v0, 0x50
    ctx->pc = 0x233740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x233744: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233744u;
    SET_GPR_U32(ctx, 31, 0x23374Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233744u, 0x23374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23374Cu;
label_23374c:
    // 0x23374c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x23374cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x233750: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x233750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x233754: 0x34450078  ori         $a1, $v0, 0x78
    ctx->pc = 0x233754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)120);
    // 0x233758: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x233758u;
    SET_GPR_U32(ctx, 31, 0x233760u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x233758u, 0x233760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233760u;
label_233760:
    // 0x233760: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x233760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x233764u;
}
