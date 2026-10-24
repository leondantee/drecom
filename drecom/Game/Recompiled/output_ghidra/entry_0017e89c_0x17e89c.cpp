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

// Function: entry_0017e89c
// Address: 0x17e89c - 0x17e8ec
void entry_0017e89c_0x17e89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e89c_0x17e89c");
#endif

    ctx->pc = 0x17e89cu;

    // 0x17e89c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e8a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8a4: 0x8c22f128  lw          $v0, -0xED8($at)
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F128u));
    // 0x17e8a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e8ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e8b0: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17e8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e8b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17e8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e8bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8c0: 0x8c22f128  lw          $v0, -0xED8($at)
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F128u));
    // 0x17e8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e8c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8cc: 0xac22f128  sw          $v0, -0xED8($at)
    ctx->pc = 0x17e8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47F128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F128u, _value); } while (0);
    // 0x17e8d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8d4: 0x8c23f128  lw          $v1, -0xED8($at)
    ctx->pc = 0x17e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F128u));
    // 0x17e8d8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17e8dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E8DCu;
    {
        const bool branch_taken_0x17e8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e8dc) {
            ctx->pc = 0x17E8ECu;
            return;
        }
    }
    ctx->pc = 0x17E8E4u;
    // 0x17e8e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17e8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17e8e8: 0xac20f128  sw          $zero, -0xED8($at)
    ctx->pc = 0x17e8e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F128u, _value); } while (0);
    ctx->pc = 0x17e8ecu;
}
