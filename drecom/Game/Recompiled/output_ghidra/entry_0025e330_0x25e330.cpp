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

// Function: entry_0025e330
// Address: 0x25e330 - 0x25e358
void entry_0025e330_0x25e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e330_0x25e330");
#endif

    ctx->pc = 0x25e330u;

    // 0x25e330: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e334: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e338: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e33c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E33Cu;
    {
        const bool branch_taken_0x25e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e33c) {
            ctx->pc = 0x25E358u;
            return;
        }
    }
    ctx->pc = 0x25E344u;
    // 0x25e344: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25e348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25e348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e34c: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x25e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e350: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e354: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    ctx->pc = 0x25e358u;
}
