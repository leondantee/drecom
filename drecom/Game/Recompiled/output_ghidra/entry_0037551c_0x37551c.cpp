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

// Function: entry_0037551c
// Address: 0x37551c - 0x375558
void entry_0037551c_0x37551c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037551c_0x37551c");
#endif

    ctx->pc = 0x37551cu;

    // 0x37551c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375520: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375524: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375528: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x37552c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375530: 0x0  nop
    ctx->pc = 0x375530u;
    // NOP
    // 0x375534: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375538: 0x0  nop
    ctx->pc = 0x375538u;
    // NOP
    // 0x37553c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x37553Cu;
    {
        const bool branch_taken_0x37553c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37553c) {
            ctx->pc = 0x375558u;
            return;
        }
    }
    ctx->pc = 0x375544u;
    // 0x375544: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375548: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x37554c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375554: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x375558u;
}
