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

// Function: entry_0025bbe0
// Address: 0x25bbe0 - 0x25bc10
void entry_0025bbe0_0x25bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bbe0_0x25bbe0");
#endif

    ctx->pc = 0x25bbe0u;

    // 0x25bbe0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bbe4: 0x946209e0  lhu         $v0, 0x9E0($v1)
    ctx->pc = 0x25bbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25bbe8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25bbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25bbec: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25bbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25bbf0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BBF0u;
    {
        const bool branch_taken_0x25bbf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbf0) {
            ctx->pc = 0x25BC10u;
            return;
        }
    }
    ctx->pc = 0x25BBF8u;
    // 0x25bbf8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25bbfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25bbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bc00: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25bc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25bc08: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25bc0c: 0x0  nop
    ctx->pc = 0x25bc0cu;
    // NOP
    ctx->pc = 0x25bc10u;
}
