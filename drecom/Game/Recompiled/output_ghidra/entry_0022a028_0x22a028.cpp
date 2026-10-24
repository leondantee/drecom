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

// Function: entry_0022a028
// Address: 0x22a028 - 0x22a064
void entry_0022a028_0x22a028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a028_0x22a028");
#endif

    ctx->pc = 0x22a028u;

    // 0x22a028: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a02c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a030: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a034: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22a034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x22a038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a03c: 0x0  nop
    ctx->pc = 0x22a03cu;
    // NOP
    // 0x22a040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a044: 0x0  nop
    ctx->pc = 0x22a044u;
    // NOP
    // 0x22a048: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22A048u;
    {
        const bool branch_taken_0x22a048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a048) {
            ctx->pc = 0x22A064u;
            return;
        }
    }
    ctx->pc = 0x22A050u;
    // 0x22a050: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x22a054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a058: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a05c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a060: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22a060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22a064u;
}
