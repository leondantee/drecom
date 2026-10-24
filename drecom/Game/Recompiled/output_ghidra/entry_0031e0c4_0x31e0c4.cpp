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

// Function: entry_0031e0c4
// Address: 0x31e0c4 - 0x31e120
void entry_0031e0c4_0x31e0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e0c4_0x31e0c4");
#endif

    ctx->pc = 0x31e0c4u;

    // 0x31e0c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0c8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31e0cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31e0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e0d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e0d4: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e0d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31e0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31e0dc: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31e0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x31e0e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0e4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31e0e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31e0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e0ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e0f0: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e0f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31e0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31e0f8: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31e0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x31e0fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e100: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31e100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31e104: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31e104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e10c: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x31e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31e110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31e114: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x31e114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x31e118: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31E118u;
    {
        const bool branch_taken_0x31e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e118) {
            ctx->pc = 0x31E1BCu;
            return;
        }
    }
    ctx->pc = 0x31E120u;
}
