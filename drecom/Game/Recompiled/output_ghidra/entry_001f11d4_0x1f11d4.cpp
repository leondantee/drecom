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

// Function: entry_001f11d4
// Address: 0x1f11d4 - 0x1f1240
void entry_001f11d4_0x1f11d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f11d4_0x1f11d4");
#endif

    ctx->pc = 0x1f11d4u;

    // 0x1f11d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f11d8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f11dc: 0x3c0444af  lui         $a0, 0x44AF
    ctx->pc = 0x1f11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17583 << 16));
    // 0x1f11e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f11e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f11e4: 0x0  nop
    ctx->pc = 0x1f11e4u;
    // NOP
    // 0x1f11e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f11e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f11ec: 0x0  nop
    ctx->pc = 0x1f11ecu;
    // NOP
    // 0x1f11f0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1F11F0u;
    {
        const bool branch_taken_0x1f11f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f11f0) {
            ctx->pc = 0x1F1240u;
            return;
        }
    }
    ctx->pc = 0x1F11F8u;
    // 0x1f11f8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1f11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x1f11fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f11fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1200: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1204: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1208: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f120c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1210: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f1210u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f1214: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f1214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f1218: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f1218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f121c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F121Cu;
    {
        const bool branch_taken_0x1f121c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f121c) {
            ctx->pc = 0x1F1290u;
            return;
        }
    }
    ctx->pc = 0x1F1224u;
    // 0x1f1224: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1f1224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1f1228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f122c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1234: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f1234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f1238: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1238u;
    {
        const bool branch_taken_0x1f1238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1238) {
            ctx->pc = 0x1F1290u;
            return;
        }
    }
    ctx->pc = 0x1F1240u;
}
