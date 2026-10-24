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

// Function: entry_0026d3e4
// Address: 0x26d3e4 - 0x26d450
void entry_0026d3e4_0x26d3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d3e4_0x26d3e4");
#endif

    ctx->pc = 0x26d3e4u;

    // 0x26d3e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d3e8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x26d3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x26d3ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26D3ECu;
    {
        const bool branch_taken_0x26d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d3ec) {
            ctx->pc = 0x26D450u;
            return;
        }
    }
    ctx->pc = 0x26D3F4u;
    // 0x26d3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d3f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d3fc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26d3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26d400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d404: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26d404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d408: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d40c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x26d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d410: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d414: 0xe4a01290  swc1        $f0, 0x1290($a1)
    ctx->pc = 0x26d414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4752), bits); }
    // 0x26d418: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26d41c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d420: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26d420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d42c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26d42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d430: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d434: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26d434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d438: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d43c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26d43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d440: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d444: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26d444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x26d448: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x26D448u;
    {
        const bool branch_taken_0x26d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d448) {
            ctx->pc = 0x26D6B4u;
            return;
        }
    }
    ctx->pc = 0x26D450u;
}
