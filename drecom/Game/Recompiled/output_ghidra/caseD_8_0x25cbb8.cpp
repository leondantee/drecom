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

// Function: caseD_8
// Address: 0x25cbb8 - 0x25cbe8
void caseD_8_0x25cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x25cbb8");
#endif

    ctx->pc = 0x25cbb8u;

    // 0x25cbb8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cbbc: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x25cbbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25cbc0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x25cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25cbc4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25cbc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CBC8u;
    {
        const bool branch_taken_0x25cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbc8) {
            ctx->pc = 0x25CBE8u;
            return;
        }
    }
    ctx->pc = 0x25CBD0u;
    // 0x25cbd0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25cbd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25cbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cbd8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cbdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cbdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25cbe0: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25cbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25cbe4: 0x0  nop
    ctx->pc = 0x25cbe4u;
    // NOP
    ctx->pc = 0x25cbe8u;
}
