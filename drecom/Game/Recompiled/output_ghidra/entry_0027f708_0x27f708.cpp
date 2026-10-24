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

// Function: entry_0027f708
// Address: 0x27f708 - 0x27f748
void entry_0027f708_0x27f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f708_0x27f708");
#endif

    ctx->pc = 0x27f708u;

    // 0x27f708: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x27f708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27f70c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27F70Cu;
    {
        const bool branch_taken_0x27f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f70c) {
            ctx->pc = 0x27F6D0u;
            return;
        }
    }
    ctx->pc = 0x27F714u;
    // 0x27f714: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x27f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x27f718: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f720: 0x0  nop
    ctx->pc = 0x27f720u;
    // NOP
    // 0x27f724: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27f724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f728: 0x3c02bd0e  lui         $v0, 0xBD0E
    ctx->pc = 0x27f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48398 << 16));
    // 0x27f72c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f734: 0x0  nop
    ctx->pc = 0x27f734u;
    // NOP
    // 0x27f738: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27f738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27f73c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f73cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f740: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F740u;
    {
        const bool branch_taken_0x27f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f740) {
            ctx->pc = 0x27F780u;
            return;
        }
    }
    ctx->pc = 0x27F748u;
}
