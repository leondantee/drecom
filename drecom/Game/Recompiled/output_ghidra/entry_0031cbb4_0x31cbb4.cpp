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

// Function: entry_0031cbb4
// Address: 0x31cbb4 - 0x31cbec
void entry_0031cbb4_0x31cbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cbb4_0x31cbb4");
#endif

    ctx->pc = 0x31cbb4u;

    // 0x31cbb4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x31cbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x31cbb8: 0x34e20011  ori         $v0, $a3, 0x11
    ctx->pc = 0x31cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x31cbbc: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CBBCu;
    {
        const bool branch_taken_0x31cbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cbbc) {
            ctx->pc = 0x31CBECu;
            return;
        }
    }
    ctx->pc = 0x31CBC4u;
    // 0x31cbc4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cbc8: 0xc48112e0  lwc1        $f1, 0x12E0($a0)
    ctx->pc = 0x31cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cbcc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31cbd0: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x31cbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31cbd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31cbd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cbd8: 0x0  nop
    ctx->pc = 0x31cbd8u;
    // NOP
    // 0x31cbdc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31cbdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31cbe0: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cbe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31cbe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31cbe8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31cbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x31cbecu;
}
