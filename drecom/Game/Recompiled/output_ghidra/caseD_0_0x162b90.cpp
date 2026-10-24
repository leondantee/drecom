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

// Function: caseD_0
// Address: 0x162b90 - 0x162bc8
void caseD_0_0x162b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x162b90");
#endif

    ctx->pc = 0x162b90u;

    // 0x162b90: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162b94: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x162b98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ba0: 0x0  nop
    ctx->pc = 0x162ba0u;
    // NOP
    // 0x162ba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162ba8: 0x0  nop
    ctx->pc = 0x162ba8u;
    // NOP
    // 0x162bac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x162BACu;
    {
        const bool branch_taken_0x162bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162bac) {
            ctx->pc = 0x162BC8u;
            return;
        }
    }
    ctx->pc = 0x162BB4u;
    // 0x162bb4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x162bb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bc0: 0x0  nop
    ctx->pc = 0x162bc0u;
    // NOP
    // 0x162bc4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x162bc8u;
}
