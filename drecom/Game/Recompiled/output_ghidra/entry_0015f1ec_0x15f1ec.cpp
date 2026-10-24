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

// Function: entry_0015f1ec
// Address: 0x15f1ec - 0x15f21c
void entry_0015f1ec_0x15f1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f1ec_0x15f1ec");
#endif

    ctx->pc = 0x15f1ecu;

    // 0x15f1ec: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f1f0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x15f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x15f1f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15f1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f1fc: 0x0  nop
    ctx->pc = 0x15f1fcu;
    // NOP
    // 0x15f200: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f204: 0x0  nop
    ctx->pc = 0x15f204u;
    // NOP
    // 0x15f208: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15F208u;
    {
        const bool branch_taken_0x15f208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f208) {
            ctx->pc = 0x15F21Cu;
            return;
        }
    }
    ctx->pc = 0x15F210u;
    // 0x15f210: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f210u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f214: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15F214u;
    {
        const bool branch_taken_0x15f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f214) {
            ctx->pc = 0x15F348u;
            return;
        }
    }
    ctx->pc = 0x15F21Cu;
}
