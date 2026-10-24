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

// Function: entry_001fc8f0
// Address: 0x1fc8f0 - 0x1fc930
void entry_001fc8f0_0x1fc8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc8f0_0x1fc8f0");
#endif

    ctx->pc = 0x1fc8f0u;

    // 0x1fc8f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc8f4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc8f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc8f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc8fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc8fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc900: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FC900u;
    {
        const bool branch_taken_0x1fc900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc900) {
            ctx->pc = 0x1FC8B4u;
            return;
        }
    }
    ctx->pc = 0x1FC908u;
    // 0x1fc908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc90c: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x1fc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x1fc910: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1fc910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x1fc914: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fc914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc918: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc91c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fc91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fc920: 0xe4800338  swc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 824), bits); }
    // 0x1fc924: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc924u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc928: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FC928u;
    {
        const bool branch_taken_0x1fc928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc928) {
            ctx->pc = 0x1FC968u;
            return;
        }
    }
    ctx->pc = 0x1FC930u;
}
