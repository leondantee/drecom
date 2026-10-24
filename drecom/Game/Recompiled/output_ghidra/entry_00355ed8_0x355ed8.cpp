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

// Function: entry_00355ed8
// Address: 0x355ed8 - 0x355f18
void entry_00355ed8_0x355ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355ed8_0x355ed8");
#endif

    ctx->pc = 0x355ed8u;

    // 0x355ed8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x355ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355edc: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x355edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x355ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355ee4: 0x0  nop
    ctx->pc = 0x355ee4u;
    // NOP
    // 0x355ee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x355ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x355eec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x355eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x355ef0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355ef4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x355ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x355ef8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355efc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x355efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x355f00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x355f04: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x355f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x355f08: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x355f0c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x355f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355f10: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x355F10u;
    SET_GPR_U32(ctx, 31, 0x355F18u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x355F10u, 0x355F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F18u;
}
