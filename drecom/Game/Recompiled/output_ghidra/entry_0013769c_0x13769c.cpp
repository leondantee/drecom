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

// Function: entry_0013769c
// Address: 0x13769c - 0x1376ec
void entry_0013769c_0x13769c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013769c_0x13769c");
#endif

    ctx->pc = 0x13769cu;

    // 0x13769c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376a0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376a4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1376a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1376ac: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1376b0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1376b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1376b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1376b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376b8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376bc: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1376bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1376c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1376c4: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1376c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1376c8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1376c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1376cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1376d0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1376d4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1376d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1376d8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1376dc: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1376e0: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1376e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1376e4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1376E4u;
    {
        const bool branch_taken_0x1376e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376e4) {
            ctx->pc = 0x137804u;
            return;
        }
    }
    ctx->pc = 0x1376ECu;
}
