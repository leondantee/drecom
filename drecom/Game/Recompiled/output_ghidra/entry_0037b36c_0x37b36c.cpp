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

// Function: entry_0037b36c
// Address: 0x37b36c - 0x37b3c4
void entry_0037b36c_0x37b36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b36c_0x37b36c");
#endif

    ctx->pc = 0x37b36cu;

    // 0x37b36c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b370: 0x8c230a70  lw          $v1, 0xA70($at)
    ctx->pc = 0x37b370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b378: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b37c: 0xac230a70  sw          $v1, 0xA70($at)
    ctx->pc = 0x37b37cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0A70u, _value); } while (0);
    // 0x37b380: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b384: 0x8c230a70  lw          $v1, 0xA70($at)
    ctx->pc = 0x37b384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0A70u));
    // 0x37b388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b38c: 0x0  nop
    ctx->pc = 0x37b38cu;
    // NOP
    // 0x37b390: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37b390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37b394: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x37b394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x37b398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37b398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b39c: 0x0  nop
    ctx->pc = 0x37b39cu;
    // NOP
    // 0x37b3a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37b3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b3a4: 0x0  nop
    ctx->pc = 0x37b3a4u;
    // NOP
    // 0x37b3a8: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x37B3A8u;
    {
        const bool branch_taken_0x37b3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37b3a8) {
            ctx->pc = 0x37B46Cu;
            return;
        }
    }
    ctx->pc = 0x37B3B0u;
    // 0x37b3b0: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b3b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b3b8: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b3bc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x37B3BCu;
    {
        const bool branch_taken_0x37b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b3bc) {
            ctx->pc = 0x37B46Cu;
            return;
        }
    }
    ctx->pc = 0x37B3C4u;
}
