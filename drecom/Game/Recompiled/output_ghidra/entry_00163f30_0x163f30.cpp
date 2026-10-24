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

// Function: entry_00163f30
// Address: 0x163f30 - 0x163f70
void entry_00163f30_0x163f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f30_0x163f30");
#endif

    ctx->pc = 0x163f30u;

    // 0x163f30: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163f38: 0x0  nop
    ctx->pc = 0x163f38u;
    // NOP
    // 0x163f3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f40: 0x0  nop
    ctx->pc = 0x163f40u;
    // NOP
    // 0x163f44: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x163F44u;
    {
        const bool branch_taken_0x163f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f44) {
            ctx->pc = 0x163F70u;
            return;
        }
    }
    ctx->pc = 0x163F4Cu;
    // 0x163f4c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x163f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f50: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f58: 0x0  nop
    ctx->pc = 0x163f58u;
    // NOP
    // 0x163f5c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x163F5Cu;
    {
        const bool branch_taken_0x163f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163f5c) {
            ctx->pc = 0x163F9Cu;
            return;
        }
    }
    ctx->pc = 0x163F64u;
    // 0x163f64: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163F68u;
    {
        const bool branch_taken_0x163f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f68) {
            ctx->pc = 0x163FA4u;
            return;
        }
    }
    ctx->pc = 0x163F70u;
}
