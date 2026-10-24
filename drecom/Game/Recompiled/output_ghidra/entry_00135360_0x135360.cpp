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

// Function: entry_00135360
// Address: 0x135360 - 0x1353a4
void entry_00135360_0x135360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135360_0x135360");
#endif

    ctx->pc = 0x135360u;

    // 0x135360: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135364: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x135364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135368: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x135368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x13536c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x13536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x135370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135374: 0x0  nop
    ctx->pc = 0x135374u;
    // NOP
    // 0x135378: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13537c: 0x0  nop
    ctx->pc = 0x13537cu;
    // NOP
    // 0x135380: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x135380u;
    {
        const bool branch_taken_0x135380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135380) {
            ctx->pc = 0x1353A4u;
            return;
        }
    }
    ctx->pc = 0x135388u;
    // 0x135388: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x135388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x13538c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x13538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x135390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135394: 0x0  nop
    ctx->pc = 0x135394u;
    // NOP
    // 0x135398: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x135398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x13539c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13539Cu;
    {
        const bool branch_taken_0x13539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13539c) {
            ctx->pc = 0x1353F4u;
            return;
        }
    }
    ctx->pc = 0x1353A4u;
}
