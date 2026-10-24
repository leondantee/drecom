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

// Function: entry_001f1240
// Address: 0x1f1240 - 0x1f1280
void entry_001f1240_0x1f1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1240_0x1f1240");
#endif

    ctx->pc = 0x1f1240u;

    // 0x1f1240: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1244: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1248: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x1f124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1250: 0x0  nop
    ctx->pc = 0x1f1250u;
    // NOP
    // 0x1f1254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1258: 0x0  nop
    ctx->pc = 0x1f1258u;
    // NOP
    // 0x1f125c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F125Cu;
    {
        const bool branch_taken_0x1f125c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f125c) {
            ctx->pc = 0x1F1280u;
            return;
        }
    }
    ctx->pc = 0x1F1264u;
    // 0x1f1264: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1f1268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f126c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1270: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1274: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f1274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f1278: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1278u;
    {
        const bool branch_taken_0x1f1278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1278) {
            ctx->pc = 0x1F1290u;
            return;
        }
    }
    ctx->pc = 0x1F1280u;
}
