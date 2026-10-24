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

// Function: entry_0026ddec
// Address: 0x26ddec - 0x26de0c
void entry_0026ddec_0x26ddec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ddec_0x26ddec");
#endif

    ctx->pc = 0x26ddecu;

    // 0x26ddec: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddf0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26ddf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ddf8: 0x0  nop
    ctx->pc = 0x26ddf8u;
    // NOP
    // 0x26ddfc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26DDFCu;
    {
        const bool branch_taken_0x26ddfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ddfc) {
            ctx->pc = 0x26DE0Cu;
            return;
        }
    }
    ctx->pc = 0x26DE04u;
    // 0x26de04: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26de08: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x26de0cu;
}
