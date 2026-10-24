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

// Function: entry_002e7b98
// Address: 0x2e7b98 - 0x2e7be8
void entry_002e7b98_0x2e7b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7b98_0x2e7b98");
#endif

    ctx->pc = 0x2e7b98u;

    // 0x2e7b98: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7b9c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e7ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7ba4: 0x0  nop
    ctx->pc = 0x2e7ba4u;
    // NOP
    // 0x2e7ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7bac: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2e7bb0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7bb4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e7bb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e7bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e7bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7bc0: 0x0  nop
    ctx->pc = 0x2e7bc0u;
    // NOP
    // 0x2e7bc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e7bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7bc8: 0x0  nop
    ctx->pc = 0x2e7bc8u;
    // NOP
    // 0x2e7bcc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7BCCu;
    {
        const bool branch_taken_0x2e7bcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7bcc) {
            ctx->pc = 0x2E7BE8u;
            return;
        }
    }
    ctx->pc = 0x2E7BD4u;
    // 0x2e7bd4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e7bd8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e7bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e7bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7be0: 0x0  nop
    ctx->pc = 0x2e7be0u;
    // NOP
    // 0x2e7be4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    ctx->pc = 0x2e7be8u;
}
