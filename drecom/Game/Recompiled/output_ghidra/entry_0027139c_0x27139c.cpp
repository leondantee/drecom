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

// Function: entry_0027139c
// Address: 0x27139c - 0x2713d8
void entry_0027139c_0x27139c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027139c_0x27139c");
#endif

    ctx->pc = 0x27139cu;

    // 0x27139c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2713a0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2713a0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2713a4: 0x3c024535  lui         $v0, 0x4535
    ctx->pc = 0x2713a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17717 << 16));
    // 0x2713a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2713a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2713ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2713acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2713b0: 0x0  nop
    ctx->pc = 0x2713b0u;
    // NOP
    // 0x2713b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2713b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2713b8: 0x0  nop
    ctx->pc = 0x2713b8u;
    // NOP
    // 0x2713bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2713BCu;
    {
        const bool branch_taken_0x2713bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2713bc) {
            ctx->pc = 0x2713D8u;
            return;
        }
    }
    ctx->pc = 0x2713C4u;
    // 0x2713c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2713c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2713c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2713cc: 0xac22fd60  sw          $v0, -0x2A0($at)
    ctx->pc = 0x2713ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x2713d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2713D0u;
    {
        const bool branch_taken_0x2713d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2713d0) {
            ctx->pc = 0x271408u;
            return;
        }
    }
    ctx->pc = 0x2713D8u;
}
