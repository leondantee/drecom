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

// Function: entry_002449a4
// Address: 0x2449a4 - 0x2449f8
void entry_002449a4_0x2449a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002449a4_0x2449a4");
#endif

    ctx->pc = 0x2449a4u;

    // 0x2449a4: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x2449a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2449a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2449ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2449acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2449b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2449b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2449b8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2449b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2449bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449c0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2449c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2449c4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2449c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2449c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2449c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2449cc: 0x0  nop
    ctx->pc = 0x2449ccu;
    // NOP
    // 0x2449d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2449d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2449d4: 0x0  nop
    ctx->pc = 0x2449d4u;
    // NOP
    // 0x2449d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2449D8u;
    {
        const bool branch_taken_0x2449d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2449d8) {
            ctx->pc = 0x2449F8u;
            return;
        }
    }
    ctx->pc = 0x2449E0u;
    // 0x2449e0: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2449e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2449e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2449e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2449e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2449e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2449ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2449ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2449f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2449f4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2449f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x2449f8u;
}
