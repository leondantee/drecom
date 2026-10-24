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

// Function: entry_001f158c
// Address: 0x1f158c - 0x1f163c
void entry_001f158c_0x1f158c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f158c_0x1f158c");
#endif

    switch (ctx->pc) {
        case 0x1f15e0u: goto label_1f15e0;
        case 0x1f15f4u: goto label_1f15f4;
        case 0x1f1608u: goto label_1f1608;
        case 0x1f162cu: goto label_1f162c;
        default: break;
    }

    ctx->pc = 0x1f158cu;

    // 0x1f158c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1f158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1594: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f1594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f1598: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f159c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f159cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f15a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f15a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f15a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f15a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f15a8: 0x38c38  dsll        $s1, $v1, 16
    ctx->pc = 0x1f15a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << 16);
    // 0x1f15ac: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x1f15acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1f15b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f15b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f15b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f15b8: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x1f15b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f15bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f15c0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f15c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f15c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f15c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f15cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f15ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f15d0: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f15d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f15d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f15d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f15d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F15D8u;
    SET_GPR_U32(ctx, 31, 0x1F15E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F15D8u, 0x1F15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15E0u;
label_1f15e0:
    // 0x1f15e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f15e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f15e4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f15e8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1f15ec: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F15ECu;
    SET_GPR_U32(ctx, 31, 0x1F15F4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F15ECu, 0x1F15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15F4u;
label_1f15f4:
    // 0x1f15f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f15f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f15f8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f15fc: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1f15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1f1600: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F1600u;
    SET_GPR_U32(ctx, 31, 0x1F1608u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F1600u, 0x1F1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1608u;
label_1f1608:
    // 0x1f1608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f160c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1610: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f1610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f1614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f1614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1618: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f1618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f161c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f161cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1620: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1620u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1624: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1624u;
    SET_GPR_U32(ctx, 31, 0x1F162Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1624u, 0x1F162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F162Cu;
label_1f162c:
    // 0x1f162c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1630: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x1f1634: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f1638: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x1f1638u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f163cu;
}
