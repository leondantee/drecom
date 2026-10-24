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

// Function: entry_001dd358
// Address: 0x1dd358 - 0x1dd3fc
void entry_001dd358_0x1dd358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd358_0x1dd358");
#endif

    switch (ctx->pc) {
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3e4u: goto label_1dd3e4;
        default: break;
    }

    ctx->pc = 0x1dd358u;

    // 0x1dd358: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd35c: 0x28c2003f  slti        $v0, $a2, 0x3F
    ctx->pc = 0x1dd35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1dd360: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DD360u;
    {
        const bool branch_taken_0x1dd360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd360) {
            ctx->pc = 0x1DD284u;
            return;
        }
    }
    ctx->pc = 0x1DD368u;
    // 0x1dd368: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1dd368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1dd36c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd370: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x1dd370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dd374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd378: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dd378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dd37c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd380: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd384: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd388: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1dd38c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1dd38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1dd390: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1dd394: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dd398: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1dd398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd39c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd3a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1dd3a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd3a4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd3a8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd3ac: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1DD3ACu;
    SET_GPR_U32(ctx, 31, 0x1DD3B4u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1DD3B4u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD3B4u) { return; }
    ctx->pc = 0x1DD3B4u;
label_1dd3b4:
    // 0x1dd3b4: 0x8fb60154  lw          $s6, 0x154($sp)
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1dd3b8: 0x26c40030  addiu       $a0, $s6, 0x30
    ctx->pc = 0x1dd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1dd3bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd3c0: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x1dd3c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd3c4: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x1dd3c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1dd3c8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd3cc: 0x72e03e28  paddub      $a3, $s7, $zero
    ctx->pc = 0x1dd3ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1dd3d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd3d4: 0x2454bd10  addiu       $s4, $v0, -0x42F0
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950160));
    // 0x1dd3d8: 0x72804628  paddub      $t0, $s4, $zero
    ctx->pc = 0x1dd3d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dd3dc: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1DD3DCu;
    SET_GPR_U32(ctx, 31, 0x1DD3E4u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1DD3E4u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD3E4u) { return; }
    ctx->pc = 0x1DD3E4u;
label_1dd3e4:
    // 0x1dd3e4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd3e8: 0x8c760058  lw          $s6, 0x58($v1)
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dd3ec: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1dd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dd3f0: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x1dd3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dd3f4: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x1dd3f4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dd3f8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1dd3f8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dd3fcu;
}
