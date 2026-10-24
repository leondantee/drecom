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

// Function: entry_0030e184
// Address: 0x30e184 - 0x30e24c
void entry_0030e184_0x30e184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e184_0x30e184");
#endif

    switch (ctx->pc) {
        case 0x30e1bcu: goto label_30e1bc;
        case 0x30e1ccu: goto label_30e1cc;
        case 0x30e1d8u: goto label_30e1d8;
        case 0x30e1e8u: goto label_30e1e8;
        case 0x30e1f4u: goto label_30e1f4;
        default: break;
    }

    ctx->pc = 0x30e184u;

    // 0x30e184: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30e188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e18c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30e190: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e194: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30e198: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30e198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e19c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e1a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30e1a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e1a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1ac: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30e1b0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30e1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e1b4: 0xc086488  jal         func_219220
    ctx->pc = 0x30E1B4u;
    SET_GPR_U32(ctx, 31, 0x30E1BCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30E1B4u, 0x30E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1BCu;
label_30e1bc:
    // 0x30e1bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30E1C4u;
    SET_GPR_U32(ctx, 31, 0x30E1CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30E1C4u, 0x30E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1CCu;
label_30e1cc:
    // 0x30e1cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30E1D0u;
    SET_GPR_U32(ctx, 31, 0x30E1D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30E1D0u, 0x30E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1D8u;
label_30e1d8:
    // 0x30e1d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e1e0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30E1E0u;
    SET_GPR_U32(ctx, 31, 0x30E1E8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30E1E0u, 0x30E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1E8u;
label_30e1e8:
    // 0x30e1e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1ec: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30E1ECu;
    SET_GPR_U32(ctx, 31, 0x30E1F4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30E1ECu, 0x30E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1F4u;
label_30e1f4:
    // 0x30e1f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e1f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30e1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30e1fc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E1FCu;
    {
        const bool branch_taken_0x30e1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e1fc) {
            ctx->pc = 0x30E24Cu;
            return;
        }
    }
    ctx->pc = 0x30E204u;
    // 0x30e204: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e208: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e20c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e210: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e214: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e218: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30e21c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e224: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e22c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e230: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30e230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e238: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e23c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e240: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e248: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30e24cu;
}
