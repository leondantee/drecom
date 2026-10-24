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

// Function: entry_0029c144
// Address: 0x29c144 - 0x29c17c
void entry_0029c144_0x29c144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c144_0x29c144");
#endif

    ctx->pc = 0x29c144u;

    // 0x29c144: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29c148: 0x94230080  lhu         $v1, 0x80($at)
    ctx->pc = 0x29c148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x29c14c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29c14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29c150: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x29c150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29c154: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x29C154u;
    {
        const bool branch_taken_0x29c154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c154) {
            ctx->pc = 0x29C3C8u;
            return;
        }
    }
    ctx->pc = 0x29C15Cu;
    // 0x29c15c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c160: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C160u;
    {
        const bool branch_taken_0x29c160 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c160) {
            ctx->pc = 0x29C17Cu;
            return;
        }
    }
    ctx->pc = 0x29C168u;
    // 0x29c168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c16c: 0x0  nop
    ctx->pc = 0x29c16cu;
    // NOP
    // 0x29c170: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C174u;
    {
        const bool branch_taken_0x29c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c174) {
            ctx->pc = 0x29C198u;
            return;
        }
    }
    ctx->pc = 0x29C17Cu;
}
