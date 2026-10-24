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

// Function: entry_0028f348
// Address: 0x28f348 - 0x28f3cc
void entry_0028f348_0x28f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f348_0x28f348");
#endif

    ctx->pc = 0x28f348u;

    // 0x28f348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f34c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f34cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f350: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f354: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f358: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x28F358u;
    {
        const bool branch_taken_0x28f358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f358) {
            ctx->pc = 0x28F3CCu;
            return;
        }
    }
    ctx->pc = 0x28F360u;
    // 0x28f360: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f364: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f368: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f36c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x28f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x28f370: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28F370u;
    {
        const bool branch_taken_0x28f370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f370) {
            ctx->pc = 0x28F3CCu;
            return;
        }
    }
    ctx->pc = 0x28F378u;
    // 0x28f378: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f37c: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x28f380: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f388: 0x0  nop
    ctx->pc = 0x28f388u;
    // NOP
    // 0x28f38c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28f38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f390: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28f394: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f398: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f39c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f3a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3a4: 0x0  nop
    ctx->pc = 0x28f3a4u;
    // NOP
    // 0x28f3a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f3ac: 0x0  nop
    ctx->pc = 0x28f3acu;
    // NOP
    // 0x28f3b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28F3B0u;
    {
        const bool branch_taken_0x28f3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f3b0) {
            ctx->pc = 0x28F3CCu;
            return;
        }
    }
    ctx->pc = 0x28F3B8u;
    // 0x28f3b8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f3bc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f3c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3c4: 0x0  nop
    ctx->pc = 0x28f3c4u;
    // NOP
    // 0x28f3c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x28f3ccu;
}
