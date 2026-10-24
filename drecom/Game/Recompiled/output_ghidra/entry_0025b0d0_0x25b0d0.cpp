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

// Function: entry_0025b0d0
// Address: 0x25b0d0 - 0x25b0f8
void entry_0025b0d0_0x25b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b0d0_0x25b0d0");
#endif

    ctx->pc = 0x25b0d0u;

    // 0x25b0d0: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b0d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b0d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25b0dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B0DCu;
    {
        const bool branch_taken_0x25b0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0dc) {
            ctx->pc = 0x25B0F8u;
            return;
        }
    }
    ctx->pc = 0x25B0E4u;
    // 0x25b0e4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x25b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b0e8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b0ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b0f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b0f4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x25b0f8u;
}
