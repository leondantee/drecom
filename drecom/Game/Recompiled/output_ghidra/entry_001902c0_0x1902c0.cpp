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

// Function: entry_001902c0
// Address: 0x1902c0 - 0x190310
void entry_001902c0_0x1902c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902c0_0x1902c0");
#endif

    ctx->pc = 0x1902c0u;

    // 0x1902c0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902c4: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x1902c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x1902c8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1902c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1902cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1902d0: 0x16e2000f  bne         $s7, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1902D0u;
    {
        const bool branch_taken_0x1902d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x1902d0) {
            ctx->pc = 0x190310u;
            return;
        }
    }
    ctx->pc = 0x1902D8u;
    // 0x1902d8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902dc: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x1902dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902e0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1902e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1902e4: 0x8fb60190  lw          $s6, 0x190($sp)
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902e8: 0xc6c001c4  lwc1        $f0, 0x1C4($s6)
    ctx->pc = 0x1902e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902ec: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1902ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1902f0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902f4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x1902f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1902f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1902fc: 0x8fb60190  lw          $s6, 0x190($sp)
    ctx->pc = 0x1902fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190300: 0xc6c001cc  lwc1        $f0, 0x1CC($s6)
    ctx->pc = 0x190300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190304: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x190304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x190308: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x190308u;
    {
        const bool branch_taken_0x190308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190308) {
            ctx->pc = 0x190340u;
            return;
        }
    }
    ctx->pc = 0x190310u;
}
