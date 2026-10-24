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

// Function: entry_0036bd44
// Address: 0x36bd44 - 0x36bdc8
void entry_0036bd44_0x36bd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bd44_0x36bd44");
#endif

    ctx->pc = 0x36bd44u;

    // 0x36bd44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bd48: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36bd4c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x36bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x36bd50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36bd54: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36bd58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bd5c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36bd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bd60: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x36bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x36bd64: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x36BD64u;
    {
        const bool branch_taken_0x36bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bd64) {
            ctx->pc = 0x36BE18u;
            return;
        }
    }
    ctx->pc = 0x36BD6Cu;
    // 0x36bd6c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x36bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36bd70: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x36BD70u;
    {
        const bool branch_taken_0x36bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bd70) {
            ctx->pc = 0x36BE18u;
            return;
        }
    }
    ctx->pc = 0x36BD78u;
    // 0x36bd78: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x36bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x36bd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bd80: 0x0  nop
    ctx->pc = 0x36bd80u;
    // NOP
    // 0x36bd84: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36bd88: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36bd8c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36bd90: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x36bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36bd94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36bd98: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36BD98u;
    {
        const bool branch_taken_0x36bd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36bd98) {
            ctx->pc = 0x36BE00u;
            return;
        }
    }
    ctx->pc = 0x36BDA0u;
    // 0x36bda0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bda4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36BDA4u;
    {
        const bool branch_taken_0x36bda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36bda4) {
            ctx->pc = 0x36BDE4u;
            return;
        }
    }
    ctx->pc = 0x36BDACu;
    // 0x36bdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bdb0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36BDB0u;
    {
        const bool branch_taken_0x36bdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36bdb0) {
            ctx->pc = 0x36BDC8u;
            return;
        }
    }
    ctx->pc = 0x36BDB8u;
    // 0x36bdb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BDB8u;
    {
        const bool branch_taken_0x36bdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bdb8) {
            ctx->pc = 0x36BDC8u;
            return;
        }
    }
    ctx->pc = 0x36BDC0u;
    // 0x36bdc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36BDC0u;
    {
        const bool branch_taken_0x36bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bdc0) {
            ctx->pc = 0x36BE18u;
            return;
        }
    }
    ctx->pc = 0x36BDC8u;
}
