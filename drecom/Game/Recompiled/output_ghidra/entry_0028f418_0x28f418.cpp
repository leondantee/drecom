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

// Function: entry_0028f418
// Address: 0x28f418 - 0x28f48c
void entry_0028f418_0x28f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f418_0x28f418");
#endif

    ctx->pc = 0x28f418u;

    // 0x28f418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f41c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f41cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f420: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f424: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28f428: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F428u;
    {
        const bool branch_taken_0x28f428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f428) {
            ctx->pc = 0x28F48Cu;
            return;
        }
    }
    ctx->pc = 0x28F430u;
    // 0x28f430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f434: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f438: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f43c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f440: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28F440u;
    {
        const bool branch_taken_0x28f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f440) {
            ctx->pc = 0x28F48Cu;
            return;
        }
    }
    ctx->pc = 0x28F448u;
    // 0x28f448: 0xc6015dbc  lwc1        $f1, 0x5DBC($s0)
    ctx->pc = 0x28f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f44c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f450: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f458: 0x0  nop
    ctx->pc = 0x28f458u;
    // NOP
    // 0x28f45c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28f45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f460: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x28f464: 0xc6015dbc  lwc1        $f1, 0x5DBC($s0)
    ctx->pc = 0x28f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28f468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f46c: 0x0  nop
    ctx->pc = 0x28f46cu;
    // NOP
    // 0x28f470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f474: 0x0  nop
    ctx->pc = 0x28f474u;
    // NOP
    // 0x28f478: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28F478u;
    {
        const bool branch_taken_0x28f478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f478) {
            ctx->pc = 0x28F48Cu;
            return;
        }
    }
    ctx->pc = 0x28F480u;
    // 0x28f480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28f480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f484: 0x0  nop
    ctx->pc = 0x28f484u;
    // NOP
    // 0x28f488: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28f488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    ctx->pc = 0x28f48cu;
}
