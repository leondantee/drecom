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

// Function: entry_0024dc50
// Address: 0x24dc50 - 0x24dd70
void entry_0024dc50_0x24dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024dc50_0x24dc50");
#endif

    switch (ctx->pc) {
        case 0x24dd30u: goto label_24dd30;
        case 0x24dd3cu: goto label_24dd3c;
        default: break;
    }

    ctx->pc = 0x24dc50u;

    // 0x24dc50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dc54: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24dc58: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24dc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dc5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24dc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24dc60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24dc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dc64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24dc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24dc68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dc6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x24dc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24dc70: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24dc70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dc74: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24dc78: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24dc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dc7c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24dc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24dc80: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24dc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dc84: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24dc88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dc8c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x24dc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24dc90: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x24dc90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x24dc94: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x24dc94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dc98: 0x8d2300c4  lw          $v1, 0xC4($t1)
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x24dc9c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24dc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dca0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24dca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24dca4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24dca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dca8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24dca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24dcac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dcb0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24dcb4: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x24dcb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dcb8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24dcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dcbc: 0x8ce300c4  lw          $v1, 0xC4($a3)
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x24dcc0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x24dcc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24dcc4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24dcc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24dcc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24dcc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dccc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24dcd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dcd4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24dcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24dcd8: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x24dcd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x24dcdc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dce0: 0x8ce400c0  lw          $a0, 0xC0($a3)
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x24dce4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x24dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24dce8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24dcec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24dcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dcf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24dcf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24dcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24dcf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24dcfc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24dcfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dd00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24dd04: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24dd08: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24dd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24dd0c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24dd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x24dd10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24dd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24dd14: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x24dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x24dd18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24dd1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24dd20: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x24dd20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x24dd24: 0x2404080e  addiu       $a0, $zero, 0x80E
    ctx->pc = 0x24dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2062));
    // 0x24dd28: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24DD28u;
    SET_GPR_U32(ctx, 31, 0x24DD30u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24DD28u, 0x24DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD30u;
label_24dd30:
    // 0x24dd30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24dd30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24dd34: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24DD34u;
    SET_GPR_U32(ctx, 31, 0x24DD3Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24DD34u, 0x24DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD3Cu;
label_24dd3c:
    // 0x24dd3c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x24dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd40: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x24dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x24dd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd48: 0x0  nop
    ctx->pc = 0x24dd48u;
    // NOP
    // 0x24dd4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24dd4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24dd50: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24dd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24dd54: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24dd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd60: 0x0  nop
    ctx->pc = 0x24dd60u;
    // NOP
    // 0x24dd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24dd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24dd68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24dd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24dd6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24dd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x24dd70u;
}
