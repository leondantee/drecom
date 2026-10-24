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

// Function: entry_00185508
// Address: 0x185508 - 0x185550
void entry_00185508_0x185508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185508_0x185508");
#endif

    ctx->pc = 0x185508u;

    // 0x185508: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18550c: 0x90220347  lbu         $v0, 0x347($at)
    ctx->pc = 0x18550cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480347u));
    // 0x185510: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x185510u;
    {
        const bool branch_taken_0x185510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185510) {
            ctx->pc = 0x185574u;
            return;
        }
    }
    ctx->pc = 0x185518u;
    // 0x185518: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18551c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x185520: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185528: 0x0  nop
    ctx->pc = 0x185528u;
    // NOP
    // 0x18552c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18552cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185530: 0x0  nop
    ctx->pc = 0x185530u;
    // NOP
    // 0x185534: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185534u;
    {
        const bool branch_taken_0x185534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185534) {
            ctx->pc = 0x185550u;
            return;
        }
    }
    ctx->pc = 0x18553Cu;
    // 0x18553c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x18553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x185540: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185548: 0x0  nop
    ctx->pc = 0x185548u;
    // NOP
    // 0x18554c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x185550u;
}
