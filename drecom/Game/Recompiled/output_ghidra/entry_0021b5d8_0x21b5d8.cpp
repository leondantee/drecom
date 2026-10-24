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

// Function: entry_0021b5d8
// Address: 0x21b5d8 - 0x21b5fc
void entry_0021b5d8_0x21b5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b5d8_0x21b5d8");
#endif

    ctx->pc = 0x21b5d8u;

    // 0x21b5d8: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x21b5dc: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x21B5DCu;
    {
        const bool branch_taken_0x21b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b5dc) {
            ctx->pc = 0x21B31Cu;
            return;
        }
    }
    ctx->pc = 0x21B5E4u;
    // 0x21b5e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21b5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b5e8: 0x0  nop
    ctx->pc = 0x21b5e8u;
    // NOP
    // 0x21b5ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b5f0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21b5f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b5f4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x21B5F4u;
    {
        const bool branch_taken_0x21b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5f4) {
            ctx->pc = 0x21B8E0u;
            return;
        }
    }
    ctx->pc = 0x21B5FCu;
}
