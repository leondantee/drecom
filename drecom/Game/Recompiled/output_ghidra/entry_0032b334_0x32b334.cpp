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

// Function: entry_0032b334
// Address: 0x32b334 - 0x32b374
void entry_0032b334_0x32b334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b334_0x32b334");
#endif

    ctx->pc = 0x32b334u;

    // 0x32b334: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b33c: 0x0  nop
    ctx->pc = 0x32b33cu;
    // NOP
    // 0x32b340: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b344: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b34c: 0x0  nop
    ctx->pc = 0x32b34cu;
    // NOP
    // 0x32b350: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b354: 0x0  nop
    ctx->pc = 0x32b354u;
    // NOP
    // 0x32b358: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x32B358u;
    {
        const bool branch_taken_0x32b358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b358) {
            ctx->pc = 0x32B374u;
            return;
        }
    }
    ctx->pc = 0x32B360u;
    // 0x32b360: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x32b360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b368: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b36c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b370: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    ctx->pc = 0x32b374u;
}
