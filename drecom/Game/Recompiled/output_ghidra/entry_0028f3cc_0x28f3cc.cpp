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

// Function: entry_0028f3cc
// Address: 0x28f3cc - 0x28f418
void entry_0028f3cc_0x28f3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f3cc_0x28f3cc");
#endif

    ctx->pc = 0x28f3ccu;

    // 0x28f3cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f3d0: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f3d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f3d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28f3dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F3DCu;
    {
        const bool branch_taken_0x28f3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f3dc) {
            ctx->pc = 0x28F418u;
            return;
        }
    }
    ctx->pc = 0x28F3E4u;
    // 0x28f3e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f3e8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f3ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f3f0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f3f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F3F4u;
    {
        const bool branch_taken_0x28f3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f3f4) {
            ctx->pc = 0x28F418u;
            return;
        }
    }
    ctx->pc = 0x28F3FCu;
    // 0x28f3fc: 0xc6015dbc  lwc1        $f1, 0x5DBC($s0)
    ctx->pc = 0x28f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f400: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f404: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f40c: 0x0  nop
    ctx->pc = 0x28f40cu;
    // NOP
    // 0x28f410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28f410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f414: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28f414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    ctx->pc = 0x28f418u;
}
