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

// Function: entry_0019ee5c
// Address: 0x19ee5c - 0x19eeac
void entry_0019ee5c_0x19ee5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee5c_0x19ee5c");
#endif

    ctx->pc = 0x19ee5cu;

    // 0x19ee5c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x19ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ee60: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x19ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x19ee64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19ee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x19ee68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee6c: 0x0  nop
    ctx->pc = 0x19ee6cu;
    // NOP
    // 0x19ee70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ee70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee74: 0x0  nop
    ctx->pc = 0x19ee74u;
    // NOP
    // 0x19ee78: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x19EE78u;
    {
        const bool branch_taken_0x19ee78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee78) {
            ctx->pc = 0x19EEACu;
            return;
        }
    }
    ctx->pc = 0x19EE80u;
    // 0x19ee80: 0x2662fffb  addiu       $v0, $s3, -0x5
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x19ee84: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x19ee84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ee88: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x19ee88u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x19ee8c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x19ee90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x19ee94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ee94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ee98: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ee9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19ee9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19eea0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x19eea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x19eea4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19EEA4u;
    {
        const bool branch_taken_0x19eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eea4) {
            ctx->pc = 0x19EEECu;
            return;
        }
    }
    ctx->pc = 0x19EEACu;
}
