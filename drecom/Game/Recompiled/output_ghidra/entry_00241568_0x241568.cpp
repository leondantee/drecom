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

// Function: entry_00241568
// Address: 0x241568 - 0x241688
void entry_00241568_0x241568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241568_0x241568");
#endif

    switch (ctx->pc) {
        case 0x241574u: goto label_241574;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415f0u: goto label_2415f0;
        case 0x241608u: goto label_241608;
        case 0x241614u: goto label_241614;
        case 0x24162cu: goto label_24162c;
        case 0x241638u: goto label_241638;
        case 0x241650u: goto label_241650;
        case 0x24165cu: goto label_24165c;
        case 0x241674u: goto label_241674;
        case 0x241680u: goto label_241680;
        default: break;
    }

    ctx->pc = 0x241568u;

    // 0x241568: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x241568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24156c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24156Cu;
    SET_GPR_U32(ctx, 31, 0x241574u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x241574u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x241574u) { return; }
    ctx->pc = 0x241574u;
label_241574:
    // 0x241574: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241578: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x241578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24157c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x241580: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241584: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x241584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241588: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x241588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24158c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241590: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x241590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241594: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x241594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x241598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24159c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2415a0: 0x0  nop
    ctx->pc = 0x2415a0u;
    // NOP
    // 0x2415a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2415a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2415a8: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x2415a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x2415ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2415acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2415b4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2415b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2415B8u;
    SET_GPR_U32(ctx, 31, 0x2415C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2415B8u, 0x2415C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415C0u;
label_2415c0:
    // 0x2415c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2415c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2415c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2415C4u;
    SET_GPR_U32(ctx, 31, 0x2415CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2415C4u, 0x2415CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415CCu;
label_2415cc:
    // 0x2415cc: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x2415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x2415d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2415d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2415d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2415d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2415d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2415DCu;
    SET_GPR_U32(ctx, 31, 0x2415E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2415DCu, 0x2415E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415E4u;
label_2415e4:
    // 0x2415e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2415e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2415e8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2415E8u;
    SET_GPR_U32(ctx, 31, 0x2415F0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2415E8u, 0x2415F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415F0u;
label_2415f0:
    // 0x2415f0: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x2415f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x2415f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2415f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2415f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2415fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2415fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241600: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241600u;
    SET_GPR_U32(ctx, 31, 0x241608u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241600u, 0x241608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241608u;
label_241608:
    // 0x241608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24160c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24160Cu;
    SET_GPR_U32(ctx, 31, 0x241614u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24160Cu, 0x241614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241614u;
label_241614:
    // 0x241614: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x241614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x241618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24161c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x24161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x241620: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241620u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241624: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241624u;
    SET_GPR_U32(ctx, 31, 0x24162Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241624u, 0x24162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24162Cu;
label_24162c:
    // 0x24162c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24162cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241630: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241630u;
    SET_GPR_U32(ctx, 31, 0x241638u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241630u, 0x241638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241638u;
label_241638:
    // 0x241638: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x241638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x24163c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24163cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241640: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x241644: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241644u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241648: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241648u;
    SET_GPR_U32(ctx, 31, 0x241650u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241648u, 0x241650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241650u;
label_241650:
    // 0x241650: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241654: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241654u;
    SET_GPR_U32(ctx, 31, 0x24165Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241654u, 0x24165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24165Cu;
label_24165c:
    // 0x24165c: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x24165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x241660: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241660u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241664: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x241668: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241668u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24166c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24166Cu;
    SET_GPR_U32(ctx, 31, 0x241674u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24166Cu, 0x241674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241674u;
label_241674:
    // 0x241674: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241678: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241678u;
    SET_GPR_U32(ctx, 31, 0x241680u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241678u, 0x241680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241680u;
label_241680:
    // 0x241680: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x241680u;
    {
        const bool branch_taken_0x241680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241680) {
            ctx->pc = 0x2417C0u;
            return;
        }
    }
    ctx->pc = 0x241688u;
}
