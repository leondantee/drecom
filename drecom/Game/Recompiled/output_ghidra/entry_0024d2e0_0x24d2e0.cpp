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

// Function: entry_0024d2e0
// Address: 0x24d2e0 - 0x24d400
void entry_0024d2e0_0x24d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d2e0_0x24d2e0");
#endif

    switch (ctx->pc) {
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d3ccu: goto label_24d3cc;
        default: break;
    }

    ctx->pc = 0x24d2e0u;

    // 0x24d2e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d2e4: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24d2e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24d2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d2ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d2f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d2f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d2f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d2fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24d2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d300: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d304: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d308: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24d308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d30c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24d30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24d310: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d314: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24d314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24d318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d31c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x24d31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24d320: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x24d320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x24d324: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d328: 0x8d2300c4  lw          $v1, 0xC4($t1)
    ctx->pc = 0x24d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x24d32c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d330: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24d330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24d334: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d338: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24d338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24d33c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d340: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24d340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24d344: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x24d344u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d348: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d34c: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24d350: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24d350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24d354: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24d354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24d358: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24d358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d35c: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24d35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24d360: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d364: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24d364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24d368: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x24d368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x24d36c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24d36cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d370: 0x8ce400c0  lw          $a0, 0xC0($a3)
    ctx->pc = 0x24d370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x24d374: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24d378: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24d37c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d380: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24d384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24d388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d38c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24d38cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24d394: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24d398: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24d398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24d39c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24d39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24d3a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24d3a4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24d3a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d3ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24d3b0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24d3b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24d3b4: 0x2404080e  addiu       $a0, $zero, 0x80E
    ctx->pc = 0x24d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2062));
    // 0x24d3b8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24D3B8u;
    SET_GPR_U32(ctx, 31, 0x24D3C0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24D3B8u, 0x24D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3C0u;
label_24d3c0:
    // 0x24d3c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24d3c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24d3c4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24D3C4u;
    SET_GPR_U32(ctx, 31, 0x24D3CCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24D3C4u, 0x24D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3CCu;
label_24d3cc:
    // 0x24d3cc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24d3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d3d0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x24d3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d3d8: 0x0  nop
    ctx->pc = 0x24d3d8u;
    // NOP
    // 0x24d3dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24d3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d3e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24d3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d3e4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d3e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24d3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d3f0: 0x0  nop
    ctx->pc = 0x24d3f0u;
    // NOP
    // 0x24d3f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24d3f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d3f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24d3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d3fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x24d400u;
}
