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

// Function: entry_001ad178
// Address: 0x1ad178 - 0x1ad1c8
void entry_001ad178_0x1ad178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad178_0x1ad178");
#endif

    ctx->pc = 0x1ad178u;

    // 0x1ad178: 0x3c0244c9  lui         $v0, 0x44C9
    ctx->pc = 0x1ad178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17609 << 16));
    // 0x1ad17c: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1ad180: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad184: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad188: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad190: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad198: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad19c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad1a0: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1ad1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x1ad1a4: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x1ad1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x1ad1a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad1ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad1b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad1b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad1b8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad1bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad1c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad1c4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->pc = 0x1ad1c8u;
}
