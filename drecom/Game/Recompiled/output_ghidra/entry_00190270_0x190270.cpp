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

// Function: entry_00190270
// Address: 0x190270 - 0x1902c0
void entry_00190270_0x190270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190270_0x190270");
#endif

    ctx->pc = 0x190270u;

    // 0x190270: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190274: 0x9046011a  lbu         $a2, 0x11A($v0)
    ctx->pc = 0x190274u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x190278: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x190278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19027c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190280: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x190280u;
    {
        const bool branch_taken_0x190280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190280) {
            ctx->pc = 0x1902C0u;
            return;
        }
    }
    ctx->pc = 0x190288u;
    // 0x190288: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x190288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19028c: 0xc46001c8  lwc1        $f0, 0x1C8($v1)
    ctx->pc = 0x19028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190290: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190294: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190298: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x190298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19029c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x19029cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1902a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902a4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x1902a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902a8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1902a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1902ac: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902b0: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x1902b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902b4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1902b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1902b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1902B8u;
    {
        const bool branch_taken_0x1902b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902b8) {
            ctx->pc = 0x190340u;
            return;
        }
    }
    ctx->pc = 0x1902C0u;
}
