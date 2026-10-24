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

// Function: entry_0017be9c
// Address: 0x17be9c - 0x17bf14
void entry_0017be9c_0x17be9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be9c_0x17be9c");
#endif

    switch (ctx->pc) {
        case 0x17bf00u: goto label_17bf00;
        default: break;
    }

    ctx->pc = 0x17be9cu;

    // 0x17be9c: 0x3c024874  lui         $v0, 0x4874
    ctx->pc = 0x17be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18548 << 16));
    // 0x17bea0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x17bea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bea8: 0x0  nop
    ctx->pc = 0x17bea8u;
    // NOP
    // 0x17beac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17beacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17beb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17beb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17beb4: 0x0  nop
    ctx->pc = 0x17beb4u;
    // NOP
    // 0x17beb8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17beb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17bebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17bebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bec0: 0x0  nop
    ctx->pc = 0x17bec0u;
    // NOP
    // 0x17bec4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17bec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x17bec8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17becc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17beccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bed0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bed4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17bed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bee0: 0x0  nop
    ctx->pc = 0x17bee0u;
    // NOP
    // 0x17bee4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17bee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17bee8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17beec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17bef0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bef4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17bef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bef8: 0xc040c80  jal         func_103200
    ctx->pc = 0x17BEF8u;
    SET_GPR_U32(ctx, 31, 0x17BF00u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17BF00u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BF00u) { return; }
    ctx->pc = 0x17BF00u;
label_17bf00:
    // 0x17bf00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bf04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bf08: 0x0  nop
    ctx->pc = 0x17bf08u;
    // NOP
    // 0x17bf0c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17bf10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17bf10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17bf14u;
}
