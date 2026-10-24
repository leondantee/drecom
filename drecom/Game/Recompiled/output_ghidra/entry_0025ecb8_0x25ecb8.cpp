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

// Function: entry_0025ecb8
// Address: 0x25ecb8 - 0x25ed10
void entry_0025ecb8_0x25ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ecb8_0x25ecb8");
#endif

    switch (ctx->pc) {
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ed04u: goto label_25ed04;
        default: break;
    }

    ctx->pc = 0x25ecb8u;

    // 0x25ecb8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ecb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ecbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ecc0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25ecc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25ECC4u;
    {
        const bool branch_taken_0x25ecc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ecc4) {
            ctx->pc = 0x25ED10u;
            return;
        }
    }
    ctx->pc = 0x25ECCCu;
    // 0x25eccc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ecd0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25ECD0u;
    SET_GPR_U32(ctx, 31, 0x25ECD8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25ECD8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ECD8u) { return; }
    ctx->pc = 0x25ECD8u;
label_25ecd8:
    // 0x25ecd8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ecdc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ece0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ece4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ece8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ecec: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ececu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ecf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25ecf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ecf4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25ecf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ecf8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25ecf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ecfc: 0xc040c00  jal         func_103000
    ctx->pc = 0x25ECFCu;
    SET_GPR_U32(ctx, 31, 0x25ED04u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25ED04u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ED04u) { return; }
    ctx->pc = 0x25ED04u;
label_25ed04:
    // 0x25ed04: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed08: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25ed0c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25ed10u;
}
