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

// Function: caseD_f
// Address: 0x25ccb0 - 0x25cd20
void caseD_f_0x25ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x25ccb0");
#endif

    ctx->pc = 0x25ccb0u;

    // 0x25ccb0: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x25ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ccb4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ccb8: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x25ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ccbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ccbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25ccc0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25ccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25ccc4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ccc8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x25ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x25cccc: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x25ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ccd0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ccd4: 0xc48002e8  lwc1        $f0, 0x2E8($a0)
    ctx->pc = 0x25ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ccd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ccd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25ccdc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x25ccdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25cce0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x25cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x25cce4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25cce4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25cce8: 0x0  nop
    ctx->pc = 0x25cce8u;
    // NOP
    // 0x25ccec: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x25ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x25ccf0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ccf4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25ccf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25ccf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25ccfc: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x25ccfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25cd00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CD00u;
    {
        const bool branch_taken_0x25cd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cd00) {
            ctx->pc = 0x25CD20u;
            return;
        }
    }
    ctx->pc = 0x25CD08u;
    // 0x25cd08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25cd0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25cd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25cd10: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x25cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cd14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25cd18: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25cd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25cd1c: 0x0  nop
    ctx->pc = 0x25cd1cu;
    // NOP
    ctx->pc = 0x25cd20u;
}
