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

// Function: entry_00263180
// Address: 0x263180 - 0x2631b8
void entry_00263180_0x263180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263180_0x263180");
#endif

    ctx->pc = 0x263180u;

    // 0x263180: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x263180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263184: 0x0  nop
    ctx->pc = 0x263184u;
    // NOP
    // 0x263188: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x263188u;
    {
        const bool branch_taken_0x263188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263188) {
            ctx->pc = 0x263274u;
            return;
        }
    }
    ctx->pc = 0x263190u;
    // 0x263190: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x263190u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263194: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x263194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x263198: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x263198u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26319c: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26319Cu;
    {
        const bool branch_taken_0x26319c = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x26319c) {
            ctx->pc = 0x2631B8u;
            return;
        }
    }
    ctx->pc = 0x2631A4u;
    // 0x2631a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2631a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2631a8: 0x0  nop
    ctx->pc = 0x2631a8u;
    // NOP
    // 0x2631ac: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x2631acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x2631b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2631B0u;
    {
        const bool branch_taken_0x2631b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2631b0) {
            ctx->pc = 0x2631D4u;
            return;
        }
    }
    ctx->pc = 0x2631B8u;
}
