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

// Function: entry_0017cf9c
// Address: 0x17cf9c - 0x17cfe0
void entry_0017cf9c_0x17cf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf9c_0x17cf9c");
#endif

    ctx->pc = 0x17cf9cu;

    // 0x17cf9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cfa0: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17cfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17cfa4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x17cfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cfa8: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x17cfac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CFACu;
    {
        const bool branch_taken_0x17cfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfac) {
            ctx->pc = 0x17D00Cu;
            return;
        }
    }
    ctx->pc = 0x17CFB4u;
    // 0x17cfb4: 0x3c04bc8e  lui         $a0, 0xBC8E
    ctx->pc = 0x17cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48270 << 16));
    // 0x17cfb8: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x17cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x17cfbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cfc0: 0x938380a0  lbu         $v1, -0x7F60($gp)
    ctx->pc = 0x17cfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cfc4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CFC4u;
    {
        const bool branch_taken_0x17cfc4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x17cfc4) {
            ctx->pc = 0x17CFE0u;
            return;
        }
    }
    ctx->pc = 0x17CFCCu;
    // 0x17cfcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cfd0: 0x0  nop
    ctx->pc = 0x17cfd0u;
    // NOP
    // 0x17cfd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cfd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cfd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CFD8u;
    {
        const bool branch_taken_0x17cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfd8) {
            ctx->pc = 0x17CFFCu;
            return;
        }
    }
    ctx->pc = 0x17CFE0u;
}
