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

// Function: entry_00270384
// Address: 0x270384 - 0x270420
void entry_00270384_0x270384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270384_0x270384");
#endif

    switch (ctx->pc) {
        case 0x2703a4u: goto label_2703a4;
        case 0x270410u: goto label_270410;
        default: break;
    }

    ctx->pc = 0x270384u;

    // 0x270384: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270388: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27038c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270390: 0x8c841344  lw          $a0, 0x1344($a0)
    ctx->pc = 0x270390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x270394: 0x8c651334  lw          $a1, 0x1334($v1)
    ctx->pc = 0x270394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x270398: 0x8c46133c  lw          $a2, 0x133C($v0)
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x27039c: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x27039Cu;
    SET_GPR_U32(ctx, 31, 0x2703A4u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x27039Cu, 0x2703A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703A4u;
label_2703a4:
    // 0x2703a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2703a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703b0: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x2703b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x2703b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2703b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703c0: 0xa0430630  sb          $v1, 0x630($v0)
    ctx->pc = 0x2703c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1584), (uint8_t)GPR_U32(ctx, 3));
    // 0x2703c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703cc: 0xa04007e0  sb          $zero, 0x7E0($v0)
    ctx->pc = 0x2703ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2016), (uint8_t)GPR_U32(ctx, 0));
    // 0x2703d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703d8: 0xa0400870  sb          $zero, 0x870($v0)
    ctx->pc = 0x2703d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2160), (uint8_t)GPR_U32(ctx, 0));
    // 0x2703dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2703dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2703e0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2703e4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2703e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2703e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2703e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2703ec: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2703ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2703f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2703f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703f8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x2703f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x2703fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2703fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270400: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270404: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x270404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270408: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270408u;
    SET_GPR_U32(ctx, 31, 0x270410u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270408u, 0x270410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270410u;
label_270410:
    // 0x270410: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270414: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x270414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27041c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x27041cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x270420u;
}
