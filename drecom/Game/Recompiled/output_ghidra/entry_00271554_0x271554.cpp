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

// Function: entry_00271554
// Address: 0x271554 - 0x271594
void entry_00271554_0x271554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271554_0x271554");
#endif

    ctx->pc = 0x271554u;

    // 0x271554: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x271554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271558: 0x3c034596  lui         $v1, 0x4596
    ctx->pc = 0x271558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17814 << 16));
    // 0x27155c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27155cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271560: 0x0  nop
    ctx->pc = 0x271560u;
    // NOP
    // 0x271564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271568: 0x0  nop
    ctx->pc = 0x271568u;
    // NOP
    // 0x27156c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x27156Cu;
    {
        const bool branch_taken_0x27156c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27156c) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x271574u;
    // 0x271574: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271578: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27157c: 0xac23fd60  sw          $v1, -0x2A0($at)
    ctx->pc = 0x27157cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD60u, _value); } while (0);
    // 0x271580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271584: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x271584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271588: 0xac23fd70  sw          $v1, -0x290($at)
    ctx->pc = 0x271588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x27158c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27158Cu;
    {
        const bool branch_taken_0x27158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27158c) {
            ctx->pc = 0x271650u;
            return;
        }
    }
    ctx->pc = 0x271594u;
}
