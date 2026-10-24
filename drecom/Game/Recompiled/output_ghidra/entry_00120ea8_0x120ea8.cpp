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

// Function: entry_00120ea8
// Address: 0x120ea8 - 0x120f94
void entry_00120ea8_0x120ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ea8_0x120ea8");
#endif

    ctx->pc = 0x120ea8u;

    // 0x120ea8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x120ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120eac: 0x944611f4  lhu         $a2, 0x11F4($v0)
    ctx->pc = 0x120eacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x120eb0: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x120eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x120eb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120eb8: 0x14a4006f  bne         $a1, $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x120EB8u;
    {
        const bool branch_taken_0x120eb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x120eb8) {
            ctx->pc = 0x121078u;
            return;
        }
    }
    ctx->pc = 0x120EC0u;
    // 0x120ec0: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x120ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120ec4: 0x3c054006  lui         $a1, 0x4006
    ctx->pc = 0x120ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16390 << 16));
    // 0x120ec8: 0x34a40a92  ori         $a0, $a1, 0xA92
    ctx->pc = 0x120ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x120ecc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x120eccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120ed0: 0x0  nop
    ctx->pc = 0x120ed0u;
    // NOP
    // 0x120ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x120ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120ed8: 0x0  nop
    ctx->pc = 0x120ed8u;
    // NOP
    // 0x120edc: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x120EDCu;
    {
        const bool branch_taken_0x120edc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120edc) {
            ctx->pc = 0x121078u;
            return;
        }
    }
    ctx->pc = 0x120EE4u;
    // 0x120ee4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120ee8: 0x948411f6  lhu         $a0, 0x11F6($a0)
    ctx->pc = 0x120ee8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x120eec: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x120eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x120ef0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x120ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x120ef4: 0x10c30047  beq         $a2, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x120EF4u;
    {
        const bool branch_taken_0x120ef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120ef4) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120EFCu;
    // 0x120efc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x120efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120f00: 0x10c30044  beq         $a2, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x120F00u;
    {
        const bool branch_taken_0x120f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f00) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F08u;
    // 0x120f08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x120f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120f0c: 0x10c40041  beq         $a2, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x120F0Cu;
    {
        const bool branch_taken_0x120f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x120f0c) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F14u;
    // 0x120f14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x120f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x120f18: 0x10c5003e  beq         $a2, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x120F18u;
    {
        const bool branch_taken_0x120f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x120f18) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F20u;
    // 0x120f20: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x120f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x120f24: 0x10c3003b  beq         $a2, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x120F24u;
    {
        const bool branch_taken_0x120f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f24) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F2Cu;
    // 0x120f2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x120f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120f30: 0x10c30038  beq         $a2, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x120F30u;
    {
        const bool branch_taken_0x120f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f30) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F38u;
    // 0x120f38: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x120f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x120f3c: 0x10c40035  beq         $a2, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x120F3Cu;
    {
        const bool branch_taken_0x120f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x120f3c) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F44u;
    // 0x120f44: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x120f48: 0x10c30032  beq         $a2, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x120F48u;
    {
        const bool branch_taken_0x120f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f48) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F50u;
    // 0x120f50: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x120f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x120f54: 0x10c3002f  beq         $a2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x120F54u;
    {
        const bool branch_taken_0x120f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f54) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F5Cu;
    // 0x120f5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x120f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x120f60: 0x10c4002c  beq         $a2, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x120F60u;
    {
        const bool branch_taken_0x120f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x120f60) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F68u;
    // 0x120f68: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x120f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x120f6c: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x120F6Cu;
    {
        const bool branch_taken_0x120f6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f6c) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F74u;
    // 0x120f74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x120f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x120f78: 0x10c30026  beq         $a2, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f78) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F80u;
    // 0x120f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120f84: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120F84u;
    {
        const bool branch_taken_0x120f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120f84) {
            ctx->pc = 0x120F94u;
            return;
        }
    }
    ctx->pc = 0x120F8Cu;
    // 0x120f8c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x120F8Cu;
    {
        const bool branch_taken_0x120f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f8c) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120F94u;
}
