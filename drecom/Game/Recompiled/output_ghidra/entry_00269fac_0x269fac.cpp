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

// Function: entry_00269fac
// Address: 0x269fac - 0x269ff4
void entry_00269fac_0x269fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269fac_0x269fac");
#endif

    ctx->pc = 0x269facu;

    // 0x269fac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x269facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269fb0: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x269fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269fb4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x269fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x269fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269fbc: 0x0  nop
    ctx->pc = 0x269fbcu;
    // NOP
    // 0x269fc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x269fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269fc4: 0x0  nop
    ctx->pc = 0x269fc4u;
    // NOP
    // 0x269fc8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x269FC8u;
    {
        const bool branch_taken_0x269fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269fc8) {
            ctx->pc = 0x269FF4u;
            return;
        }
    }
    ctx->pc = 0x269FD0u;
    // 0x269fd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269fd4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x269fd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x269fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x269fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269fe0: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x269fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269fe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269fe8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x269fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x269fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269FECu;
    {
        const bool branch_taken_0x269fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fec) {
            ctx->pc = 0x26A010u;
            return;
        }
    }
    ctx->pc = 0x269FF4u;
}
