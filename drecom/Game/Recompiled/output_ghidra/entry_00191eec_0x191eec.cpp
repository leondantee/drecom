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

// Function: entry_00191eec
// Address: 0x191eec - 0x191f30
void entry_00191eec_0x191eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191eec_0x191eec");
#endif

    ctx->pc = 0x191eecu;

    // 0x191eec: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x191eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ef0: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x191ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ef8: 0x0  nop
    ctx->pc = 0x191ef8u;
    // NOP
    // 0x191efc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f00: 0x0  nop
    ctx->pc = 0x191f00u;
    // NOP
    // 0x191f04: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x191F04u;
    {
        const bool branch_taken_0x191f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f04) {
            ctx->pc = 0x191F30u;
            return;
        }
    }
    ctx->pc = 0x191F0Cu;
    // 0x191f0c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x191f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191f10: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x191f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x191f14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x191f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x191f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191f1c: 0x0  nop
    ctx->pc = 0x191f1cu;
    // NOP
    // 0x191f20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f24: 0x0  nop
    ctx->pc = 0x191f24u;
    // NOP
    // 0x191f28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x191F28u;
    {
        const bool branch_taken_0x191f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f28) {
            ctx->pc = 0x191F38u;
            return;
        }
    }
    ctx->pc = 0x191F30u;
}
