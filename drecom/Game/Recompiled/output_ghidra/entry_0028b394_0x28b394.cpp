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

// Function: entry_0028b394
// Address: 0x28b394 - 0x28b458
void entry_0028b394_0x28b394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b394_0x28b394");
#endif

    switch (ctx->pc) {
        case 0x28b42cu: goto label_28b42c;
        case 0x28b438u: goto label_28b438;
        default: break;
    }

    ctx->pc = 0x28b394u;

    // 0x28b394: 0x8e465dc8  lw          $a2, 0x5DC8($s2)
    ctx->pc = 0x28b394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x28b398: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b39c: 0x14c80152  bne         $a2, $t0, . + 4 + (0x152 << 2)
    ctx->pc = 0x28B39Cu;
    {
        const bool branch_taken_0x28b39c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x28b39c) {
            ctx->pc = 0x28B8E8u;
            return;
        }
    }
    ctx->pc = 0x28B3A4u;
    // 0x28b3a4: 0xc64c6620  lwc1        $f12, 0x6620($s2)
    ctx->pc = 0x28b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28b3a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28b3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b3ac: 0x0  nop
    ctx->pc = 0x28b3acu;
    // NOP
    // 0x28b3b0: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x28b3b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b3b4: 0x0  nop
    ctx->pc = 0x28b3b4u;
    // NOP
    // 0x28b3b8: 0x4500010a  bc1f        . + 4 + (0x10A << 2)
    ctx->pc = 0x28B3B8u;
    {
        const bool branch_taken_0x28b3b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b3b8) {
            ctx->pc = 0x28B7E4u;
            return;
        }
    }
    ctx->pc = 0x28B3C0u;
    // 0x28b3c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28b3c4: 0x24696270  addiu       $t1, $v1, 0x6270
    ctx->pc = 0x28b3c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
    // 0x28b3c8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b3cc: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x28b3ccu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x396270u));
    // 0x28b3d0: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x28b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x28b3d4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x28b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x28b3d8: 0x24a76280  addiu       $a3, $a1, 0x6280
    ctx->pc = 0x28b3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 25216));
    // 0x28b3dc: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x28b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b3e0: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x28b3e0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x396280u));
    // 0x28b3e4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x28b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x28b3e8: 0x82485de9  lb          $t0, 0x5DE9($s2)
    ctx->pc = 0x28b3e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24041)));
    // 0x28b3ec: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x28b3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
    // 0x28b3f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b3f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b3f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b3f8: 0x14670038  bne         $v1, $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x28B3F8u;
    {
        const bool branch_taken_0x28b3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x28b3f8) {
            ctx->pc = 0x28B4DCu;
            return;
        }
    }
    ctx->pc = 0x28B400u;
    // 0x28b400: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b404: 0x8c232038  lw          $v1, 0x2038($at)
    ctx->pc = 0x28b404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622038u));
    // 0x28b408: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28B408u;
    {
        const bool branch_taken_0x28b408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b408) {
            ctx->pc = 0x28B458u;
            return;
        }
    }
    ctx->pc = 0x28B410u;
    // 0x28b410: 0x24027100  addiu       $v0, $zero, 0x7100
    ctx->pc = 0x28b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x28b414: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b41c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x28b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28b420: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b420u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b424: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B424u;
    SET_GPR_U32(ctx, 31, 0x28B42Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B424u, 0x28B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B42Cu;
label_28b42c:
    // 0x28b42c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b42cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b430: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B430u;
    SET_GPR_U32(ctx, 31, 0x28B438u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B430u, 0x28B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B438u;
label_28b438:
    // 0x28b438: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b438u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b43c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b440: 0xac232048  sw          $v1, 0x2048($at)
    ctx->pc = 0x28b440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622048u, _value); } while (0);
    // 0x28b444: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b448: 0x8c2b2038  lw          $t3, 0x2038($at)
    ctx->pc = 0x28b448u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x622038u));
    // 0x28b44c: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x28b44cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x28b450: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b454: 0xac2a2038  sw          $t2, 0x2038($at)
    ctx->pc = 0x28b454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
    ctx->pc = 0x28b458u;
}
