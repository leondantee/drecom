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

// Function: entry_0030e3a4
// Address: 0x30e3a4 - 0x30e46c
void entry_0030e3a4_0x30e3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e3a4_0x30e3a4");
#endif

    switch (ctx->pc) {
        case 0x30e3dcu: goto label_30e3dc;
        case 0x30e3ecu: goto label_30e3ec;
        case 0x30e3f8u: goto label_30e3f8;
        case 0x30e408u: goto label_30e408;
        case 0x30e414u: goto label_30e414;
        default: break;
    }

    ctx->pc = 0x30e3a4u;

    // 0x30e3a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30e3a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e3ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30e3b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e3b4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30e3b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30e3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e3bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e3c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30e3c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e3c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e3c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e3cc: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30e3d0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30e3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e3d4: 0xc086488  jal         func_219220
    ctx->pc = 0x30E3D4u;
    SET_GPR_U32(ctx, 31, 0x30E3DCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30E3D4u, 0x30E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3DCu;
label_30e3dc:
    // 0x30e3dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e3e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e3e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30E3E4u;
    SET_GPR_U32(ctx, 31, 0x30E3ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30E3E4u, 0x30E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3ECu;
label_30e3ec:
    // 0x30e3ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30E3F0u;
    SET_GPR_U32(ctx, 31, 0x30E3F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30E3F0u, 0x30E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3F8u;
label_30e3f8:
    // 0x30e3f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e3fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e400: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30E400u;
    SET_GPR_U32(ctx, 31, 0x30E408u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30E400u, 0x30E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E408u;
label_30e408:
    // 0x30e408: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e40c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30E40Cu;
    SET_GPR_U32(ctx, 31, 0x30E414u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30E40Cu, 0x30E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E414u;
label_30e414:
    // 0x30e414: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e418: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30e418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30e41c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E41Cu;
    {
        const bool branch_taken_0x30e41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e41c) {
            ctx->pc = 0x30E46Cu;
            return;
        }
    }
    ctx->pc = 0x30E424u;
    // 0x30e424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e42c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e434: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e438: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30e438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e43c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e440: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e448: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e450: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30e454: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e458: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e45c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e464: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e468: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30e46cu;
}
