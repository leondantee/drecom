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

// Function: entry_0025c250
// Address: 0x25c250 - 0x25c280
void entry_0025c250_0x25c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c250_0x25c250");
#endif

    ctx->pc = 0x25c250u;

    // 0x25c250: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c254: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x25c254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x25c258: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25c258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c25c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25c25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25c260: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C260u;
    {
        const bool branch_taken_0x25c260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c260) {
            ctx->pc = 0x25C280u;
            return;
        }
    }
    ctx->pc = 0x25C268u;
    // 0x25c268: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25c26c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25c26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c270: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25c278: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25c27c: 0x0  nop
    ctx->pc = 0x25c27cu;
    // NOP
    ctx->pc = 0x25c280u;
}
