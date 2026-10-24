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

// Function: entry_001ee770
// Address: 0x1ee770 - 0x1ee7c4
void entry_001ee770_0x1ee770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee770_0x1ee770");
#endif

    ctx->pc = 0x1ee770u;

    // 0x1ee770: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1ee770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1ee774: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee77c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee784: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ee788: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee78c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1ee78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee790: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1ee790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1ee794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee798: 0x0  nop
    ctx->pc = 0x1ee798u;
    // NOP
    // 0x1ee79c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee79cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee7a0: 0x0  nop
    ctx->pc = 0x1ee7a0u;
    // NOP
    // 0x1ee7a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE7A4u;
    {
        const bool branch_taken_0x1ee7a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee7a4) {
            ctx->pc = 0x1EE7C4u;
            return;
        }
    }
    ctx->pc = 0x1EE7ACu;
    // 0x1ee7ac: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee7b0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1ee7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ee7b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee7b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee7bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee7c0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ee7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1ee7c4u;
}
