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

// Function: entry_001ff12c
// Address: 0x1ff12c - 0x1ff198
void entry_001ff12c_0x1ff12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff12c_0x1ff12c");
#endif

    switch (ctx->pc) {
        case 0x1ff15cu: goto label_1ff15c;
        case 0x1ff180u: goto label_1ff180;
        default: break;
    }

    ctx->pc = 0x1ff12cu;

    // 0x1ff12c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff130: 0x94a30340  lhu         $v1, 0x340($a1)
    ctx->pc = 0x1ff130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 832)));
    // 0x1ff134: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ff138: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ff138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ff13c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FF13Cu;
    {
        const bool branch_taken_0x1ff13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff13c) {
            ctx->pc = 0x1FF198u;
            return;
        }
    }
    ctx->pc = 0x1FF144u;
    // 0x1ff144: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff148: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff14c: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1ff14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1ff150: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x1ff150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x1ff154: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FF154u;
    SET_GPR_U32(ctx, 31, 0x1FF15Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FF15Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF15Cu) { return; }
    ctx->pc = 0x1FF15Cu;
label_1ff15c:
    // 0x1ff15c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff15cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff160: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff164: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff168: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff16c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ff16cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ff170: 0x24c50380  addiu       $a1, $a2, 0x380
    ctx->pc = 0x1ff170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x1ff174: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1ff174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1ff178: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FF178u;
    SET_GPR_U32(ctx, 31, 0x1FF180u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FF180u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF180u) { return; }
    ctx->pc = 0x1FF180u;
label_1ff180:
    // 0x1ff180: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1ff180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff184: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff18c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff190: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1ff190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1ff194: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1ff194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ff198u;
}
