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

// Function: entry_003671f8
// Address: 0x3671f8 - 0x367234
void entry_003671f8_0x3671f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003671f8_0x3671f8");
#endif

    ctx->pc = 0x3671f8u;

    // 0x3671f8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3671f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3671fc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3671fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x367200: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x367200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x367204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x367204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367208: 0x0  nop
    ctx->pc = 0x367208u;
    // NOP
    // 0x36720c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36720cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367210: 0x0  nop
    ctx->pc = 0x367210u;
    // NOP
    // 0x367214: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x367214u;
    {
        const bool branch_taken_0x367214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367214) {
            ctx->pc = 0x367234u;
            return;
        }
    }
    ctx->pc = 0x36721Cu;
    // 0x36721c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367220: 0xc46011f8  lwc1        $f0, 0x11F8($v1)
    ctx->pc = 0x367220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367228: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x367228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x36722c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36722Cu;
    {
        const bool branch_taken_0x36722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36722c) {
            ctx->pc = 0x367260u;
            return;
        }
    }
    ctx->pc = 0x367234u;
}
