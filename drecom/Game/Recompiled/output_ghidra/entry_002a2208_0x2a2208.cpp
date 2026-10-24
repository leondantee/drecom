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

// Function: entry_002a2208
// Address: 0x2a2208 - 0x2a226c
void entry_002a2208_0x2a2208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2208_0x2a2208");
#endif

    ctx->pc = 0x2a2208u;

    // 0x2a2208: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a220c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2210: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2214: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2218: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a221c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a221cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2220: 0x0  nop
    ctx->pc = 0x2a2220u;
    // NOP
    // 0x2a2224: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2224u;
    {
        const bool branch_taken_0x2a2224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2224) {
            ctx->pc = 0x2A226Cu;
            return;
        }
    }
    ctx->pc = 0x2A222Cu;
    // 0x2a222c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2230: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a2234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2238: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a2238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a223c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2240: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a2240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2244: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2248: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a2248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a224c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2250: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a2250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2258: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a2258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a225c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a2260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2268: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a2268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    ctx->pc = 0x2a226cu;
}
