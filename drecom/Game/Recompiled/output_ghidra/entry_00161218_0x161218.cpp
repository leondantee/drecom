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

// Function: entry_00161218
// Address: 0x161218 - 0x16126c
void entry_00161218_0x161218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161218_0x161218");
#endif

    ctx->pc = 0x161218u;

    // 0x161218: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16121c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x161220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161224: 0x0  nop
    ctx->pc = 0x161224u;
    // NOP
    // 0x161228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16122c: 0x0  nop
    ctx->pc = 0x16122cu;
    // NOP
    // 0x161230: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x161230u;
    {
        const bool branch_taken_0x161230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161230) {
            ctx->pc = 0x16126Cu;
            return;
        }
    }
    ctx->pc = 0x161238u;
    // 0x161238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16123c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16123cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161244: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161248: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16124c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16124cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161250: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161258: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16125c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x16125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161260: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x161264: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x161264u;
    {
        const bool branch_taken_0x161264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161264) {
            ctx->pc = 0x161298u;
            return;
        }
    }
    ctx->pc = 0x16126Cu;
}
