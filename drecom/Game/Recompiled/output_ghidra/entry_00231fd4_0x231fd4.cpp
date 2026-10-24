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

// Function: entry_00231fd4
// Address: 0x231fd4 - 0x2322cc
void entry_00231fd4_0x231fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231fd4_0x231fd4");
#endif

    switch (ctx->pc) {
        case 0x231fe0u: goto label_231fe0;
        case 0x231ff8u: goto label_231ff8;
        case 0x232014u: goto label_232014;
        case 0x23205cu: goto label_23205c;
        case 0x232098u: goto label_232098;
        case 0x2320b4u: goto label_2320b4;
        case 0x2320ccu: goto label_2320cc;
        case 0x232100u: goto label_232100;
        case 0x232134u: goto label_232134;
        case 0x23214cu: goto label_23214c;
        case 0x232188u: goto label_232188;
        case 0x2321a0u: goto label_2321a0;
        case 0x2321b0u: goto label_2321b0;
        case 0x23225cu: goto label_23225c;
        case 0x2322acu: goto label_2322ac;
        default: break;
    }

    ctx->pc = 0x231fd4u;

    // 0x231fd4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231fd8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x231FD8u;
    SET_GPR_U32(ctx, 31, 0x231FE0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x231FE0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231FE0u) { return; }
    ctx->pc = 0x231FE0u;
label_231fe0:
    // 0x231fe0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231fe4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231fe8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231fec: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x231fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231ff0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x231FF0u;
    SET_GPR_U32(ctx, 31, 0x231FF8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x231FF8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231FF8u) { return; }
    ctx->pc = 0x231FF8u;
label_231ff8:
    // 0x231ff8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x231ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231ffc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232000: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x232004: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x232008: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x232008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23200c: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x23200Cu;
    SET_GPR_U32(ctx, 31, 0x232014u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x232014u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232014u) { return; }
    ctx->pc = 0x232014u;
label_232014:
    // 0x232014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232018: 0x0  nop
    ctx->pc = 0x232018u;
    // NOP
    // 0x23201c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x23201cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x232020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232024: 0x0  nop
    ctx->pc = 0x232024u;
    // NOP
    // 0x232028: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x232028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x23202c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x23202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232030: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x232030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232034: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x232034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x232038: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x232038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23203c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23203cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232040: 0x0  nop
    ctx->pc = 0x232040u;
    // NOP
    // 0x232044: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x232044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x232048: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x232048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x23204c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x23204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x232050: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x232050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x232054: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x232054u;
    SET_GPR_U32(ctx, 31, 0x23205Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23205Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23205Cu) { return; }
    ctx->pc = 0x23205Cu;
label_23205c:
    // 0x23205c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x23205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232060: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x232060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232064: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232068: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x232068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x23206c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x23206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232070: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x232070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232074: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232078: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x232078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x23207c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x23207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232080: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x232080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232084: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232088: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x232088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x23208c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x23208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x232090: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x232090u;
    SET_GPR_U32(ctx, 31, 0x232098u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x232098u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232098u) { return; }
    ctx->pc = 0x232098u;
label_232098:
    // 0x232098: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23209c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x23209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2320a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2320a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2320a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2320a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2320ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2320ACu;
    SET_GPR_U32(ctx, 31, 0x2320B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2320ACu, 0x2320B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320B4u;
label_2320b4:
    // 0x2320b4: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2320b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2320b8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2320b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2320bc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2320bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2320c0: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x2320c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2320c4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2320C4u;
    SET_GPR_U32(ctx, 31, 0x2320CCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2320CCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2320CCu) { return; }
    ctx->pc = 0x2320CCu;
label_2320cc:
    // 0x2320cc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2320ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320d0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2320d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2320d4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2320d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320d8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2320d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2320dc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2320dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320e0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2320e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2320e4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2320e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320e8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2320e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2320ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2320f0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2320f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2320f4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2320f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2320f8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2320F8u;
    SET_GPR_U32(ctx, 31, 0x232100u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232100u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232100u) { return; }
    ctx->pc = 0x232100u;
label_232100:
    // 0x232100: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x232100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232104: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x232104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x232108: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x232108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23210c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x23210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x232110: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x232110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232114: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x232114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x232118: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x232118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23211c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x23211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x232120: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x232120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x232124: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x232124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x232128: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23212c: 0xc040c00  jal         func_103000
    ctx->pc = 0x23212Cu;
    SET_GPR_U32(ctx, 31, 0x232134u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232134u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232134u) { return; }
    ctx->pc = 0x232134u;
label_232134:
    // 0x232134: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x232134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x232138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23213c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x23213cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x232140: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x232140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x232144: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x232144u;
    SET_GPR_U32(ctx, 31, 0x23214Cu);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x232144u, 0x23214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23214Cu;
label_23214c:
    // 0x23214c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23214cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232150: 0x0  nop
    ctx->pc = 0x232150u;
    // NOP
    // 0x232154: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x232154u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232158: 0x0  nop
    ctx->pc = 0x232158u;
    // NOP
    // 0x23215c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x23215Cu;
    {
        const bool branch_taken_0x23215c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23215c) {
            ctx->pc = 0x2322CCu;
            return;
        }
    }
    ctx->pc = 0x232164u;
    // 0x232164: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x232164u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x232168: 0x3085ff5b  andi        $a1, $a0, 0xFF5B
    ctx->pc = 0x232168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65371);
    // 0x23216c: 0xa6050140  sh          $a1, 0x140($s0)
    ctx->pc = 0x23216cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 5));
    // 0x232170: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x232170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x232174: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232178: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x232178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x23217c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23217cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232180: 0xc040c44  jal         func_103110
    ctx->pc = 0x232180u;
    SET_GPR_U32(ctx, 31, 0x232188u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x232188u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232188u) { return; }
    ctx->pc = 0x232188u;
