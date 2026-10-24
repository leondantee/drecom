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

// Function: entry_0013774c
// Address: 0x13774c - 0x1377ac
void entry_0013774c_0x13774c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013774c_0x13774c");
#endif

    ctx->pc = 0x13774cu;

    // 0x13774c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137750: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x137754: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x137754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137758: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13775c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13775cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137760: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x137760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x137764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x137764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137768: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x13776c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x13776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137770: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137774: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x137774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x137778: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x137778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x13777c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137780: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x137784: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x137784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137788: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x137788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x13778c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13778cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137790: 0x0  nop
    ctx->pc = 0x137790u;
    // NOP
    // 0x137794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137798: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x13779c: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x13779cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1377a0: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1377a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1377a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1377A4u;
    {
        const bool branch_taken_0x1377a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1377a4) {
            ctx->pc = 0x137804u;
            return;
        }
    }
    ctx->pc = 0x1377ACu;
}
