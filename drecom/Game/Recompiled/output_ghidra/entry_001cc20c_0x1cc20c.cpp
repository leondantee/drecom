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

// Function: entry_001cc20c
// Address: 0x1cc20c - 0x1cc298
void entry_001cc20c_0x1cc20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc20c_0x1cc20c");
#endif

    ctx->pc = 0x1cc20cu;

    // 0x1cc20c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc210: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
    // 0x1cc214: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CC214u;
    {
        const bool branch_taken_0x1cc214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc214) {
            ctx->pc = 0x1CC298u;
            return;
        }
    }
    ctx->pc = 0x1CC21Cu;
    // 0x1cc21c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc220: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc224: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1cc224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x1cc228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc22c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc230: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1cc230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1cc234: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cc234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1cc238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc23c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc240: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1cc240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1cc244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc248: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc24c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1cc24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cc250: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cc254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc258: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cc258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc25c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc260: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cc260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc268: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cc268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc26c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1cc26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1cc270: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc274: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1cc274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1cc278: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc27c: 0x8c271a98  lw          $a3, 0x1A98($at)
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cc280: 0x2408dfff  addiu       $t0, $zero, -0x2001
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1cc284: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1cc284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1cc288: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc28c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cc28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cc290: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x1CC290u;
    {
        const bool branch_taken_0x1cc290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc290) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC298u;
}
