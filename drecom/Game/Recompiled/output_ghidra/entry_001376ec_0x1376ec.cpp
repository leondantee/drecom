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

// Function: entry_001376ec
// Address: 0x1376ec - 0x13774c
void entry_001376ec_0x1376ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001376ec_0x1376ec");
#endif

    ctx->pc = 0x1376ecu;

    // 0x1376ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1376ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376f0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376f4: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1376f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1376f8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1376f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1376fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1376fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137700: 0x0  nop
    ctx->pc = 0x137700u;
    // NOP
    // 0x137704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137708: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13770c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13770cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137710: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x137710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x137714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137718: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x13771c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x13771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137720: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137724: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x137724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137728: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x137728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x13772c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137730: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x137734: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x137734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137738: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13773c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13773cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137740: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x137740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x137744: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x137744u;
    {
        const bool branch_taken_0x137744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137744) {
            ctx->pc = 0x137804u;
            return;
        }
    }
    ctx->pc = 0x13774Cu;
}
