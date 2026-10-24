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

// Function: entry_001ad340
// Address: 0x1ad340 - 0x1ad390
void entry_001ad340_0x1ad340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad340_0x1ad340");
#endif

    ctx->pc = 0x1ad340u;

    // 0x1ad340: 0x3c0244c9  lui         $v0, 0x44C9
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17609 << 16));
    // 0x1ad344: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1ad344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1ad348: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad34c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad350: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad358: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad35c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad360: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad364: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad368: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1ad368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x1ad36c: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x1ad36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x1ad370: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad374: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad378: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad37c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad380: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad384: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad388: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad38c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->pc = 0x1ad390u;
}
