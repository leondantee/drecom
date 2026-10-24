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

// Function: caseD_3
// Address: 0x23231c - 0x2323b4
void caseD_3_0x23231c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x23231c");
#endif

    switch (ctx->pc) {
        case 0x232340u: goto label_232340;
        default: break;
    }

    ctx->pc = 0x23231cu;

    // 0x23231c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x23231cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x232320: 0x349400a4  ori         $s4, $a0, 0xA4
    ctx->pc = 0x232320u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
    // 0x232324: 0xa6140140  sh          $s4, 0x140($s0)
    ctx->pc = 0x232324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 20));
    // 0x232328: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x232328u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x23232c: 0x8e130100  lw          $s3, 0x100($s0)
    ctx->pc = 0x23232cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x232330: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x232330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x232334: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x232334u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x232338: 0xc040c00  jal         func_103000
    ctx->pc = 0x232338u;
    SET_GPR_U32(ctx, 31, 0x232340u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232340u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232340u) { return; }
    ctx->pc = 0x232340u;
label_232340:
    // 0x232340: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x232340u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232344: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232348: 0x26150150  addiu       $s5, $s0, 0x150
    ctx->pc = 0x232348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23234c: 0xa2a30029  sb          $v1, 0x29($s5)
    ctx->pc = 0x23234cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x232350: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x232350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x232354: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x232354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x232358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23235c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232360: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x232360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x232364: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232368: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x232368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x23236c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23236cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232370: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x232370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232374: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x232374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x232378: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x232378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23237c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x23237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x232380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232384: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232388: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x232388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x23238c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23238cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232390: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232394: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x232394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x232398: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x23239c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23239cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2323a0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2323a4: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2323a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x2323a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2323a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2323ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2323b0: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x2323b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2323b4u;
}
