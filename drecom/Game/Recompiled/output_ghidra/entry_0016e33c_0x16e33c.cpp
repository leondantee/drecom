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

// Function: entry_0016e33c
// Address: 0x16e33c - 0x16e390
void entry_0016e33c_0x16e33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e33c_0x16e33c");
#endif

    switch (ctx->pc) {
        case 0x16e370u: goto label_16e370;
        case 0x16e388u: goto label_16e388;
        default: break;
    }

    ctx->pc = 0x16e33cu;

    // 0x16e33c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x16e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e340: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e348: 0x0  nop
    ctx->pc = 0x16e348u;
    // NOP
    // 0x16e34c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e350: 0x0  nop
    ctx->pc = 0x16e350u;
    // NOP
    // 0x16e354: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x16E354u;
    {
        const bool branch_taken_0x16e354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e354) {
            ctx->pc = 0x16E390u;
            return;
        }
    }
    ctx->pc = 0x16E35Cu;
    // 0x16e35c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e360: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e364: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x16e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e368: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16E368u;
    SET_GPR_U32(ctx, 31, 0x16E370u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16E370u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E370u) { return; }
    ctx->pc = 0x16E370u;
label_16e370:
    // 0x16e370: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e374: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e378: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16e378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16e37c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x16e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16e380: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16E380u;
    SET_GPR_U32(ctx, 31, 0x16E388u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16E388u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16E388u) { return; }
    ctx->pc = 0x16E388u;
label_16e388:
    // 0x16e388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16E388u;
    {
        const bool branch_taken_0x16e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e388) {
            ctx->pc = 0x16E3A0u;
            return;
        }
    }
    ctx->pc = 0x16E390u;
}
