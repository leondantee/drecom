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

// Function: entry_0012506c
// Address: 0x12506c - 0x1250c8
void entry_0012506c_0x12506c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012506c_0x12506c");
#endif

    ctx->pc = 0x12506cu;

    // 0x12506c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12506cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125070: 0x0  nop
    ctx->pc = 0x125070u;
    // NOP
    // 0x125074: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x125074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x125078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12507c: 0x0  nop
    ctx->pc = 0x12507cu;
    // NOP
    // 0x125080: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x125080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x125084: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125088: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x125088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12508c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x125090: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x125090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x125094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125098: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x125098u;
    {
        const bool branch_taken_0x125098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125098) {
            ctx->pc = 0x125188u;
            return;
        }
    }
    ctx->pc = 0x1250A0u;
    // 0x1250a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1250a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1250a4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1250A4u;
    {
        const bool branch_taken_0x1250a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1250a4) {
            ctx->pc = 0x125148u;
            return;
        }
    }
    ctx->pc = 0x1250ACu;
    // 0x1250ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1250acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1250b0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1250B0u;
    {
        const bool branch_taken_0x1250b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1250b0) {
            ctx->pc = 0x125108u;
            return;
        }
    }
    ctx->pc = 0x1250B8u;
    // 0x1250b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1250B8u;
    {
        const bool branch_taken_0x1250b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250b8) {
            ctx->pc = 0x1250C8u;
            return;
        }
    }
    ctx->pc = 0x1250C0u;
    // 0x1250c0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1250C0u;
    {
        const bool branch_taken_0x1250c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250c0) {
            ctx->pc = 0x1250C8u;
            return;
        }
    }
    ctx->pc = 0x1250C8u;
}
