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

// Function: entry_001fb190
// Address: 0x1fb190 - 0x1fb1f8
void entry_001fb190_0x1fb190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb190_0x1fb190");
#endif

    switch (ctx->pc) {
        case 0x1fb1c0u: goto label_1fb1c0;
        case 0x1fb1e0u: goto label_1fb1e0;
        default: break;
    }

    ctx->pc = 0x1fb190u;

    // 0x1fb190: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb194: 0x94640340  lhu         $a0, 0x340($v1)
    ctx->pc = 0x1fb194u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fb198: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1fb198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fb19c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1fb19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fb1a0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB1A0u;
    {
        const bool branch_taken_0x1fb1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1a0) {
            ctx->pc = 0x1FB1F8u;
            return;
        }
    }
    ctx->pc = 0x1FB1A8u;
    // 0x1fb1a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1b0: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1fb1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1fb1b4: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x1fb1b8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FB1B8u;
    SET_GPR_U32(ctx, 31, 0x1FB1C0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FB1C0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB1C0u) { return; }
    ctx->pc = 0x1FB1C0u;
label_1fb1c0:
    // 0x1fb1c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb1c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb1c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1d0: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x1fb1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x1fb1d4: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1fb1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fb1d8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FB1D8u;
    SET_GPR_U32(ctx, 31, 0x1FB1E0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FB1E0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB1E0u) { return; }
    ctx->pc = 0x1FB1E0u;
label_1fb1e0:
    // 0x1fb1e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb1e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb1e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb1e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb1ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb1f0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fb1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fb1f4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fb1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1fb1f8u;
}
