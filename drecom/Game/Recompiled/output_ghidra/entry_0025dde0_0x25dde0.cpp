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

// Function: entry_0025dde0
// Address: 0x25dde0 - 0x25de20
void entry_0025dde0_0x25dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dde0_0x25dde0");
#endif

    ctx->pc = 0x25dde0u;

    // 0x25dde0: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25dde0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25dde4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x25dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25dde8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x25dde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25ddec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25DDECu;
    {
        const bool branch_taken_0x25ddec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddec) {
            ctx->pc = 0x25DE20u;
            return;
        }
    }
    ctx->pc = 0x25DDF4u;
    // 0x25ddf4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25ddf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ddf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ddfc: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25de00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25de04: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25de04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x25de08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25de08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25de0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25de0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25de10: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x25de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25de14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25de18: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x25de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x25de1c: 0x0  nop
    ctx->pc = 0x25de1cu;
    // NOP
    ctx->pc = 0x25de20u;
}
