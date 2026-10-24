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

// Function: caseD_5
// Address: 0x153a5c - 0x153ae0
void caseD_5_0x153a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x153a5c");
#endif

    ctx->pc = 0x153a5cu;

    // 0x153a5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x153a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x153a60: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x153a64: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x153a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
    // 0x153a68: 0x3c054307  lui         $a1, 0x4307
    ctx->pc = 0x153a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17159 << 16));
    // 0x153a6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153a6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a70: 0x0  nop
    ctx->pc = 0x153a70u;
    // NOP
    // 0x153a74: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x153a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x153a78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a7c: 0x0  nop
    ctx->pc = 0x153a7cu;
    // NOP
    // 0x153a80: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x153a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x153a84: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x153a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x153a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a8c: 0x0  nop
    ctx->pc = 0x153a8cu;
    // NOP
    // 0x153a90: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x153a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x153a94: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153a98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a9c: 0x0  nop
    ctx->pc = 0x153a9cu;
    // NOP
    // 0x153aa0: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x153aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x153aa4: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x153aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x153aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x153aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x153aac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153ab0: 0x10640089  beq         $v1, $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x153AB0u;
    {
        const bool branch_taken_0x153ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x153ab0) {
            ctx->pc = 0x153CD8u;
            return;
        }
    }
    ctx->pc = 0x153AB8u;
    // 0x153ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153abc: 0x10650086  beq         $v1, $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x153ABCu;
    {
        const bool branch_taken_0x153abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x153abc) {
            ctx->pc = 0x153CD8u;
            return;
        }
    }
    ctx->pc = 0x153AC4u;
    // 0x153ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153ac8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153AC8u;
    {
        const bool branch_taken_0x153ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x153ac8) {
            ctx->pc = 0x153AE0u;
            return;
        }
    }
    ctx->pc = 0x153AD0u;
    // 0x153ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153AD0u;
    {
        const bool branch_taken_0x153ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ad0) {
            ctx->pc = 0x153AE0u;
            return;
        }
    }
    ctx->pc = 0x153AD8u;
    // 0x153ad8: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x153AD8u;
    {
        const bool branch_taken_0x153ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ad8) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153AE0u;
}
