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

// Function: entry_0028ecb4
// Address: 0x28ecb4 - 0x28ed50
void entry_0028ecb4_0x28ecb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ecb4_0x28ecb4");
#endif

    switch (ctx->pc) {
        case 0x28ecd8u: goto label_28ecd8;
        default: break;
    }

    ctx->pc = 0x28ecb4u;

    // 0x28ecb4: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ecb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28ecb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28ecbc: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x28ECBCu;
    {
        const bool branch_taken_0x28ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ecbc) {
            ctx->pc = 0x28F03Cu;
            return;
        }
    }
    ctx->pc = 0x28ECC4u;
    // 0x28ecc4: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x28ecc8: 0x26050720  addiu       $a1, $s0, 0x720
    ctx->pc = 0x28ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x28eccc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x28ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28ecd0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28ECD0u;
    SET_GPR_U32(ctx, 31, 0x28ECD8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28ECD8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28ECD8u) { return; }
    ctx->pc = 0x28ECD8u;
label_28ecd8:
    // 0x28ecd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ecdc: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x28ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x28ece0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28ece4: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x28ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x28ece8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ece8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ecec: 0xac222840  sw          $v0, 0x2840($at)
    ctx->pc = 0x28ececu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622840u, _value); } while (0);
    // 0x28ecf0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ecf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ecf8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28ECF8u;
    {
        const bool branch_taken_0x28ecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ecf8) {
            ctx->pc = 0x28ED8Cu;
            return;
        }
    }
    ctx->pc = 0x28ED00u;
    // 0x28ed00: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28ed00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28ed04: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28ed08: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28ed08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28ed0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28ed10: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28ED10u;
    {
        const bool branch_taken_0x28ed10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed10) {
            ctx->pc = 0x28ED80u;
            return;
        }
    }
    ctx->pc = 0x28ED18u;
    // 0x28ed18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28ed1c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28ED1Cu;
    {
        const bool branch_taken_0x28ed1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed1c) {
            ctx->pc = 0x28ED74u;
            return;
        }
    }
    ctx->pc = 0x28ED24u;
    // 0x28ed24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ed28: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28ED28u;
    {
        const bool branch_taken_0x28ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed28) {
            ctx->pc = 0x28ED68u;
            return;
        }
    }
    ctx->pc = 0x28ED30u;
    // 0x28ed30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ed34: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28ED34u;
    {
        const bool branch_taken_0x28ed34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed34) {
            ctx->pc = 0x28ED5Cu;
            return;
        }
    }
    ctx->pc = 0x28ED3Cu;
    // 0x28ed3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28ED40u;
    {
        const bool branch_taken_0x28ed40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ed40) {
            ctx->pc = 0x28ED50u;
            return;
        }
    }
    ctx->pc = 0x28ED48u;
    // 0x28ed48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28ED48u;
    {
        const bool branch_taken_0x28ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed48) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28ED50u;
}
