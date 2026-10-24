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

// Function: entry_001278b4
// Address: 0x1278b4 - 0x127928
void entry_001278b4_0x1278b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001278b4_0x1278b4");
#endif

    ctx->pc = 0x1278b4u;

    // 0x1278b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1278b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1278b8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1278b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1278bc: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x1278bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x1278c0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1278c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1278c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1278c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1278c8: 0x0  nop
    ctx->pc = 0x1278c8u;
    // NOP
    // 0x1278cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1278ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1278d0: 0x0  nop
    ctx->pc = 0x1278d0u;
    // NOP
    // 0x1278d4: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x1278D4u;
    {
        const bool branch_taken_0x1278d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1278d4) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x1278DCu;
    // 0x1278dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1278dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1278e0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1278e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1278e4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1278e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1278e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1278e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1278ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1278ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1278f0: 0x0  nop
    ctx->pc = 0x1278f0u;
    // NOP
    // 0x1278f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1278f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1278f8: 0x0  nop
    ctx->pc = 0x1278f8u;
    // NOP
    // 0x1278fc: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1278FCu;
    {
        const bool branch_taken_0x1278fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1278fc) {
            ctx->pc = 0x127978u;
            return;
        }
    }
    ctx->pc = 0x127904u;
    // 0x127904: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x127908: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12790c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x127910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127910u;
    {
        const bool branch_taken_0x127910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127910) {
            ctx->pc = 0x127928u;
            return;
        }
    }
    ctx->pc = 0x127918u;
    // 0x127918: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12791c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x127920: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x127920u;
    {
        const bool branch_taken_0x127920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127920) {
            ctx->pc = 0x127978u;
            return;
        }
    }
    ctx->pc = 0x127928u;
}
