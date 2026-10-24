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

// Function: entry_00269ff4
// Address: 0x269ff4 - 0x26a010
void entry_00269ff4_0x269ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269ff4_0x269ff4");
#endif

    ctx->pc = 0x269ff4u;

    // 0x269ff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x269ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x269ff8: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x269ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x269ffc: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x269ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x26a000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a004: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x26a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a00c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x26a00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    ctx->pc = 0x26a010u;
}
