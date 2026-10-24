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

// Function: entry_0023b030
// Address: 0x23b030 - 0x23b070
void entry_0023b030_0x23b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b030_0x23b030");
#endif

    ctx->pc = 0x23b030u;

    // 0x23b030: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b034: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x23b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b038: 0x3c0544af  lui         $a1, 0x44AF
    ctx->pc = 0x23b038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17583 << 16));
    // 0x23b03c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23b03cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b040: 0x0  nop
    ctx->pc = 0x23b040u;
    // NOP
    // 0x23b044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b048: 0x0  nop
    ctx->pc = 0x23b048u;
    // NOP
    // 0x23b04c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B04Cu;
    {
        const bool branch_taken_0x23b04c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b04c) {
            ctx->pc = 0x23B070u;
            return;
        }
    }
    ctx->pc = 0x23B054u;
    // 0x23b054: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23b058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b05c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b060: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b064: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b068: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23B068u;
    {
        const bool branch_taken_0x23b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b068) {
            ctx->pc = 0x23B0C0u;
            return;
        }
    }
    ctx->pc = 0x23B070u;
}
