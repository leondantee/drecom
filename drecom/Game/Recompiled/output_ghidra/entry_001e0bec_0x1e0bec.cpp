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

// Function: entry_001e0bec
// Address: 0x1e0bec - 0x1e0c18
void entry_001e0bec_0x1e0bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0bec_0x1e0bec");
#endif

    ctx->pc = 0x1e0becu;

    // 0x1e0bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0bf0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0bf4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0bf8: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x1e0bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1e0bfc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0BFCu;
    {
        const bool branch_taken_0x1e0bfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0bfc) {
            ctx->pc = 0x1E0C18u;
            return;
        }
    }
    ctx->pc = 0x1E0C04u;
    // 0x1e0c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c08: 0x0  nop
    ctx->pc = 0x1e0c08u;
    // NOP
    // 0x1e0c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0c10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0C10u;
    {
        const bool branch_taken_0x1e0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c10) {
            ctx->pc = 0x1E0C34u;
            return;
        }
    }
    ctx->pc = 0x1E0C18u;
}
