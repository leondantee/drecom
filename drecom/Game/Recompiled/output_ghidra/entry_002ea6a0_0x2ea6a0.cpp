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

// Function: entry_002ea6a0
// Address: 0x2ea6a0 - 0x2ea6c4
void entry_002ea6a0_0x2ea6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea6a0_0x2ea6a0");
#endif

    ctx->pc = 0x2ea6a0u;

    // 0x2ea6a0: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x2ea6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ea6a4: 0x1460ff17  bnez        $v1, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x2EA6A4u;
    {
        const bool branch_taken_0x2ea6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6a4) {
            ctx->pc = 0x2EA304u;
            return;
        }
    }
    ctx->pc = 0x2EA6ACu;
    // 0x2ea6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ea6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea6b0: 0x0  nop
    ctx->pc = 0x2ea6b0u;
    // NOP
    // 0x2ea6b4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea6b8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ea6b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea6bc: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2EA6BCu;
    {
        const bool branch_taken_0x2ea6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea6bc) {
            ctx->pc = 0x2EAB88u;
            return;
        }
    }
    ctx->pc = 0x2EA6C4u;
}
