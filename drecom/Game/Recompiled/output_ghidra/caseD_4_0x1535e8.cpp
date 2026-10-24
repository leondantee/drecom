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

// Function: caseD_4
// Address: 0x1535e8 - 0x15366c
void caseD_4_0x1535e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1535e8");
#endif

    ctx->pc = 0x1535e8u;

    // 0x1535e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1535e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1535ec: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x1535ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1535f0: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x1535f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
    // 0x1535f4: 0x3c034307  lui         $v1, 0x4307
    ctx->pc = 0x1535f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17159 << 16));
    // 0x1535f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1535f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1535fc: 0x0  nop
    ctx->pc = 0x1535fcu;
    // NOP
    // 0x153600: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x153600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x153604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153608: 0x0  nop
    ctx->pc = 0x153608u;
    // NOP
    // 0x15360c: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x15360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x153610: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x153610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x153614: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153614u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153618: 0x0  nop
    ctx->pc = 0x153618u;
    // NOP
    // 0x15361c: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x15361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x153620: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153624: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153628: 0x0  nop
    ctx->pc = 0x153628u;
    // NOP
    // 0x15362c: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x15362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x153630: 0x920313a6  lbu         $v1, 0x13A6($s0)
    ctx->pc = 0x153630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x153634: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x153638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15363c: 0x10c40089  beq         $a2, $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x15363Cu;
    {
        const bool branch_taken_0x15363c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x15363c) {
            ctx->pc = 0x153864u;
            return;
        }
    }
    ctx->pc = 0x153644u;
    // 0x153644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153648: 0x10c50086  beq         $a2, $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x153648u;
    {
        const bool branch_taken_0x153648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x153648) {
            ctx->pc = 0x153864u;
            return;
        }
    }
    ctx->pc = 0x153650u;
    // 0x153650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153654: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x153654u;
    {
        const bool branch_taken_0x153654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x153654) {
            ctx->pc = 0x15366Cu;
            return;
        }
    }
    ctx->pc = 0x15365Cu;
    // 0x15365c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15365Cu;
    {
        const bool branch_taken_0x15365c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15365c) {
            ctx->pc = 0x15366Cu;
            return;
        }
    }
    ctx->pc = 0x153664u;
    // 0x153664: 0x10000380  b           . + 4 + (0x380 << 2)
    ctx->pc = 0x153664u;
    {
        const bool branch_taken_0x153664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153664) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x15366Cu;
}
