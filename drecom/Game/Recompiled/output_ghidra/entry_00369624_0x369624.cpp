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

// Function: entry_00369624
// Address: 0x369624 - 0x369668
void entry_00369624_0x369624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369624_0x369624");
#endif

    ctx->pc = 0x369624u;

    // 0x369624: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x369624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369628: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36962c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36962cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x369630: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x369630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x369634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369638: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36963c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x369640: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x369640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369644: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369648: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x369648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x36964c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x36964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x369650: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369654: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x369654u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369658: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36965c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x36965cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x369660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x369660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x369664: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x369664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x369668u;
}
