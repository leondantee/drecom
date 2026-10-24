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

// Function: R409_init
// Address: 0x2837e0 - 0x2838e8
void R409_init_0x2837e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R409_init_0x2837e0");
#endif

    switch (ctx->pc) {
        case 0x283800u: goto label_283800;
        case 0x283810u: goto label_283810;
        case 0x28383cu: goto label_28383c;
        case 0x28385cu: goto label_28385c;
        case 0x283888u: goto label_283888;
        case 0x2838b8u: goto label_2838b8;
        default: break;
    }

    ctx->pc = 0x2837e0u;

    // 0x2837e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2837e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2837e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2837e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2837e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2837e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2837ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2837ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2837f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2837f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2837f4: 0x24445df0  addiu       $a0, $v0, 0x5DF0
    ctx->pc = 0x2837f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24048));
    // 0x2837f8: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x2837F8u;
    SET_GPR_U32(ctx, 31, 0x283800u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x2837F8u, 0x283800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283800u;
label_283800:
    // 0x283800: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x283804: 0x24445520  addiu       $a0, $v0, 0x5520
    ctx->pc = 0x283804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21792));
    // 0x283808: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x283808u;
    SET_GPR_U32(ctx, 31, 0x283810u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x283808u, 0x283810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283810u;
label_283810:
    // 0x283810: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x283810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283814: 0x8c30fa68  lw          $s0, -0x598($at)
    ctx->pc = 0x283814u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FA68u));
    // 0x283818: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x283818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28381c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x283820: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x283820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x283824: 0x24027fe0  addiu       $v0, $zero, 0x7FE0
    ctx->pc = 0x283824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x283828: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x283828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x28382c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x28382cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x283830: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x283830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x283834: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x283834u;
    SET_GPR_U32(ctx, 31, 0x28383Cu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x283834u, 0x28383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28383Cu;
label_28383c:
    // 0x28383c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28383cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x283840: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x283840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x283844: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x283844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x283848: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x283848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x28384c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x28384cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x283850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283854: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x283854u;
    SET_GPR_U32(ctx, 31, 0x28385Cu);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x283854u, 0x28385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28385Cu;
label_28385c:
    // 0x28385c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28385cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283860: 0x8c30fa6c  lw          $s0, -0x594($at)
    ctx->pc = 0x283860u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FA6Cu));
    // 0x283864: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x283864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x283868: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x283868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28386c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28386cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x283870: 0x24027fc0  addiu       $v0, $zero, 0x7FC0
    ctx->pc = 0x283870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32704));
    // 0x283874: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x283874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x283878: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x283878u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28387c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x28387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x283880: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x283880u;
    SET_GPR_U32(ctx, 31, 0x283888u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x283880u, 0x283888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283888u;
label_283888:
    // 0x283888: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x283888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28388c: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x28388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x283890: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x283890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x283894: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x283894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x283898: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x283898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28389c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28389cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2838a0: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x2838a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2838a4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2838a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2838a8: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x2838a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x2838ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2838acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2838b0: 0xc05db9c  jal         func_176E70
    ctx->pc = 0x2838B0u;
    SET_GPR_U32(ctx, 31, 0x2838B8u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x2838B0u, 0x2838B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838B8u;
label_2838b8:
    // 0x2838b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2838b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2838bc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x2838bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2838c0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2838c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2838c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2838c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2838c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2838c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2838cc: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x2838ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2838d0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2838d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2838d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2838d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2838d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2838d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2838dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2838dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2838e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2838E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2838E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2838E8u;
}
