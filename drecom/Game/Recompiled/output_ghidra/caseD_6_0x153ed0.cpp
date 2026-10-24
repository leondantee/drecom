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

// Function: caseD_6
// Address: 0x153ed0 - 0x153f54
void caseD_6_0x153ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x153ed0");
#endif

    ctx->pc = 0x153ed0u;

    // 0x153ed0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x153ed4: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x153ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x153ed8: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x153ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
    // 0x153edc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x153edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x153ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ee4: 0x0  nop
    ctx->pc = 0x153ee4u;
    // NOP
    // 0x153ee8: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x153ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x153eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ef0: 0x0  nop
    ctx->pc = 0x153ef0u;
    // NOP
    // 0x153ef4: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x153ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x153ef8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x153ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x153efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f00: 0x0  nop
    ctx->pc = 0x153f00u;
    // NOP
    // 0x153f04: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x153f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x153f08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153f0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f10: 0x0  nop
    ctx->pc = 0x153f10u;
    // NOP
    // 0x153f14: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x153f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x153f18: 0x920313a6  lbu         $v1, 0x13A6($s0)
    ctx->pc = 0x153f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x153f1c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x153f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x153f20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153f24: 0x10a40089  beq         $a1, $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x153F24u;
    {
        const bool branch_taken_0x153f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x153f24) {
            ctx->pc = 0x15414Cu;
            return;
        }
    }
    ctx->pc = 0x153F2Cu;
    // 0x153f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153f30: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x153F30u;
    {
        const bool branch_taken_0x153f30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x153f30) {
            ctx->pc = 0x15414Cu;
            return;
        }
    }
    ctx->pc = 0x153F38u;
    // 0x153f38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x153f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153f3c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153F3Cu;
    {
        const bool branch_taken_0x153f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x153f3c) {
            ctx->pc = 0x153F54u;
            return;
        }
    }
    ctx->pc = 0x153F44u;
    // 0x153f44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153F44u;
    {
        const bool branch_taken_0x153f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f44) {
            ctx->pc = 0x153F54u;
            return;
        }
    }
    ctx->pc = 0x153F4Cu;
    // 0x153f4c: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x153F4Cu;
    {
        const bool branch_taken_0x153f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f4c) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153F54u;
}
