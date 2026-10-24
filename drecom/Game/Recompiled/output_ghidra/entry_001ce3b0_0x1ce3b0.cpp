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

// Function: entry_001ce3b0
// Address: 0x1ce3b0 - 0x1ce494
void entry_001ce3b0_0x1ce3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce3b0_0x1ce3b0");
#endif

    switch (ctx->pc) {
        case 0x1ce3c0u: goto label_1ce3c0;
        case 0x1ce3ccu: goto label_1ce3cc;
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce3f4u: goto label_1ce3f4;
        case 0x1ce428u: goto label_1ce428;
        case 0x1ce440u: goto label_1ce440;
        case 0x1ce470u: goto label_1ce470;
        default: break;
    }

    ctx->pc = 0x1ce3b0u;

    // 0x1ce3b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce3b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce3b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CE3B8u;
    SET_GPR_U32(ctx, 31, 0x1CE3C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CE3B8u, 0x1CE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3C0u;
label_1ce3c0:
    // 0x1ce3c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3c4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CE3C4u;
    SET_GPR_U32(ctx, 31, 0x1CE3CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CE3C4u, 0x1CE3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3CCu;
label_1ce3cc:
    // 0x1ce3cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce3ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce3d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ce3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce3d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce3d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce3dc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CE3DCu;
    SET_GPR_U32(ctx, 31, 0x1CE3E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CE3DCu, 0x1CE3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3E4u;
label_1ce3e4:
    // 0x1ce3e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ce3e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce3e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ce3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce3ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CE3ECu;
    SET_GPR_U32(ctx, 31, 0x1CE3F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CE3ECu, 0x1CE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3F4u;
label_1ce3f4:
    // 0x1ce3f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3f8: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ce3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ce3fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ce3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce400: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1ce400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1ce404: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1CE404u;
    {
        const bool branch_taken_0x1ce404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce404) {
            ctx->pc = 0x1CE584u;
            return;
        }
    }
    ctx->pc = 0x1CE40Cu;
    // 0x1ce40c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce414: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ce414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ce418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce41c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce420: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CE420u;
    SET_GPR_U32(ctx, 31, 0x1CE428u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CE420u, 0x1CE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE428u;
label_1ce428:
    // 0x1ce428: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ce42c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce430: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1ce430u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce434: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce438: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CE438u;
    SET_GPR_U32(ctx, 31, 0x1CE440u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CE438u, 0x1CE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE440u;
label_1ce440:
    // 0x1ce440: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce44c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1ce44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1ce450: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ce450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce454: 0x24650680  addiu       $a1, $v1, 0x680
    ctx->pc = 0x1ce454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
    // 0x1ce458: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ce458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce45c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ce45cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce460: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce464: 0x24479218  addiu       $a3, $v0, -0x6DE8
    ctx->pc = 0x1ce464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939160));
    // 0x1ce468: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CE468u;
    SET_GPR_U32(ctx, 31, 0x1CE470u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CE468u, 0x1CE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE470u;
label_1ce470:
    // 0x1ce470: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ce470u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce474: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE474u;
    {
        const bool branch_taken_0x1ce474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce474) {
            ctx->pc = 0x1CE494u;
            return;
        }
    }
    ctx->pc = 0x1CE47Cu;
    // 0x1ce47c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ce47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ce480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce484: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ce484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce488: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ce488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce48c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ce48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ce490: 0xac231a68  sw          $v1, 0x1A68($at)
    ctx->pc = 0x1ce490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1ce494u;
}
