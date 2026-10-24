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

// Function: entry_002c49a0
// Address: 0x2c49a0 - 0x2c49d4
void entry_002c49a0_0x2c49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c49a0_0x2c49a0");
#endif

    ctx->pc = 0x2c49a0u;

    // 0x2c49a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c49a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c49a8: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c49ac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c49acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c49b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c49b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c49b4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c49b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c49b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C49B8u;
    {
        const bool branch_taken_0x2c49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c49b8) {
            ctx->pc = 0x2C49D4u;
            return;
        }
    }
    ctx->pc = 0x2C49C0u;
    // 0x2c49c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c49c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c49c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c49c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c49cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c49d0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2c49d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2c49d4u;
}
