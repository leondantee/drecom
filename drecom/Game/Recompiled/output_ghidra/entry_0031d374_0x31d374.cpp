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

// Function: entry_0031d374
// Address: 0x31d374 - 0x31d3a8
void entry_0031d374_0x31d374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d374_0x31d374");
#endif

    ctx->pc = 0x31d374u;

    // 0x31d374: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31d378: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x31d378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31d37c: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31D37Cu;
    {
        const bool branch_taken_0x31d37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d37c) {
            ctx->pc = 0x31D3A8u;
            return;
        }
    }
    ctx->pc = 0x31D384u;
    // 0x31d384: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d388: 0xc44112dc  lwc1        $f1, 0x12DC($v0)
    ctx->pc = 0x31d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d38c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31d390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d394: 0x0  nop
    ctx->pc = 0x31d394u;
    // NOP
    // 0x31d398: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31d398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d39c: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d3a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31d3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31d3a4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31d3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x31d3a8u;
}
