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

// Function: entry_0017cf2c
// Address: 0x17cf2c - 0x17cf70
void entry_0017cf2c_0x17cf2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf2c_0x17cf2c");
#endif

    ctx->pc = 0x17cf2cu;

    // 0x17cf2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cf30: 0x942400c8  lhu         $a0, 0xC8($at)
    ctx->pc = 0x17cf30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17cf34: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x17cf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x17cf38: 0x30454000  andi        $a1, $v0, 0x4000
    ctx->pc = 0x17cf38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x17cf3c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CF3Cu;
    {
        const bool branch_taken_0x17cf3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cf3c) {
            ctx->pc = 0x17CF9Cu;
            return;
        }
    }
    ctx->pc = 0x17CF44u;
    // 0x17cf44: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17cf48: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17cf4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cf50: 0x938480a0  lbu         $a0, -0x7F60($gp)
    ctx->pc = 0x17cf50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cf54: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CF54u;
    {
        const bool branch_taken_0x17cf54 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x17cf54) {
            ctx->pc = 0x17CF70u;
            return;
        }
    }
    ctx->pc = 0x17CF5Cu;
    // 0x17cf5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17cf5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf60: 0x0  nop
    ctx->pc = 0x17cf60u;
    // NOP
    // 0x17cf64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cf68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CF68u;
    {
        const bool branch_taken_0x17cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cf68) {
            ctx->pc = 0x17CF8Cu;
            return;
        }
    }
    ctx->pc = 0x17CF70u;
}
