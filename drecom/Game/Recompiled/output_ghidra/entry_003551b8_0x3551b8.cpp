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

// Function: entry_003551b8
// Address: 0x3551b8 - 0x3551f0
void entry_003551b8_0x3551b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003551b8_0x3551b8");
#endif

    ctx->pc = 0x3551b8u;

    // 0x3551b8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3551bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3551c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3551c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3551c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3551c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3551cc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3551ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3551d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551d4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x3551d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3551d8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3551dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3551e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3551e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3551e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3551e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3551e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3551E8u;
    {
        const bool branch_taken_0x3551e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551e8) {
            ctx->pc = 0x3552F8u;
            return;
        }
    }
    ctx->pc = 0x3551F0u;
}
