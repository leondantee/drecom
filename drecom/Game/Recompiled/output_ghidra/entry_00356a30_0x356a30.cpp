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

// Function: entry_00356a30
// Address: 0x356a30 - 0x356a54
void entry_00356a30_0x356a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356a30_0x356a30");
#endif

    ctx->pc = 0x356a30u;

    // 0x356a30: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x356a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x356a34: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x356A34u;
    {
        const bool branch_taken_0x356a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a34) {
            ctx->pc = 0x3565D8u;
            return;
        }
    }
    ctx->pc = 0x356A3Cu;
    // 0x356a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356a40: 0x0  nop
    ctx->pc = 0x356a40u;
    // NOP
    // 0x356a44: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x356a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x356a48: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x356a48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356a4c: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x356A4Cu;
    {
        const bool branch_taken_0x356a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a4c) {
            ctx->pc = 0x356FB8u;
            return;
        }
    }
    ctx->pc = 0x356A54u;
}
