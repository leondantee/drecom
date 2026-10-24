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

// Function: entry_0017cc9c
// Address: 0x17cc9c - 0x17cd08
void entry_0017cc9c_0x17cc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cc9c_0x17cc9c");
#endif

    ctx->pc = 0x17cc9cu;

    // 0x17cc9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x17cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cca0: 0xc4600190  lwc1        $f0, 0x190($v1)
    ctx->pc = 0x17cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cca4: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x17cca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x17cca8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccac: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x17ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccb0: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x17ccb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x17ccb4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x17ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccb8: 0xc4a00198  lwc1        $f0, 0x198($a1)
    ctx->pc = 0x17ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccbc: 0xe6000198  swc1        $f0, 0x198($s0)
    ctx->pc = 0x17ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
    // 0x17ccc0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccc4: 0xc440019c  lwc1        $f0, 0x19C($v0)
    ctx->pc = 0x17ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccc8: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x17ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x17cccc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccd0: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x17ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccd4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x17ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x17ccd8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x17ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccdc: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x17ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cce0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x17cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x17cce4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cce8: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x17cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccec: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x17ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x17ccf0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x17ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccf4: 0xc48001ac  lwc1        $f0, 0x1AC($a0)
    ctx->pc = 0x17ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccf8: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x17ccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x17ccfc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cd00: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cd04: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17cd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    ctx->pc = 0x17cd08u;
}
