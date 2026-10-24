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

// Function: entry_001fdfd4
// Address: 0x1fdfd4 - 0x1fe050
void entry_001fdfd4_0x1fdfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdfd4_0x1fdfd4");
#endif

    switch (ctx->pc) {
        case 0x1fdffcu: goto label_1fdffc;
        case 0x1fe020u: goto label_1fe020;
        default: break;
    }

    ctx->pc = 0x1fdfd4u;

    // 0x1fdfd4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdfd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfdc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fdfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdfe0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1fdfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdfe4: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1fdfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdfe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfec: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fdff0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fdff4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1FDFF4u;
    SET_GPR_U32(ctx, 31, 0x1FDFFCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1FDFFCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDFFCu) { return; }
    ctx->pc = 0x1FDFFCu;
label_1fdffc:
    // 0x1fdffc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fdffcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe000: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1fe000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1fe004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1fe004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fe008: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe00c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe010: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe014: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fe014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe018: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1FE018u;
    SET_GPR_U32(ctx, 31, 0x1FE020u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1FE020u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FE020u) { return; }
    ctx->pc = 0x1FE020u;
label_1fe020:
    // 0x1fe020: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe020u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe024: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe028: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe02c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fe02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe030: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fe030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe034: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1fe034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1fe038: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fe038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fe03c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fe03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe040: 0x0  nop
    ctx->pc = 0x1fe040u;
    // NOP
    // 0x1fe044: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe048: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fe048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fe04c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1fe050u;
}
