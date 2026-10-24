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

// Function: entry_0028f2cc
// Address: 0x28f2cc - 0x28f348
void entry_0028f2cc_0x28f2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f2cc_0x28f2cc");
#endif

    ctx->pc = 0x28f2ccu;

    // 0x28f2cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f2d0: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f2d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f2d8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f2dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F2DCu;
    {
        const bool branch_taken_0x28f2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2dc) {
            ctx->pc = 0x28F348u;
            return;
        }
    }
    ctx->pc = 0x28F2E4u;
    // 0x28f2e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f2e8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f2e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f2ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f2f0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x28f2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x28f2f4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28F2F4u;
    {
        const bool branch_taken_0x28f2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2f4) {
            ctx->pc = 0x28F348u;
            return;
        }
    }
    ctx->pc = 0x28F2FCu;
    // 0x28f2fc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f300: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x28f300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x28f304: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f30c: 0x0  nop
    ctx->pc = 0x28f30cu;
    // NOP
    // 0x28f310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28f310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f314: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28f318: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f31c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28f320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f324: 0x0  nop
    ctx->pc = 0x28f324u;
    // NOP
    // 0x28f328: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28f328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f32c: 0x0  nop
    ctx->pc = 0x28f32cu;
    // NOP
    // 0x28f330: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28F330u;
    {
        const bool branch_taken_0x28f330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f330) {
            ctx->pc = 0x28F348u;
            return;
        }
    }
    ctx->pc = 0x28F338u;
    // 0x28f338: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28f33c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f340: 0x0  nop
    ctx->pc = 0x28f340u;
    // NOP
    // 0x28f344: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x28f348u;
}
