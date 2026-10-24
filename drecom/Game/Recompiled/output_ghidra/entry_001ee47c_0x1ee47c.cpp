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

// Function: entry_001ee47c
// Address: 0x1ee47c - 0x1ee4d0
void entry_001ee47c_0x1ee47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee47c_0x1ee47c");
#endif

    ctx->pc = 0x1ee47cu;

    // 0x1ee47c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee480: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee48c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ee48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee490: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1ee490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1ee494: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee498: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1ee498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee49c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1ee4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee4a4: 0x0  nop
    ctx->pc = 0x1ee4a4u;
    // NOP
    // 0x1ee4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee4ac: 0x0  nop
    ctx->pc = 0x1ee4acu;
    // NOP
    // 0x1ee4b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE4B0u;
    {
        const bool branch_taken_0x1ee4b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee4b0) {
            ctx->pc = 0x1EE4D0u;
            return;
        }
    }
    ctx->pc = 0x1EE4B8u;
    // 0x1ee4b8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee4bc: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1ee4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee4c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee4c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee4c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4c8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1ee4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1ee4cc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x1ee4d0u;
}
