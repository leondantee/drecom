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

// Function: entry_00113ed4
// Address: 0x113ed4 - 0x113ee8
void entry_00113ed4_0x113ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ed4_0x113ed4");
#endif

    ctx->pc = 0x113ed4u;

    // 0x113ed4: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x113ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x113ed8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ed8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113edc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x113edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x113ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113EE0u;
    {
        const bool branch_taken_0x113ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EE0u;
        // 0x113ee4: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ee0) {
            ctx->pc = 0x113EECu;
            return;
        }
    }
    ctx->pc = 0x113EE8u;
}
