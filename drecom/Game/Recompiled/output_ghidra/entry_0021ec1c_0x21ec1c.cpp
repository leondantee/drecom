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

// Function: entry_0021ec1c
// Address: 0x21ec1c - 0x21ec4c
void entry_0021ec1c_0x21ec1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ec1c_0x21ec1c");
#endif

    ctx->pc = 0x21ec1cu;

    // 0x21ec1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec20: 0x8c65012c  lw          $a1, 0x12C($v1)
    ctx->pc = 0x21ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21ec24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ec28: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21EC28u;
    {
        const bool branch_taken_0x21ec28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ec28) {
            ctx->pc = 0x21EC4Cu;
            return;
        }
    }
    ctx->pc = 0x21EC30u;
    // 0x21ec30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec34: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21ec38: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21ec38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21ec3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ec3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ec40: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x21ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ec44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21ec44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21ec48: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x21ec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    ctx->pc = 0x21ec4cu;
}