label_232188:
    // 0x232188: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232188u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23218c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x23218cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x232190: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x232194: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x232194u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x232198: 0xc040c00  jal         func_103000
    ctx->pc = 0x232198u;
    SET_GPR_U32(ctx, 31, 0x2321A0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2321A0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2321A0u) { return; }
    ctx->pc = 0x2321A0u;
label_2321a0:
    // 0x2321a0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2321a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2321a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2321a8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2321A8u;
    SET_GPR_U32(ctx, 31, 0x2321B0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2321B0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2321B0u) { return; }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2321b4: 0x9485002e  lhu         $a1, 0x2E($a0)
    ctx->pc = 0x2321b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2321b8: 0x30a6fffe  andi        $a2, $a1, 0xFFFE
    ctx->pc = 0x2321b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
    // 0x2321bc: 0xa486002e  sh          $a2, 0x2E($a0)
    ctx->pc = 0x2321bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 6));
    // 0x2321c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2321c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2321c4: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x2321c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2321c8: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2321cc: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2321d0: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2321d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2321d4: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2321d8: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2321d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2321dc: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x2321dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
    // 0x2321e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2321e4: 0x2464ac90  addiu       $a0, $v1, -0x5370
    ctx->pc = 0x2321e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945936));
    // 0x2321e8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2321e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2321ec: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2321f0: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x2321f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2321f4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2321f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2321f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2321fc: 0x0  nop
    ctx->pc = 0x2321fcu;
    // NOP
    // 0x232200: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x232200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x232204: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x232204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x232208: 0x906410a8  lbu         $a0, 0x10A8($v1)
    ctx->pc = 0x232208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x23220c: 0x1480002f  bnez        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x23220Cu;
    {
        const bool branch_taken_0x23220c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23220c) {
            ctx->pc = 0x2322CCu;
            return;
        }
    }
    ctx->pc = 0x232214u;
    // 0x232214: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232218: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x232218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23221c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x232220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232224: 0x0  nop
    ctx->pc = 0x232224u;
    // NOP
    // 0x232228: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x232228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23222c: 0x0  nop
    ctx->pc = 0x23222cu;
    // NOP
    // 0x232230: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x232230u;
    {
        const bool branch_taken_0x232230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232230) {
            ctx->pc = 0x2322CCu;
            return;
        }
    }
    ctx->pc = 0x232238u;
    // 0x232238: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x232238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x23223c: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x23223cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x232240: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x232240u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232244: 0x2402051f  addiu       $v0, $zero, 0x51F
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x232248: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232248u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23224c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x23224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x232250: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232250u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232254: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x232254u;
    SET_GPR_U32(ctx, 31, 0x23225Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x232254u, 0x23225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23225Cu;
label_23225c:
    // 0x23225c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23225cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232260: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x232264: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x232268: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x232268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23226c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232270: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x232274: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x232274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x232278: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x23227c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23227cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x232280: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x232284: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x232284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x232288: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x23228c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23228cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x232290: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x232294: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x232294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x232298: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23229c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x23229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2322a0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2322a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2322a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2322A4u;
    SET_GPR_U32(ctx, 31, 0x2322ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2322A4u, 0x2322ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322ACu;
label_2322ac:
    // 0x2322ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2322acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2322b0: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2322b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2322b4: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2322b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2322b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2322bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2322bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2322c0: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2322c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2322c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2322c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2322c8: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x2322c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2322ccu;
}
