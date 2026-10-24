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

// Function: entry_00190218
// Address: 0x190218 - 0x190270
void entry_00190218_0x190218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190218_0x190218");
#endif

    ctx->pc = 0x190218u;

    // 0x190218: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x190218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19021c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x19021Cu;
    {
        const bool branch_taken_0x19021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19021c) {
            ctx->pc = 0x19016Cu;
            return;
        }
    }
    ctx->pc = 0x190224u;
    // 0x190224: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190228: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x190228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x19022c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190230: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x190230u;
    {
        const bool branch_taken_0x190230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190230) {
            ctx->pc = 0x190270u;
            return;
        }
    }
    ctx->pc = 0x190238u;
    // 0x190238: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19023c: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x19023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190240: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190244: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190248: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x190248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19024c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x19024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x190250: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190254: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x190254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190258: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x190258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x19025c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x19025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190260: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x190260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190264: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x190264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x190268: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x190268u;
    {
        const bool branch_taken_0x190268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190268) {
            ctx->pc = 0x190340u;
            return;
        }
    }
    ctx->pc = 0x190270u;
}
