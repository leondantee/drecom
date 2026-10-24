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

// Function: entry_00231970
// Address: 0x231970 - 0x231a58
void entry_00231970_0x231970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231970_0x231970");
#endif

    switch (ctx->pc) {
        case 0x23197cu: goto label_23197c;
        case 0x23199cu: goto label_23199c;
        case 0x2319b4u: goto label_2319b4;
        case 0x2319ecu: goto label_2319ec;
        case 0x231a20u: goto label_231a20;
        default: break;
    }

    ctx->pc = 0x231970u;

    // 0x231970: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231974: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x231974u;
    SET_GPR_U32(ctx, 31, 0x23197Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23197Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23197Cu) { return; }
    ctx->pc = 0x23197Cu;
label_23197c:
    // 0x23197c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23197cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231980: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231984: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x231984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231988: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23198c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231990: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x231990u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231994: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231994u;
    SET_GPR_U32(ctx, 31, 0x23199Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231994u, 0x23199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23199Cu;
label_23199c:
    // 0x23199c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23199cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2319a0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2319a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2319a4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2319a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2319a8: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x2319a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2319ac: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2319ACu;
    SET_GPR_U32(ctx, 31, 0x2319B4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2319B4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2319B4u) { return; }
    ctx->pc = 0x2319B4u;
label_2319b4:
    // 0x2319b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2319b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2319b8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2319b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319bc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2319bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2319c0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2319c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319c4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2319c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2319c8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2319c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319cc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2319ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2319d0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2319d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319d4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2319d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2319d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2319dc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2319dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2319e0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2319e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2319e4: 0xc040c00  jal         func_103000
    ctx->pc = 0x2319E4u;
    SET_GPR_U32(ctx, 31, 0x2319ECu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2319ECu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2319ECu) { return; }
    ctx->pc = 0x2319ECu;
label_2319ec:
    // 0x2319ec: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2319ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319f0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2319f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2319f4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2319f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2319f8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2319f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2319fc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2319fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231a00: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x231a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231a04: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x231a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231a08: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x231a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231a0c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x231a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x231a10: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231a14: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x231a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231a18: 0xc040c00  jal         func_103000
    ctx->pc = 0x231A18u;
    SET_GPR_U32(ctx, 31, 0x231A20u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x231A20u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231A20u) { return; }
    ctx->pc = 0x231A20u;
label_231a20:
    // 0x231a20: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231a24: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x231a28: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x231a2c: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x231a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x231a30: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231a34: 0x8442002a  lh          $v0, 0x2A($v0)
    ctx->pc = 0x231a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x231a38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x231A38u;
    {
        const bool branch_taken_0x231a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a38) {
            ctx->pc = 0x231A58u;
            return;
        }
    }
    ctx->pc = 0x231A40u;
    // 0x231a40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x231a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231a44: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231a48: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x231a48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x231a4c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x231a50: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231a54: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x231a54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x231a58u;
}
