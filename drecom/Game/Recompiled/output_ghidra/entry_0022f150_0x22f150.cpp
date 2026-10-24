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

// Function: entry_0022f150
// Address: 0x22f150 - 0x22f170
void entry_0022f150_0x22f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f150_0x22f150");
#endif

    ctx->pc = 0x22f150u;

    // 0x22f150: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f154: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f158: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22f15c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22f160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f164: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f16c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22f170u;
}
