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

// Function: entry_0029a268
// Address: 0x29a268 - 0x29a2b0
void entry_0029a268_0x29a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a268_0x29a268");
#endif

    ctx->pc = 0x29a268u;

    // 0x29a268: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a26c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29a270: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29a274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a278: 0x0  nop
    ctx->pc = 0x29a278u;
    // NOP
    // 0x29a27c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29a27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a280: 0x0  nop
    ctx->pc = 0x29a280u;
    // NOP
    // 0x29a284: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29A284u;
    {
        const bool branch_taken_0x29a284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a284) {
            ctx->pc = 0x29A2B0u;
            return;
        }
    }
    ctx->pc = 0x29A28Cu;
    // 0x29a28c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a290: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29a294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a298: 0x0  nop
    ctx->pc = 0x29a298u;
    // NOP
    // 0x29a29c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2a0: 0x0  nop
    ctx->pc = 0x29a2a0u;
    // NOP
    // 0x29a2a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2A4u;
    {
        const bool branch_taken_0x29a2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2a4) {
            ctx->pc = 0x29A2B8u;
            return;
        }
    }
    ctx->pc = 0x29A2ACu;
    // 0x29a2ac: 0x0  nop
    ctx->pc = 0x29a2acu;
    // NOP
    ctx->pc = 0x29a2b0u;
}
