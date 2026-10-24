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

// Function: caseD_3
// Address: 0x25ce2c - 0x25ce58
void caseD_3_0x25ce2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x25ce2c");
#endif

    ctx->pc = 0x25ce2cu;

    // 0x25ce2c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ce30: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x25ce30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x25ce34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25ce38: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25ce38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25ce3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25CE3Cu;
    {
        const bool branch_taken_0x25ce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce3c) {
            ctx->pc = 0x25CE58u;
            return;
        }
    }
    ctx->pc = 0x25CE44u;
    // 0x25ce44: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25ce48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ce48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ce4c: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ce50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ce50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25ce54: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25ce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    ctx->pc = 0x25ce58u;
}
