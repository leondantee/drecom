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

// Function: entry_0029bc10
// Address: 0x29bc10 - 0x29bc48
void entry_0029bc10_0x29bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bc10_0x29bc10");
#endif

    ctx->pc = 0x29bc10u;

    // 0x29bc10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bc14: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x29bc14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x29bc18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29bc1c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29bc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29bc20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29BC20u;
    {
        const bool branch_taken_0x29bc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc20) {
            ctx->pc = 0x29BC48u;
            return;
        }
    }
    ctx->pc = 0x29BC28u;
    // 0x29bc28: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x29bc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29bc2c: 0xc4c101a4  lwc1        $f1, 0x1A4($a2)
    ctx->pc = 0x29bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bc30: 0x3c034104  lui         $v1, 0x4104
    ctx->pc = 0x29bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16644 << 16));
    // 0x29bc34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29bc38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bc3c: 0x0  nop
    ctx->pc = 0x29bc3cu;
    // NOP
    // 0x29bc40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29bc40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29bc44: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x29bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
    ctx->pc = 0x29bc48u;
}
