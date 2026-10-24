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

// Function: entry_0027dd68
// Address: 0x27dd68 - 0x27ddc4
void entry_0027dd68_0x27dd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027dd68_0x27dd68");
#endif

    ctx->pc = 0x27dd68u;

    // 0x27dd68: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd6c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x27dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x27dd70: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x27dd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd78: 0x0  nop
    ctx->pc = 0x27dd78u;
    // NOP
    // 0x27dd7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27dd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27dd80: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27dd84: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd88: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x27dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x27dd8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27dd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd94: 0x0  nop
    ctx->pc = 0x27dd94u;
    // NOP
    // 0x27dd98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27dd98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd9c: 0x0  nop
    ctx->pc = 0x27dd9cu;
    // NOP
    // 0x27dda0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27DDA0u;
    {
        const bool branch_taken_0x27dda0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dda0) {
            ctx->pc = 0x27DDC4u;
            return;
        }
    }
    ctx->pc = 0x27DDA8u;
    // 0x27dda8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ddac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x27ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x27ddb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27ddb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddb8: 0x0  nop
    ctx->pc = 0x27ddb8u;
    // NOP
    // 0x27ddbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ddc0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x27ddc4u;
}
