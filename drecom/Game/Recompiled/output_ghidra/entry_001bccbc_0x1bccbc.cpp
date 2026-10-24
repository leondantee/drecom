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

// Function: entry_001bccbc
// Address: 0x1bccbc - 0x1bcd44
void entry_001bccbc_0x1bccbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bccbc_0x1bccbc");
#endif

    switch (ctx->pc) {
        case 0x1bccc8u: goto label_1bccc8;
        default: break;
    }

    ctx->pc = 0x1bccbcu;

    // 0x1bccbc: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x1bccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1bccc0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BCCC0u;
    SET_GPR_U32(ctx, 31, 0x1BCCC8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BCCC0u, 0x1BCCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCC8u;
label_1bccc8:
    // 0x1bccc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bccc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcccc: 0x10800117  beqz        $a0, . + 4 + (0x117 << 2)
    ctx->pc = 0x1BCCCCu;
    {
        const bool branch_taken_0x1bcccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcccc) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCCD4u;
    // 0x1bccd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bccd8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bccdc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1bcce0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1bcce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1bcce4: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x1BCCE4u;
    {
        const bool branch_taken_0x1bcce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcce4) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCCECu;
    // 0x1bccec: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bccecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bccf0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1bccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bccf4: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
    // 0x1bccf8: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1bccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1bccfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bcd00: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bcd00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bcd04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcd08: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bcd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bcd0c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1bcd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bcd10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bcd14: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCD14u;
    {
        const bool branch_taken_0x1bcd14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bcd14) {
            ctx->pc = 0x1BCD44u;
            return;
        }
    }
    ctx->pc = 0x1BCD1Cu;
    // 0x1bcd1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcd20: 0x10c50008  beq         $a2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCD20u;
    {
        const bool branch_taken_0x1bcd20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bcd20) {
            ctx->pc = 0x1BCD44u;
            return;
        }
    }
    ctx->pc = 0x1BCD28u;
    // 0x1bcd28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bcd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcd2c: 0x10c400ff  beq         $a2, $a0, . + 4 + (0xFF << 2)
    ctx->pc = 0x1BCD2Cu;
    {
        const bool branch_taken_0x1bcd2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bcd2c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCD34u;
    // 0x1bcd34: 0x10c000fd  beqz        $a2, . + 4 + (0xFD << 2)
    ctx->pc = 0x1BCD34u;
    {
        const bool branch_taken_0x1bcd34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd34) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCD3Cu;
    // 0x1bcd3c: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1BCD3Cu;
    {
        const bool branch_taken_0x1bcd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd3c) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCD44u;
}
