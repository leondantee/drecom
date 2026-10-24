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

// Function: entry_0028e854
// Address: 0x28e854 - 0x28e96c
void entry_0028e854_0x28e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e854_0x28e854");
#endif

    switch (ctx->pc) {
        case 0x28e87cu: goto label_28e87c;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e930u: goto label_28e930;
        case 0x28e964u: goto label_28e964;
        default: break;
    }

    ctx->pc = 0x28e854u;

    // 0x28e854: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e860: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x28E860u;
    {
        const bool branch_taken_0x28e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e860) {
            ctx->pc = 0x28E96Cu;
            return;
        }
    }
    ctx->pc = 0x28E868u;
    // 0x28e868: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e86c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e86cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e870: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x28e870u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x28e874: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E874u;
    SET_GPR_U32(ctx, 31, 0x28E87Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E874u, 0x28E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E87Cu;
label_28e87c:
    // 0x28e87c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28e87cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e880: 0x26460044  addiu       $a2, $s2, 0x44
    ctx->pc = 0x28e880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x28e884: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x28e884u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28e888: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e88c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e88cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e890: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28e890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28e894: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E894u;
    SET_GPR_U32(ctx, 31, 0x28E89Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E894u, 0x28E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E89Cu;
label_28e89c:
    // 0x28e89c: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x28e8a0: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x28e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x28e8a4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e8a8: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x28e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x28e8ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e8b0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e8b4: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x28e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e8b8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28e8b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28e8bc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e8bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e8c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E8C0u;
    SET_GPR_U32(ctx, 31, 0x28E8C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E8C0u, 0x28E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8C8u;
label_28e8c8:
    // 0x28e8c8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e8cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28e8ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e8d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28e8d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e8d8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e8dc: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x28e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x28e8e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e8e4: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e8e8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e8ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e8ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e8f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E8F0u;
    SET_GPR_U32(ctx, 31, 0x28E8F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E8F0u, 0x28E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8F8u;
label_28e8f8:
    // 0x28e8f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28e8f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e8fc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e900: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28e900u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e904: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x28e904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x28e908: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x28e908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x28e90c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28e910: 0x3462103b  ori         $v0, $v1, 0x103B
    ctx->pc = 0x28e910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x28e914: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e918: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e918u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e91c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e924: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e928: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E928u;
    SET_GPR_U32(ctx, 31, 0x28E930u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E928u, 0x28E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E930u;
label_28e930:
    // 0x28e930: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e934: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x28e934u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e938: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28e938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28e93c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e940: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28e940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28e944: 0x3462103f  ori         $v0, $v1, 0x103F
    ctx->pc = 0x28e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x28e948: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28e948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28e94c: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x28e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x28e950: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28e954: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e958: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28e958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28e95c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E95Cu;
    SET_GPR_U32(ctx, 31, 0x28E964u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E95Cu, 0x28E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E964u;
label_28e964:
    // 0x28e964: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x28e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e968: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28e968u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28e96cu;
}
