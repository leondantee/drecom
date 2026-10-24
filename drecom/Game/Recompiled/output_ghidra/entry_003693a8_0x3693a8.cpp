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

// Function: entry_003693a8
// Address: 0x3693a8 - 0x369400
void entry_003693a8_0x3693a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003693a8_0x3693a8");
#endif

    ctx->pc = 0x3693a8u;

    // 0x3693a8: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x3693a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x3693ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3693acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693b0: 0x0  nop
    ctx->pc = 0x3693b0u;
    // NOP
    // 0x3693b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3693b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3693b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3693b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693bc: 0x0  nop
    ctx->pc = 0x3693bcu;
    // NOP
    // 0x3693c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3693c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3693c4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3693c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3693c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3693c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693cc: 0x0  nop
    ctx->pc = 0x3693ccu;
    // NOP
    // 0x3693d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3693d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3693d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3693d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3693d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3693d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3693dc: 0x0  nop
    ctx->pc = 0x3693dcu;
    // NOP
    // 0x3693e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3693e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3693e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3693e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3693e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3693e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3693ec: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3693ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3693f0: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x3693f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x3693f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3693f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3693f8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3693F8u;
    SET_GPR_U32(ctx, 31, 0x369400u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369400u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369400u) { return; }
    ctx->pc = 0x369400u;
}
