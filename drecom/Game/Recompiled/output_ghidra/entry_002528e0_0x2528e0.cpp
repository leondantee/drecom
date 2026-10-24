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

// Function: entry_002528e0
// Address: 0x2528e0 - 0x252924
void entry_002528e0_0x2528e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002528e0_0x2528e0");
#endif

    ctx->pc = 0x2528e0u;

    // 0x2528e0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2528e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2528e4: 0x3c0344d9  lui         $v1, 0x44D9
    ctx->pc = 0x2528e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17625 << 16));
    // 0x2528e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2528e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528ec: 0x0  nop
    ctx->pc = 0x2528ecu;
    // NOP
    // 0x2528f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2528f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2528f4: 0x0  nop
    ctx->pc = 0x2528f4u;
    // NOP
    // 0x2528f8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2528F8u;
    {
        const bool branch_taken_0x2528f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2528f8) {
            ctx->pc = 0x252924u;
            return;
        }
    }
    ctx->pc = 0x252900u;
    // 0x252900: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252904: 0x3c034513  lui         $v1, 0x4513
    ctx->pc = 0x252904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17683 << 16));
    // 0x252908: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x25290c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25290cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252910: 0x0  nop
    ctx->pc = 0x252910u;
    // NOP
    // 0x252914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252918: 0x0  nop
    ctx->pc = 0x252918u;
    // NOP
    // 0x25291c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25291Cu;
    {
        const bool branch_taken_0x25291c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25291c) {
            ctx->pc = 0x25292Cu;
            return;
        }
    }
    ctx->pc = 0x252924u;
}
