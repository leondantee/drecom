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

// Function: entry_003538f4
// Address: 0x3538f4 - 0x3539a4
void entry_003538f4_0x3538f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003538f4_0x3538f4");
#endif

    switch (ctx->pc) {
        case 0x353958u: goto label_353958;
        default: break;
    }

    ctx->pc = 0x3538f4u;

    // 0x3538f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3538f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3538f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3538f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3538fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3538fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353900: 0xa0430078  sb          $v1, 0x78($v0)
    ctx->pc = 0x353900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x353904: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x353904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353908: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x353908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35390c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x35390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353910: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353914: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x353914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x353918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35391c: 0x0  nop
    ctx->pc = 0x35391cu;
    // NOP
    // 0x353920: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x353920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x353924: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x353924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x353928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35392c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x35392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353930: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353934: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x353934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x353938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35393c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353940: 0x0  nop
    ctx->pc = 0x353940u;
    // NOP
    // 0x353944: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x353944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x353948: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x353948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35394c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35394cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353950: 0xc040c24  jal         func_103090
    ctx->pc = 0x353950u;
    SET_GPR_U32(ctx, 31, 0x353958u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x353958u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x353958u) { return; }
    ctx->pc = 0x353958u;
label_353958:
    // 0x353958: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x353958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x35395c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35395cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353960: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x353960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353964: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x353964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35396c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353970: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x353970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x353974: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x353974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x353978: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35397c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x35397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353980: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x353980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353984: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35398c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x35398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x353990: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x353990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x353994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353998: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35399c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539a0: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x3539a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    ctx->pc = 0x3539a4u;
}
