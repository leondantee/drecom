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

// Function: entry_00190310
// Address: 0x190310 - 0x190340
void entry_00190310_0x190310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190310_0x190310");
#endif

    ctx->pc = 0x190310u;

    // 0x190310: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190314: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x190314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190318: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19031c: 0x8fbe0190  lw          $fp, 0x190($sp)
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190320: 0xc7c001cc  lwc1        $f0, 0x1CC($fp)
    ctx->pc = 0x190320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190324: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x190324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x190328: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19032c: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x19032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190330: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x190330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x190334: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190338: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x190338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19033c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x19033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->pc = 0x190340u;
}
