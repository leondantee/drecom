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

// Function: entry_0025332c
// Address: 0x25332c - 0x253370
void entry_0025332c_0x25332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025332c_0x25332c");
#endif

    ctx->pc = 0x25332cu;

    // 0x25332c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x25332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253330: 0x3c0344d9  lui         $v1, 0x44D9
    ctx->pc = 0x253330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17625 << 16));
    // 0x253334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253338: 0x0  nop
    ctx->pc = 0x253338u;
    // NOP
    // 0x25333c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25333cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253340: 0x0  nop
    ctx->pc = 0x253340u;
    // NOP
    // 0x253344: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x253344u;
    {
        const bool branch_taken_0x253344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253344) {
            ctx->pc = 0x253370u;
            return;
        }
    }
    ctx->pc = 0x25334Cu;
    // 0x25334c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x25334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253350: 0x3c034513  lui         $v1, 0x4513
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17683 << 16));
    // 0x253354: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x253358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25335c: 0x0  nop
    ctx->pc = 0x25335cu;
    // NOP
    // 0x253360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253364: 0x0  nop
    ctx->pc = 0x253364u;
    // NOP
    // 0x253368: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x253368u;
    {
        const bool branch_taken_0x253368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253368) {
            ctx->pc = 0x253374u;
            return;
        }
    }
    ctx->pc = 0x253370u;
}
