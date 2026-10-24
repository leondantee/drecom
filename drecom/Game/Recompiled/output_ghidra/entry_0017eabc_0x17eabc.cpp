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

// Function: entry_0017eabc
// Address: 0x17eabc - 0x17eb0c
void entry_0017eabc_0x17eabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eabc_0x17eabc");
#endif

    ctx->pc = 0x17eabcu;

    // 0x17eabc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eac0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eac4: 0x8c22f130  lw          $v0, -0xED0($at)
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F130u));
    // 0x17eac8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17eacc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17ead0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17ead4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ead8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17ead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17eadc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eae0: 0x8c22f130  lw          $v0, -0xED0($at)
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F130u));
    // 0x17eae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17eae8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eaec: 0xac22f130  sw          $v0, -0xED0($at)
    ctx->pc = 0x17eaecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47F130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F130u, _value); } while (0);
    // 0x17eaf0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eaf4: 0x8c23f130  lw          $v1, -0xED0($at)
    ctx->pc = 0x17eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F130u));
    // 0x17eaf8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17eafc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EAFCu;
    {
        const bool branch_taken_0x17eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17eafc) {
            ctx->pc = 0x17EB0Cu;
            return;
        }
    }
    ctx->pc = 0x17EB04u;
    // 0x17eb04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17eb08: 0xac20f130  sw          $zero, -0xED0($at)
    ctx->pc = 0x17eb08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F130u, _value); } while (0);
    ctx->pc = 0x17eb0cu;
}
