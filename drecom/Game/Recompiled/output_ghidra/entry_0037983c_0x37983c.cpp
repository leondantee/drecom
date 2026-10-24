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

// Function: entry_0037983c
// Address: 0x37983c - 0x3798dc
void entry_0037983c_0x37983c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037983c_0x37983c");
#endif

    switch (ctx->pc) {
        case 0x3798a8u: goto label_3798a8;
        case 0x3798ccu: goto label_3798cc;
        default: break;
    }

    ctx->pc = 0x37983cu;

    // 0x37983c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379840: 0x8c44128c  lw          $a0, 0x128C($v0)
    ctx->pc = 0x379840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x379844: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x379844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x379848: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x379848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x37984c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37984cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x379850: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x379850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x379854: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379858: 0x8c44128c  lw          $a0, 0x128C($v0)
    ctx->pc = 0x379858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x37985c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x37985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x379860: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x379860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x379864: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x379864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x379868: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x379868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x37986c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x37986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x379870: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x379870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x379874: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x379874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x379878: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x379878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x37987c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x37987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x379880: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x379880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x379884: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x379884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x379888: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x379888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x37988c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379890: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x379890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x379894: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x379894u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x379898: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x379898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37989c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3798a0: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x3798A0u;
    SET_GPR_U32(ctx, 31, 0x3798A8u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x3798A0u, 0x3798A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798A8u;
label_3798a8:
    // 0x3798a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3798a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3798ac: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3798acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3798b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3798b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3798b4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3798b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3798b8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3798b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3798bc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3798bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x3798c0: 0x34452003  ori         $a1, $v0, 0x2003
    ctx->pc = 0x3798c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
    // 0x3798c4: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x3798C4u;
    SET_GPR_U32(ctx, 31, 0x3798CCu);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x3798C4u, 0x3798CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798CCu;
label_3798cc:
    // 0x3798cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3798ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3798d0: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x3798d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x3798d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3798d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3798d8: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x3798d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    ctx->pc = 0x3798dcu;
}
