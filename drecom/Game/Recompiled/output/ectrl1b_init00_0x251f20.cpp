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

// Function: ectrl1b_init00
// Address: 0x251f20 - 0x2520e4
void ectrl1b_init00_0x251f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1b_init00_0x251f20");
#endif

    switch (ctx->pc) {
        case 0x251f90u: goto label_251f90;
        case 0x251fd0u: goto label_251fd0;
        case 0x252010u: goto label_252010;
        case 0x252050u: goto label_252050;
        case 0x252090u: goto label_252090;
        default: break;
    }

    ctx->pc = 0x251f20u;

    // 0x251f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251f24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x251f28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x251f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x251f2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251f30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x251f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x251f34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x251f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x251f38: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x251F38u;
    {
        const bool branch_taken_0x251f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251f38) {
            ctx->pc = 0x252074u;
            goto label_252074;
        }
    }
    ctx->pc = 0x251F40u;
    // 0x251f40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x251f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251f44: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x251F44u;
    {
        const bool branch_taken_0x251f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251f44) {
            ctx->pc = 0x252034u;
            goto label_252034;
        }
    }
    ctx->pc = 0x251F4Cu;
    // 0x251f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x251f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251f50: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x251F50u;
    {
        const bool branch_taken_0x251f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251f50) {
            ctx->pc = 0x251FF4u;
            goto label_251ff4;
        }
    }
    ctx->pc = 0x251F58u;
    // 0x251f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x251f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251f5c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x251F5Cu;
    {
        const bool branch_taken_0x251f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251f5c) {
            ctx->pc = 0x251FB4u;
            goto label_251fb4;
        }
    }
    ctx->pc = 0x251F64u;
    // 0x251f64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251F64u;
    {
        const bool branch_taken_0x251f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f64) {
            ctx->pc = 0x251F74u;
            goto label_251f74;
        }
    }
    ctx->pc = 0x251F6Cu;
    // 0x251f6c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x251F6Cu;
    {
        const bool branch_taken_0x251f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f6c) {
            ctx->pc = 0x2520B4u;
            goto label_2520b4;
        }
    }
    ctx->pc = 0x251F74u;
label_251f74:
    // 0x251f74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x251f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x251f78: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x251f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x251f7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x251f80: 0x2445b430  addiu       $a1, $v0, -0x4BD0
    ctx->pc = 0x251f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947888));
    // 0x251f84: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x251f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x251f88: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x251F88u;
    SET_GPR_U32(ctx, 31, 0x251F90u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x251F90u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x251F90u) { return; }
    ctx->pc = 0x251F90u;
label_251f90:
    // 0x251f90: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x251f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x251f94: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x251f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x251f98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251f9c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x251f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x251fa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x251fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fa8: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x251fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x251fac: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x251FACu;
    {
        const bool branch_taken_0x251fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fac) {
            ctx->pc = 0x2520C8u;
            goto label_2520c8;
        }
    }
    ctx->pc = 0x251FB4u;
label_251fb4:
    // 0x251fb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x251fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x251fb8: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x251fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x251fbc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x251fc0: 0x2445b480  addiu       $a1, $v0, -0x4B80
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947968));
    // 0x251fc4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x251fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x251fc8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x251FC8u;
    SET_GPR_U32(ctx, 31, 0x251FD0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x251FD0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x251FD0u) { return; }
    ctx->pc = 0x251FD0u;
label_251fd0:
    // 0x251fd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x251fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x251fd4: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x251fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x251fd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fdc: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x251fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x251fe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x251fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251fe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251fe8: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x251fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x251fec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x251FECu;
    {
        const bool branch_taken_0x251fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fec) {
            ctx->pc = 0x2520C8u;
            goto label_2520c8;
        }
    }
    ctx->pc = 0x251FF4u;
label_251ff4:
    // 0x251ff4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x251ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x251ff8: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x251ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x251ffc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x252000: 0x2445b4d0  addiu       $a1, $v0, -0x4B30
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948048));
    // 0x252004: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x252004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x252008: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x252008u;
    SET_GPR_U32(ctx, 31, 0x252010u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x252010u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252010u) { return; }
    ctx->pc = 0x252010u;
label_252010:
    // 0x252010: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x252010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x252014: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x252018: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25201c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x25201cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x252020: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x252020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252024: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252028: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x252028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x25202c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25202Cu;
    {
        const bool branch_taken_0x25202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25202c) {
            ctx->pc = 0x2520C8u;
            goto label_2520c8;
        }
    }
    ctx->pc = 0x252034u;
label_252034:
    // 0x252034: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x252038: 0x2444dc90  addiu       $a0, $v0, -0x2370
    ctx->pc = 0x252038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958224));
    // 0x25203c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x252040: 0x2445b520  addiu       $a1, $v0, -0x4AE0
    ctx->pc = 0x252040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948128));
    // 0x252044: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x252044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x252048: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x252048u;
    SET_GPR_U32(ctx, 31, 0x252050u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x252050u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252050u) { return; }
    ctx->pc = 0x252050u;
label_252050:
    // 0x252050: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x252050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x252054: 0x2464dc90  addiu       $a0, $v1, -0x2370
    ctx->pc = 0x252054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
    // 0x252058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25205c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x25205cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x252060: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x252060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252068: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x252068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x25206c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25206Cu;
    {
        const bool branch_taken_0x25206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25206c) {
            ctx->pc = 0x2520C8u;
            goto label_2520c8;
        }
    }
    ctx->pc = 0x252074u;
label_252074:
    // 0x252074: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x252078: 0x2444dc40  addiu       $a0, $v0, -0x23C0
    ctx->pc = 0x252078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x25207c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x252080: 0x2445b570  addiu       $a1, $v0, -0x4A90
    ctx->pc = 0x252080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948208));
    // 0x252084: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x252084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x252088: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x252088u;
    SET_GPR_U32(ctx, 31, 0x252090u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x252090u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252090u) { return; }
    ctx->pc = 0x252090u;
label_252090:
    // 0x252090: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x252090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x252094: 0x2464dc40  addiu       $a0, $v1, -0x23C0
    ctx->pc = 0x252094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x252098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x252098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25209c: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x25209cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x2520a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2520a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520a8: 0xa0640108  sb          $a0, 0x108($v1)
    ctx->pc = 0x2520a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2520ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2520ACu;
    {
        const bool branch_taken_0x2520ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520ac) {
            ctx->pc = 0x2520C8u;
            goto label_2520c8;
        }
    }
    ctx->pc = 0x2520B4u;
label_2520b4:
    // 0x2520b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2520b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2520bc: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2520bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2520c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2520c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2520c8:
    // 0x2520c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2520cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2520ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2520d0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2520d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2520d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2520d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2520d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2520d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2520dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2520DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2520DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2520E4u;
}
