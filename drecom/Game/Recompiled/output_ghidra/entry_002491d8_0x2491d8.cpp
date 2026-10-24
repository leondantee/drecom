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

// Function: entry_002491d8
// Address: 0x2491d8 - 0x2492e0
void entry_002491d8_0x2491d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002491d8_0x2491d8");
#endif

    switch (ctx->pc) {
        case 0x249290u: goto label_249290;
        case 0x24929cu: goto label_24929c;
        default: break;
    }

    ctx->pc = 0x2491d8u;

    // 0x2491d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2491d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2491dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2491dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2491e0: 0x2463b420  addiu       $v1, $v1, -0x4BE0
    ctx->pc = 0x2491e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
    // 0x2491e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2491e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2491e8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2491e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2491ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2491ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2491f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2491f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2491f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2491f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2491f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2491f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2491fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2491fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x249200: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x249200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x249204: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249208: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x249208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24920c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x24920cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249214: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249218: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x249218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24921c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24921cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249220: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249224: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x249224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x249228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24922c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249230: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x249230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x249234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249238: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24923c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x24923cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x249240: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249244: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x249244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x249248: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24924c: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x24924cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x249250: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249254: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x249254u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x249258: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24925c: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x24925cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x249260: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249264: 0xa460002e  sh          $zero, 0x2E($v1)
    ctx->pc = 0x249264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x249268: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x249268u;
    {
        const bool branch_taken_0x249268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x249268) {
            ctx->pc = 0x2492E0u;
            return;
        }
    }
    ctx->pc = 0x249270u;
    // 0x249270: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x249270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x249274: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x249274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x249278: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x249278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24927c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24927cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x249280: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x249284: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249284u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x249288: 0xc040c00  jal         func_103000
    ctx->pc = 0x249288u;
    SET_GPR_U32(ctx, 31, 0x249290u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249290u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249290u) { return; }
    ctx->pc = 0x249290u;
label_249290:
    // 0x249290: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x249290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x249294: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x249294u;
    SET_GPR_U32(ctx, 31, 0x24929Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24929Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24929Cu) { return; }
    ctx->pc = 0x24929Cu;
label_24929c:
    // 0x24929c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2492a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2492a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2492a4: 0x0  nop
    ctx->pc = 0x2492a4u;
    // NOP
    // 0x2492a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2492a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2492ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2492acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2492b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2492b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2492b4: 0x0  nop
    ctx->pc = 0x2492b4u;
    // NOP
    // 0x2492b8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2492b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2492bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2492bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2492c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2492c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2492c4: 0x0  nop
    ctx->pc = 0x2492c4u;
    // NOP
    // 0x2492c8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2492c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2492cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2492ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2492d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2492d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2492d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2492d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2492d8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2492D8u;
    SET_GPR_U32(ctx, 31, 0x2492E0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2492E0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2492E0u) { return; }
    ctx->pc = 0x2492E0u;
}
